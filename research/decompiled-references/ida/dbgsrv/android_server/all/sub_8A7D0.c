/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8A7D0
// Address: 0x000000000008A7D0

//----- (000000000008A7D0) ----------------------------------------------------
__int64 __fastcall sub_8A7D0(_QWORD *a1, __int64 a2)
{
  void *v2; // x8
  void *v5; // x0
  __int64 v6; // x8
  __int64 v7; // x9
  __int128 *v8; // x8
  signed __int64 v9; // x9
  __int128 v10; // q1
  __int128 v11; // q2
  __int64 v12; // x10
  __int128 v13; // q1
  __int128 v14; // q3

  v2 = *(void **)(a2 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    qfree(v2);
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
    v8 = (__int128 *)(a2 + 72);
    v9 = v7 / 0x48uLL - 2;
    do
    {
      v10 = *v8;
      v11 = v8[1];
      v12 = *((_QWORD *)v8 + 8);
      *(__int128 *)((char *)v8 + 8) = 0u;
      *((_QWORD *)v8 + 3) = 0;
      *(__int128 *)((char *)v8 - 72) = v10;
      v14 = v8[2];
      v13 = v8[3];
      *(__int128 *)((char *)v8 - 56) = v11;
      v8[2] = 0u;
      --v9;
      *(__int128 *)((char *)v8 - 40) = v14;
      *((_QWORD *)v8 - 1) = v12;
      *(_QWORD *)v8 = 0;
      *(__int128 *)((char *)v8 - 24) = v13;
      v8 = (__int128 *)((char *)v8 + 72);
    }
    while ( v9 >= 0 );
    v6 = a1[1];
  }
  a1[1] = v6 - 1;
  return a2;
}
