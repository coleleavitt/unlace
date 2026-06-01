/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4826F0
// Address: 0x00000000004826F0

//----- (00000000004826F0) ----------------------------------------------------
__int64 __fastcall sub_4826F0(char *a1)
{
  void *v2; // rdi

  if ( !a1 )
    return 0;
  if ( *((_QWORD *)a1 + 1) <= 1u )
  {
    if ( !sem_destroy((sem_t *)(a1 + 24)) )
      goto LABEL_5;
    return 0;
  }
  if ( sem_unlink(*(const char **)a1) )
    return 0;
  sem_close(*((sem_t **)a1 + 3));
LABEL_5:
  v2 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *((_QWORD *)a1 + 1) = 0;
    j__free(v2);
  }
  operator delete(a1, 0x38u);
  return 1;
}
