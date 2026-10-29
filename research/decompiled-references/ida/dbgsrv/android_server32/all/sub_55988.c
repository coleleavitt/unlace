/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55988
// Address: 0x00055988

//----- (00055988) --------------------------------------------------------
int __fastcall sub_55988(_DWORD *a1, char *a2, int a3)
{
  pthread_mutex_t *v6; // r5
  char *v7; // r7
  unsigned int v8; // r6
  int i; // r4
  void *v10; // r0
  int v11; // r7
  char *v12; // r0
  char *v13; // r6
  char *v14; // r1
  int v15; // r4
  char *v17; // [sp+4h] [bp-2Ch]
  _DWORD *v18; // [sp+10h] [bp-20h]
  unsigned int v19; // [sp+18h] [bp-18h]
  void *v20[3]; // [sp+1Ch] [bp-14h] BYREF
  const char *v21; // [sp+28h] [bp-8h] BYREF

  v6 = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  if ( !a3 )
  {
    v7 = (char *)a1[3];
    if ( v7 )
    {
      v19 = a1[4];
      if ( v19 )
      {
        v17 = a2;
        v18 = a1;
        v8 = 1;
        for ( i = 8; ; i += 12 )
        {
          v10 = *(void **)&v7[i - 8];
          if ( v10 )
          {
            *(_DWORD *)&v7[i - 4] = 0;
            qfree(v10);
            *(_DWORD *)&v7[i - 8] = 0;
            *(_DWORD *)&v7[i] = 0;
          }
          if ( v8 >= v19 )
            break;
          ++v8;
          v7 = (char *)v18[3];
        }
        a1 = v18;
        v7 = (char *)v18[3];
        a2 = v17;
      }
      a1[4] = 0;
      qfree(v7);
      a1[5] = 0;
      a1[3] = 0;
    }
  }
  v11 = 1;
  if ( a2 )
  {
    v12 = (char *)qstrdup(a2);
    v13 = v12;
    v11 = 0;
    if ( v12 )
    {
      v14 = (char *)qstrtok(v12, ":", &v21);
      v15 = (int)(a1 + 3);
      while ( v14 )
      {
        if ( *v14 )
        {
          sub_1B09C((int)v20, v14);
          sub_265B0(v15, v20);
          if ( v20[0] )
          {
            v20[1] = nullptr;
            qfree(v20[0]);
            v20[2] = nullptr;
            v20[0] = nullptr;
          }
        }
        v14 = (char *)qstrtok(nullptr, ":", &v21);
      }
      qfree(v13);
      v11 = 1;
    }
  }
  qmutex_unlock(v6);
  return v11;
}
// DE374: using guessed type int dword_DE374;
