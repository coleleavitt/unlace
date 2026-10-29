char *__fastcall sub_943440(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 (__fastcall *v8)(__int64, size_t); // r13
  __int64 v9; // rbp
  char *v10; // rbx
  size_t v11; // rsi
  void *v12; // rax
  void *v13; // rcx
  __int64 v14; // rax
  __m128i v15; // xmm0
  char *v17; // rdi
  pthread_mutex_t *v18; // rdi

  v8 = (__int64 (__fastcall *)(__int64, size_t))a7;
  v9 = a8;
  if ( (_QWORD)a7 )
  {
    v10 = (char *)((__int64 (__fastcall *)(__int64, __int64))a7)(a8, 88);
    *(_QWORD *)v10 = 0;
    *((_QWORD *)v10 + 10) = 0;
    memset(
      (void *)((unsigned __int64)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v10 - (((_DWORD)v10 + 8) & 0xFFFFFFF8) + 88) >> 3));
  }
  else
  {
    v10 = (char *)calloc(1u, 0x58u);
  }
  if ( !v10 )
    return v10;
  if ( !pthread_mutex_init((pthread_mutex_t *)v10, nullptr) )
  {
    v11 = 16LL * a1;
    if ( v8 )
    {
      v12 = (void *)v8(v9, v11);
      v13 = memset(v12, 0, 16LL * a1);
    }
    else
    {
      v13 = calloc(1u, v11);
    }
    *((_QWORD *)v10 + 10) = v13;
    if ( v13 )
    {
      v14 = a8;
      v15 = _mm_loadu_si128((const __m128i *)&a7);
      *((_DWORD *)v10 + 12) = a1;
      *((_QWORD *)v10 + 5) = 0x10000;
      *((_DWORD *)v10 + 13) = 0;
      *((_QWORD *)v10 + 9) = v14;
      *(__m128i *)(v10 + 56) = v15;
    }
    else
    {
      v18 = (pthread_mutex_t *)v10;
      v10 = nullptr;
      sub_942AE0(v18);
    }
    return v10;
  }
  if ( !*((_QWORD *)&a7 + 1) )
  {
    v17 = v10;
    v10 = nullptr;
    free(v17);
    return v10;
  }
  (*((void (__fastcall **)(__int64, char *))&a7 + 1))(v9, v10);
  return nullptr;
}

