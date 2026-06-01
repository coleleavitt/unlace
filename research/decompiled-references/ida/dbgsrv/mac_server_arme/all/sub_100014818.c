/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100014818
// Address: 0x0000000100014818

//----- (0000000100014818) ----------------------------------------------------
void __fastcall sub_100014818(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x8
  _QWORD *v5; // x1
  __int64 v6; // [xsp+0h] [xbp-20h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 >= a2 )
  {
    if ( v4 != a2 )
    {
      v6 = 0;
      sub_10001C82C((_QWORD **)a1, a2, &v6);
    }
  }
  else
  {
    v5 = *(_QWORD **)a1;
    if ( *(_QWORD *)(a1 + 16) < a2 )
    {
      v5 = qvector_reserve((_QWORD *)a1, v5, a2, 8u);
      *(_QWORD *)a1 = v5;
      v4 = *(_QWORD *)(a1 + 8);
    }
    bzero(&v5[v4], 8 * (a2 - v4));
    *(_QWORD *)(a1 + 8) = a2;
  }
}
