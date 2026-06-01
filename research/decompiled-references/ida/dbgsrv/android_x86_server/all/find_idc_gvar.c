/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: find_idc_gvar
// Address: 0x00053240

//----- (00053240) --------------------------------------------------------
int __cdecl find_idc_gvar(char *s2)
{
  int v1; // edi
  int v2; // esi
  int v3; // edi
  int v4; // esi
  const char *v5; // eax
  _DWORD *v6; // eax
  pthread_mutex_t *v8; // [esp+14h] [ebp-18h]

  if ( byte_13BD7C || !_cxa_guard_acquire((__guard *)&byte_13BD7C) )
  {
    if ( !s2 )
      return 0;
  }
  else
  {
    v6 = operator new(0x48u);
    v6[1] = 0;
    *v6 = 0;
    v6[3] = 0;
    v6[2] = 0;
    v6[5] = 0;
    v6[4] = 0;
    v6[7] = 0;
    v6[6] = 0;
    v6[9] = 0;
    v6[8] = 0;
    v6[11] = 0;
    v6[10] = 0;
    v6[13] = 0;
    v6[12] = 0;
    v6[15] = 0;
    v6[14] = 0;
    *(_DWORD *)((char *)v6 + 65) = 0;
    *(_DWORD *)((char *)v6 + 61) = 0;
    dword_13BD78 = (int)v6;
    _cxa_guard_release((__guard *)&byte_13BD7C);
    if ( !s2 )
      return 0;
  }
  v1 = dword_13BD78;
  v8 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  v2 = *(_DWORD *)(v1 + 52);
  if ( (v2 & 0x7FFFFFF) != 0 )
  {
    v3 = *(_DWORD *)(v1 + 48) + 12;
    v4 = 32 * v2;
    while ( 1 )
    {
      v5 = byte_EF875;
      if ( *(_DWORD *)(v3 - 8) )
        v5 = *(const char **)(v3 - 12);
      if ( !strcmp(v5, s2) )
        break;
      v3 += 32;
      v4 -= 32;
      if ( !v4 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    v3 = 0;
  }
  qmutex_unlock(v8);
  return v3;
}
// 13BD5C: using guessed type int dword_13BD5C;
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
