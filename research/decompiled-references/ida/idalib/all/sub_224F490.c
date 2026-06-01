void __fastcall sub_224F490(const __m128i *a1)
{
  __int64 v2; // r12
  pthread_mutex_t *v3; // rbp
  int v4; // eax
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  __m128i *v8; // rdi
  __m128i *v9; // rdi

  v2 = a1[9].m128i_i64[1];
  if ( v2 )
  {
    if ( !qword_2D0ABB0 )
      sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
    v3 = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
    if ( &_pthread_key_create )
    {
      v4 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
      if ( v4 )
        std::__throw_system_error(v4);
    }
    if ( a1[9].m128i_i8[1] )
      sub_224EB80((__m128i **)(v2 + 72), a1, (__int64)a1[5].m128i_i64, (__int64)a1[7].m128i_i64);
    v5 = a1[10].m128i_i64[1];
    v6 = (__int64 *)a1[10].m128i_i64[0];
    a1[9].m128i_i64[1] = 0;
    *v6 = v5;
    v7 = a1[10].m128i_i64[1];
    if ( v7 )
      *(_QWORD *)(v7 + 160) = v6;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v3);
  }
  v8 = (__m128i *)a1[7].m128i_i64[0];
  if ( v8 != &a1[8] )
    operator delete(v8);
  v9 = (__m128i *)a1[5].m128i_i64[0];
  if ( v9 != &a1[6] )
    operator delete(v9);
}
