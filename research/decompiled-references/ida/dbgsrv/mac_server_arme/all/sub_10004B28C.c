/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004B28C
// Address: 0x000000010004B28C

//----- (000000010004B28C) ----------------------------------------------------
__int64 __fastcall sub_10004B28C(_QWORD *a1, __int64 a2)
{
  void *v4; // x0
  void *v5; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  signed __int64 v8; // x8
  __int64 v9; // x9
  __int128 v10; // q2

  v4 = *(void **)(a2 + 24);
  if ( v4 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    qfree(v4);
    *(_QWORD *)(a2 + 24) = 0;
    *(_QWORD *)(a2 + 40) = 0;
  }
  v5 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    *(_QWORD *)(a2 + 8) = 0;
    qfree(v5);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  v6 = a1[1];
  v7 = *a1 + 72 * v6 - a2;
  if ( v7 >= 73 )
  {
    v8 = v7 / 0x48uLL - 1;
    v9 = a2 + 72;
    do
    {
      *(_OWORD *)(v9 - 64) = *(_OWORD *)(v9 + 8);
      v10 = *(_OWORD *)(v9 + 48);
      *(_OWORD *)(v9 - 40) = *(_OWORD *)(v9 + 32);
      *(_QWORD *)(v9 - 72) = *(_QWORD *)v9;
      *(_OWORD *)(v9 + 8) = 0u;
      *(_QWORD *)(v9 - 48) = *(_QWORD *)(v9 + 24);
      *(_QWORD *)(v9 + 24) = 0;
      *(_OWORD *)(v9 + 32) = 0u;
      *(_OWORD *)(v9 - 24) = v10;
      *(_QWORD *)(v9 - 8) = *(_QWORD *)(v9 + 64);
      *(_QWORD *)v9 = 0;
      v9 += 72;
    }
    while ( v8-- > 1 );
    v6 = a1[1];
  }
  a1[1] = v6 - 1;
  return a2;
}
