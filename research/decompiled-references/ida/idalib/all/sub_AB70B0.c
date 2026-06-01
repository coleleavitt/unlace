__int64 __fastcall sub_AB70B0(_QWORD *a1, const __m128i *a2, __int64 a3)
{
  const __m128i *v3; // r12
  const __m128i *v4; // rbx
  unsigned int v6; // r15d
  __int64 v7; // rax
  const __m128i *v8; // rdi
  __m128i v10; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+10h] [rbp-68h]
  __m128i v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]

  v3 = (const __m128i *)((char *)a2 + 24 * a3);
  if ( a2 == v3 )
  {
    return 0;
  }
  else
  {
    v4 = a2;
    v6 = 0;
    do
    {
      v7 = v4[1].m128i_i64[0];
      v12 = _mm_loadu_si128(v4);
      v13 = v7;
      sub_AB6BB0(&v10, a1, v4);
      v8 = v4;
      v4 = (const __m128i *)((char *)v4 + 24);
      *(const __m128i *)((char *)&v4[-2] + 8) = _mm_loadu_si128(&v10);
      v4[-1].m128i_i64[1] = v11;
      v6 |= sub_F1DBF0(v8, &v12) ^ 1;
    }
    while ( v3 != v4 );
  }
  return v6;
}
