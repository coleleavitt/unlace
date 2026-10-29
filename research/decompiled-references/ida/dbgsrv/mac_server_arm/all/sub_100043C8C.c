/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043C8C
// Address: 0x0000000100043C8C

//----- (0000000100043C8C) ----------------------------------------------------
void __fastcall __noreturn sub_100043C8C(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100043CA0: variable 'v1' is possibly undefined
