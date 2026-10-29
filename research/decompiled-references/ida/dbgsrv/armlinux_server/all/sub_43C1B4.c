/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C1B4
// Address: 0x000000000043C1B4

//----- (000000000043C1B4) ----------------------------------------------------
void sub_43C1B4()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v1);
  }
  JUMPOUT(0x43C1A4);
}
// 43C1D4: control flows out of bounds to 43C1A4
// 43C1C0: variable 'v0' is possibly undefined
