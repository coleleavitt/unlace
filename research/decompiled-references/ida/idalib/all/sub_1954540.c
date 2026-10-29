__int64 __fastcall sub_1954540(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax

  v4 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 48), a3, a4);
  if ( v4 == 1 )
    return 0;
  else
    return sub_1B1C360(
             *(_QWORD *)(*a1 + 760),
             *(_DWORD *)(a2 + 32),
             (unsigned int)v4 & 0xFFFFFFFE,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 36),
             *(_DWORD *)(a2 + 40),
             *(_DWORD *)(a2 + 4));
}
