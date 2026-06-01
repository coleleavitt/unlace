__m128i *__fastcall sub_1DC8780(
        __int64 *a1,
        const __m128i *a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdx
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  if ( !a2 )
    return (__m128i *)a2;
  v8 = a2[2].m128i_u16[2];
  if ( (_WORD)v8 == 45 )
  {
    v10 = sub_1DC71F0(a1, a2[2].m128i_u64[1], v8, a6, a7, a8, a3, a4);
    return sub_1C66200(
             (__int64 *)*a1,
             a2,
             (_DWORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFFELL),
             a3,
             a4,
             v11,
             v12,
             v13);
  }
  else
  {
    if ( (unsigned __int16)v8 <= 0x2Du )
    {
      if ( (_WORD)v8 == 44 )
        return (__m128i *)sub_1DC8440(a1, (__int64)a2, v8, a6, a7, a8, a3, a4);
      return (__m128i *)a2;
    }
    if ( (_WORD)v8 != 91 )
    {
      if ( (_WORD)v8 == 418 )
        return sub_1DC8630(a1, a2, v8, a6, a7, a8, a3, a4);
      return (__m128i *)a2;
    }
    return (__m128i *)sub_1DC8510(a1, (__int64)a2, (void *)v8, a6, a7, a8, a3, a4);
  }
}
