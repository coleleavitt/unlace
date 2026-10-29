/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065AE0
// Address: 0x0000000100065AE0

//----- (0000000100065AE0) ----------------------------------------------------
void __fastcall __noreturn sub_100065AE0(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100065AE8: variable 'v1' is possibly undefined
