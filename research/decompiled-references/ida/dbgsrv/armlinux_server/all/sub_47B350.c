/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B350
// Address: 0x000000000047B350

//----- (000000000047B350) ----------------------------------------------------
void __fastcall __noreturn sub_47B350(struct _Unwind_Exception *a1)
{
  _QWORD *v1; // x19
  void *v2; // x1
  void *v4; // x0

  v2 = (void *)v1[6];
  if ( v2 )
  {
    v1[7] = 0;
    j__free(v2);
  }
  v4 = (void *)v1[3];
  if ( v4 )
  {
    v1[4] = 0;
    j__free(v4);
  }
  if ( v1 )
    j__free_0(v1);
  _Unwind_Resume(a1);
}
// 47B350: variable 'v1' is possibly undefined
