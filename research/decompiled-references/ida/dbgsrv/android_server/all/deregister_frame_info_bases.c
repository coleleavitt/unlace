/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deregister_frame_info_bases
// Address: 0x00000000000F0EA0

//----- (00000000000F0EA0) ----------------------------------------------------
__int64 __fastcall _deregister_frame_info_bases(_DWORD *a1)
{
  __int64 *j; // x0
  __int64 i; // x19

  if ( !a1 || !*a1 )
    return 0;
  if ( &pthread_create )
    pthread_mutex_lock((pthread_mutex_t *)&qword_169540[1]);
  j = &qword_169570;
  for ( i = qword_169570; i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_DWORD **)(i + 24) == a1 )
    {
LABEL_14:
      *j = *(_QWORD *)(i + 40);
      goto LABEL_21;
    }
    j = (__int64 *)(i + 40);
  }
  for ( j = &qword_169578; ; j = (__int64 *)(i + 40) )
  {
    i = *j;
    if ( !*j )
    {
      if ( !&pthread_create )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (*(_BYTE *)(i + 32) & 1) != 0 )
      break;
    if ( *(_DWORD **)(i + 24) == a1 )
      goto LABEL_14;
LABEL_10:
    ;
  }
  if ( **(_DWORD ***)(i + 24) != a1 )
    goto LABEL_10;
  *j = *(_QWORD *)(i + 40);
  free(*(void **)(i + 24));
LABEL_21:
  if ( &pthread_create )
  {
LABEL_19:
    pthread_mutex_unlock((pthread_mutex_t *)&qword_169540[1]);
    if ( i )
      return i;
LABEL_20:
    abort();
  }
  return i;
}
// 168FE0: using guessed type __int64 qword_168FE0[5];
// 169540: using guessed type __int64 qword_169540[6];
// 169570: using guessed type __int64 qword_169570;
// 169578: using guessed type __int64 qword_169578;
