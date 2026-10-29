/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C174
// Address: 0x000000010002C174

//----- (000000010002C174) ----------------------------------------------------
void __fastcall __noreturn sub_10002C174(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 10002C17C: variable 'v1' is possibly undefined
