/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B39C
// Address: 0x000000000047B39C

//----- (000000000047B39C) ----------------------------------------------------
void __noreturn sub_47B39C()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)(v0 + 24);
  if ( v1 )
  {
    *(_QWORD *)(v0 + 32) = 0;
    j__free(v1);
  }
  JUMPOUT(0x47B378);
}
// 47B3B4: control flows out of bounds to 47B378
// 47B39C: variable 'v0' is possibly undefined
