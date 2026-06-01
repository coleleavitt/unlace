__int64 __fastcall sub_569B50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10)
{
  __int64 result; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // eax

  result = 0;
  if ( (_QWORD)a8 != (_QWORD)a10 )
  {
    v11 = sub_565DC0(a1, a2, a3, a10, a5, a6, _mm_loadu_si128((const __m128i *)&a7).m128i_u32[0]);
    v16 = sub_565DC0(a1, a2, v12, v13, v14, v15, _mm_loadu_si128((const __m128i *)&a9).m128i_u32[0]);
    v20 = v16;
    if ( v11 >= v16 )
    {
      result = 1;
      if ( (unsigned int)v20 < v11 )
        return result;
      v21 = sub_566CC0(
              a1,
              a2,
              v20,
              v17,
              v18,
              v19,
              (__int128)_mm_loadu_si128((const __m128i *)&a7),
              (__int128)_mm_loadu_si128((const __m128i *)&a8));
      v26 = sub_566CC0(
              a1,
              a2,
              v22,
              v23,
              v24,
              v25,
              (__int128)_mm_loadu_si128((const __m128i *)&a9),
              (__int128)_mm_loadu_si128((const __m128i *)&a10));
      if ( v26 >= v21 )
        return v21 < v26;
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}
