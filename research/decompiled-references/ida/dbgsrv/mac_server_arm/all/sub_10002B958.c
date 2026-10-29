/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002B958
// Address: 0x000000010002B958

//----- (000000010002B958) ----------------------------------------------------
void __fastcall __noreturn sub_10002B958(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 10002B960: variable 'v1' is possibly undefined
