/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100020DC0
// Address: 0x0000000100020DC0

//----- (0000000100020DC0) ----------------------------------------------------
void __fastcall __noreturn sub_100020DC0(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100020DC8: variable 'v1' is possibly undefined
