/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42866C
// Address: 0x000000000042866C

//----- (000000000042866C) ----------------------------------------------------
void __fastcall __noreturn sub_42866C(struct _Unwind_Exception *a1)
{
  _QWORD *v1; // x19
  char **v2; // x20
  void *v4; // x1
  void *v5; // x0
  void *v6; // x0

  v4 = (void *)v1[72];
  if ( v4 )
  {
    v1[73] = 0;
    j__free(v4);
  }
  sub_4284D0(v2);
  v5 = (void *)v1[14];
  if ( v5 )
  {
    v1[15] = 0;
    j__free(v5);
  }
  v6 = (void *)v1[4];
  if ( v6 )
  {
    v1[5] = 0;
    j__free(v6);
  }
  _Unwind_Resume(a1);
}
// 428674: variable 'v1' is possibly undefined
// 42868C: variable 'v2' is possibly undefined
