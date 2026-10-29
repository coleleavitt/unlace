/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477950
// Address: 0x0000000000477950

//----- (0000000000477950) ----------------------------------------------------
__int64 __fastcall sub_477950(const char *a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v6; // w24
  time_t v7; // x1
  unsigned int v9; // w23
  const char *v10; // x6
  int v11; // w0
  char *v12; // x22
  unsigned __int64 v13; // x21
  _BOOL4 v14; // w0
  int v16; // w0
  struct tm tp; // [xsp+50h] [xbp-40h] BYREF

  v6 = a3;
  v7 = HIDWORD(a3);
  if ( (a4 & 1) != 0 )
    v9 = (unsigned __int8)sub_492840(&tp, v7);
  else
    v9 = (unsigned __int8)sub_4927E0(&tp, v7);
  if ( v9 )
  {
    v10 = " ";
    if ( (a4 & 2) != 0 )
      v10 = "T";
    v11 = sub_49B748(
            a1,
            a2,
            "%04u-%02u-%02u%s%02u:%02u:%02u",
            tp.tm_year + 1900,
            tp.tm_mon + 1,
            tp.tm_mday,
            v10,
            tp.tm_hour,
            tp.tm_min,
            tp.tm_sec);
    v12 = (char *)&a1[v11];
    v13 = a2 - v11;
    if ( (a4 & 4) != 0 )
    {
      v16 = sub_49B748(v12, v13, ".%03u", v6 / 0x3E8);
      v12 += v16;
      v14 = (a4 & 3) == 3 && v13 - v16 > 1;
      if ( !v14 )
        return v9;
    }
    else
    {
      v14 = (a4 & 3) == 3 && v13 > 1;
      if ( (a4 & 3) != 3 || v13 <= 1 )
        return v9;
    }
    v9 = v14;
    *(_WORD *)v12 = 90;
  }
  return v9;
}
