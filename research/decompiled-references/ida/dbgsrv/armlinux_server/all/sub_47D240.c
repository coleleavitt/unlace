/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D240
// Address: 0x000000000047D240

//----- (000000000047D240) ----------------------------------------------------
void __fastcall __noreturn sub_47D240(struct _Unwind_Exception *a1)
{
  _QWORD *v1; // x19
  void *v2; // x1
  void *v4; // x0
  void *v5; // x0

  v2 = (void *)v1[23];
  if ( v2 )
  {
    v1[24] = 0;
    j__free(v2);
  }
  v4 = (void *)v1[17];
  if ( v4 )
  {
    v1[18] = 0;
    j__free(v4);
  }
  v5 = (void *)v1[14];
  if ( v5 )
  {
    v1[15] = 0;
    j__free(v5);
  }
  sub_475E80(v1);
  _Unwind_Resume(a1);
}
// 47D240: variable 'v1' is possibly undefined
