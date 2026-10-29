/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C204
// Address: 0x000000000043C204

//----- (000000000043C204) ----------------------------------------------------
void __noreturn sub_43C204()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v1);
  }
  JUMPOUT(0x43C1F4);
}
// 43C224: control flows out of bounds to 43C1F4
// 43C204: variable 'v0' is possibly undefined
