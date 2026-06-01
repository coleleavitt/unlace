/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C280
// Address: 0x000000000042C280

//----- (000000000042C280) ----------------------------------------------------
void __noreturn sub_42C280()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v1);
  }
  JUMPOUT(0x42C278);
}
// 42C298: control flows out of bounds to 42C278
// 42C280: variable 'v0' is possibly undefined
