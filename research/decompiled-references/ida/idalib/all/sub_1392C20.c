void __fastcall sub_1392C20(unsigned int *a1)
{
  int v2; // eax
  __int64 *v3; // r14
  __int64 *v4; // rbp
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  char *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rbp
  _QWORD *v13; // rax
  __int64 *v14[4]; // [rsp+0h] [rbp-58h] BYREF
  __int16 v15; // [rsp+20h] [rbp-38h]

  if ( &_pthread_key_create )
  {
    v2 = pthread_mutex_lock((pthread_mutex_t *)a1);
    if ( v2 )
      std::__throw_system_error(v2);
  }
  sub_A45C10(v14, *((__int64 **)a1 + 5), a1[12] == 0);
  v3 = v14[0];
  sub_A45C10(v14, (__int64 *)(*((_QWORD *)a1 + 5) + 8LL * a1[12]), 1);
  v4 = v14[0];
  if ( v3 != v14[0] )
  {
    v5 = *v3;
    do
    {
      while ( 1 )
      {
        v6 = *(__int64 **)v5;
        v14[0] = (__int64 *)(v5 + 8);
        v14[1] = v6;
        v15 = 261;
        sub_228BF70(v14, 1);
        v5 = v3[1];
        v7 = v3 + 1;
        if ( v5 == -8 || !v5 )
          break;
        ++v3;
        if ( v4 == v7 )
          goto LABEL_11;
      }
      v8 = v3 + 2;
      do
      {
        do
        {
          v5 = *v8;
          v3 = v8++;
        }
        while ( !v5 );
      }
      while ( v5 == -8 );
    }
    while ( v4 != v3 );
  }
LABEL_11:
  if ( &_pthread_key_create )
    pthread_mutex_unlock((pthread_mutex_t *)a1);
  v9 = *((char **)a1 + 5);
  if ( a1[13] )
  {
    v10 = a1[12];
    if ( v10 )
    {
      v11 = 0;
      v12 = 8LL * (v10 - 1) + 8;
      do
      {
        v13 = *(_QWORD **)&v9[v11];
        if ( v13 && v13 != (_QWORD *)-8LL )
        {
          operator delete(*(_QWORD *)&v9[v11], *v13 + 9LL, 8);
          v9 = *((char **)a1 + 5);
        }
        v11 += 8;
      }
      while ( v12 != v11 );
    }
  }
  free(v9);
}
