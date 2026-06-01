void __fastcall sub_105460(char *ptr, int a2, void (__fastcall *a3)(__int64, char *), __int64 a4)
{
  pthread_mutex_t *v7; // rbx
  pthread_mutex_t *v8; // rbp
  pthread_cond_t *v9; // rdi

  if ( a2 )
  {
    v7 = (pthread_mutex_t *)(ptr + 16);
    v8 = (pthread_mutex_t *)&ptr[448 * (a2 - 1) + 464];
    do
    {
      pthread_mutex_destroy(v7);
      v9 = (pthread_cond_t *)&v7[1];
      v7 = (pthread_mutex_t *)((char *)v7 + 448);
      pthread_cond_destroy(v9);
    }
    while ( v7 != v8 );
  }
  if ( a3 )
    a3(a4, ptr);
  else
    free(ptr);
}

