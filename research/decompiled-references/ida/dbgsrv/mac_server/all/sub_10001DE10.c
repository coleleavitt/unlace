/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001DE10
// Address: 0x000000010001DE10

//----- (000000010001DE10) ----------------------------------------------------
__int64 __fastcall sub_10001DE10(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm0
  __int64 v4; // r12
  void *v5; // rax
  size_t v6; // r15
  void *v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // r12
  void *v10; // rax
  __int64 v11; // r13
  void *v12; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 32) = *((_DWORD *)a2 + 8);
  v2 = *a2;
  *(_OWORD *)(a1 + 16) = a2[1];
  *(_OWORD *)a1 = v2;
  v3 = 0;
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v4 = *((_QWORD *)a2 + 6);
  if ( v4 )
  {
    v5 = qalloc_or_throw(2 * v4);
    *(_QWORD *)(a1 + 40) = v5;
    *(_QWORD *)(a1 + 56) = v4;
    memcpy(v5, *((const void **)a2 + 5), 2 * v4);
    v3 = 0;
    *(_QWORD *)(a1 + 48) = v4;
  }
  *(_DWORD *)(a1 + 64) = *((_DWORD *)a2 + 16);
  *(_OWORD *)(a1 + 72) = v3;
  *(_QWORD *)(a1 + 88) = 0;
  v6 = *((_QWORD *)a2 + 10);
  if ( v6 )
  {
    v7 = qalloc_or_throw(*((_QWORD *)a2 + 10));
    *(_QWORD *)(a1 + 72) = v7;
    *(_QWORD *)(a1 + 88) = v6;
    memcpy(v7, *((const void **)a2 + 9), v6);
    *(_QWORD *)(a1 + 80) = v6;
  }
  v8 = 0;
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  v9 = *((_QWORD *)a2 + 13);
  if ( v9 )
  {
    v10 = qalloc_or_throw(2 * v9);
    *(_QWORD *)(a1 + 96) = v10;
    *(_QWORD *)(a1 + 112) = v9;
    memcpy(v10, *((const void **)a2 + 12), 2 * v9);
    *(_QWORD *)(a1 + 104) = v9;
    v8 = 0;
  }
  *(_OWORD *)(a1 + 120) = v8;
  *(_QWORD *)(a1 + 136) = 0;
  v11 = *((_QWORD *)a2 + 16);
  if ( v11 )
  {
    v12 = qalloc_or_throw(2 * v11);
    *(_QWORD *)(a1 + 120) = v12;
    *(_QWORD *)(a1 + 136) = v11;
    memcpy(v12, *((const void **)a2 + 15), 2 * v11);
    *(_QWORD *)(a1 + 128) = v11;
  }
  result = *((_QWORD *)a2 + 20);
  *(_QWORD *)(a1 + 160) = result;
  *(_OWORD *)(a1 + 144) = a2[9];
  return result;
}
