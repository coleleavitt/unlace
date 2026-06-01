__int64 *__fastcall sub_2112F00(__int64 a1, const __m128i *a2, __int64 *a3)
{
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // r13
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r10
  int v12; // r11d
  unsigned __int64 v13; // r12
  __int64 **v14; // r8
  __int64 *v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 *v17; // r14
  void *v18; // rdi
  _QWORD *v19; // rbp
  __int64 v20; // r12
  _QWORD *v21; // r15
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  char v26; // al
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r13
  _QWORD *v29; // r14
  _QWORD **v30; // r15
  _QWORD *v31; // rax
  size_t v32; // r15
  __int64 v33; // r10
  _QWORD *v34; // rcx
  unsigned __int64 v35; // r8
  _QWORD *v36; // rdi
  unsigned __int64 v37; // rdx
  _QWORD **v38; // rax
  __int64 v39; // rax

  v5 = operator new(0x28u);
  v6 = _mm_loadu_si128(a2);
  v7 = *a3;
  *a3 = 0;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = (_QWORD *)v5;
  *(__m128i *)(v5 + 8) = v6;
  v10 = *(unsigned int *)(v5 + 8);
  v11 = *(_QWORD *)(v5 + 16);
  *(_QWORD *)v5 = 0;
  v12 = v10;
  v13 = v11 ^ v10;
  *(_QWORD *)(v5 + 24) = v7;
  v14 = *(__int64 ***)(*(_QWORD *)a1 + 8 * (v13 % v8));
  if ( !v14 )
    goto LABEL_24;
  v15 = *v14;
  v16 = (*v14)[4];
  while ( v13 != v16 || v11 != v15[2] || v12 != *((_DWORD *)v15 + 2) )
  {
    if ( *v15 )
    {
      v16 = *(_QWORD *)(*v15 + 32);
      v14 = (__int64 **)v15;
      v15 = (__int64 *)*v15;
      if ( v13 % v8 == v16 % v8 )
        continue;
    }
    goto LABEL_24;
  }
  v17 = *v14;
  if ( !*v14 )
  {
LABEL_24:
    v26 = std::__detail::_Prime_rehash_policy::_M_need_rehash(
            (std::__detail::_Prime_rehash_policy *)(a1 + 32),
            v8,
            *(_QWORD *)(a1 + 24),
            1u);
    v28 = v27;
    if ( !v26 )
    {
      v29 = *(_QWORD **)a1;
      v9[4] = v13;
      v30 = (_QWORD **)&v29[v13 % v8];
      v31 = *v30;
      if ( *v30 )
      {
LABEL_26:
        *v9 = *v31;
        **v30 = v9;
LABEL_27:
        ++*(_QWORD *)(a1 + 24);
        return v9;
      }
LABEL_41:
      v39 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v9;
      *v9 = v39;
      if ( v39 )
        v29[*(_QWORD *)(v39 + 32) % *(_QWORD *)(a1 + 8)] = v9;
      *v30 = (_QWORD *)(a1 + 16);
      goto LABEL_27;
    }
    if ( v27 == 1 )
    {
      v29 = (_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = 0;
      v33 = a1 + 48;
    }
    else
    {
      if ( v27 > 0x1FFFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v32 = 8 * v27;
      v29 = (_QWORD *)operator new(8 * v27);
      memset(v29, 0, v32);
      v33 = a1 + 48;
    }
    v34 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0;
    if ( !v34 )
    {
LABEL_38:
      if ( v33 != *(_QWORD *)a1 )
        operator delete(*(void **)a1);
      *(_QWORD *)(a1 + 8) = v28;
      *(_QWORD *)a1 = v29;
      v9[4] = v13;
      v30 = (_QWORD **)&v29[v13 % v28];
      v31 = *v30;
      if ( *v30 )
        goto LABEL_26;
      goto LABEL_41;
    }
    v35 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v36 = (_QWORD *)*v34;
        v37 = v34[4] % v28;
        v38 = (_QWORD **)&v29[v37];
        if ( !*v38 )
          break;
        *v34 = **v38;
        **v38 = v34;
LABEL_34:
        v34 = v36;
        if ( !v36 )
          goto LABEL_38;
      }
      *v34 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v34;
      *v38 = (_QWORD *)(a1 + 16);
      if ( !*v34 )
      {
        v35 = v37;
        goto LABEL_34;
      }
      v29[v35] = v34;
      v35 = v37;
      v34 = v36;
      if ( !v36 )
        goto LABEL_38;
    }
  }
  if ( v7 )
  {
    v18 = *(void **)(v7 + 56);
    if ( v18 )
      operator delete(v18);
    v19 = *(_QWORD **)(v7 + 16);
    if ( v19 )
    {
      do
      {
        v20 = v19[3];
        v21 = (_QWORD *)*v19;
        if ( v20 )
        {
          v22 = *(void **)(v20 + 56);
          if ( v22 )
            operator delete(v22);
          sub_2102C60(v20);
          if ( *(_QWORD *)v20 != v20 + 48 )
            operator delete(*(void **)v20);
          operator delete((void *)v20, 0x60u);
        }
        v23 = v19;
        v19 = v21;
        operator delete(v23);
      }
      while ( v21 );
    }
    memset(*(void **)v7, 0, 8LL * *(_QWORD *)(v7 + 8));
    v24 = *(void **)v7;
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 16) = 0;
    if ( v24 != (void *)(v7 + 48) )
      operator delete(v24);
    operator delete((void *)v7, 0x60u);
  }
  operator delete(v9);
  return v17;
}
