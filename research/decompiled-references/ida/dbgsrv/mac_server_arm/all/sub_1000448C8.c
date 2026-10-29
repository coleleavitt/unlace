/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000448C8
// Address: 0x00000001000448C8

//----- (00000001000448C8) ----------------------------------------------------
void __fastcall __noreturn sub_1000448C8(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100044908: variable 'v1' is possibly undefined
