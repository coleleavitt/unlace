__int64 __fastcall sub_195E840(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 32), a3, a4);
  if ( v7 == 1 )
    return 1;
  v8 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 40), a3, a4);
  if ( v8 == 1 )
    return 1;
  else
    return sub_1923BC0(
             *a1,
             *(_DWORD *)(a2 + 16),
             *(unsigned int *)(a2 + 20),
             v6 & 0xFFFFFFFFFFFFFFFELL,
             v7 & 0xFFFFFFFFFFFFFFFELL,
             v8 & 0xFFFFFFFFFFFFFFFELL,
             a3,
             a4);
}
