char *__fastcall sub_966F00(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 (__fastcall *a7)(__int64, size_t),
        void (__fastcall *a8)(__int64, char *),
        __int64 a9)
{
  unsigned int v9; // eax
  unsigned int v10; // r13d
  size_t v11; // rbx
  char *v12; // r14
  pthread_mutex_t *v13; // r15
  int v14; // ebp
  int v15; // eax
  pthread_cond_t *v16; // rdi
  char *v18; // rdi

  _BitScanReverse(&v9, *a1);
  v10 = 1 << (32 - (v9 ^ 0x1F));
  v11 = 448LL * v10;
  if ( a7 )
  {
    v12 = (char *)a7(a9, v11);
    memset(v12, 0, v11);
  }
  else
  {
    v12 = (char *)calloc(1u, v11);
  }
  if ( v12 )
  {
    *a1 = v10;
    if ( v10 )
    {
      v13 = (pthread_mutex_t *)(v12 + 16);
      v14 = 0;
      do
      {
        v15 = pthread_mutex_init(v13, nullptr);
        v16 = (pthread_cond_t *)&v13[1];
        v13 = (pthread_mutex_t *)((char *)v13 + 448);
        v14 |= pthread_cond_init(v16, nullptr) | v15;
      }
      while ( v13 != (pthread_mutex_t *)&v12[448 * v10 + 16] );
      if ( v14 )
      {
        v18 = v12;
        v12 = nullptr;
        sub_966DC0(v18, v10, a8, a9);
      }
    }
  }
  return v12;
}
