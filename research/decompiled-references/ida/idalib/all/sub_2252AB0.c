void sub_2252AB0()
{
  __int64 *v0; // rax
  __int64 v1; // r14
  __m128i si128; // xmm0
  int v3; // ecx
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rax
  void *v8; // rbp
  __int64 *v9; // rdx
  __int64 *v10; // rdx
  char *v11; // rdi
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rbx
  char *v15; // rdi
  int v16; // eax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // r15
  __int64 v20; // r12
  pthread_mutex_t *v21; // r13
  int v22; // eax
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  void *v26; // rdi
  void *v27; // rdi
  __int64 v28; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  __int64 v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+28h] [rbp-50h]
  __int64 *v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v0 = **(__int64 ***)__tls_get_addr(&std::__once_callable);
  v1 = *v0;
  if ( *(_BYTE *)(*v0 + 816) )
  {
    v3 = *(_DWORD *)(v1 + 800);
    v4 = *(__int64 **)(v1 + 792);
    *(_BYTE *)(v1 + 816) = 0;
    sub_2252280(v33, v4, v3 == 0);
    v5 = v33[0];
    sub_2252280(v33, (__int64 *)(*(_QWORD *)(v1 + 792) + 8LL * *(unsigned int *)(v1 + 800)), 1);
    v6 = v33[0];
    if ( v5 != v33[0] )
    {
      v7 = *v5;
      do
      {
        while ( 1 )
        {
          v8 = *(void **)(v7 + 8);
          if ( v8 )
          {
            sub_2251F50(*(char **)(v7 + 8));
            operator delete(v8, 0x70u);
          }
          v7 = v5[1];
          v9 = v5 + 1;
          if ( !v7 || v7 == -8 )
            break;
          ++v5;
          if ( v9 == v6 )
            goto LABEL_13;
        }
        v10 = v5 + 2;
        do
        {
          do
          {
            v7 = *v10;
            v5 = v10++;
          }
          while ( !v7 );
        }
        while ( v7 == -8 );
      }
      while ( v5 != v6 );
    }
LABEL_13:
    v11 = *(char **)(v1 + 792);
    if ( *(_DWORD *)(v1 + 804) )
    {
      v12 = *(_DWORD *)(v1 + 800);
      if ( v12 )
      {
        v31 = v1;
        v13 = 0;
        v29 = 8LL * (unsigned int)(v12 - 1) + 8;
        do
        {
          v14 = *(_QWORD *)&v11[v13];
          if ( v14 != -8 && v14 )
          {
            v15 = *(char **)(v14 + 16);
            v30 = *(_QWORD *)v14 + 41LL;
            if ( *(_DWORD *)(v14 + 28) )
            {
              v16 = *(_DWORD *)(v14 + 24);
              if ( v16 )
              {
                v32 = v13;
                v17 = 0;
                v28 = 8LL * (unsigned int)(v16 - 1) + 8;
                do
                {
                  v18 = *(_QWORD *)&v15[v17];
                  if ( v18 && v18 != -8 )
                  {
                    v19 = *(_QWORD *)(v18 + 160);
                    v20 = *(_QWORD *)v18 + 185LL;
                    if ( v19 )
                    {
                      if ( !qword_2D0ABB0 )
                        sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
                      v21 = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
                      if ( &_pthread_key_create )
                      {
                        v22 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
                        if ( v22 )
                          std::__throw_system_error(v22);
                      }
                      if ( *(_BYTE *)(v18 + 153) )
                        sub_224EB80((__m128i **)(v19 + 72), (const __m128i *)(v18 + 8), v18 + 88, v18 + 120);
                      v23 = *(_QWORD *)(v18 + 176);
                      v24 = *(_QWORD **)(v18 + 168);
                      *(_QWORD *)(v18 + 160) = 0;
                      *v24 = v23;
                      v25 = *(_QWORD *)(v18 + 176);
                      if ( v25 )
                        *(_QWORD *)(v25 + 160) = v24;
                      if ( &_pthread_key_create )
                        pthread_mutex_unlock(v21);
                    }
                    v26 = *(void **)(v18 + 120);
                    if ( v26 != (void *)(v18 + 136) )
                      operator delete(v26);
                    v27 = *(void **)(v18 + 88);
                    if ( v27 != (void *)(v18 + 104) )
                      operator delete(v27);
                    operator delete(v18, v20, 8);
                    v15 = *(char **)(v14 + 16);
                  }
                  v17 += 8;
                }
                while ( v17 != v28 );
                v13 = v32;
              }
            }
            free(v15);
            operator delete(v14, v30, 8);
            v11 = *(char **)(v31 + 792);
          }
          v13 += 8;
        }
        while ( v29 != v13 );
        v1 = v31;
      }
    }
    free(v11);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9B50);
  *(_BYTE *)(v1 + 816) = 1;
  *(_QWORD *)(v1 + 792) = 0;
  *(__m128i *)(v1 + 800) = si128;
}
