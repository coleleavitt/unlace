/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45BB6C
// Address: 0x000000000045BB6C

//----- (000000000045BB6C) ----------------------------------------------------
void __noreturn sub_45BB6C()
{
  void *v0; // x23
  void *v1; // x24

  if ( v1 )
    j__free(v1);
  if ( v0 )
    j__free(v0);
  JUMPOUT(0x45BB64);
}
// 45BB88: control flows out of bounds to 45BB64
// 45BB70: variable 'v1' is possibly undefined
// 45BB7C: variable 'v0' is possibly undefined
