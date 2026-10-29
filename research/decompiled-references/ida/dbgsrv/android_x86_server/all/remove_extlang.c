/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: remove_extlang
// Address: 0x000504A0

//----- (000504A0) --------------------------------------------------------
int __cdecl remove_extlang(int a1)
{
  int v1; // esi
  int v2; // eax
  int v4; // [esp+14h] [ebp-18h]
  pthread_mutex_t *v5; // [esp+18h] [ebp-14h]

  v5 = (pthread_mutex_t *)dword_13BD48;
  qmutex_lock((pthread_mutex_t *)dword_13BD48);
  v1 = 0;
  if ( dword_13BD50 )
  {
    while ( *(_DWORD *)(dword_13BD4C + 4 * v1) != a1 )
    {
      if ( ++v1 >= (unsigned int)dword_13BD50 )
        goto LABEL_4;
    }
    if ( dword_13BD58 == v1 )
      select_extlang(0);
    if ( *(_DWORD *)(a1 + 8) && !byte_13E338 )
    {
      if ( !(_BYTE)under_debugger )
        interr(1442);
      BUG();
    }
    v2 = dword_13BD4C;
    *(_DWORD *)(dword_13BD4C + 4 * v1) = 0;
    LOBYTE(v2) = 1;
    v4 = v2;
    sub_9B1D0();
  }
  else
  {
LABEL_4:
    v4 = 0;
  }
  qmutex_unlock(v5);
  return v4;
}
// 50190: using guessed type _DWORD __cdecl select_extlang(_DWORD);
// 13BD48: using guessed type int dword_13BD48;
// 13BD4C: using guessed type int dword_13BD4C;
// 13BD50: using guessed type int dword_13BD50;
// 13BD58: using guessed type int dword_13BD58;
// 13E338: using guessed type char byte_13E338;
// 13E34C: using guessed type int under_debugger;
