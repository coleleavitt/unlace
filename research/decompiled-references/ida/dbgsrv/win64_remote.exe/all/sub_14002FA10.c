/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002FA10
// Address: 0x000000014002FA10

//----- (000000014002FA10) ----------------------------------------------------
__int64 __fastcall sub_14002FA10(__int64 a1)
{
  char v1; // dl
  __int64 v3; // rbx
  unsigned __int64 v4; // r8

  v1 = -32;
  if ( *(_DWORD *)(a1 + 208) == 1 )
    v1 = 112;
  sub_1400347C0(a1, v1);
  v3 = *(_QWORD *)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -81;
  v4 = *(_QWORD *)(v3 + 8) + 1LL;
  if ( v4 > *(_QWORD *)(v3 + 16) )
    *(_QWORD *)v3 = sub_14005ABE0(v3, *(void **)v3, v4, 1u);
  *(_BYTE *)(*(_QWORD *)(v3 + 8) + *(_QWORD *)v3) = -81;
  ++*(_QWORD *)(v3 + 8);
  ++*(_DWORD *)(a1 + 200);
  return 0;
}
