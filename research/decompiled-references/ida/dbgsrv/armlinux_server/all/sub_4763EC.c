/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4763EC
// Address: 0x00000000004763EC

//----- (00000000004763EC) ----------------------------------------------------
void __fastcall __noreturn sub_4763EC(struct _Unwind_Exception *a1)
{
  _QWORD *v1; // x19
  _QWORD **v2; // x20
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0

  *v2 = off_51B8F0;
  sub_476268((__int64)(v2 + 1), v2[3]);
  j_j__free_0(v2);
  v4 = (void *)v1[7];
  if ( v4 )
  {
    v1[8] = 0;
    j__free(v4);
  }
  v5 = (void *)v1[4];
  if ( v5 )
  {
    v1[5] = 0;
    j__free(v5);
  }
  v6 = (void *)v1[1];
  if ( v6 )
  {
    v1[2] = 0;
    j__free(v6);
  }
  _Unwind_Resume(a1);
}
// 4763FC: variable 'v2' is possibly undefined
// 476418: variable 'v1' is possibly undefined
// 51B8F0: using guessed type __int64 (__fastcall *off_51B8F0[5])();
