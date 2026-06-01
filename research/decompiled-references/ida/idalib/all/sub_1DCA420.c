unsigned __int64 __fastcall sub_1DCA420(
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

  v8 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 32), a3, a4, a5, a6, a7, a8);
  if ( v8 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 0;
  else
    return sub_1B00950(
             *(__int64 **)(*a1 + 760),
             *(_DWORD *)(a2 + 44),
             (_DWORD *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFFELL),
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 48),
             a7,
             a8,
             *(_DWORD *)(a2 + 40),
             *(_DWORD *)(a2 + 4));
}
