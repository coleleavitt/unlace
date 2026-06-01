_QWORD *__fastcall sub_902FB0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 (__fastcall *v8)(__int64, size_t); // r13
  __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  size_t v12; // rbp
  void *v13; // rax
  void *v14; // rcx
  int v15; // ebp
  int v16; // ebp
  size_t v17; // rsi
  void *v18; // rax
  pthread_t *v19; // rcx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rbp
  _QWORD *v24; // rax

  if ( !a1 )
    return nullptr;
  v8 = (__int64 (__fastcall *)(__int64, size_t))a7;
  v9 = a8;
  if ( (_QWORD)a7 )
  {
    v10 = (_QWORD *)((__int64 (__fastcall *)(__int64, __int64))a7)(a8, 240);
    *v10 = 0;
    v11 = v10;
    v10[29] = 0;
    memset(
      (void *)((unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v10 - (((_DWORD)v10 + 8) & 0xFFFFFFF8) + 240) >> 3));
    if ( !v10 )
      return nullptr;
    v10[9] = a2 + 1;
    v12 = 16 * (a2 + 1);
    v13 = (void *)v8(v9, v12);
    v14 = memset(v13, 0, v12);
  }
  else
  {
    v24 = calloc(1u, 0xF0u);
    v11 = v24;
    if ( !v24 )
      return nullptr;
    v24[9] = a2 + 1;
    v14 = calloc(1u, 16 * (a2 + 1));
  }
  v11[6] = v14;
  v11[7] = 0;
  v11[8] = 0;
  v11[10] = 0;
  *((_DWORD *)v11 + 22) = 1;
  v15 = pthread_mutex_init((pthread_mutex_t *)(v11 + 12), nullptr);
  v16 = pthread_cond_init((pthread_cond_t *)(v11 + 17), nullptr) | v15;
  if ( pthread_cond_init((pthread_cond_t *)(v11 + 23), nullptr) | v16
    || ((*((_DWORD *)v11 + 58) = 0, v17 = 8 * a1, !v8)
      ? (v19 = (pthread_t *)calloc(1u, v17))
      : (v18 = (void *)v8(v9, v17), v19 = (pthread_t *)memset(v18, 0, 8 * a1)),
        (v20 = _mm_loadu_si128((const __m128i *)&a7),
         v21 = a8,
         v11[3] = v19,
         v11[4] = 0,
         *(__m128i *)v11 = v20,
         v11[2] = v21,
         !v19)
     || (v22 = 0, !v11[6])) )
  {
LABEL_15:
    sub_902E80((char *)v11);
    return nullptr;
  }
  while ( 1 )
  {
    if ( pthread_create(&v19[v22], nullptr, (void *(*)(void *))start_routine, v11) )
    {
      v11[4] = v22;
      goto LABEL_15;
    }
    if ( a1 == ++v22 )
      break;
    v19 = (pthread_t *)v11[3];
  }
  v11[4] = a1;
  v11[5] = a1;
  return v11;
}
