/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qsem_free
// Address: 0x0000000100080200

//----- (0000000100080200) ----------------------------------------------------
char __fastcall qsem_free(_DWORD *__p)
{
  void *v3; // rdi

  if ( !__p )
    return 0;
  if ( *((_QWORD *)__p + 1) < 2u )
  {
    if ( !semaphore_destroy(mach_task_self_, __p[6]) )
      goto LABEL_8;
    return 0;
  }
  if ( sem_unlink(*(const char **)__p) )
    return 0;
  sem_close(*((sem_t **)__p + 3));
LABEL_8:
  v3 = *(void **)__p;
  if ( *(_QWORD *)__p )
  {
    *((_QWORD *)__p + 1) = 0;
    qfree(v3);
  }
  operator delete(__p);
  return 1;
}
