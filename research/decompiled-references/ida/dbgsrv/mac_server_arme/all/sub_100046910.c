/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100046910
// Address: 0x0000000100046910

//----- (0000000100046910) ----------------------------------------------------
void __fastcall __noreturn sub_100046910(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100046950: variable 'v1' is possibly undefined
