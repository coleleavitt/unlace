unsigned __int64 __fastcall sub_1D22BB0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 *v8; // r12
  __int64 v9; // rax

  v4 = sub_1D1AAC0(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( v4 && (v8 = v4, v9 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v5, v6, v7), v9 != 1) )
    return sub_16AB670(*a1, *(_DWORD *)(a2 + 32), v8, (int *)(v9 & 0xFFFFFFFFFFFFFFFELL), *(_DWORD *)(a2 + 36), a3);
  else
    return 1;
}
