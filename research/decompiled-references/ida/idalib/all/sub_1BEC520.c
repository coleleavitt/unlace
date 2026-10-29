__m128i *__fastcall sub_1BEC520(
        __m128i *a1,
        __int64 a2,
        _WORD *a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  int v10; // ebp
  int v12; // eax
  int v13; // [rsp+8h] [rbp-30h]
  int v14; // [rsp+18h] [rbp-20h]

  v10 = a5;
  if ( (*a3 & 0x1FF) == 0x35 )
  {
    sub_1BF6540((_DWORD)a1, a2, (_DWORD)a3, a4, a5, a6, a9);
    return a1;
  }
  else
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 > 1 )
    {
      sub_1BEC140(a1, a2, (unsigned __int64)a3, a4, a5, 0, a7, a8, a6, 0, a9, 0);
    }
    else
    {
      v14 = a4;
      v13 = (int)a3;
      v12 = sub_EEB7E0((unsigned __int64)a3, a2, *(double *)a7.m128_u64);
      sub_1BF3150((_DWORD)a1, a2, v13, v14, v12, v10, a10);
    }
    return a1;
  }
}
