/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: install_extlang
// Address: 0x00050350

//----- (00050350) --------------------------------------------------------
int __cdecl install_extlang(int a1)
{
  int v1; // esi
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // edx
  char *v6; // eax
  char *v7; // eax
  pthread_mutex_t *v9; // [esp+18h] [ebp-14h]

  v1 = -1;
  if ( !a1 || *(_DWORD *)(a1 + 8) )
    return v1;
  v2 = dword_13BD48;
  qmutex_lock((pthread_mutex_t *)dword_13BD48);
  v3 = dword_13BD50;
  v9 = (pthread_mutex_t *)v2;
  if ( dword_13BD50 > 0 )
  {
    v4 = 0;
    do
    {
      if ( *(_DWORD *)(dword_13BD4C + 4 * v4) == a1 )
      {
        v1 = -1;
        goto LABEL_19;
      }
      ++v4;
    }
    while ( v4 < dword_13BD50 );
    v1 = 0;
    do
    {
      if ( !*(_DWORD *)(dword_13BD4C + 4 * v1) )
        break;
      ++v1;
    }
    while ( v1 < dword_13BD50 );
    if ( v1 == dword_13BD50 )
      goto LABEL_11;
LABEL_14:
    v7 = (char *)(dword_13BD4C + 4 * v1);
    goto LABEL_18;
  }
  v1 = 0;
  if ( dword_13BD50 )
    goto LABEL_14;
LABEL_11:
  v5 = dword_13BD50 + 1;
  if ( dword_13BD54 >= (unsigned int)(dword_13BD50 + 1) )
  {
    v6 = (char *)dword_13BD4C;
  }
  else
  {
    v6 = (char *)qvector_reserve((int)&dword_13BD4C, (void *)dword_13BD4C, v5, 4u);
    dword_13BD4C = (int)v6;
    v3 = dword_13BD50;
    v5 = dword_13BD50 + 1;
  }
  v7 = &v6[4 * v3];
  dword_13BD50 = v5;
LABEL_18:
  *(_DWORD *)v7 = a1;
  sub_9B1D0();
LABEL_19:
  qmutex_unlock(v9);
  return v1;
}
// 503BE: conditional instruction was optimized away because ecx.4>=1
// 13BD48: using guessed type int dword_13BD48;
// 13BD4C: using guessed type int dword_13BD4C;
// 13BD50: using guessed type int dword_13BD50;
// 13BD54: using guessed type int dword_13BD54;
