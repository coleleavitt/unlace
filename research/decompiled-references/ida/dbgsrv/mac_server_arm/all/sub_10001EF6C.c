/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001EF6C
// Address: 0x000000010001EF6C

//----- (000000010001EF6C) ----------------------------------------------------
void __fastcall __noreturn sub_10001EF6C(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 10001EF74: variable 'v1' is possibly undefined
