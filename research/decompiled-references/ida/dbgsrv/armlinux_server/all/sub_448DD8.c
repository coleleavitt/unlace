/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448DD8
// Address: 0x0000000000448DD8

//----- (0000000000448DD8) ----------------------------------------------------
void __noreturn sub_448DD8()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)(v0 + 8);
  if ( v1 )
  {
    *(_QWORD *)(v0 + 16) = 0;
    j__free(v1);
  }
  JUMPOUT(0x448DAC);
}
// 448DF8: control flows out of bounds to 448DAC
// 448DE4: variable 'v0' is possibly undefined
