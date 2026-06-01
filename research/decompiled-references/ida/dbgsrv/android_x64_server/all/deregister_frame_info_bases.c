/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deregister_frame_info_bases
// Address: 0x00000000000EA6D0

//----- (00000000000EA6D0) ----------------------------------------------------
__int64 __fastcall _deregister_frame_info_bases(_DWORD *a1)
{
  __int64 v1; // rbx
  __int64 *i; // rax

  if ( !a1 || !*a1 )
    return 0;
  if ( &pthread_create )
    pthread_mutex_lock(&stru_1592C0);
  v1 = qword_1592F0;
  i = &qword_1592F0;
  while ( v1 )
  {
    if ( *(_DWORD **)(v1 + 24) == a1 )
    {
LABEL_14:
      *i = *(_QWORD *)(v1 + 40);
      goto LABEL_21;
    }
    i = (__int64 *)(v1 + 40);
    v1 = *(_QWORD *)(v1 + 40);
  }
  for ( i = &qword_1592E8; ; i = (__int64 *)(v1 + 40) )
  {
    v1 = *i;
    if ( !*i )
    {
      if ( !&pthread_create )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (*(_BYTE *)(v1 + 32) & 1) != 0 )
      break;
    if ( *(_DWORD **)(v1 + 24) == a1 )
      goto LABEL_14;
LABEL_10:
    ;
  }
  if ( **(_DWORD ***)(v1 + 24) != a1 )
    goto LABEL_10;
  *i = *(_QWORD *)(v1 + 40);
  free(*(void **)(v1 + 24));
LABEL_21:
  if ( &pthread_create )
  {
LABEL_19:
    pthread_mutex_unlock(&stru_1592C0);
    if ( v1 )
      return v1;
LABEL_20:
    abort();
  }
  return v1;
}
// 1592E8: using guessed type __int64 qword_1592E8;
// 1592F0: using guessed type __int64 qword_1592F0;
