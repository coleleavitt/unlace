/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002257C
// Address: 0x000000010002257C

//----- (000000010002257C) ----------------------------------------------------
void __fastcall __noreturn sub_10002257C(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100022584: variable 'v1' is possibly undefined
