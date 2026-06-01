__int64 __fastcall sub_22DC00(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v15; // r12
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 (*v19)(); // rax

  v15 = xmmword_8CC458;
  if ( !(_QWORD)xmmword_8CC458 )
    return sub_169700(
             (int)"Could not load debug info for module: \"%s\"\n",
             a1,
             a11,
             a12,
             a13,
             a14,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a15);
  v17 = 0;
  while ( 1 )
  {
    v18 = *((_QWORD *)qword_8CC450 + v17);
    v19 = *(__int64 (**)())(*(_QWORD *)v18 + 80LL);
    if ( v19 != sub_2269F0 )
    {
      if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))v19)(v18, a1) )
        break;
    }
    if ( v15 == ++v17 )
      return sub_169700(
               (int)"Could not load debug info for module: \"%s\"\n",
               a1,
               a11,
               a12,
               a13,
               a14,
               a2,
               a3,
               a4,
               a5,
               a6,
               a7,
               a8,
               a9,
               a15);
  }
  return sub_388FE0();
}
