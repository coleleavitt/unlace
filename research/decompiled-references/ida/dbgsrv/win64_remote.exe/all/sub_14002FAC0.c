/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002FAC0
// Address: 0x000000014002FAC0

//----- (000000014002FAC0) ----------------------------------------------------
__int64 __fastcall sub_14002FAC0(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // r8
  void **v4; // rbx
  unsigned __int64 v5; // r8
  int v6; // esi
  unsigned __int64 v7; // r8

  v1 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -85;
  v3 = *(_QWORD *)(v1 + 8) + 1LL;
  if ( v3 > *(_QWORD *)(v1 + 16) )
    *(_QWORD *)v1 = sub_14005ABE0(v1, *(void **)v1, v3, 1u);
  *(_BYTE *)(*(_QWORD *)(v1 + 8) + *(_QWORD *)v1) = -85;
  ++*(_QWORD *)(v1 + 8);
  v4 = (void **)(a1 + 288);
  ++*(_DWORD *)(a1 + 200);
  v5 = *(_QWORD *)(a1 + 296) + 1LL;
  if ( v5 > *(_QWORD *)(a1 + 304) )
    *v4 = sub_14005ABE0(a1 + 288, *v4, v5, 4u);
  *((_DWORD *)*v4 + (*(_QWORD *)(a1 + 296))++) = 0;
  v6 = *(_DWORD *)(a1 + 200);
  v7 = *(_QWORD *)(a1 + 296) + 1LL;
  if ( v7 > *(_QWORD *)(a1 + 304) )
    *v4 = sub_14005ABE0(a1 + 288, *v4, v7, 4u);
  *((_DWORD *)*v4 + (*(_QWORD *)(a1 + 296))++) = v6;
  sub_1400343E0(a1, 0);
  sub_1400343E0(a1, 0);
  return 0;
}
