/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000123E8
// Address: 0x00000001000123E8

//----- (00000001000123E8) ----------------------------------------------------
void __fastcall sub_1000123E8(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x8
  _QWORD *v5; // x1
  __int16 v6; // [xsp+6h] [xbp-1Ah] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 >= a2 )
  {
    if ( v4 != a2 )
    {
      v6 = 0;
      sub_10001A7D0((_QWORD **)a1, a2, &v6);
    }
  }
  else
  {
    v5 = *(_QWORD **)a1;
    if ( *(_QWORD *)(a1 + 16) < a2 )
    {
      v5 = qvector_reserve((_QWORD *)a1, v5, a2, 2u);
      *(_QWORD *)a1 = v5;
      v4 = *(_QWORD *)(a1 + 8);
    }
    bzero((char *)v5 + 2 * v4, 2 * (a2 - v4));
    *(_QWORD *)(a1 + 8) = a2;
  }
}
