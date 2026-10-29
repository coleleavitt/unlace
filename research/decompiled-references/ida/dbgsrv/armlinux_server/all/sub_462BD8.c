/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462BD8
// Address: 0x0000000000462BD8

//----- (0000000000462BD8) ----------------------------------------------------
__int64 __fastcall sub_462BD8(_QWORD *a1, __int16 a2)
{
  __int64 v3; // x19
  __int64 v5; // x4
  char *v6; // x1
  unsigned __int64 v7; // x2
  unsigned __int64 v8; // x0
  _WORD *v10; // x0
  __int16 v11; // [xsp+36h] [xbp-Ah] BYREF

  v3 = (__int64)(a1 + 16);
  v5 = a1[17];
  v11 = a2;
  v6 = (char *)a1[16];
  v7 = v5 + 1;
  v8 = a1[18];
  if ( v6 <= (char *)&v11 && &v11 < (__int16 *)&v6[2 * v8] )
  {
    if ( v8 < v7 )
    {
      v10 = sub_491288(v3, v6, v7, 2u);
      a1[16] = v10;
      v10[*(_QWORD *)(v3 + 8)] = a2;
    }
    else
    {
      *(_WORD *)&v6[2 * v5] = a2;
    }
  }
  else
  {
    if ( v8 < v7 )
      a1[16] = sub_491288(v3, v6, v7, 2u);
    *(_WORD *)(a1[16] + 2LL * *(_QWORD *)(v3 + 8)) = a2;
  }
  ++*(_QWORD *)(v3 + 8);
  return 0;
}
