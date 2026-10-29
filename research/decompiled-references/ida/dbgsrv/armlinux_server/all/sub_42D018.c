/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42D018
// Address: 0x000000000042D018

//----- (000000000042D018) ----------------------------------------------------
void __noreturn sub_42D018()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v1);
  }
  JUMPOUT(0x42D010);
}
// 42D030: control flows out of bounds to 42D010
// 42D018: variable 'v0' is possibly undefined
