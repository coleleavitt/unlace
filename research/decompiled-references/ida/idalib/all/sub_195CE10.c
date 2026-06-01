unsigned __int64 __fastcall sub_195CE10(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = (__int64 *)sub_1946B40(a1, *(void ***)(a2 + 24), a3, a4);
  if ( !v7 )
    return 1;
  else
    return sub_16CEEA0(
             *a1,
             v6 & 0xFFFFFFFFFFFFFFFELL,
             v7,
             *(_DWORD *)(a2 + 32),
             *(_DWORD *)(a2 + 36),
             *(double *)a3.m128_u64);
}
