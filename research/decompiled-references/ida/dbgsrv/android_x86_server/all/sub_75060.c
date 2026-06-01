/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75060
// Address: 0x00075060

//----- (00075060) --------------------------------------------------------
int __cdecl sub_75060(_DWORD *a1, char *s, char a3)
{
  _DWORD *v3; // edi
  int v4; // ecx
  char *v5; // esi
  unsigned int v6; // ecx
  int i; // edi
  void *v8; // eax
  char *v9; // eax
  char *j; // eax
  pthread_mutex_t *v12; // [esp+18h] [ebp-34h]
  unsigned int v13; // [esp+1Ch] [ebp-30h]
  int v14; // [esp+1Ch] [ebp-30h]
  unsigned int v15; // [esp+20h] [ebp-2Ch]
  char *v16; // [esp+20h] [ebp-2Ch]
  int v17[3]; // [esp+28h] [ebp-24h] BYREF
  int v18[6]; // [esp+34h] [ebp-18h] BYREF

  v3 = a1;
  v18[1] = __readgsdword(0x14u);
  v12 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  if ( !a3 )
  {
    v5 = (char *)a1[3];
    if ( v5 )
    {
      v15 = a1[4];
      if ( v15 )
      {
        v6 = 1;
        for ( i = 0; ; i += 12 )
        {
          v8 = *(void **)&v5[i];
          if ( v8 )
          {
            v13 = v6;
            *(_DWORD *)&v5[i + 4] = 0;
            qfree(v8);
            *(_DWORD *)&v5[i] = 0;
            *(_DWORD *)&v5[i + 8] = 0;
            v6 = v13;
          }
          if ( v6 >= v15 )
            break;
          v5 = (char *)a1[3];
          ++v6;
        }
        v3 = a1;
        v5 = (char *)a1[3];
      }
      v3[4] = 0;
      qfree(v5);
      v3[3] = 0;
      v3[5] = 0;
    }
  }
  LOBYTE(v4) = 1;
  v14 = v4;
  if ( s )
  {
    v9 = (char *)qstrdup(s);
    if ( v9 )
    {
      v16 = v9;
      for ( j = (char *)qstrtok(v9, ":", (const char **)v18); j; j = (char *)qstrtok(nullptr, ":", (const char **)v18) )
      {
        if ( *j )
        {
          sub_1B530((int)v17, j);
          sub_2DAC0((int)(v3 + 3), (char *)v17);
          if ( v17[0] )
          {
            v17[1] = 0;
            qfree((void *)v17[0]);
            v17[0] = 0;
            v17[2] = 0;
          }
        }
      }
      qfree(v16);
    }
    else
    {
      v14 = 0;
    }
  }
  qmutex_unlock(v12);
  return v14;
}
// 7512A: variable 'v4' is possibly undefined
// 13BD5C: using guessed type int dword_13BD5C;
