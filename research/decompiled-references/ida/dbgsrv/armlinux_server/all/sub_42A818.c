/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A818
// Address: 0x000000000042A818

//----- (000000000042A818) ----------------------------------------------------
void __noreturn sub_42A818()
{
  __int64 v0; // x19
  void *v1; // x1

  v1 = *(void **)v0;
  if ( *(_QWORD *)v0 )
  {
    *(_QWORD *)(v0 + 8) = 0;
    j__free(v1);
  }
  JUMPOUT(0x42A810);
}
// 42A830: control flows out of bounds to 42A810
// 42A818: variable 'v0' is possibly undefined
