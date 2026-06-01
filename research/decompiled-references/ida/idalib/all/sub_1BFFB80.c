__m128i *__fastcall sub_1BFFB80(
        __m128i *a1,
        __m128 *a2,
        _WORD *a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v9; // eax

  if ( (*a3 & 0x1FF) == 0x35 )
  {
    sub_1BF6540(a1, a2, (unsigned __int64)a3, a4, 0, a5, a7, a8, a6);
    return a1;
  }
  else
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 > 1 )
    {
      sub_1BEC140(a1, (__int64)a2, (unsigned __int64)a3, a4, 0, 0, a7, a8, a5, 0, a6, 0);
    }
    else
    {
      v9 = sub_EEB7E0((unsigned __int64)a3, (__int64)a2, *(double *)a7.m128_u64);
      sub_1BF3150(a1, a2, (unsigned __int64)a3, a4, v9, 0, a7, a8, 0);
    }
    return a1;
  }
}
