__int64 __fastcall sub_195E4E0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rbx
  void **v7; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4 & 0xFFFFFFFFFFFFFFFELL;
  v7 = sub_1946CC0(a1, *(_QWORD *)(a2 + 8), a3, a4);
  return sub_18D0F50(*a1, v6, (__int64)v7, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28), *(double *)a3.m128_u64);
}
