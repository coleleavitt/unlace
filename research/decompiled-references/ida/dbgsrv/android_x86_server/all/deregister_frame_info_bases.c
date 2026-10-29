/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deregister_frame_info_bases
// Address: 0x000DBFCD

//----- (000DBFCD) --------------------------------------------------------
int __cdecl _deregister_frame_info_bases(_DWORD *a1)
{
  _DWORD *v1; // edx
  int v2; // esi
  int *i; // eax

  v1 = a1;
  if ( !a1 || !*a1 )
    return 0;
  if ( &pthread_create )
  {
    pthread_mutex_lock((pthread_mutex_t *)&dword_13E700);
    v1 = a1;
  }
  v2 = dword_13E708;
  i = &dword_13E708;
  while ( v2 )
  {
    if ( *(_DWORD **)(v2 + 12) == v1 )
    {
LABEL_14:
      *i = *(_DWORD *)(v2 + 20);
      goto LABEL_21;
    }
    i = (int *)(v2 + 20);
    v2 = *(_DWORD *)(v2 + 20);
  }
  for ( i = &dword_13E704; ; i = (int *)(v2 + 20) )
  {
    v2 = *i;
    if ( !*i )
    {
      if ( !&pthread_create )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (*(_BYTE *)(v2 + 16) & 1) != 0 )
      break;
    if ( *(_DWORD **)(v2 + 12) == v1 )
      goto LABEL_14;
LABEL_10:
    ;
  }
  if ( **(_DWORD ***)(v2 + 12) != v1 )
    goto LABEL_10;
  *i = *(_DWORD *)(v2 + 20);
  free(*(void **)(v2 + 12));
LABEL_21:
  if ( &pthread_create )
  {
LABEL_19:
    pthread_mutex_unlock((pthread_mutex_t *)&dword_13E700);
    if ( v2 )
      return v2;
LABEL_20:
    abort();
  }
  return v2;
}
// 13E700: using guessed type int dword_13E700;
// 13E704: using guessed type int dword_13E704;
// 13E708: using guessed type int dword_13E708;
