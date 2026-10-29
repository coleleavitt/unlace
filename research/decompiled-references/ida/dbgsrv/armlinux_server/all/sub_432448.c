/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432448
// Address: 0x0000000000432448

//----- (0000000000432448) ----------------------------------------------------
void __noreturn sub_432448()
{
  __int64 v0; // x22
  void *v1; // x1

  v1 = *(void **)(v0 + 8);
  if ( v1 )
  {
    *(_QWORD *)(v0 + 16) = 0;
    j__free(v1);
  }
  JUMPOUT(0x432430);
}
// 432460: control flows out of bounds to 432430
// 432448: variable 'v0' is possibly undefined
