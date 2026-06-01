/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001A8D8
// Address: 0x000000010001A8D8

//----- (000000010001A8D8) ----------------------------------------------------
__int64 __fastcall sub_10001A8D8(__int64 a1, __int128 *a2)
{
  __int128 v4; // q0
  __int128 v5; // q1
  __int64 v6; // x23
  void *v7; // x0
  int v8; // w8
  size_t v9; // x23
  void *v10; // x0
  __int64 v11; // x25
  void *v12; // x0
  __int64 v13; // x25
  void *v14; // x0
  __int128 v15; // q0

  v4 = *a2;
  v5 = a2[1];
  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  *(_OWORD *)a1 = v4;
  *(_OWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v6 = *((_QWORD *)a2 + 6);
  if ( v6 )
  {
    v7 = qalloc_or_throw(2 * v6);
    *(_QWORD *)(a1 + 40) = v7;
    *(_QWORD *)(a1 + 56) = v6;
    memcpy(v7, *((const void **)a2 + 5), 2 * v6);
    *(_QWORD *)(a1 + 48) = v6;
  }
  v8 = *((_DWORD *)a2 + 16);
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) = v8;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  v9 = *((_QWORD *)a2 + 10);
  if ( v9 )
  {
    v10 = qalloc_or_throw(*((_QWORD *)a2 + 10));
    *(_QWORD *)(a1 + 72) = v10;
    *(_QWORD *)(a1 + 88) = v9;
    memcpy(v10, *((const void **)a2 + 9), v9);
    *(_QWORD *)(a1 + 80) = v9;
  }
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  v11 = *((_QWORD *)a2 + 13);
  if ( v11 )
  {
    v12 = qalloc_or_throw(2 * v11);
    *(_QWORD *)(a1 + 96) = v12;
    *(_QWORD *)(a1 + 112) = v11;
    memcpy(v12, *((const void **)a2 + 12), 2 * v11);
    *(_QWORD *)(a1 + 104) = v11;
  }
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  v13 = *((_QWORD *)a2 + 16);
  if ( v13 )
  {
    v14 = qalloc_or_throw(2 * v13);
    *(_QWORD *)(a1 + 120) = v14;
    *(_QWORD *)(a1 + 136) = v13;
    memcpy(v14, *((const void **)a2 + 15), 2 * v13);
    *(_QWORD *)(a1 + 128) = v13;
  }
  v15 = a2[9];
  *(_QWORD *)(a1 + 160) = *((_QWORD *)a2 + 20);
  *(_OWORD *)(a1 + 144) = v15;
  return a1;
}
