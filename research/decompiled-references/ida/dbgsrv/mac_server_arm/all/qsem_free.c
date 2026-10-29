/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_free
// Address: 0x0000000100072BD0

//----- (0000000100072BD0) ----------------------------------------------------
__int64 __fastcall qsem_free(__int64 result)
{
  void **v1; // x19
  void *v2; // x0

  if ( result )
  {
    v1 = (void **)result;
    if ( *(_QWORD *)(result + 8) >= 2u )
    {
      if ( !sem_unlink(*(const char **)result) )
      {
        sem_close((sem_t *)v1[3]);
        v2 = *v1;
        if ( !*v1 )
        {
LABEL_10:
          operator delete(v1);
          return 1;
        }
LABEL_9:
        v1[1] = nullptr;
        qfree(v2);
        goto LABEL_10;
      }
    }
    else if ( !semaphore_destroy(mach_task_self_, *(_DWORD *)(result + 24)) )
    {
      v2 = *v1;
      if ( !*v1 )
        goto LABEL_10;
      goto LABEL_9;
    }
    return 0;
  }
  return result;
}
