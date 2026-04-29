__int64 __fastcall sub_E3940(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 i; // rbx
  __int64 v11; // rbx
  __int64 v12; // rbp
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax
  const void *v16; // rsi
  size_t na; // [rsp+0h] [rbp-40h]
  size_t n; // [rsp+0h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v8 = 0;
    v9 = qalloc_or_throw(80 * v3);
    *(_QWORD *)(a1 + 16) = v3;
    *(_QWORD *)a1 = v9;
    for ( i = v9; ; i = *(_QWORD *)a1 )
    {
      v11 = 80 * v8 + i;
      v12 = *(_QWORD *)a2 + 80 * v8;
      *(_DWORD *)v11 = 0;
      copy_argloc(v11, v12);
      *(_QWORD *)(v11 + 16) = 0;
      *(_OWORD *)(v11 + 24) = 0;
      if ( *(_QWORD *)(v12 + 24) )
      {
        na = *(_QWORD *)(v12 + 24);
        v13 = (void *)qalloc_or_throw(na);
        *(_QWORD *)(v11 + 16) = v13;
        *(_QWORD *)(v11 + 32) = na;
        memcpy(v13, *(const void **)(v12 + 16), na);
        *(_QWORD *)(v11 + 24) = na;
      }
      *(_QWORD *)(v11 + 40) = 0;
      *(_OWORD *)(v11 + 48) = 0;
      if ( *(_QWORD *)(v12 + 48) )
      {
        n = *(_QWORD *)(v12 + 48);
        v14 = (void *)qalloc_or_throw(n);
        *(_QWORD *)(v11 + 40) = v14;
        *(_QWORD *)(v11 + 56) = n;
        memcpy(v14, *(const void **)(v12 + 40), n);
        *(_QWORD *)(v11 + 48) = n;
      }
      *(_QWORD *)(v11 + 64) = 0;
      copy_tinfo_t(v11 + 64, v12 + 64);
      ++v8;
      *(_DWORD *)(v11 + 72) = *(_DWORD *)(v12 + 72);
      if ( v3 == v8 )
        break;
    }
    *(_QWORD *)(a1 + 8) = v3;
  }
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 24) = v4;
  copy_tinfo_t(a1 + 32, a2 + 32);
  *(_DWORD *)(a1 + 40) = 0;
  copy_argloc(a1 + 40, a2 + 40);
  v5 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v6 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 56) = v5;
  if ( v6 )
  {
    v15 = (void *)qalloc_or_throw(8 * v6);
    *(_QWORD *)(a1 + 64) = v15;
    v16 = *(const void **)(a2 + 64);
    *(_QWORD *)(a1 + 80) = v6;
    memcpy(v15, v16, 8 * v6);
    *(_QWORD *)(a1 + 72) = v6;
  }
  result = *(unsigned __int8 *)(a2 + 88);
  *(_BYTE *)(a1 + 88) = result;
  return result;
}
