/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F890
// Address: 0x000000014002F890

//----- (000000014002F890) ----------------------------------------------------
__int64 __fastcall sub_14002F890(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // r8
  void **v4; // rdi
  int v5; // esi
  unsigned __int64 v6; // r8

  v1 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -83;
  v3 = *(_QWORD *)(v1 + 8) + 1LL;
  if ( v3 > *(_QWORD *)(v1 + 16) )
    *(_QWORD *)v1 = sub_14005ABE0(v1, *(void **)v1, v3, 1u);
  *(_BYTE *)(*(_QWORD *)v1 + (*(_QWORD *)(v1 + 8))++) = -83;
  v4 = (void **)(a1 + 288);
  v5 = ++*(_DWORD *)(a1 + 200);
  v6 = *(_QWORD *)(a1 + 296) + 1LL;
  if ( v6 > *(_QWORD *)(a1 + 304) )
    *v4 = sub_14005ABE0((__int64)v4, *v4, v6, 4u);
  *((_DWORD *)*v4 + (*(_QWORD *)(a1 + 296))++) = v5;
  sub_1400343E0(a1, 0);
  sub_1400343E0(a1, 0);
  return 0;
}
