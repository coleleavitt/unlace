/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_493E90
// Address: 0x0000000000493E90

//----- (0000000000493E90) ----------------------------------------------------
__int64 __fastcall sub_493E90(__int64 a1)
{
  char *v3; // x0

  if ( !a1 )
    return 0;
  if ( *(_QWORD *)(a1 + 8) <= 1u )
  {
    if ( sem_destroy((sem_t *)(a1 + 24)) )
      return 0;
  }
  else
  {
    if ( sem_unlink(*(const char **)a1) )
      return 0;
    sem_close(*(sem_t **)(a1 + 24));
  }
  v3 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v3);
  }
  j_j__free_0((void *)a1);
  return 1;
}
