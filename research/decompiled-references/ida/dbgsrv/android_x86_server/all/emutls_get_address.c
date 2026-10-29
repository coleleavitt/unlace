/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emutls_get_address
// Address: 0x000DC3EC

//----- (000DC3EC) --------------------------------------------------------
_DWORD *__cdecl _emutls_get_address(unsigned int *a1)
{
  _DWORD *result; // eax
  char *v2; // eax
  char *v3; // esi
  char *v4; // eax
  unsigned int v5; // edi
  int v6; // ecx
  char *v7; // eax
  char *v8; // esi
  int v9; // [esp+0h] [ebp-20h]
  unsigned int v10; // [esp+4h] [ebp-1Ch]

  if ( !&pthread_create )
  {
    if ( !a1[2] )
      a1[2] = (unsigned int)sub_DC333(a1);
    return (_DWORD *)a1[2];
  }
  v10 = a1[2];
  if ( !v10 )
  {
    pthread_once(&dword_13E70C, (void (*)(void))sub_DC287);
    pthread_mutex_lock((pthread_mutex_t *)&dword_13E71C);
    v10 = a1[2];
    if ( !v10 )
    {
      v10 = dword_13E710 + 1;
      dword_13E710 = v10;
      a1[2] = v10;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&dword_13E71C);
  }
  v2 = (char *)pthread_getspecific(dword_13E718);
  v3 = v2;
  if ( v2 )
  {
    v5 = *((_DWORD *)v2 + 1);
    if ( v10 <= v5 )
      goto LABEL_19;
    v6 = v10 + 32;
    if ( v10 <= 2 * v5 )
      v6 = 2 * v5;
    v9 = v6;
    v7 = (char *)realloc(v2, 4 * v6 + 8);
    v3 = v7;
    if ( !v7 )
LABEL_11:
      abort();
    *((_DWORD *)v7 + 1) = v9;
    memset(&v7[4 * v5 + 8], 0, 4 * (v9 - v5));
  }
  else
  {
    v4 = (char *)calloc(v10 + 34, 4u);
    v3 = v4;
    if ( !v4 )
      goto LABEL_11;
    *(_DWORD *)v4 = 1;
    *((_DWORD *)v4 + 1) = v10 + 32;
  }
  pthread_setspecific(dword_13E718, v3);
LABEL_19:
  v8 = &v3[4 * v10];
  result = *((_DWORD **)v8 + 1);
  if ( !result )
  {
    result = sub_DC333(a1);
    *((_DWORD *)v8 + 1) = result;
  }
  return result;
}
// 13E70C: using guessed type int dword_13E70C;
// 13E710: using guessed type int dword_13E710;
// 13E718: using guessed type int dword_13E718;
// 13E71C: using guessed type int dword_13E71C;
