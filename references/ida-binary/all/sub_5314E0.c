unsigned __int64 __fastcall sub_5314E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  __m128i v18; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = a1[1];
  v19 = __readfsqword(0x28u);
  v5 = v3 + v4;
  if ( a1[2] < v5 )
  {
    *a1 = qvector_reserve(a1, *a1, v5, 16);
    v3 = *(_QWORD *)(a2 + 8);
  }
  v6 = *(__int64 **)a2;
  v7 = *(_QWORD *)a2 + 8 * v3;
  if ( v7 != *(_QWORD *)a2 )
  {
    v8 = a1[1];
    do
    {
      v10 = *v6;
      v16 = *a1;
      v18.m128i_i8[8] = 0;
      v11 = v8 + 1;
      v18.m128i_i64[0] = v10;
      v12 = a1[2];
      if ( (unsigned __int64)&v18 < v16 || (unsigned __int64)&v18 >= v16 + 16 * v12 )
      {
        if ( v12 < v11 )
        {
          v13 = qvector_reserve(a1, v16, v8 + 1, 16);
          v8 = a1[1];
          *a1 = v13;
          v16 = v13;
        }
        *(__m128i *)(v16 + 16 * v8) = _mm_load_si128(&v18);
      }
      else
      {
        v9 = _mm_load_si128(&v18);
        if ( v12 < v11 )
        {
          v17 = v9;
          v15 = qvector_reserve(a1, v16, v8 + 1, 16);
          v8 = a1[1];
          v9 = _mm_load_si128(&v17);
          *a1 = v15;
          v16 = v15;
        }
        *(__m128i *)(v16 + 16 * v8) = v9;
      }
      ++v6;
      v8 = a1[1] + 1;
      a1[1] = v8;
    }
    while ( (__int64 *)v7 != v6 );
  }
  return v19 - __readfsqword(0x28u);
}
