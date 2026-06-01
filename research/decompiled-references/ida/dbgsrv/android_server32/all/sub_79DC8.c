/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_79DC8
// Address: 0x00079DC8

//----- (00079DC8) --------------------------------------------------------
char *sub_79DC8()
{
  __uid_t v0; // r0
  struct passwd *v1; // r0
  char *pw_gecos; // r5
  size_t v3; // r0
  size_t v4; // r2
  void *v5; // r1
  unsigned int v6; // r3
  void *v7; // r0
  char *v8; // r1
  size_t v9; // r5
  char *v10; // r4
  unsigned int v12; // [sp+4h] [bp-10h]
  size_t v13; // [sp+8h] [bp-Ch]
  pthread_mutex_t *mutex; // [sp+Ch] [bp-8h] BYREF

  sub_80634(&mutex);
  if ( (unsigned int)dword_DF514 <= 1 )
  {
    qgetenv("HOME", (int)&dword_DF510);
    if ( (unsigned int)dword_DF514 <= 1 )
    {
      v0 = getuid();
      v1 = getpwuid(v0);
      if ( v1 )
      {
        pw_gecos = v1->pw_gecos;
        if ( !pw_gecos || (v3 = strlen(v1->pw_gecos)) == 0 )
        {
          dword_DF514 = 0;
          v10 = &byte_B3CBE;
          goto LABEL_11;
        }
        v4 = v3;
        v5 = (void *)dword_DF510;
        v6 = v3 + 1;
        if ( dword_DF518 < v3 + 1 )
        {
          v13 = v3;
          v12 = v3 + 1;
          v5 = qvector_reserve((int)&dword_DF510, (void *)dword_DF510, v6, 1u);
          dword_DF510 = (int)v5;
          v4 = v13;
          v6 = v12;
        }
        dword_DF514 = v6;
        v7 = v5;
        v8 = pw_gecos;
        v9 = v4;
        memmove(v7, v8, v4);
        *(_BYTE *)(dword_DF510 + v9) = 0;
      }
      if ( !dword_DF514 )
      {
        v10 = &byte_B3CBE;
        goto LABEL_11;
      }
    }
  }
  v10 = (char *)dword_DF510;
LABEL_11:
  qmutex_unlock(mutex);
  return v10;
}
// B3CBE: using guessed type char byte_B3CBE;
// DF510: using guessed type int dword_DF510;
// DF514: using guessed type int dword_DF514;
// DF518: using guessed type int dword_DF518;
