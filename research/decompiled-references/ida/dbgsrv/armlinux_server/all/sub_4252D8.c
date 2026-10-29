/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4252D8
// Address: 0x00000000004252D8

//----- (00000000004252D8) ----------------------------------------------------
void sub_4252D8()
{
  __int64 v0; // x22
  __int64 v1; // x27
  void *v2; // x1
  void *v3; // x0

  v2 = *(void **)(v0 + 24);
  if ( v2 )
  {
    *(_QWORD *)(v0 + 32) = 0;
    j__free(v2);
  }
  v3 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v3);
  }
  sub_41AAB0(v1);
  JUMPOUT(0x4252B8);
}
// 425310: control flows out of bounds to 4252B8
// 4252D8: variable 'v0' is possibly undefined
// 425308: variable 'v1' is possibly undefined
