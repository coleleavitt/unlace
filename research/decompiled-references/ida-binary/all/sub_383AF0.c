__int64 __fastcall srcview_set_tab_size_ah_t__::vfunc_0(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi

  v14 = *a10;
  if ( !*a10 || !(_QWORD)xmmword_8CF2A8 )
    return 0;
  v15 = 0;
  v16 = 0;
  while ( 1 )
  {
    v17 = *(_QWORD *)(qword_8CF2A0 + 8 * v16);
    if ( v17 )
    {
      if ( v14 == *(_QWORD *)(v17 + 24) )
        break;
    }
    v15 = (unsigned int)(v15 + 1);
    v16 = (int)v15;
    if ( (int)v15 >= (unsigned __int64)xmmword_8CF2A8 )
      return 0;
  }
  return (unsigned __int8)sub_383A30(v17, a1, a2, a3, a4, a5, a6, a7, a8, qword_8CF2A0, v15, xmmword_8CF2A8, v14, a14);
}
