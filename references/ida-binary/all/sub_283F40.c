__int64 __fastcall sub_283F40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  char v15; // [rsp+0h] [rbp-8h]

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (_DWORD)a2 == 2 )
        return linearray_t_ending(a1);
      return linearray_t_beginning(a1);
    }
    return 0;
  }
  sub_169700(
    (int)"Coherency check failed: b == b_bottom || b == b_top\n",
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    v15);
  if ( !*(_QWORD *)(a1 + 24) )
    return 0;
  return linearray_t_beginning(a1);
}
