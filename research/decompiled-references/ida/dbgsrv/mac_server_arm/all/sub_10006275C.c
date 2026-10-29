/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006275C
// Address: 0x000000010006275C

//----- (000000010006275C) ----------------------------------------------------
void __fastcall __noreturn sub_10006275C(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 100062764: variable 'v1' is possibly undefined
