__int64 __fastcall pb_chooser_t__::vfunc_4(_QWORD *a1, const char *a2)
{
  _QWORD *v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // r13
  const __m128i *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm1
  __m128i v20; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  char v24; // [rsp+30h] [rbp-38h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v2 = a1 + 25;
  v25 = __readfsqword(0x28u);
  v4 = a1[25];
  if ( v4 )
  {
    a1[26] = 0;
    qfree(v4, a2);
    a1[25] = 0;
    a1[27] = 0;
  }
  v24 = 1;
  v23 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD2F0);
  v22 = v2;
  v5 = getinf(20);
  visit_patched_bytes(0, v5, sub_36F240, &si128);
  if ( si128.m128i_i64[0] != -1 )
  {
    v7 = a1[27];
    si128.m128i_i64[1] = v23 + 1 - si128.m128i_i64[0];
    v8 = a1[26];
    v9 = _mm_unpacklo_epi64((__m128i)si128.m128i_u64[0], (__m128i)si128.m128i_u64[1]);
    if ( v7 < v8 + 1 )
    {
      v20 = v9;
      v11 = qvector_reserve(v2, 0, v8 + 1, 16);
      v12 = a1[26];
      v13 = _mm_load_si128(&v20);
      v14 = a1[27];
      v15 = (const __m128i *)a1[25];
      v10 = v11;
      a1[27] = v7;
      v16 = v12 - 1;
      if ( v16 >= 0 )
      {
        v17 = v11;
        do
        {
          v18 = _mm_loadu_si128(v15);
          v17 += 16;
          ++v15;
          *(__m128i *)(v17 - 16) = v18;
        }
        while ( v16-- != 0 );
        v15 = (const __m128i *)a1[25];
      }
      v20 = v13;
      qfree(v15, nullptr);
      a1[25] = v10;
      v9 = _mm_load_si128(&v20);
      a1[27] = v14;
      v8 = a1[26];
    }
    else
    {
      v10 = a1[25];
    }
    *(__m128i *)(v10 + 16 * v8) = v9;
    ++a1[26];
  }
  return 1;
}
