/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051724
// Address: 0x0000000100051724

//----- (0000000100051724) ----------------------------------------------------
__int64 __fastcall sub_100051724(__int64 a1, __int16 a2)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x1
  __int16 *v6; // t1
  __int64 v7; // x8
  unsigned __int64 v8; // x9
  __int16 *v9; // x10
  unsigned __int64 v10; // x2
  __int16 v13; // [xsp+6h] [xbp-2Ah] BYREF

  v6 = *(__int16 **)(a1 + 128);
  v4 = (_QWORD *)(a1 + 128);
  v5 = v6;
  v13 = a2;
  v7 = v4[1];
  v8 = v4[2];
  v9 = &v6[v8];
  v10 = v7 + 1;
  if ( v6 <= &v13 && v9 > &v13 )
  {
    if ( v8 < v10 )
    {
      v5 = qvector_reserve(v4, v5, v10, 2u);
      *(_QWORD *)(a1 + 128) = v5;
      v7 = *(_QWORD *)(a1 + 136);
    }
  }
  else if ( v8 < v10 )
  {
    v5 = qvector_reserve(v4, v5, v10, 2u);
    *(_QWORD *)(a1 + 128) = v5;
    v7 = *(_QWORD *)(a1 + 136);
    a2 = v13;
  }
  *((_WORD *)v5 + v7) = a2;
  ++*(_QWORD *)(a1 + 136);
  return 0;
}
