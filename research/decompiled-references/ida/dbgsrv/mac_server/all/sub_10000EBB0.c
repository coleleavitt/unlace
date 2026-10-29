/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000EBB0
// Address: 0x000000010000EBB0

//----- (000000010000EBB0) ----------------------------------------------------
__int64 __fastcall sub_10000EBB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  __int128 v12; // xmm1
  void *v13; // rdi
  __int64 v14; // rbx
  __int128 v15; // xmm1
  void *v16; // rdi

  v4 = (__int64)(a3 + ((unsigned __int64)(a3 - 2) >> 63) - 2) >> 1;
  v5 = 0;
  do
  {
    v6 = 80 * v5;
    v7 = a1 + 80 * v5 + 80;
    v8 = 2 * v5 + 2;
    v5 = 2 * v5 + 1;
    if ( v8 < a3 )
    {
      v9 = (_QWORD *)(a1 + v6);
      v10 = v9[20];
      if ( v9[10] <= v10 && (v9[10] < v10 || v9[11] < v9[21]) )
      {
        v7 = (__int64)(v9 + 20);
        v5 = v8;
      }
    }
    *(_OWORD *)a1 = *(_OWORD *)v7;
    v11 = *(_QWORD *)(v7 + 16);
    *(_QWORD *)(v7 + 16) = 0;
    v12 = *(_OWORD *)(v7 + 24);
    *(_OWORD *)(v7 + 24) = 0;
    v13 = *(void **)(a1 + 16);
    if ( v13 )
    {
      *(_QWORD *)(a1 + 24) = 0;
      qfree(v13);
    }
    *(_QWORD *)(a1 + 16) = v11;
    *(_OWORD *)(a1 + 24) = v12;
    v14 = *(_QWORD *)(v7 + 40);
    *(_QWORD *)(v7 + 40) = 0;
    v15 = *(_OWORD *)(v7 + 48);
    *(_OWORD *)(v7 + 48) = 0;
    v16 = *(void **)(a1 + 40);
    if ( v16 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      qfree(v16);
    }
    *(_QWORD *)(a1 + 40) = v14;
    *(_OWORD *)(a1 + 48) = v15;
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(v7 + 64);
    *(_WORD *)(a1 + 72) = *(_WORD *)(v7 + 72);
    a1 = v7;
  }
  while ( v5 <= v4 );
  return v7;
}
