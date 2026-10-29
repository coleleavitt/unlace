__int64 __fastcall sub_1B7B2F0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax

  sub_18C81B0(*a1);
  v4 = sub_1B7AFE0(a1, *(unsigned int **)(a2 + 16), 1u, a3, a4);
  if ( v4 != 1 )
    return sub_190F410(
             *a1,
             *(_DWORD *)(a2 + 24),
             v4 & 0xFFFFFFFFFFFFFFFELL,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 4),
             a3);
  sub_190F620(*a1, a3);
  return 1;
}
