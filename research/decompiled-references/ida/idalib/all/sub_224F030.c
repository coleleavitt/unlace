char *__fastcall sub_224F030(_QWORD *a1, __int64 a2, const char *a3)
{
  int v5; // eax
  __int64 v6; // r13
  __int64 v7; // r14
  _WORD *v8; // rdx
  size_t v9; // rax
  void *v10; // rdi
  _WORD *v11; // rdx
  _WORD *v12; // rdx
  __int64 v13; // rax
  double v14; // xmm0_8
  _QWORD *v15; // r13
  _QWORD *v16; // r12
  char *v17; // rbx
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  _WORD *v22; // rdx
  __int64 v23; // rdx
  size_t v24; // [rsp+0h] [rbp-48h]
  pthread_mutex_t *mutex; // [rsp+8h] [rbp-40h]

  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
  mutex = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
  if ( &_pthread_key_create )
  {
    v5 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
    if ( v5 )
      std::__throw_system_error(v5);
  }
  sub_224EE70((__int64)a1, 0);
  v6 = a1[10];
  if ( a1[9] == v6 )
  {
    v17 = (char *)a3;
    goto LABEL_30;
  }
  v7 = a1[9];
  if ( a3 )
    goto LABEL_14;
  while ( 1 )
  {
    sub_224E910(a1, a2, v7, ".wall", *(double *)v7);
    v11 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v11 <= 1u )
    {
      sub_227BF10(a2, ",\n", 2);
    }
    else
    {
      *v11 = 2604;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    sub_224E910(a1, a2, v7, ".user", *(double *)(v7 + 8));
    v8 = *(_WORD **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v8 > 1u )
    {
      *v8 = 2604;
      *(_QWORD *)(a2 + 32) += 2LL;
    }
    else
    {
      sub_227BF10(a2, ",\n", 2);
    }
    sub_224E910(a1, a2, v7, ".sys", *(double *)(v7 + 16));
    if ( *(_QWORD *)(v7 + 24) )
    {
      v22 = *(_WORD **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v22 > 1u )
      {
        *v22 = 2604;
        *(_QWORD *)(a2 + 32) += 2LL;
      }
      else
      {
        sub_227BF10(a2, ",\n", 2);
      }
      sub_224E910(a1, a2, v7, ".mem", (double)(int)*(_QWORD *)(v7 + 24));
    }
    if ( *(_QWORD *)(v7 + 32) )
      break;
    v7 += 104;
    a3 = ",\n";
    if ( v6 == v7 )
      goto LABEL_23;
LABEL_14:
    v9 = strlen(a3);
    v10 = *(void **)(a2 + 32);
    if ( v9 <= *(_QWORD *)(a2 + 24) - (_QWORD)v10 )
    {
      if ( v9 )
      {
        v24 = v9;
        memcpy(v10, a3, v9);
        *(_QWORD *)(a2 + 32) += v24;
      }
    }
    else
    {
      sub_227BF10(a2, a3, v9);
    }
  }
  v12 = *(_WORD **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v12 > 1u )
  {
    *v12 = 2604;
    *(_QWORD *)(a2 + 32) += 2LL;
  }
  else
  {
    sub_227BF10(a2, ",\n", 2);
  }
  v13 = *(_QWORD *)(v7 + 32);
  if ( v13 < 0 )
  {
    v23 = *(_QWORD *)(v7 + 32) & 1LL | (*(_QWORD *)(v7 + 32) >> 1);
    v14 = (double)(int)v23 + (double)(int)v23;
  }
  else
  {
    v14 = (double)(int)v13;
  }
  sub_224E910(a1, a2, v7, ".instr", v14);
  v7 += 104;
  a3 = ",\n";
  if ( v6 != v7 )
    goto LABEL_14;
LABEL_23:
  v15 = (_QWORD *)a1[9];
  v16 = (_QWORD *)a1[10];
  v17 = ",\n";
  if ( v16 != v15 )
  {
    v18 = (_QWORD *)a1[9];
    do
    {
      while ( 1 )
      {
        v19 = (_QWORD *)v18[9];
        if ( v19 != v18 + 11 )
          operator delete(v19);
        v20 = (_QWORD *)v18[5];
        if ( v20 == v18 + 7 )
          break;
        operator delete(v20);
        v18 += 13;
        if ( v16 == v18 )
          goto LABEL_29;
      }
      v18 += 13;
    }
    while ( v18 != v16 );
LABEL_29:
    a1[10] = v15;
    v17 = ",\n";
  }
LABEL_30:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(mutex);
  return v17;
}
