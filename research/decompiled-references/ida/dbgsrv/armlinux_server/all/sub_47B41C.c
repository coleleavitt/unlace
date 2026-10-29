/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B41C
// Address: 0x000000000047B41C

//----- (000000000047B41C) ----------------------------------------------------
void __noreturn sub_47B41C()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)(v0 + 48);
  if ( v1 )
  {
    *(_QWORD *)(v0 + 56) = 0;
    j__free(v1);
  }
  JUMPOUT(0x47B368);
}
// 47B434: control flows out of bounds to 47B368
// 47B41C: variable 'v0' is possibly undefined
