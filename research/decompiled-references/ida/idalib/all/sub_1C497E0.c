unsigned __int64 __fastcall sub_1C497E0(
        __int64 a1,
        int a2,
        const __m128i **a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        double a7)
{
  const __m128i **v7; // r15
  const __m128i **v11; // rbx

  v7 = &a3[a4];
  if ( a3 == v7 )
    return sub_EEEE70(*(_QWORD **)(a1 + 248), a2, a3, a4, (__int64)a5, a6);
  v11 = a3;
  while ( 1 )
  {
    while ( (*v11)[2].m128i_i16[2] != 50 )
    {
      if ( v7 == ++v11 )
        return sub_EEEE70(*(_QWORD **)(a1 + 248), a2, a3, a4, (__int64)a5, a6);
    }
    if ( !(unsigned __int8)sub_1C495B0(a1, a5, *v11, a7) )
      break;
    ++v11;
    sub_15F24C0(a1);
    if ( v7 == v11 )
      return sub_EEEE70(*(_QWORD **)(a1 + 248), a2, a3, a4, (__int64)a5, a6);
  }
  return (unsigned __int64)a5;
}
