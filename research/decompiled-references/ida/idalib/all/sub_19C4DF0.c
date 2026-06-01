unsigned __int64 __fastcall sub_19C4DF0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  if ( (_BYTE)a3
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 > 1 )
  {
    return sub_19179A0(a1, a2, 1u, a4, a5, a6, a7, a8);
  }
  else
  {
    return sub_1907C70(a1, a2, (__m128i)a7, a8, a3, a4, a5, a6);
  }
}
