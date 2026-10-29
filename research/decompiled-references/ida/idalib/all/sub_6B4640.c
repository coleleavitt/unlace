__int64 __fastcall sub_6B4640(__int64 **a1, __int64 *a2, unsigned __int64 *a3, const __m128i *a4)
{
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  __int64 *v9; // r13
  unsigned __int64 v10; // [rsp-10h] [rbp-38h]

  v6 = *a3;
  v7 = a3[1];
  if ( v6 != a4->m128i_i64[0] || a4->m128i_i64[1] != v7 )
  {
    if ( *((_BYTE *)a1 + 40) )
    {
      v9 = *a1;
      sub_3A61A0(*a1, v6, v7, 0x28u);
      sub_3A61A0(v9, a4->m128i_i64[0], a4->m128i_u64[1], 0x28u);
      *(__m128i *)a3 = _mm_loadu_si128(a4);
      return sub_5C7BB0(v9, (__int64)a2, 1);
    }
    else
    {
      v10 = v7;
      sub_6B4500(a1, *a2);
      return v10;
    }
  }
  return result;
}
