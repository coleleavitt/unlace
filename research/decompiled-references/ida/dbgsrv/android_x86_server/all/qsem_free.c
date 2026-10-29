/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_free
// Address: 0x000B63B0

//----- (000B63B0) --------------------------------------------------------
char __cdecl qsem_free(char *ptr)
{
  void *v2; // eax

  if ( !ptr )
    return 0;
  if ( *((_DWORD *)ptr + 1) < 2u )
  {
    if ( !sem_destroy((sem_t *)(ptr + 12)) )
      goto LABEL_8;
    return 0;
  }
  if ( sem_unlink(*(const char **)ptr) )
    return 0;
  sem_close(*((sem_t **)ptr + 3));
LABEL_8:
  v2 = *(void **)ptr;
  if ( *(_DWORD *)ptr )
  {
    *((_DWORD *)ptr + 1) = 0;
    qfree(v2);
  }
  operator delete(ptr);
  return 1;
}
