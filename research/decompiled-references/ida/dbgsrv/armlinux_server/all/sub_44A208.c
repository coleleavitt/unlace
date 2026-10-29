/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44A208
// Address: 0x000000000044A208

//----- (000000000044A208) ----------------------------------------------------
void __fastcall __noreturn sub_44A208(_QWORD *a1)
{
  __int64 v1; // x19
  void *v2; // x1

  v2 = *(void **)(v1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 40) = 0;
    j__free(v2);
  }
  sub_44A1F8(a1);
}
// 44A208: variable 'v1' is possibly undefined
