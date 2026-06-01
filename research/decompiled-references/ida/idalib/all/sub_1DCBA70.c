unsigned __int64 __fastcall sub_1DCBA70(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int16 *v8; // rax

  v8 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 24), a3, a4, a5, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  else
    return sub_1B340A0(
             *(__int64 **)(*a1 + 760),
             (unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 12),
             *(_DWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 4),
             *(double *)a7.m128_u64,
             *(double *)a8.m128_u64);
}
