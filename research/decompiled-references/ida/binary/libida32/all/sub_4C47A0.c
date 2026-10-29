_QWORD *__fastcall sub_4C47A0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4, unsigned __int64 a5)
{
  std::__detail::_Prime_rehash_policy *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r12
  size_t v15; // r15
  char *v16; // r14
  __int64 v17; // r10
  _QWORD *v18; // rsi
  unsigned __int64 v19; // r9
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rdx
  char *v22; // rdi
  _QWORD *v23; // rax

  v9 = (std::__detail::_Prime_rehash_policy *)(a1 + 32);
  v10 = *((_QWORD *)v9 - 3);
  if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v9, v10, *((_QWORD *)v9 - 1), a5) )
  {
    v14 = v11;
    if ( v11 == 1 )
    {
      v17 = a1 + 48;
      *(_QWORD *)(a1 + 48) = 0;
      v16 = (char *)(a1 + 48);
    }
    else
    {
      if ( v11 >> 60 )
      {
        if ( v11 >> 61 )
          sub_2E883E(v9, v10, v11, v12, v13);
        std::__throw_bad_alloc();
      }
      v15 = 8 * v11;
      v16 = (char *)operator new(8 * v11);
      memset(v16, 0, v15);
      v17 = a1 + 48;
    }
    v18 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0;
    v19 = 0;
    while ( v18 )
    {
      while ( 1 )
      {
        v20 = v18;
        v18 = (_QWORD *)*v18;
        v21 = v20[3] % v14;
        v22 = &v16[8 * v21];
        if ( !*(_QWORD *)v22 )
          break;
        *v20 = **(_QWORD **)v22;
        **(_QWORD **)v22 = v20;
        if ( !v18 )
          goto LABEL_9;
      }
      *v20 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v20;
      *(_QWORD *)v22 = a1 + 16;
      if ( *v20 )
        *(_QWORD *)&v16[8 * v19] = v20;
      v19 = v21;
    }
LABEL_9:
    if ( *(_QWORD *)a1 != v17 )
      operator delete(*(void **)a1, 8LL * *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = v16;
    a2 = a3 % v14;
  }
  a4[3] = a3;
  v23 = *(_QWORD **)(*(_QWORD *)a1 + 8 * a2);
  if ( v23 )
  {
    *a4 = *v23;
    **(_QWORD **)(*(_QWORD *)a1 + 8 * a2) = a4;
  }
  else
  {
    *a4 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = a4;
    if ( *a4 )
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * (*(_QWORD *)(*a4 + 24LL) % *(_QWORD *)(a1 + 8))) = a4;
    *(_QWORD *)(*(_QWORD *)a1 + 8 * a2) = a1 + 16;
  }
  ++*(_QWORD *)(a1 + 24);
  return a4;
}

