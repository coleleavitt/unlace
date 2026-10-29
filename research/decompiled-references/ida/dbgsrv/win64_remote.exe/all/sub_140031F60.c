/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140031F60
// Address: 0x0000000140031F60

//----- (0000000140031F60) ----------------------------------------------------
__int64 __fastcall sub_140031F60(__int64 a1)
{
  int v1; // esi
  void **v2; // rdi
  unsigned __int64 v4; // r8

  v1 = *(_DWORD *)(a1 + 200);
  v2 = (void **)(a1 + 240);
  v4 = *(_QWORD *)(a1 + 248) + 1LL;
  if ( v4 > *(_QWORD *)(a1 + 256) )
    *v2 = sub_14005ABE0(a1 + 240, *v2, v4, 4u);
  *((_DWORD *)*v2 + (*(_QWORD *)(a1 + 248))++) = v1;
  return 0;
}
