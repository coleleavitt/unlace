/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A228
// Address: 0x000000000044A228

//----- (000000000044A228) ----------------------------------------------------
void __fastcall __noreturn sub_44A228(_QWORD *a1)
{
  __int64 v1; // x21
  void *v3; // x0

  if ( *(_QWORD *)(v1 + 32) )
  {
    v3 = *(void **)(v1 + 32);
    *(_QWORD *)(v1 + 40) = 0;
    j__free(v3);
  }
  sub_44A1E8(a1);
}
// 44A228: variable 'v1' is possibly undefined
