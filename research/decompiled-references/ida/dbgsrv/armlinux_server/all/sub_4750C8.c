/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4750C8
// Address: 0x00000000004750C8

//----- (00000000004750C8) ----------------------------------------------------
__int64 __fastcall sub_4750C8(_DWORD *a1, int a2, __int64 a3)
{
  int v4; // w1
  int v6; // w1
  __int64 (*v7)(); // x3
  __int64 (*v8)(void); // x3
  int v9; // w0
  int v10; // w0
  __int64 v11; // [xsp+18h] [xbp-8h]
  __int64 v12; // [xsp+18h] [xbp-8h]

  if ( a2 == 4 )
    return 0;
  if ( a2 != 8 )
  {
    v6 = a1[217];
    if ( v6 < 0 )
    {
      v7 = *(__int64 (**)())(*(_QWORD *)a1 + 624LL);
      if ( v7 == sub_4071D0 || (v11 = a3, v9 = v7(), v9 < 0) )
      {
        a1[217] = 0;
        return 2;
      }
      a3 = v11;
      if ( v9 > 16 )
        v6 = 16;
      else
        v6 = v9;
      a1[217] = v6;
    }
    if ( v6 )
      return sub_475000((__int64)a1, nullptr, a3);
    return 2;
  }
  v4 = a1[216];
  if ( (v4 & 0x80000000) == 0 )
  {
LABEL_4:
    if ( v4 )
      return sub_474F38((__int64)a1, nullptr, a3);
    return 2;
  }
  v8 = *(__int64 (**)(void))(*(_QWORD *)a1 + 616LL);
  if ( v8 != sub_4071C8 )
  {
    v12 = a3;
    v10 = v8();
    if ( (v10 & 0x80000000) == 0 )
    {
      a3 = v12;
      if ( v10 > 16 )
        v4 = 16;
      else
        v4 = v10;
      a1[216] = v4;
      goto LABEL_4;
    }
  }
  a1[216] = 0;
  return 2;
}
