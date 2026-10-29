unsigned __int64 sub_17E220()
{
  __int64 v0; // rbp
  __int64 v1; // rax
  unsigned __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __m128i v9; // xmm0
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __m128i v11; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v0 = qword_8CA960;
  v14 = __readfsqword(0x28u);
  v13 = 0;
  v12 = 0;
  v12 = qvector_reserve(&v12, 0, 1, 16);
  v11.m128i_i8[8] = 0;
  v1 = 16 * v13 + v12;
  *(_QWORD *)v1 = v0;
  v2 = v12;
  *(_BYTE *)(v1 + 8) = 0;
  v3 = v13 + 1;
  v4 = v13 + 2;
  v11.m128i_i64[0] = qword_8CA968;
  *(_QWORD *)&v13 = v13 + 1;
  if ( (unsigned __int64)&v11 >= v2 && (unsigned __int64)&v11 < v2 + 16LL * *((_QWORD *)&v13 + 1) )
  {
    v9 = _mm_load_si128(&v11);
    if ( *((_QWORD *)&v13 + 1) < v4 )
    {
      v10 = v9;
      v12 = qvector_reserve(&v12, v2, v4, 16);
      v3 = v13;
      v2 = v12;
      v9 = _mm_load_si128(&v10);
    }
    *(__m128i *)(v2 + 16 * v3) = v9;
  }
  else
  {
    if ( *((_QWORD *)&v13 + 1) < v4 )
    {
      v12 = qvector_reserve(&v12, v2, v4, 16);
      v3 = v13;
      v2 = v12;
    }
    *(__m128i *)(v2 + 16 * v3) = _mm_load_si128(&v11);
  }
  *(_QWORD *)&v13 = v13 + 1;
  sub_531B30(1, 0, &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, 0, v5, v6, v7);
  }
  return v14 - __readfsqword(0x28u);
}
