/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000313F4
// Address: 0x00000001000313F4

//----- (00000001000313F4) ----------------------------------------------------
void __fastcall __noreturn sub_1000313F4(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 1000313FC: variable 'v1' is possibly undefined
