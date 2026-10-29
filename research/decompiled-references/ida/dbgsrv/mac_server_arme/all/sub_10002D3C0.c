/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002D3C0
// Address: 0x000000010002D3C0

//----- (000000010002D3C0) ----------------------------------------------------
void __fastcall __noreturn sub_10002D3C0(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 10002D3C8: variable 'v1' is possibly undefined
