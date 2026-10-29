/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46F290
// Address: 0x000000000046F290

//----- (000000000046F290) ----------------------------------------------------
__int64 __fastcall sub_46F290(char *a1, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned int v4; // r13d
  __int64 v6; // rsi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  const char *v10; // rax
  int v11; // eax
  char *v12; // r12
  unsigned __int64 v13; // rbp
  int v15; // eax
  struct tm v16; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v4 = a3;
  v6 = HIDWORD(a3);
  v17 = __readfsqword(0x28u);
  if ( (a4 & 1) != 0 )
    LOBYTE(v8) = sub_481F60(&v16, v6);
  else
    LOBYTE(v8) = sub_481F10(&v16, v6);
  v9 = v8;
  if ( (_BYTE)v8 )
  {
    v10 = " ";
    if ( (a4 & 2) != 0 )
      v10 = "T";
    v11 = sub_485490(
            a1,
            a2,
            "%04u-%02u-%02u%s%02u:%02u:%02u",
            v16.tm_year + 1900,
            v16.tm_mon + 1,
            v16.tm_mday,
            v10,
            v16.tm_hour,
            v16.tm_min,
            v16.tm_sec);
    v12 = &a1[v11];
    v13 = a2 - v11;
    if ( (a4 & 4) != 0 )
    {
      v15 = sub_485490(v12, v13, ".%03u", v4 / 0x3E8);
      v12 += v15;
      v13 -= v15;
      if ( (~a4 & 3) != 0 )
        return v9;
    }
    else if ( (~(_BYTE)a4 & 3) != 0 )
    {
      return v9;
    }
    if ( v13 > 1 )
      *(_WORD *)v12 = 90;
  }
  return v9;
}
// 46F2CD: variable 'v8' is possibly undefined
