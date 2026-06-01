/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400313F0
// Address: 0x00000001400313F0

//----- (00000001400313F0) ----------------------------------------------------
__int64 __fastcall sub_1400313F0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -67;
  v3 = *(_QWORD *)(v1 + 8) + 1LL;
  if ( v3 > *(_QWORD *)(v1 + 16) )
    *(_QWORD *)v1 = sub_14005ABE0(v1, *(void **)v1, v3, 1u);
  *(_BYTE *)(*(_QWORD *)v1 + (*(_QWORD *)(v1 + 8))++) = -67;
  ++*(_DWORD *)(a1 + 200);
  return 0;
}
