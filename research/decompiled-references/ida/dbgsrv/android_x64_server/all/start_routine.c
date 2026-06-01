/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: start_routine
// Address: 0x00000000000A8100

//----- (00000000000A8100) ----------------------------------------------------
__int64 __fastcall start_routine(void *ptr)
{
  qsem_wait(*((_QWORD *)ptr + 2), -1);
  sub_A8150(*(_QWORD *)ptr, *((__int64 **)ptr + 1));
  if ( ptr )
  {
    *(_OWORD *)ptr = 0;
    qsem_free(*((sem_t ***)ptr + 2));
    operator delete(ptr);
  }
  return 0;
}
