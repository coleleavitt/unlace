/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qatexit
// Address: 0x0007EBF8

//----- (0007EBF8) --------------------------------------------------------
bool __fastcall qatexit(int a1)
{
  pthread_mutex_t *v2; // r0
  char **v3; // r6
  char *v4; // r2
  char *v5; // r0
  char *v6; // r3
  int v7; // r7
  unsigned int v8; // r2
  char *v9; // r0
  pthread_mutex_t *mutex; // [sp+0h] [bp-4h]

  v2 = (pthread_mutex_t *)dword_E054C;
  if ( !dword_E054C )
  {
    v2 = qmutex_create();
    dword_E054C = (int)v2;
    if ( !v2 )
    {
      if ( !under_debugger )
        interr(547);
      __debugbreak();
    }
  }
  mutex = v2;
  qmutex_lock(v2);
  v3 = (char **)dword_E0554;
  if ( !dword_E0554 )
  {
    v3 = (char **)qalloc_or_throw(12);
    *v3 = nullptr;
    v3[1] = nullptr;
    v3[2] = nullptr;
    dword_E0554 = (int)v3;
  }
  v4 = v3[1];
  v5 = &(*v3)[4 * (_DWORD)v4];
  v6 = *v3;
  if ( 4 * (_DWORD)v4 )
  {
    v7 = 4 * (_DWORD)v4;
    v6 = *v3;
    while ( *(_DWORD *)v6 != a1 )
    {
      v7 -= 4;
      v6 += 4;
      if ( !v7 )
        goto LABEL_11;
    }
  }
  if ( v6 == v5 )
  {
LABEL_11:
    v8 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v3[2] < v8 )
    {
      v9 = (char *)qvector_reserve((int)v3, *v3, v8, 4u);
      *v3 = v9;
      v5 = &v9[4 * (_DWORD)v3[1]];
    }
    *(_DWORD *)v5 = a1;
    ++v3[1];
  }
  return qmutex_unlock(mutex);
}
// E054C: using guessed type int dword_E054C;
// E0550: using guessed type char under_debugger;
// E0554: using guessed type int dword_E0554;
