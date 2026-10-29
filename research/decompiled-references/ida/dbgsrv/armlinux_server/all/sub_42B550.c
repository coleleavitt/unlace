/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B550
// Address: 0x000000000042B550

//----- (000000000042B550) ----------------------------------------------------
void sub_42B550()
{
  __int64 v0; // x21
  void *v1; // x1
  void *v2; // x0

  v1 = *(void **)(v0 + 24);
  if ( v1 )
  {
    *(_QWORD *)(v0 + 32) = 0;
    j__free(v1);
  }
  v2 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v2);
  }
  JUMPOUT(0x42B494);
}
// 42B580: control flows out of bounds to 42B494
// 42B550: variable 'v0' is possibly undefined
