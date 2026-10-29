/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B9B8
// Address: 0x000000000042B9B8

//----- (000000000042B9B8) ----------------------------------------------------
void __noreturn sub_42B9B8()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v1);
  }
  JUMPOUT(0x42B9B0);
}
// 42B9D0: control flows out of bounds to 42B9B0
// 42B9B8: variable 'v0' is possibly undefined
