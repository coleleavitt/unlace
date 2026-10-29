/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_free
// Address: 0x00000000000C80E0

//----- (00000000000C80E0) ----------------------------------------------------
char __fastcall qsem_free(sem_t **ptr)
{
  char *v3; // rdi

  if ( !ptr )
    return 0;
  if ( (unsigned __int64)ptr[1] >= 2 )
  {
    if ( sem_unlink((*ptr)->__size) )
      return 0;
    sem_close(ptr[3]);
  }
  else if ( sem_destroy((sem_t *)(ptr + 3)) )
  {
    return 0;
  }
  v3 = (char *)*ptr;
  if ( *ptr )
  {
    ptr[1] = nullptr;
    qfree(v3);
  }
  operator delete(ptr);
  return 1;
}
