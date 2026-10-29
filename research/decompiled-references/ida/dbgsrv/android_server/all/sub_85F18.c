/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85F18
// Address: 0x0000000000085F18

//----- (0000000000085F18) ----------------------------------------------------
__int64 __fastcall sub_85F18(_QWORD *a1, char *a2, char a3)
{
  pthread_mutex_t *v6; // x19
  void **v7; // x0
  unsigned __int64 v8; // x22
  __int64 v9; // x24
  unsigned __int64 v10; // x25
  void *v11; // x8
  void **v12; // x26
  pthread_mutex_t *v13; // x0
  pthread_mutex_t *v14; // x21
  char *v15; // x1
  char *v16; // x20
  unsigned int v17; // w20
  void *ptr[3]; // [xsp+8h] [xbp-78h] BYREF
  const char *v20[2]; // [xsp+20h] [xbp-60h] BYREF

  v20[1] = *(const char **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = (pthread_mutex_t *)qword_166AA8;
  qmutex_lock((pthread_mutex_t *)qword_166AA8);
  if ( (a3 & 1) == 0 )
  {
    v7 = (void **)a1[3];
    if ( v7 )
    {
      v8 = a1[4];
      if ( v8 )
      {
        v9 = 0;
        v10 = 1;
        v11 = *v7;
        if ( *v7 )
          goto LABEL_7;
        while ( v10 < v8 )
        {
          v7 = (void **)a1[3];
          ++v10;
          v9 += 3;
          v11 = v7[v9];
          if ( v11 )
          {
LABEL_7:
            v12 = &v7[v9];
            v7[v9 + 1] = nullptr;
            qfree(v11);
            *v12 = nullptr;
            v12[2] = nullptr;
          }
        }
        v7 = (void **)a1[3];
      }
      a1[4] = 0;
      qfree(v7);
      a1[3] = 0;
      a1[5] = 0;
    }
  }
  if ( a2 )
  {
    v13 = qstrdup(a2);
    v14 = v13;
    if ( !v13 )
    {
      v17 = 0;
      goto LABEL_22;
    }
    v15 = (char *)qstrtok((char *)v13, ":", v20);
    v16 = (char *)(a1 + 3);
    while ( v15 )
    {
      if ( *v15 )
      {
        sub_39140(ptr, v15);
        sub_494CC(v16, (char *)ptr);
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          ptr[2] = nullptr;
        }
      }
      v15 = (char *)qstrtok(nullptr, ":", v20);
    }
    qfree(v14);
  }
  v17 = 1;
LABEL_22:
  qmutex_unlock(v6);
  return v17;
}
// 166AA8: using guessed type __int64 qword_166AA8;
