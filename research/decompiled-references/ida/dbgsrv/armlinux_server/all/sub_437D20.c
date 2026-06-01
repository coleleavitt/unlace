/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_437D20
// Address: 0x0000000000437D20

//----- (0000000000437D20) ----------------------------------------------------
void __noreturn sub_437D20()
{
  __int64 v0; // x19
  __int64 v1; // x20
  __int64 v2; // x24
  void *v3; // x1

  v3 = *(void **)(v2 + v1);
  if ( v3 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v3);
  }
  JUMPOUT(0x437CD0);
}
// 437D3C: control flows out of bounds to 437CD0
// 437D20: variable 'v2' is possibly undefined
// 437D20: variable 'v1' is possibly undefined
// 437D2C: variable 'v0' is possibly undefined
