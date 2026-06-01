/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qatexit
// Address: 0x000B1130

//----- (000B1130) --------------------------------------------------------
bool __cdecl qatexit(int a1)
{
  pthread_mutex_t *v1; // eax
  char **v2; // edi
  char *v3; // ecx
  int v4; // edx
  char *v5; // eax
  unsigned int v6; // ecx
  char *v7; // eax
  char *v9; // [esp+14h] [ebp-18h]
  pthread_mutex_t *v10; // [esp+18h] [ebp-14h]

  v1 = (pthread_mutex_t *)dword_13E348;
  if ( !dword_13E348 )
  {
    v1 = qmutex_create();
    dword_13E348 = (int)v1;
    if ( !v1 )
    {
      if ( !(_BYTE)under_debugger )
        interr(547);
      BUG();
    }
  }
  v10 = v1;
  qmutex_lock(v1);
  v2 = (char **)dword_13E350;
  if ( !dword_13E350 )
  {
    v2 = (char **)qalloc_or_throw(12);
    *v2 = nullptr;
    v2[1] = nullptr;
    v2[2] = nullptr;
    *((_DWORD *)&qword_13ACD8 + 3486) = v2;
  }
  v3 = v2[1];
  v9 = &(*v2)[4 * (_DWORD)v3];
  v4 = 4 * (_DWORD)v3;
  v5 = *v2;
  if ( 4 * (_DWORD)v3 )
  {
    v5 = *v2;
    while ( *(_DWORD *)v5 != a1 )
    {
      v5 += 4;
      v4 -= 4;
      if ( !v4 )
        goto LABEL_11;
    }
  }
  if ( v5 == v9 )
  {
LABEL_11:
    v6 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v2[2] < v6 )
    {
      v7 = (char *)qvector_reserve((int)v2, *v2, v6, 4u);
      *v2 = v7;
      v9 = &v7[4 * (_DWORD)v2[1]];
    }
    *(_DWORD *)v9 = a1;
    ++v2[1];
  }
  return qmutex_unlock(v10);
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13E348: using guessed type int dword_13E348;
// 13E34C: using guessed type int under_debugger;
// 13E350: using guessed type int dword_13E350;
