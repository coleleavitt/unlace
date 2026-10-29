/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468364
// Address: 0x0000000000468364

//----- (0000000000468364) ----------------------------------------------------
void __noreturn sub_468364()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)(v0 + 8);
  if ( v1 )
  {
    *(_QWORD *)(v0 + 16) = 0;
    j__free(v1);
  }
  JUMPOUT(0x468330);
}
// 468380: control flows out of bounds to 468330
// 468364: variable 'v0' is possibly undefined
