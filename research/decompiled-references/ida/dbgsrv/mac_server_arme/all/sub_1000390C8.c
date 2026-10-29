/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000390C8
// Address: 0x00000001000390C8

//----- (00000001000390C8) ----------------------------------------------------
void __fastcall __noreturn sub_1000390C8(_Unwind_Exception *a1)
{
  __int64 v1; // x19
  char **v2; // x20
  pthread_mutex_t *v3; // x21

  qmutex_unlock(v3);
  sub_100039108((_QWORD *)(v1 + 72));
  sub_10003914C((_QWORD *)(v1 + 48));
  sub_10003EB70(v2);
  _Unwind_Resume(a1);
}
// 1000390D0: variable 'v3' is possibly undefined
// 1000390E8: variable 'v1' is possibly undefined
// 1000390FC: variable 'v2' is possibly undefined
