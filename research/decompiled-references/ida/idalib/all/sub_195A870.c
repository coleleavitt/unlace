__int64 __fastcall sub_195A870(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 32), a3, a4);
  if ( v7 == 1 )
    return 1;
  else
    return sub_19CFAC0(
             *(_QWORD *)(*a1 + 736),
             *(unsigned int *)(a2 + 16),
             v6 & 0xFFFFFFFFFFFFFFFELL,
             v7 & 0xFFFFFFFFFFFFFFFELL,
             *(_QWORD *)(a2 + 40),
             *(_QWORD *)(a2 + 48));
}
