/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004C5E0
// Address: 0x000000010004C5E0

//----- (000000010004C5E0) ----------------------------------------------------
__int64 __fastcall sub_10004C5E0(_QWORD *a1, const char *a2, int a3)
{
  unsigned int v5; // eax
  void *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // r13
  void *v10; // rdi
  char *v11; // rax
  char *v12; // r12
  void **v13; // r14
  size_t v14; // rax
  size_t v15; // r13
  size_t v16; // r15
  void *v17; // rax
  char *v19; // [rsp+8h] [rbp-68h]
  pthread_mutex_t *v20; // [rsp+10h] [rbp-60h]
  unsigned int v21; // [rsp+1Ch] [rbp-54h]
  __int128 v22; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  const char *v24; // [rsp+38h] [rbp-38h] BYREF

  v20 = (pthread_mutex_t *)qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  if ( !a3 )
  {
    v6 = (void *)a1[3];
    if ( v6 )
    {
      v7 = a1[4];
      if ( v7 )
      {
        v8 = 0;
        do
        {
          v9 = a1[3];
          v10 = *(void **)(v9 + v8);
          if ( v10 )
          {
            *(_QWORD *)(v9 + v8 + 8) = 0;
            qfree(v10);
            *(_QWORD *)(v9 + v8) = 0;
            *(_QWORD *)(v9 + v8 + 16) = 0;
          }
          v8 += 24;
          --v7;
        }
        while ( v7 );
        v6 = (void *)a1[3];
      }
      a1[4] = 0;
      qfree(v6);
      a1[3] = 0;
      a1[5] = 0;
    }
  }
  LOBYTE(v5) = 1;
  v21 = v5;
  if ( a2 )
  {
    v11 = qstrdup(a2);
    if ( v11 )
    {
      v19 = v11;
      v12 = qstrtok(v11, ":", &v24);
      v13 = (void **)(a1 + 3);
      while ( v12 )
      {
        if ( *v12 )
        {
          v22 = 0;
          v23 = 0;
          v14 = strlen(v12);
          v15 = v14;
          v16 = v14 + 1;
          if ( v14 == -1 )
          {
            v17 = nullptr;
          }
          else
          {
            v17 = qvector_reserve((__int64)&v22, nullptr, v14 + 1, 1u);
            *(_QWORD *)&v22 = v17;
          }
          *((_QWORD *)&v22 + 1) = v16;
          memmove(v17, v12, v15);
          *(_BYTE *)(v22 + v15) = 0;
          sub_100015270(v13, (char *)&v22);
          if ( (_QWORD)v22 )
          {
            *((_QWORD *)&v22 + 1) = 0;
            qfree((void *)v22);
          }
        }
        v12 = qstrtok(nullptr, ":", &v24);
      }
      qfree(v19);
    }
    else
    {
      v21 = 0;
    }
  }
  qmutex_unlock(v20);
  return v21;
}
// 10004C69C: variable 'v5' is possibly undefined
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
