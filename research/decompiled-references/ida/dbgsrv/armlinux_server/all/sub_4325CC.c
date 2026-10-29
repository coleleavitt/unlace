/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4325CC
// Address: 0x00000000004325CC

//----- (00000000004325CC) ----------------------------------------------------
void __noreturn sub_4325CC()
{
  __int64 v0; // x22
  void *v1; // x1

  v1 = *(void **)(v0 + 8);
  if ( v1 )
  {
    *(_QWORD *)(v0 + 16) = 0;
    j__free(v1);
  }
  JUMPOUT(0x4325B4);
}
// 4325E4: control flows out of bounds to 4325B4
// 4325CC: variable 'v0' is possibly undefined
