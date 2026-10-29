__int64 __fastcall sub_3E6140(__int64 *a1, __int64 a2, unsigned __int64 dtype_size)
{
  bool v3; // zf
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbp
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+20h] [rbp-38h]
  __m128i v16; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v3 = *(_BYTE *)(a2 + 1) == 2;
  v17 = __readfsqword(0x28u);
  if ( !v3 || *(_BYTE *)(a2 + 32) )
  {
    v14[0] = 0;
    v14[1] = 0;
    v6 = xmmword_4ED7D0;
    v7 = *((_QWORD *)&xmmword_4ED7D0 + 1);
    v16 = 0;
    v15 = 0;
    if ( (unsigned __int64)xmmword_4ED7D0 + v7 - 1 >= (unsigned __int64)xmmword_4ED7D0 )
    {
      v15 = qvector_reserve();
      *(__m128i *)(v15 + 16 * v16.m128i_i64[0]++) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v7);
    }
    sub_63FD0(a1, v14);
    v8 = a1[2];
    v9 = v15;
    v15 = 0;
    v10 = _mm_loadu_si128(&v16);
    v16 = 0;
    if ( v8 )
    {
      a1[3] = 0;
      v13 = v10;
      qfree();
      v11 = _mm_load_si128(&v13);
      v12 = v15;
      a1[2] = v9;
      *(__m128i *)(a1 + 3) = v11;
      if ( v12 )
      {
        v16.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      a1[2] = v9;
      *(__m128i *)(a1 + 3) = v10;
    }
    qfree();
    return v17 - __readfsqword(0x28u);
  }
  else
  {
    if ( !dtype_size )
    {
      v13.m128i_i64[0] = a2;
      dtype_size = get_dtype_size();
    }
    return sub_120620(a1, *(_QWORD *)(a2 + 16), dtype_size);
  }
}
