/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002F120
// Address: 0x000000014002F120

//----- (000000014002F120) ----------------------------------------------------
__int64 __fastcall sub_14002F120(__int64 a1)
{
  void **v1; // rdi
  unsigned __int64 v3; // r8
  _DWORD *v4; // rax
  void **v5; // rdi
  unsigned __int64 v6; // r8
  _DWORD *v7; // rax
  void **v8; // rdi
  int v9; // esi
  unsigned __int64 v10; // r8

  v1 = (void **)(a1 + 240);
  v3 = *(_QWORD *)(a1 + 248) + 1LL;
  if ( v3 > *(_QWORD *)(a1 + 256) )
    *v1 = sub_14005ABE0(a1 + 240, *v1, v3, 4u);
  v4 = *v1;
  v5 = (void **)(a1 + 264);
  v4[(*(_QWORD *)(a1 + 248))++] = -1;
  v6 = *(_QWORD *)(a1 + 272) + 1LL;
  if ( v6 > *(_QWORD *)(a1 + 280) )
    *v5 = sub_14005ABE0(a1 + 264, *v5, v6, 4u);
  v7 = *v5;
  v8 = (void **)(a1 + 288);
  v7[(*(_QWORD *)(a1 + 272))++] = -1;
  v9 = *(_DWORD *)(a1 + 200);
  v10 = *(_QWORD *)(a1 + 296) + 1LL;
  if ( v10 > *(_QWORD *)(a1 + 304) )
    *v8 = sub_14005ABE0((__int64)v8, *v8, v10, 4u);
  *((_DWORD *)*v8 + (*(_QWORD *)(a1 + 296))++) = v9;
  return 0;
}
