/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F6B0
// Address: 0x000000014002F6B0

//----- (000000014002F6B0) ----------------------------------------------------
__int64 __fastcall sub_14002F6B0(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // r8
  int v4; // esi
  void **v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r8

  v1 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -85;
  v3 = *(_QWORD *)(v1 + 8) + 1LL;
  if ( v3 > *(_QWORD *)(v1 + 16) )
    *(_QWORD *)v1 = sub_14005ABE0(v1, *(void **)v1, v3, 1u);
  *(_BYTE *)(*(_QWORD *)(v1 + 8) + *(_QWORD *)v1) = -85;
  ++*(_QWORD *)(v1 + 8);
  v4 = *(_DWORD *)(a1 + 200) + 1;
  *(_DWORD *)(a1 + 200) = v4;
  sub_1400343E0(a1, 0);
  sub_1400343E0(a1, 0);
  v5 = (void **)(a1 + 216);
  v6 = *(_QWORD *)(a1 + 224);
  v7 = *(unsigned int *)(*(_QWORD *)(a1 + 216) + 4 * v6 - 4);
  if ( v6 )
    *(_QWORD *)(a1 + 224) = v6 - 1;
  sub_14002E390(*(_QWORD **)(a1 + 192), v7, *(_DWORD *)(a1 + 200) - v7 - 4);
  v8 = *(_QWORD *)(a1 + 224) + 1LL;
  if ( v8 > *(_QWORD *)(a1 + 232) )
    *v5 = sub_14005ABE0(a1 + 216, *v5, v8, 4u);
  *((_DWORD *)*v5 + (*(_QWORD *)(a1 + 224))++) = v4;
  return 0;
}
