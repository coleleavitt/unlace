/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B1CC
// Address: 0x000000010002B1CC

//----- (000000010002B1CC) ----------------------------------------------------
void __fastcall __noreturn sub_10002B1CC(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 10002B1E4: variable 'v1' is possibly undefined
