/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002CBEC
// Address: 0x000000010002CBEC

//----- (000000010002CBEC) ----------------------------------------------------
void __fastcall __noreturn sub_10002CBEC(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 10002CBF4: variable 'v1' is possibly undefined
