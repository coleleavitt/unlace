__int64 __fastcall sub_1BC6C10(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __m128i a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __m128i si128; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rsi
  __m128i v20[3]; // [rsp+0h] [rbp-38h] BYREF

  v8 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(*a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) == 13 )
  {
    v10 = *(unsigned __int16 *)(v9 + 18);
    LOWORD(v10) = ((unsigned __int16)v10 >> 3) & 0x1FF;
    if ( (unsigned __int16)v10 > 0x1F2u )
    {
      LOBYTE(v8) = (_WORD)v10 == 504 && a3 != 0;
      if ( (_BYTE)v8 )
      {
        v15 = *(unsigned int *)(a3 + 8);
        v16 = *(unsigned int *)(a3 + 12);
        v20[0].m128i_i64[0] = *a2;
        si128 = (__m128i)_mm_loadh_ps((const double *)v20[0].m128i_i64);
        if ( v15 + 1 > v16 )
        {
          v20[0] = si128;
          sub_2237220(a3, a3 + 16, v15 + 1, 16);
          v15 = *(unsigned int *)(a3 + 8);
          si128 = _mm_load_si128(v20);
        }
        v8 = 0;
        *(__m128i *)(*(_QWORD *)a3 + 16 * v15) = si128;
        v18 = *(_QWORD *)(a1 + 736);
        v19 = *a2;
        ++*(_DWORD *)(a3 + 8);
        *a2 = sub_19D0DD0(v18, v19);
      }
      else
      {
        v13 = sub_1907C70(a1, (_QWORD *)*a2, a4, a5, a3, v10, *a2, a8);
        if ( v13 == 1 )
          return 1;
        else
          *a2 = v13 & 0xFFFFFFFFFFFFFFFELL;
      }
    }
  }
  return v8;
}
