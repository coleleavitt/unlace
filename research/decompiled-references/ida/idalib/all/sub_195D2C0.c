unsigned __int64 __fastcall sub_195D2C0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v4; // rax
  __int64 *v5; // r12
  __int64 v6; // rax

  v4 = sub_1946B40(a1, *(void ***)(a2 + 24), a3, a4);
  if ( v4 && (v5 = (__int64 *)v4, v6 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4), v6 != 1) )
    return sub_16AB670(*a1, *(_DWORD *)(a2 + 32), v5, (int *)(v6 & 0xFFFFFFFFFFFFFFFELL), *(_DWORD *)(a2 + 36), a3);
  else
    return 1;
}
