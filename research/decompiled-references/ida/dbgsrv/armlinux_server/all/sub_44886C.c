/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44886C
// Address: 0x000000000044886C

//----- (000000000044886C) ----------------------------------------------------
void __fastcall __noreturn sub_44886C(struct _Unwind_Exception *a1)
{
  __int64 v1; // x19
  pthread_mutex_t *v2; // x20
  pthread_mutex_t *v4; // x0
  struct _Unwind_Exception *v5; // x20
  void *v6; // x0
  void *v7; // x0

  v4 = v2;
  v5 = a1;
  sub_494760(v4);
  v6 = *(void **)(v1 + 72);
  if ( v6 )
  {
    *(_QWORD *)(v1 + 80) = 0;
    j__free(v6);
  }
  v7 = *(void **)(v1 + 48);
  if ( v7 )
  {
    *(_QWORD *)(v1 + 56) = 0;
    j__free(v7);
  }
  sub_448718((char **)(v1 + 24));
  _Unwind_Resume(v5);
}
// 448870: variable 'v2' is possibly undefined
// 44887C: variable 'v1' is possibly undefined
