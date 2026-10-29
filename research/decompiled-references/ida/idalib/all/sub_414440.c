__int64 __fastcall sub_414440(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 i; // r13
  __int64 v10; // r13
  __int64 v11; // rbx
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  const void *v15; // rsi
  size_t na; // [rsp+0h] [rbp-40h]
  size_t n; // [rsp+0h] [rbp-40h]

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v6 = 0;
    v7 = qalloc_or_throw(56 * v3);
    *(_QWORD *)(a1 + 16) = v3;
    v8 = 0;
    *(_QWORD *)a1 = v7;
    for ( i = v7; ; i = *(_QWORD *)a1 )
    {
      v10 = 56 * v6 + i;
      v11 = *(_QWORD *)a2 + 56 * v6;
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = v8;
      if ( *(_QWORD *)(v11 + 8) )
      {
        na = *(_QWORD *)(v11 + 8);
        v12 = (void *)qalloc_or_throw(na);
        *(_QWORD *)v10 = v12;
        *(_QWORD *)(v10 + 16) = na;
        memcpy(v12, *(const void **)v11, na);
        v8 = 0;
        *(_QWORD *)(v10 + 8) = na;
      }
      *(_QWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 32) = v8;
      if ( *(_QWORD *)(v11 + 32) )
      {
        n = *(_QWORD *)(v11 + 32);
        v13 = (void *)qalloc_or_throw(n);
        *(_QWORD *)(v10 + 24) = v13;
        *(_QWORD *)(v10 + 40) = n;
        memcpy(v13, *(const void **)(v11 + 24), n);
        v8 = 0;
        *(_QWORD *)(v10 + 32) = n;
      }
      ++v6;
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v11 + 48);
      if ( v3 == v6 )
        break;
    }
    *(_QWORD *)(a1 + 8) = v3;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    v14 = (void *)qalloc_or_throw(4 * v4);
    *(_QWORD *)(a1 + 24) = v14;
    v15 = *(const void **)(a2 + 24);
    *(_QWORD *)(a1 + 40) = v4;
    memcpy(v14, v15, 4 * v4);
    *(_QWORD *)(a1 + 32) = v4;
  }
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  result = *(unsigned __int8 *)(a2 + 52);
  *(_BYTE *)(a1 + 52) = result;
  return result;
}
