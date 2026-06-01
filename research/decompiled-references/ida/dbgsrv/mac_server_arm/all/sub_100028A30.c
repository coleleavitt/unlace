/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100028A30
// Address: 0x0000000100028A30

//----- (0000000100028A30) ----------------------------------------------------
void __fastcall __noreturn sub_100028A30(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100028A44: variable 'v1' is possibly undefined
