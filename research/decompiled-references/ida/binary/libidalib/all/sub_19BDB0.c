unsigned __int64 __fastcall sub_19BDB0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int16 *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __int16 v9; // ax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  __m128i v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = a1[1];
  v18 = __readfsqword(0x28u);
  if ( a1[2] < (unsigned __int64)(v3 + v4) )
  {
    *a1 = qvector_reserve();
    v3 = *(_QWORD *)(a2 + 8);
  }
  v5 = *(__int16 **)a2;
  v6 = *(_QWORD *)a2 + 2 * v3;
  if ( v6 != *(_QWORD *)a2 )
  {
    v7 = a1[1];
    do
    {
      v9 = *v5;
      v15 = *a1;
      v17.m128i_i8[8] = 0;
      v10 = v7 + 1;
      v17.m128i_i16[0] = v9;
      v11 = a1[2];
      if ( (unsigned __int64)&v17 < v15 || (unsigned __int64)&v17 >= v15 + 16 * v11 )
      {
        if ( v11 < v10 )
        {
          v12 = qvector_reserve();
          v7 = a1[1];
          *a1 = v12;
          v15 = v12;
        }
        *(__m128i *)(v15 + 16 * v7) = _mm_load_si128(&v17);
      }
      else
      {
        v8 = _mm_load_si128(&v17);
        if ( v11 < v10 )
        {
          v16 = v8;
          v14 = qvector_reserve();
          v7 = a1[1];
          v8 = _mm_load_si128(&v16);
          *a1 = v14;
          v15 = v14;
        }
        *(__m128i *)(v15 + 16 * v7) = v8;
      }
      ++v5;
      v7 = a1[1] + 1;
      a1[1] = v7;
    }
    while ( (__int16 *)v6 != v5 );
  }
  return v18 - __readfsqword(0x28u);
}

