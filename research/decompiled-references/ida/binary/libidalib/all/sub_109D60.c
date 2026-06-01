unsigned __int64 sub_109D60()
{
  __int16 v0; // bp
  __m128i *v1; // rax
  __m128i *v2; // rsi
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __m128i v6; // xmm0
  __m128i v7; // [rsp+0h] [rbp-58h] BYREF
  __m128i v8; // [rsp+10h] [rbp-48h] BYREF
  __m128i *v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v0 = word_24F0DC;
  v11 = __readfsqword(0x28u);
  v10 = 0;
  v9 = (__m128i *)qvector_reserve();
  v8.m128i_i8[8] = 0;
  v1 = v9;
  v9->m128i_i16[0] = v0;
  v2 = v9;
  v1->m128i_i8[8] = 0;
  v3 = v10 + 1;
  v4 = v10 + 2;
  v8.m128i_i16[0] = word_24F0DE;
  *(_QWORD *)&v10 = v10 + 1;
  if ( &v8 >= v2 && &v8 < &v2[*((_QWORD *)&v10 + 1)] )
  {
    v6 = _mm_load_si128(&v8);
    if ( *((_QWORD *)&v10 + 1) < v4 )
    {
      v7 = v6;
      v9 = (__m128i *)qvector_reserve();
      v3 = v10;
      v2 = v9;
      v6 = _mm_load_si128(&v7);
    }
    v2[v3] = v6;
  }
  else
  {
    if ( *((_QWORD *)&v10 + 1) < v4 )
    {
      v9 = (__m128i *)qvector_reserve();
      v3 = v10;
      v2 = v9;
    }
    v2[v3] = _mm_load_si128(&v8);
  }
  *(_QWORD *)&v10 = v10 + 1;
  sub_19C290(1, 0, &v9);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

