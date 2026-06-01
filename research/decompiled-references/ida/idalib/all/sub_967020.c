pthread_mutex_t *__fastcall sub_967020(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 (__fastcall *v8)(__int64, size_t); // r12
  __int64 v9; // r13
  pthread_mutex_t *v10; // rbx
  size_t v11; // rbp
  __int64 v12; // rsi
  struct __pthread_internal_list *v13; // rdi
  struct __pthread_internal_list *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  pthread_mutex_t *v21; // rdi
  pthread_mutex_t *v22; // rdi

  v8 = (__int64 (__fastcall *)(__int64, size_t))a7;
  v9 = a8;
  if ( (_QWORD)a7 )
  {
    v10 = (pthread_mutex_t *)((__int64 (__fastcall *)(__int64, __int64))a7)(a8, 80);
    *(_OWORD *)&v10->__lock = 0;
    *((_OWORD *)&v10->__align + 1) = 0;
    *((_OWORD *)&v10->__align + 2) = 0;
    *(_OWORD *)(&v10[1].__align + 1) = 0;
    *(_OWORD *)(&v10[1].__align + 3) = 0;
  }
  else
  {
    v10 = (pthread_mutex_t *)calloc(1u, 0x50u);
  }
  if ( !v10 )
    return v10;
  if ( !pthread_mutex_init(v10, nullptr) )
  {
    v10[1].__lock = a1;
    v11 = 8LL * a1;
    v12 = v11;
    if ( v8 )
    {
      v12 = 0;
      v13 = (struct __pthread_internal_list *)v8(v9, v11);
      v14 = v13;
      memset(v13, 0, v11);
    }
    else
    {
      v13 = (struct __pthread_internal_list *)(&dword_0 + 1);
      v14 = (struct __pthread_internal_list *)calloc(1u, v11);
    }
    v10[1].__list.__next = v14;
    if ( v14
      && (v19 = a8,
          *(__m128i *)(&v10[1].__align + 1) = _mm_loadu_si128((const __m128i *)&a7),
          v10[1].__list.__prev = (struct __pthread_internal_list *)v19,
          v14->__prev = (struct __pthread_internal_list *)sub_910BC0((__int64)v13, v12, v15, v16, v17, v18, a7, a8),
          v10[1].__list.__next->__prev) )
    {
      v10[1].__count = 1;
    }
    else
    {
      v21 = v10;
      v10 = nullptr;
      sub_966E40(v21);
    }
    return v10;
  }
  if ( !*((_QWORD *)&a7 + 1) )
  {
    v22 = v10;
    v10 = nullptr;
    free(v22);
    return v10;
  }
  (*((void (__fastcall **)(__int64, pthread_mutex_t *))&a7 + 1))(v9, v10);
  return nullptr;
}
