/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428350
// Address: 0x0000000000428350

//----- (0000000000428350) ----------------------------------------------------
void __noreturn sub_428350()
{
  __int64 v0; // x20
  void *v1; // x1
  void *v2; // x0

  v1 = *(void **)(v0 + 24);
  if ( v1 )
  {
    *(_QWORD *)(v0 + 32) = 0;
    j__free(v1);
  }
  v2 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v2);
  }
  JUMPOUT(0x428338);
}
// 428378: control flows out of bounds to 428338
// 428350: variable 'v0' is possibly undefined
