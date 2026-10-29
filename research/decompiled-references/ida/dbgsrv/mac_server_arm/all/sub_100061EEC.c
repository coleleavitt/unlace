/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061EEC
// Address: 0x0000000100061EEC

//----- (0000000100061EEC) ----------------------------------------------------
void __fastcall __noreturn sub_100061EEC(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100061EF8: variable 'v1' is possibly undefined
