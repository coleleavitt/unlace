__int64 __fastcall sub_1959720(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = sub_19A3EF0(*a1, v4 & 0xFFFFFFFFFFFFFFFELL);
  return sub_1C36C00(*a1, *(unsigned int *)(a2 + 4), *(unsigned int *)(a2 + 8), v6 & 0xFFFFFFFFFFFFFFFELL);
}
