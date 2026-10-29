/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008200
// Address: 0x0000000140008200

//----- (0000000140008200) ----------------------------------------------------
__int64 __fastcall sub_140008200(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // rbx
  int v6; // r10d
  void *v7; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(void **)(v5 + 32);
  *(_QWORD *)(v5 + 8) = a2;
  *(_DWORD *)(v5 + 24) = a4;
  *(_QWORD *)(v5 + 16) = a3;
  *(_DWORD *)v5 = v6;
  sub_14005D730(v7);
  sub_14005D750(*(void **)(v5 + 40), 0xFFFFFFFF);
  if ( a5 )
    *a5 = *(_DWORD *)(v5 + 24);
  return *(unsigned __int8 *)(v5 + 28);
}
