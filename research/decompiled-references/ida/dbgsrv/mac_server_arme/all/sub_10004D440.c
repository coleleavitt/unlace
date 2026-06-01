/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004D440
// Address: 0x000000010004D440

//----- (000000010004D440) ----------------------------------------------------
__int64 __fastcall sub_10004D440(__int64 a1)
{
  int v2; // w21
  void *v3; // x0
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  void *v10; // x1
  char v11; // w21
  void *v13; // [xsp+18h] [xbp-48h] BYREF
  __int64 v14; // [xsp+20h] [xbp-40h]
  __int64 v15; // [xsp+28h] [xbp-38h]
  void **v16; // [xsp+30h] [xbp-30h]

  v2 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v2 - 10) < 2 )
    goto LABEL_4;
  if ( v2 == 25 )
  {
    if ( (unsigned int)sub_10004B428((_OWORD *)(a1 + 2096), &v13, *(const char **)a1, *(_DWORD *)(a1 + 2088)) )
    {
      *(_BYTE *)(a1 + 29) = (_BYTE)v13;
      return 1;
    }
LABEL_12:
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    sub_10004C9E4(a1, (char **)&v13, v4, v5, v6, v7, v8, v9);
    if ( qword_1000A5878 && *(_BYTE *)(qword_1000A5878 + 184) == 1 )
      sub_100000B44();
    if ( v13 )
    {
      v14 = 0;
      qfree(v13);
    }
    return 0;
  }
  if ( v2 == 18 )
  {
LABEL_4:
    v3 = (void *)open_linput(*(const char **)a1, 0);
    v13 = v3;
    if ( v3 )
    {
      v10 = v3;
      v16 = &v13;
      if ( v2 == 11 )
      {
        v11 = sub_10004BE14(a1 + 28, (__int64)v3);
        v10 = v13;
      }
      else
      {
        v11 = 0;
      }
      close_linput(v10);
      if ( (v11 & 1) != 0 )
        return 1;
    }
    goto LABEL_12;
  }
  return 0;
}
// 10004D51C: variable 'v4' is possibly undefined
// 10004D51C: variable 'v5' is possibly undefined
// 10004D51C: variable 'v6' is possibly undefined
// 10004D51C: variable 'v7' is possibly undefined
// 10004D51C: variable 'v8' is possibly undefined
// 10004D51C: variable 'v9' is possibly undefined
// 1000A5878: using guessed type __int64 qword_1000A5878;
