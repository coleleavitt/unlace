/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: format_timestamp
// Address: 0x00000000000AA030

//----- (00000000000AA030) ----------------------------------------------------
char __fastcall format_timestamp(char *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v5; // r15d
  time_t v7; // rsi
  char result; // al
  const char *v9; // rbx
  int v10; // eax
  char *v11; // r14
  unsigned __int64 v12; // r12
  int v13; // eax
  struct tm tp; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-38h]

  v5 = a3;
  v15 = __readfsqword(0x28u);
  v7 = HIDWORD(a3);
  if ( (a4 & 1) != 0 )
  {
    if ( !qgmtime(&tp, v7) )
      return 0;
  }
  else if ( !qlocaltime(&tp, v7) )
  {
    return 0;
  }
  v9 = " ";
  if ( (a4 & 2) != 0 )
    v9 = "T";
  v10 = qsnprintf(
          a1,
          a2,
          "%04u-%02u-%02u%s%02u:%02u:%02u",
          tp.tm_year + 1900,
          tp.tm_mon + 1,
          tp.tm_mday,
          v9,
          tp.tm_hour,
          tp.tm_min,
          tp.tm_sec);
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
