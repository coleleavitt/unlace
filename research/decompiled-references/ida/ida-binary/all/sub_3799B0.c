__int64 (*__fastcall sub_3799B0(
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
        __m128 a14))()
{
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax

  v15 = *(_QWORD *)(a1 + 440);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 8);
    if ( !a2 )
    {
      if ( !v16 )
        return sub_2AB890(a1);
      goto LABEL_6;
    }
    if ( v16 )
    {
      v17 = *(_QWORD *)(a2 + 8);
      if ( !v17 || (a3 = *(_QWORD *)(v16 + 296), *(_QWORD *)(v17 + 296) != a3) )
LABEL_6:
        sub_3723E0(v16 + 272, a2, a7, a8, a9, a10, a11, a12, a13, a14, a3, a4, a5, a6);
    }
  }
  return sub_2AB890(a1);
}
