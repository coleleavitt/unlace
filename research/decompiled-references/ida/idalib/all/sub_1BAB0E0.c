unsigned __int64 __fastcall sub_1BAB0E0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v7; // rax

  v7 = sub_1B73BE0(a1, *(_QWORD *)(a2 + 32), a3, a6, a7, a4, a5);
  if ( v7 == 1 )
    return 0;
  else
    return sub_1B00950(
             *(__int64 **)(*a1 + 760),
             *(_DWORD *)(a2 + 44),
             (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFFELL),
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 48),
             a6,
             a7,
             *(_DWORD *)(a2 + 40),
             *(_DWORD *)(a2 + 4));
}
