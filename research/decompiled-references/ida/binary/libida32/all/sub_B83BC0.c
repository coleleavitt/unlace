__int64 __fastcall sub_B83BC0(char *a1, __m128i *a2, const __m128i *a3, __int64 a4)
{
  __int64 v6; // r15

  v6 = 16 * (((((char *)a2 - a1) >> 4) + 1) / 2);
  if ( ((((char *)a2 - a1) >> 4) + 1) / 2 <= a4 )
  {
    sub_B83630(a1, &a1[v6], a3);
    sub_B83630(&a1[v6], a2->m128i_i8, a3);
  }
  else
  {
    sub_B83BC0(a1, &a1[v6], a3);
    sub_B83BC0(&a1[v6], a2, a3);
  }
  return sub_B82F60((__int64)a1, (const __m128i *)&a1[v6], a2, v6 >> 4, ((char *)a2 - &a1[v6]) >> 4, a3, a4);
}

