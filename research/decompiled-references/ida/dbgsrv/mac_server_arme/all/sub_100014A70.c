/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100014A70
// Address: 0x0000000100014A70

//----- (0000000100014A70) ----------------------------------------------------
void __fastcall sub_100014A70(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // x8
  _QWORD *v5; // x1
  _OWORD v6[3]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v7; // [xsp+30h] [xbp-20h]

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 >= a2 )
  {
    if ( v4 != a2 )
    {
      v7 = 0;
      memset(v6, 0, sizeof(v6));
      sub_10001CA90((_QWORD **)a1, a2, (unsigned __int64)v6);
    }
  }
  else
  {
    v5 = *(_QWORD **)a1;
    if ( *(_QWORD *)(a1 + 16) < a2 )
    {
      v5 = qvector_reserve((_QWORD *)a1, v5, a2, 0x38u);
      *(_QWORD *)a1 = v5;
      v4 = *(_QWORD *)(a1 + 8);
    }
    bzero(&v5[7 * v4], 56 * (a2 - v4));
    *(_QWORD *)(a1 + 8) = a2;
  }
}
