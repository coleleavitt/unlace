__int64 __fastcall sub_200CC0(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  int v12; // eax
  int v13; // eax
  char v14; // cl
  int v15; // edx
  unsigned int v16; // ecx
  int v18; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-10h]

  v12 = a1[57].m128i_i32[0];
  v19 = __readfsqword(0x28u);
  if ( (_BYTE)a2 )
  {
    if ( v12 <= 0 )
    {
      a1[57].m128i_i32[0] = 1;
      v18 = 0;
      sub_2006B0(a1, (__int64)&v18, 0, a4, a5, a6, a7, a8, a9, a10, a11, a12);
      return (unsigned int)a2;
    }
    v13 = v12 + 1;
    v14 = 0;
  }
  else
  {
    if ( v12 >= 0 )
    {
      a1[57].m128i_i32[0] = -1;
      return sub_200BD0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
    v13 = v12 - 1;
    v14 = 1;
  }
  a1[57].m128i_i32[0] = v13;
  if ( (v14 == 0 ? 2 : -2) == v13 )
    return (*(__int64 (__fastcall **)(const __m128i *, _QWORD))(a1->m128i_i64[0] + 544))(
             a1,
             2 - (unsigned int)(unsigned __int8)a2);
  v15 = -(v14 == 0);
  v16 = 0;
  if ( (v15 & 6) - 3 != v13 )
    return v16;
  return (*(__int64 (__fastcall **)(const __m128i *, _QWORD, __int64, _QWORD))(a1->m128i_i64[0] + 536))(
           a1,
           2 - (unsigned int)(unsigned __int8)a2,
           1,
           0);
}
