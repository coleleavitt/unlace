/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idc_func
// Address: 0x00054EF0

//----- (00054EF0) --------------------------------------------------------
char **__cdecl del_idc_func(char *s2)
{
  pthread_mutex_t *v1; // edi
  int v2; // esi
  int v3; // edi
  char **v5; // eax
  _DWORD *v6; // eax
  char **v7; // [esp+Ch] [ebp-20h]
  char **v8; // [esp+Ch] [ebp-20h]
  pthread_mutex_t *v9; // [esp+10h] [ebp-1Ch]
  int v10; // [esp+14h] [ebp-18h]
  int *v11; // [esp+18h] [ebp-14h]

  if ( !s2 )
    return nullptr;
  v1 = (pthread_mutex_t *)dword_13BD5C;
  qmutex_lock((pthread_mutex_t *)dword_13BD5C);
  if ( !byte_13BD7C && _cxa_guard_acquire((__guard *)&byte_13BD7C) )
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
  }
  v7 = nullptr;
  v11 = off_13B614;
  if ( off_13B614 )
  {
    v9 = v1;
    v10 = dword_13BD78;
    v8 = off_13B618;
    v2 = 0;
    v3 = 0;
    while ( strcmp(v8[v3], s2) )
    {
      v3 += 6;
      if ( ++v2 >= (unsigned int)v11 )
        goto LABEL_11;
    }
    if ( !&v8[v3] || (unsigned int)(-1431655765 * ((v3 * 4) >> 3)) < *(_DWORD *)(v10 + 24) )
    {
LABEL_11:
      v7 = nullptr;
      goto LABEL_12;
    }
    v5 = v8;
    v8[v3 + 1] = nullptr;
    LOBYTE(v5) = 1;
    v7 = v5;
LABEL_12:
    v1 = v9;
  }
  qmutex_unlock(v1);
  return v7;
}
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
// 13BD5C: using guessed type int dword_13BD5C;
// 13BD78: using guessed type int dword_13BD78;
// 13BD7C: using guessed type char byte_13BD7C;
