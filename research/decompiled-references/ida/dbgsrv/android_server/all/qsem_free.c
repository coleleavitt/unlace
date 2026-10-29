/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_free
// Address: 0x00000000000C31C8

//----- (00000000000C31C8) ----------------------------------------------------
__int64 __fastcall qsem_free(__int64 result)
{
  sem_t **v1; // x19
  sem_t *v2; // x0

  if ( result )
  {
    v1 = (sem_t **)result;
    if ( *(_QWORD *)(result + 8) >= 2u )
    {
      if ( sem_unlink(*(const char **)result) )
        return 0;
      sem_close(v1[3]);
    }
    else if ( sem_destroy((sem_t *)(result + 24)) )
    {
      return 0;
    }
    v2 = *v1;
    if ( *v1 )
    {
      v1[1] = nullptr;
      qfree(v2);
    }
    operator delete(v1);
    return 1;
  }
  return result;
}
