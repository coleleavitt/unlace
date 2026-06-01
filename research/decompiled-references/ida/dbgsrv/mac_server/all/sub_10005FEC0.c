/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005FEC0
// Address: 0x000000010005FEC0

//----- (000000010005FEC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_10005FEC0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r15
  bool v9; // zf
  __int64 v10; // r12
  size_t v11; // r13
  void *v12; // rax
  size_t v13; // r13
  void *v14; // rax
  __int64 v15; // r15
  void *v16; // rax
  __int64 v18; // [rsp+8h] [rbp-48h]
  __int64 v19; // [rsp+20h] [rbp-30h]

  v4 = (__int64 *)a1;
  if ( *(_QWORD *)(a1 + 16) < a2 )
    *(_QWORD *)a1 = qvector_reserve(a1, *(void **)a1, a2, 0x50u);
  v5 = *(_QWORD *)(a1 + 8);
  v18 = a2 - v5;
  if ( a2 > v5 )
  {
    v6 = 16 * v5;
    v7 = 5 * v6;
    v8 = -5 * v6;
    do
    {
      v10 = *v4;
      *(_OWORD *)(v10 + v7) = 0;
      *(_QWORD *)(v10 + v7 + 16) = 0;
      v11 = *(_QWORD *)(a3 + 8);
      if ( v11 )
      {
        v12 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
        *(_QWORD *)(v10 + v7) = v12;
        *(_QWORD *)(v10 + v7 + 16) = v11;
        memcpy(v12, *(const void **)a3, v11);
        *(_QWORD *)(v10 + v7 + 8) = v11;
      }
      v19 = v8;
      *(_OWORD *)(v10 + v7 + 24) = 0;
      *(_QWORD *)(v10 + v7 + 40) = 0;
      v13 = *(_QWORD *)(a3 + 32);
      if ( v13 )
      {
        v14 = qalloc_or_throw(*(_QWORD *)(a3 + 32));
        *(_QWORD *)(v10 + v7 + 24) = v14;
        *(_QWORD *)(v10 + v7 + 40) = v13;
        memcpy(v14, *(const void **)(a3 + 24), v13);
        *(_QWORD *)(v10 + v7 + 32) = v13;
      }
      *(_OWORD *)(v10 + v7 + 48) = 0;
      *(_QWORD *)(v10 + v7 + 64) = 0;
      v15 = *(_QWORD *)(a3 + 56);
      if ( v15 )
      {
        v16 = qalloc_or_throw(16 * v15);
        *(_QWORD *)(v10 + v7 + 48) = v16;
        *(_QWORD *)(v10 + v7 + 64) = v15;
        memcpy(v16, *(const void **)(a3 + 48), 16 * v15);
        *(_QWORD *)(v10 + v7 + 56) = v15;
      }
      *(_DWORD *)(v10 + v7 + 72) = *(_DWORD *)(a3 + 72);
      v8 = v19 - 80;
      v7 += 80;
      v9 = v18-- == 1;
      v4 = (__int64 *)a1;
    }
    while ( !v9 );
  }
  v4[1] = a2;
  return a2;
}
