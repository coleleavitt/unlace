/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_448DB4
// Address: 0x0000000000448DB4

//----- (0000000000448DB4) ----------------------------------------------------
void __noreturn sub_448DB4()
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
// 448DD4: control flows out of bounds to 448DAC
// 448DC0: variable 'v0' is possibly undefined
