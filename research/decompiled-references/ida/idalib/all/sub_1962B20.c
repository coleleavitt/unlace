__int64 __fastcall sub_1962B20(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v7 = sub_1962AD0(a1, *(unsigned int **)(a2 + 24), a3, a4);
  if ( v7 == 1 )
    return 1;
  else
    return sub_1C3AFE0(*a1, *(unsigned int *)(a2 + 8), v6 & 0xFFFFFFFFFFFFFFFELL, v7 & 0xFFFFFFFFFFFFFFFELL);
}
