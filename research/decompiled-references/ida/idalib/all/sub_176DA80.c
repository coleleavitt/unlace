unsigned __int64 __fastcall sub_176DA80(__int64 *a1, __int64 a2, __m128 a3)
{
  void **v3; // rax
  __int64 *v4; // r12
  __int64 v5; // rax

  v3 = sub_176A140(a1, *(void ***)(a2 + 24), a3);
  if ( v3 && (v4 = (__int64 *)v3, v5 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16)), v5 != 1) )
    return sub_16AB670(*a1, *(_DWORD *)(a2 + 32), v4, (int *)(v5 & 0xFFFFFFFFFFFFFFFELL), *(_DWORD *)(a2 + 36), a3);
  else
    return 1;
}
