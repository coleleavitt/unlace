/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000377E8
// Address: 0x00000001000377E8

//----- (00000001000377E8) ----------------------------------------------------
void __fastcall __noreturn sub_1000377E8(_Unwind_Exception *a1)
{
  __int64 v1; // x19
  char **v2; // x20
  pthread_mutex_t *v3; // x21

  qmutex_unlock(v3);
  sub_100037828((_QWORD *)(v1 + 72));
  sub_100037868((_QWORD *)(v1 + 48));
  sub_10003CCF4(v2);
  _Unwind_Resume(a1);
}
// 1000377F0: variable 'v3' is possibly undefined
// 100037808: variable 'v1' is possibly undefined
// 10003781C: variable 'v2' is possibly undefined
