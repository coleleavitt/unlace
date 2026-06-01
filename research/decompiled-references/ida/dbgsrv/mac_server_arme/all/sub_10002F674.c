/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002F674
// Address: 0x000000010002F674

//----- (000000010002F674) ----------------------------------------------------
void __fastcall __noreturn sub_10002F674(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 10002F67C: variable 'v1' is possibly undefined
