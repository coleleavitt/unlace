__int64 __fastcall sub_4010A0(__int64 a1, _QWORD *a2, size_t a3, size_t a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 i; // r13
  __int64 v14; // r13
  __int64 v15; // rbx
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  const void *v19; // rsi
  size_t na; // [rsp+0h] [rbp-40h]
  size_t n; // [rsp+0h] [rbp-40h]

  v6 = a2;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v7 = a2[1];
  if ( v7 )
  {
    v10 = 0;
    v11 = qalloc_or_throw(56 * v7, a2, a3, a4, a5, a6);
    *(_QWORD *)(a1 + 16) = v7;
    v12 = 0;
    *(_QWORD *)a1 = v11;
    for ( i = v11; ; i = *(_QWORD *)a1 )
    {
      v14 = 56 * v10 + i;
      v15 = *v6 + 56 * v10;
      *(_QWORD *)v14 = 0;
      *(_OWORD *)(v14 + 8) = v12;
      a3 = *(_QWORD *)(v15 + 8);
      if ( a3 )
      {
        na = *(_QWORD *)(v15 + 8);
        v16 = (void *)qalloc_or_throw(na, a2, a3, a4, a5, a6);
        *(_QWORD *)v14 = v16;
        *(_QWORD *)(v14 + 16) = na;
        a2 = *(_QWORD **)v15;
        memcpy(v16, *(const void **)v15, na);
        a3 = na;
        v12 = 0;
        *(_QWORD *)(v14 + 8) = na;
      }
      *(_QWORD *)(v14 + 24) = 0;
      *(_OWORD *)(v14 + 32) = v12;
      a4 = *(_QWORD *)(v15 + 32);
      if ( a4 )
      {
        n = *(_QWORD *)(v15 + 32);
        v17 = (void *)qalloc_or_throw(n, a2, a3, a4, a5, a6);
        *(_QWORD *)(v14 + 24) = v17;
        *(_QWORD *)(v14 + 40) = n;
        a2 = *(_QWORD **)(v15 + 24);
        memcpy(v17, a2, n);
        a4 = n;
        v12 = 0;
        *(_QWORD *)(v14 + 32) = n;
      }
      ++v10;
      *(_QWORD *)(v14 + 48) = *(_QWORD *)(v15 + 48);
      if ( v7 == v10 )
        break;
    }
    *(_QWORD *)(a1 + 8) = v7;
  }
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v8 = v6[4];
  if ( v8 )
  {
    v18 = (void *)qalloc_or_throw(4 * v8, a2, a3, a4, a5, a6);
    *(_QWORD *)(a1 + 24) = v18;
    v19 = (const void *)v6[3];
    *(_QWORD *)(a1 + 40) = v8;
    memcpy(v18, v19, 4 * v8);
    *(_QWORD *)(a1 + 32) = v8;
  }
  *(_DWORD *)(a1 + 48) = *((_DWORD *)v6 + 12);
  result = *((unsigned __int8 *)v6 + 52);
  *(_BYTE *)(a1 + 52) = result;
  return result;
}

