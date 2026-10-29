/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000148D8
// Address: 0x00000001000148D8

//----- (00000001000148D8) ----------------------------------------------------
void __fastcall sub_1000148D8(__int64 a1, unsigned __int64 a2)
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
      sub_10001C938((_QWORD **)a1, a2, v6);
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
