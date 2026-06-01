/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_55120
// Address: 0x00055120

//----- (00055120) --------------------------------------------------------
unsigned __int8 *__fastcall sub_55120(int *a1, char *a2, int a3, int a4, char *s2, int a6)
{
  int v7; // r6
  int v8; // r7
  int i; // r6
  int v11; // r0
  const char *v12; // r0
  char *v13; // r2
  unsigned __int8 *v14; // r5
  int v15; // r0
  int v16; // r0
  int v17; // r4
  int v18; // r7
  char *v19; // r2
  pthread_mutex_t *mutex; // [sp+Ch] [bp-1Ch]
  int *v23; // [sp+10h] [bp-18h]

  mutex = (pthread_mutex_t *)dword_DE374;
  qmutex_lock((pthread_mutex_t *)dword_DE374);
  v23 = a1;
  v7 = a1[4];
  if ( 12 * v7 )
  {
    v8 = a1[3];
    for ( i = 12 * v7; i; i -= 12 )
    {
      v11 = *(_DWORD *)(v8 + 4);
      if ( s2 )
      {
        if ( v11 )
          v12 = *(const char **)v8;
        else
          v12 = &byte_B3CBE;
        if ( !strcasecmp(v12, s2) )
          s2 = nullptr;
      }
      else
      {
        if ( v11 )
          v13 = *(char **)v8;
        else
          v13 = &byte_B3CBE;
        s2 = nullptr;
        v14 = (unsigned __int8 *)qmakepath(a2, a3, v13);
        if ( a6 )
          v15 = sub_55268(v14, a3);
        else
          v15 = qfileexist((const char *)v14);
        if ( v15 )
          goto LABEL_31;
      }
      v8 += 12;
    }
  }
  v16 = v23[1];
  if ( !v16 )
  {
    get_ida_subdirs(v23, "idc", 0);
    v16 = v23[1];
  }
  if ( 12 * v16 )
  {
    v17 = *v23;
    v18 = 12 * v16;
    while ( 1 )
    {
      v19 = &byte_B3CBE;
      if ( *(_DWORD *)(v17 + 4) )
        v19 = *(char **)v17;
      v14 = (unsigned __int8 *)qmakepath(a2, a3, v19);
      if ( a6 ? sub_55268(v14, a3) : qfileexist((const char *)v14) )
        break;
      v18 -= 12;
      v17 += 12;
      if ( !v18 )
        goto LABEL_30;
    }
  }
  else
  {
LABEL_30:
    v14 = (unsigned __int8 *)getsysfile(a2, a3, a4, nullptr);
  }
LABEL_31:
  qmutex_unlock(mutex);
  return v14;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE374: using guessed type int dword_DE374;
