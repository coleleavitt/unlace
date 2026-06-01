/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002FEE0
// Address: 0x000000014002FEE0

//----- (000000014002FEE0) ----------------------------------------------------
__int64 __fastcall sub_14002FEE0(__int64 a1)
{
  void **v1; // rdi
  unsigned __int64 v3; // r8
  __int64 v4; // rsi
  __int128 v5; // xmm0
  __int64 v6; // rax

  v1 = (void **)(a1 + 384);
  v3 = *(_QWORD *)(a1 + 392) + 1LL;
  v4 = *(_QWORD *)(a1 + 360) + 16LL * *(_QWORD *)(a1 + 368);
  v5 = *(_OWORD *)(v4 - 16);
  if ( v3 > *(_QWORD *)(a1 + 400) )
  {
    v5 = *(_OWORD *)(v4 - 16);
    *v1 = sub_14005ABE0((__int64)v1, *v1, v3, 0x10u);
  }
  *((_OWORD *)*v1 + (*(_QWORD *)(a1 + 392))++) = v5;
  sub_14002E390(
    *(_QWORD **)(a1 + 192),
    (unsigned int)(*(_DWORD *)(v4 - 12) - 4),
    *(_DWORD *)(a1 + 200) - *(_DWORD *)(v4 - 12));
  v6 = *(_QWORD *)(a1 + 368);
  if ( v6 )
    *(_QWORD *)(a1 + 368) = v6 - 1;
  return 0;
}
