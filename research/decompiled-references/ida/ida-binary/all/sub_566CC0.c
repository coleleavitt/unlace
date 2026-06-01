__int64 __fastcall sub_566CC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // eax
  int v9; // edx

  v8 = sub_565DC0(a1, a2, a3, a4, a5, a6, _mm_loadu_si128((const __m128i *)&a7).m128i_u32[0]);
  v9 = *(unsigned __int8 *)(a8 + 7);
  if ( (*(_QWORD *)a8 & 1) == 0 )
    v9 = *(_DWORD *)(*(_QWORD *)a8 + 16LL);
  return (unsigned int)(v9 + v8);
}
