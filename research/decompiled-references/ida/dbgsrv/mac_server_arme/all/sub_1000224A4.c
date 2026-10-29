/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000224A4
// Address: 0x00000001000224A4

//----- (00000001000224A4) ----------------------------------------------------
void __fastcall __noreturn sub_1000224A4(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 1000224B4: variable 'v1' is possibly undefined
