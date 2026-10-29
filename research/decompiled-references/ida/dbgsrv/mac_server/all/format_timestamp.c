/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: format_timestamp
// Address: 0x000000010006AD40

//----- (000000010006AD40) ----------------------------------------------------
char __fastcall format_timestamp(char *a1, signed __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v5; // r12d
  time_t v7; // rsi
  char result; // al
  const char *v9; // r10
  int v10; // eax
  char *v11; // rbx
  unsigned __int64 v12; // r14
  int v13; // eax
  tm v14; // [rsp+8h] [rbp-68h] BYREF

  v5 = a3;
  v7 = HIDWORD(a3);
  if ( (a4 & 1) != 0 )
  {
    if ( !qgmtime(&v14, v7) )
      return 0;
  }
  else if ( !qlocaltime(&v14, v7) )
  {
    return 0;
  }
  v9 = "T";
  if ( (a4 & 2) == 0 )
    v9 = " ";
  v10 = qsnprintf(
          a1,
          a2,
          "%04u-%02u-%02u%s%02u:%02u:%02u",
          v14.tm_year + 1900,
          v14.tm_mon + 1,
          v14.tm_mday,
          v9,
          v14.tm_hour,
          v14.tm_min,
          v14.tm_sec);
  v11 = &a1[v10];
  v12 = a2 - v10;
  if ( (a4 & 4) != 0 )
  {
    v13 = qsnprintf(v11, v12, ".%03u", v5 / 0x3E8);
    v11 += v13;
    v12 -= v13;
  }
  result = 1;
  if ( (a4 & 2) != 0 && (a4 & 1) != 0 && v12 >= 2 )
    *(_WORD *)v11 = 90;
  return result;
}
