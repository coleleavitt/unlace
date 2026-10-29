/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C0DC
// Address: 0x000000010002C0DC

//----- (000000010002C0DC) ----------------------------------------------------
void __fastcall __noreturn sub_10002C0DC(_Unwind_Exception *a1)
{
  pthread_mutex_t *v1; // x19

  qmutex_unlock(v1);
  _Unwind_Resume(a1);
}
// 10002C0E4: variable 'v1' is possibly undefined
