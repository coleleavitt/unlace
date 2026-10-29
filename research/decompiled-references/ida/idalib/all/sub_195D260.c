__int64 __fastcall sub_195D260(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v4; // rax
  __int64 *v5; // r12
  unsigned __int16 *v6; // rax
  __int64 v7; // rax

  v4 = sub_1946B40(a1, *(void ***)(a2 + 24), a3, a4);
  if ( v4 && (v5 = (__int64 *)v4, v6 = (unsigned __int16 *)sub_BFA3B0(a2), v7 = sub_1944E10(a1, v6, a3, a4), v7 != 1) )
    return sub_16B2590(
             *a1,
             *(_DWORD *)(a2 + 32),
             v5,
             *(_DWORD *)(a2 + 36),
             (_WORD *)(v7 & 0xFFFFFFFFFFFFFFFELL),
             a3,
             *(double *)a4.m128_u64);
  else
    return 1;
}
