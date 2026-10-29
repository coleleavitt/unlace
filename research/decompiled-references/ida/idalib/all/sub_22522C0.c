void __fastcall sub_22522C0(__int64 **a1)
{
  __int64 **v1; // r15
  __int64 *v2; // rax
  bool v3; // zf
  __int64 **v4; // rdi
  __int64 *v5; // rax
  __int64 **v6; // rdi
  __int64 *v7; // rax
  __int64 **v8; // rdi
  __int64 **v9; // rdi
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // rax
  void *v13; // rbp
  __int64 *v14; // rdx
  __int64 *v15; // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // r15
  char *v19; // rdi
  int v20; // eax
  __int64 v21; // r13
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r10
  __int64 v25; // rbp
  pthread_mutex_t *v26; // r12
  int v27; // eax
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // rax
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-70h]
  __int64 v34; // [rsp+8h] [rbp-68h]
  __int64 **v35; // [rsp+10h] [rbp-60h]
  __int64 v36; // [rsp+18h] [rbp-58h]
  __int64 v37; // [rsp+18h] [rbp-58h]
  __int64 v38; // [rsp+20h] [rbp-50h]
  __int64 *v39[8]; // [rsp+30h] [rbp-40h] BYREF

  if ( !a1 )
    return;
  v1 = a1;
  if ( *((_BYTE *)a1 + 816) )
  {
    sub_2252280(v39, a1[99], *((_DWORD *)a1 + 200) == 0);
    v10 = v39[0];
    sub_2252280(v39, &a1[99][*((unsigned int *)a1 + 200)], 1);
    v11 = v39[0];
    if ( v10 != v39[0] )
    {
      v12 = *v10;
      do
      {
        v13 = *(void **)(v12 + 8);
        if ( v13 )
        {
          sub_2251F50(*(char **)(v12 + 8));
          operator delete(v13, 0x70u);
        }
        v12 = v10[1];
        if ( v12 && v12 != -8 )
        {
          ++v10;
        }
        else
        {
          v14 = v10 + 2;
          do
          {
            do
            {
              v12 = *v14;
              v10 = v14++;
            }
            while ( !v12 );
          }
          while ( v12 == -8 );
        }
      }
      while ( v11 != v10 );
    }
    v15 = a1[99];
    if ( *((_DWORD *)v1 + 201) )
    {
      v16 = *((_DWORD *)v1 + 200);
      if ( v16 )
      {
        v35 = v1;
        v17 = 0;
        v33 = 8LL * (unsigned int)(v16 - 1) + 8;
        do
        {
          v18 = *(__int64 *)((char *)v15 + v17);
          if ( v18 != -8 && v18 )
          {
            v19 = *(char **)(v18 + 16);
            v34 = *(_QWORD *)v18 + 41LL;
            if ( *(_DWORD *)(v18 + 28) )
            {
              v20 = *(_DWORD *)(v18 + 24);
              if ( v20 )
              {
                v38 = v17;
                v21 = 8LL * (unsigned int)(v20 - 1) + 8;
                v22 = 0;
                do
                {
                  v23 = *(_QWORD *)&v19[v22];
                  if ( v23 != -8 && v23 )
                  {
                    v24 = *(_QWORD *)(v23 + 160);
                    v25 = *(_QWORD *)v23 + 185LL;
                    if ( v24 )
                    {
                      if ( !qword_2D0ABB0 )
                      {
                        v37 = *(_QWORD *)(v23 + 160);
                        sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
                        v24 = v37;
                      }
                      v26 = (pthread_mutex_t *)(qword_2D0ABB0 + 616);
                      if ( &_pthread_key_create )
                      {
                        v36 = v24;
                        v27 = pthread_mutex_lock((pthread_mutex_t *)(qword_2D0ABB0 + 616));
                        v24 = v36;
                        if ( v27 )
                          std::__throw_system_error(v27);
                      }
                      if ( *(_BYTE *)(v23 + 153) )
                        sub_224EB80((__m128i **)(v24 + 72), (const __m128i *)(v23 + 8), v23 + 88, v23 + 120);
                      v28 = *(_QWORD *)(v23 + 176);
                      v29 = *(_QWORD **)(v23 + 168);
                      *(_QWORD *)(v23 + 160) = 0;
                      *v29 = v28;
                      v30 = *(_QWORD *)(v23 + 176);
                      if ( v30 )
                        *(_QWORD *)(v30 + 160) = v29;
                      if ( &_pthread_key_create )
                        pthread_mutex_unlock(v26);
                    }
                    v31 = *(void **)(v23 + 120);
                    if ( v31 != (void *)(v23 + 136) )
                      operator delete(v31);
                    v32 = *(void **)(v23 + 88);
                    if ( v32 != (void *)(v23 + 104) )
                      operator delete(v32);
                    operator delete(v23, v25, 8);
                    v19 = *(char **)(v18 + 16);
                  }
                  v22 += 8;
                }
                while ( v21 != v22 );
                v17 = v38;
              }
            }
            free(v19);
            operator delete(v18, v34, 8);
            v15 = v35[99];
          }
          v17 += 8;
        }
        while ( v33 != v17 );
        v1 = v35;
      }
    }
    free(v15);
  }
  sub_22361D0((void **)v1 + 97);
  sub_2251F50((char *)v1 + 664);
  v1[54] = (__int64 *)off_2C75848;
  v2 = v1[75];
  if ( v2 )
    ((void (__fastcall *)(__int64 **, __int64 **, __int64))v2)(v1 + 73, v1 + 73, 3);
  v3 = *((_BYTE *)v1 + 540) == 0;
  v1[54] = (__int64 *)&off_2C758B0;
  if ( v3 )
    free(v1[65]);
  v4 = (__int64 **)v1[62];
  if ( v4 != v1 + 64 )
    free(v4);
  v1[31] = (__int64 *)off_2C75848;
  v5 = v1[52];
  if ( v5 )
    ((void (__fastcall *)(__int64 **, __int64 **, __int64))v5)(v1 + 50, v1 + 50, 3);
  v3 = *((_BYTE *)v1 + 356) == 0;
  v1[31] = (__int64 *)&off_2C758B0;
  if ( v3 )
    free(v1[42]);
  v6 = (__int64 **)v1[39];
  if ( v6 != v1 + 41 )
    free(v6);
  v1[4] = (__int64 *)off_2C75E48;
  v7 = v1[29];
  if ( v7 )
    ((void (__fastcall *)(__int64 **, __int64 **, __int64))v7)(v1 + 27, v1 + 27, 3);
  v8 = (__int64 **)v1[21];
  v1[20] = (__int64 *)off_2C712B0;
  if ( v8 != v1 + 23 )
    operator delete(v8);
  v3 = *((_BYTE *)v1 + 140) == 0;
  v1[4] = (__int64 *)&off_2C758B0;
  if ( v3 )
  {
    free(v1[15]);
    v9 = (__int64 **)v1[12];
    if ( v9 == v1 + 14 )
      goto LABEL_22;
    goto LABEL_21;
  }
  v9 = (__int64 **)v1[12];
  if ( v9 != v1 + 14 )
LABEL_21:
    free(v9);
LABEL_22:
  if ( *v1 != (__int64 *)(v1 + 2) )
    operator delete(*v1);
  operator delete(v1, 0x338u);
}
