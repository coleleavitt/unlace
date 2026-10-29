void __fastcall sub_2251F50(char *a1)
{
  const __m128i *v2; // rbx
  pthread_mutex_t *v3; // rbp
  int v4; // eax
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rax
  const __m128i *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rax
  pthread_mutex_t *v12; // rbx
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rbp
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  char *v19; // rdi
  _QWORD *v20; // [rsp+8h] [rbp-30h] BYREF

  if ( !&_pthread_key_create )
  {
LABEL_13:
    v8 = *((const __m128i **)a1 + 8);
    if ( !v8 )
      goto LABEL_18;
    while ( 1 )
    {
      if ( qword_2D0ABB0 )
      {
        if ( v8[9].m128i_i8[1] )
          goto LABEL_45;
      }
      else
      {
        sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
        if ( v8[9].m128i_i8[1] )
LABEL_45:
          sub_224EB80((__m128i **)a1 + 9, v8, (__int64)v8[5].m128i_i64, (__int64)v8[7].m128i_i64);
      }
      v9 = v8[10].m128i_i64[1];
      v10 = (__int64 *)v8[10].m128i_i64[0];
      v8[9].m128i_i64[1] = 0;
      *v10 = v9;
      v11 = v8[10].m128i_i64[1];
      if ( v11 )
      {
        v8 = *((const __m128i **)a1 + 8);
        *(_QWORD *)(v11 + 160) = v10;
        if ( !v8 )
          goto LABEL_18;
      }
      else
      {
        v8 = *((const __m128i **)a1 + 8);
        if ( !v8 )
          goto LABEL_18;
      }
    }
  }
  v2 = *((const __m128i **)a1 + 8);
  if ( v2 )
  {
    while ( 1 )
    {
      if ( !qword_2D0ABB0 )
        sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
      v3 = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
      v4 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
      if ( v4 )
        break;
      if ( v2[9].m128i_i8[1] )
        sub_224EB80((__m128i **)a1 + 9, v2, (__int64)v2[5].m128i_i64, (__int64)v2[7].m128i_i64);
      v5 = v2[10].m128i_i64[1];
      v6 = (__int64 *)v2[10].m128i_i64[0];
      v2[9].m128i_i64[1] = 0;
      *v6 = v5;
      v7 = v2[10].m128i_i64[1];
      if ( v7 )
        *(_QWORD *)(v7 + 160) = v6;
      pthread_mutex_unlock(v3);
      if ( !&_pthread_key_create )
        goto LABEL_13;
      v2 = *((const __m128i **)a1 + 8);
      if ( !v2 )
        goto LABEL_18;
    }
LABEL_48:
    std::__throw_system_error(v4);
  }
LABEL_18:
  if ( *((_QWORD *)a1 + 9) != *((_QWORD *)a1 + 10) )
  {
    sub_224DC50((std::_V2 *)&v20);
    sub_22512F0(a1, v20);
    if ( v20 )
      (*(void (__fastcall **)(_QWORD *))(*v20 + 8LL))(v20);
  }
  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
  v12 = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
  if ( &_pthread_key_create )
  {
    v4 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
    if ( v4 )
      goto LABEL_48;
  }
  v13 = *((_QWORD **)a1 + 12);
  v14 = *((_QWORD *)a1 + 13);
  *v13 = v14;
  if ( v14 )
    *(_QWORD *)(v14 + 96) = v13;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v12);
  v15 = *((_QWORD **)a1 + 10);
  v16 = *((_QWORD **)a1 + 9);
  if ( v15 != v16 )
  {
    do
    {
      while ( 1 )
      {
        v17 = (_QWORD *)v16[9];
        if ( v17 != v16 + 11 )
          operator delete(v17);
        v18 = (_QWORD *)v16[5];
        if ( v18 == v16 + 7 )
          break;
        operator delete(v18);
        v16 += 13;
        if ( v15 == v16 )
          goto LABEL_34;
      }
      v16 += 13;
    }
    while ( v15 != v16 );
LABEL_34:
    v16 = *((_QWORD **)a1 + 9);
  }
  if ( v16 )
    operator delete(v16);
  v19 = *((char **)a1 + 4);
  if ( v19 != a1 + 48 )
    operator delete(v19);
  if ( *(char **)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}
