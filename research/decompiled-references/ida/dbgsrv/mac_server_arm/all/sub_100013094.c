/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013094
// Address: 0x0000000100013094

//----- (0000000100013094) ----------------------------------------------------
void __fastcall sub_100013094(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x8
  _QWORD *v5; // x1
  _OWORD v6[2]; // [xsp+0h] [xbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 >= a2 )
  {
    if ( v4 != a2 )
    {
      memset(v6, 0, sizeof(v6));
      sub_10001AB9C((_QWORD **)a1, a2, v6);
    }
  }
  else
  {
    v5 = *(_QWORD **)a1;
    if ( *(_QWORD *)(a1 + 16) < a2 )
    {
      v5 = qvector_reserve((_QWORD *)a1, v5, a2, 0x20u);
      *(_QWORD *)a1 = v5;
      v4 = *(_QWORD *)(a1 + 8);
    }
    bzero(&v5[4 * v4], 32 * (a2 - v4));
    *(_QWORD *)(a1 + 8) = a2;
  }
}
