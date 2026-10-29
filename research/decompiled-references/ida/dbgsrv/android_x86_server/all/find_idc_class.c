/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_class
// Address: 0x00053940

//----- (00053940) --------------------------------------------------------
int __cdecl find_idc_class(char *s2)
{
  int v1; // esi
  int v2; // edi
  int v3; // esi
  const char *v4; // eax
  _DWORD *v5; // eax
  pthread_mutex_t *v7; // [esp+Ch] [ebp-20h]
  int v8; // [esp+14h] [ebp-18h]
  unsigned int v9; // [esp+18h] [ebp-14h]

  if ( byte_13BD7C || !_cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    if ( !s2 )
      return 0;
  }
  else
  {
    v5 = operator new(0x48u);
    v5[1] = 0;
    *v5 = 0;
    v5[3] = 0;
    v5[2] = 0;
    v5[5] = 0;
    v5[4] = 0;
    v5[7] = 0;
    v5[6] = 0;
    v5[9] = 0;
    v5[8] = 0;
    v5[11] = 0;
    v5[10] = 0;
    v5[13] = 0;
    v5[12] = 0;
    v5[15] = 0;
    v5[14] = 0;
    *(_DWORD *)((char *)v5 + 65) = 0;
    *(_DWORD *)((char *)v5 + 61) = 0;
    dword_13BD78 = (int)v5;
    _cxa_guard_release((__guard *)&byte_13BD7C);
    if ( !s2 )
      return 0;
  }
  v1 = dword_13BD78;
  v7 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v9 = *(_DWORD *)(v1 + 40);
  if ( v9 )
  {
    v8 = *(_DWORD *)(v1 + 36);
    v2 = 0;
    while ( 1 )
    {
      v3 = *(_DWORD *)(v8 + 4 * v2);
      v4 = byte_EF875;
      if ( *(_DWORD *)(v3 + 24) )
        v4 = *(const char **)(v3 + 20);
      if ( !strcmp(v4, s2) )
        break;
      if ( ++v2 >= v9 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v3 = 0;
  }
  qmutex_unlock(v7);
  return v3;
}
// 13BD5C: using guessed type int dword_13BD5C;
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
