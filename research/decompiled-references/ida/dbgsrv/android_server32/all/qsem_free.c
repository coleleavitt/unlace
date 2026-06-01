/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_free
// Address: 0x00081F92

//----- (00081F92) --------------------------------------------------------
int __fastcall qsem_free(int a1)
{
  char *v3; // r0

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)(a1 + 4) < 2u )
  {
    if ( !sem_destroy((sem_t *)(a1 + 12)) )
      goto LABEL_8;
    return 0;
  }
  if ( sem_unlink(*(const char **)a1) )
    return 0;
  sem_close(*(sem_t **)(a1 + 12));
LABEL_8:
  v3 = *(char **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    qfree(v3);
  }
  operator delete((void *)a1);
  return 1;
}
