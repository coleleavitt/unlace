__int64 __fastcall sub_3F0D80(__int64 *a1, __int64 a2, unsigned __int64 dtype_size)
{
  bool v3; // zf
  __int64 v5; // rdi
  __int64 v6; // rbp
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v11; // rdi
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __m128i v15; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-20h]

  v3 = *(_BYTE *)(a2 + 1) == 2;
  v16 = __readfsqword(0x28u);
  if ( v3 && !*(_BYTE *)(a2 + 32) )
  {
    if ( !dtype_size )
    {
      v11 = *(unsigned __int8 *)(a2 + 5);
      v12.m128i_i64[0] = a2;
      dtype_size = get_dtype_size(v11);
    }
    return sub_122B20(a1, *(_QWORD *)(a2 + 16), dtype_size);
  }
  else
  {
    v15 = 0;
    v13[0] = 0;
    v13[1] = 0;
    v14 = 0;
    v14 = qvector_reserve(&v14, 0, 1, 16);
    *(__m128i *)(v14 + 16 * v15.m128i_i64[0]++) = _mm_load_si128((const __m128i *)&xmmword_424800);
    sub_648D0(a1, v13);
    v5 = a1[2];
    v6 = v14;
    v14 = 0;
    v7 = _mm_loadu_si128(&v15);
    v15 = 0;
    if ( v5 )
    {
      a1[3] = 0;
      v12 = v7;
      qfree(v5);
      v8 = _mm_load_si128(&v12);
      v9 = v14;
      a1[2] = v6;
      *(__m128i *)(a1 + 3) = v8;
      if ( v9 )
      {
        v15.m128i_i64[0] = 0;
        qfree(v9);
      }
    }
    else
    {
      a1[2] = v6;
      *(__m128i *)(a1 + 3) = v7;
    }
    qfree(v13[0]);
    return v16 - __readfsqword(0x28u);
  }
}
