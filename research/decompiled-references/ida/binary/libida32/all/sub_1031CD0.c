__int64 *__fastcall sub_1031CD0(__int64 *a1, const __m128i *a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = operator new(0x260u);
  sub_10316E0(v4, a2, a3);
  *(_QWORD *)v4 = &off_2BEF5F0;
  *(_QWORD *)(v4 + 328) = "__mcount";
  if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
    *(_BYTE *)(v4 + 278) = 1;
  *a1 = v4;
  return a1;
}

