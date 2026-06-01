__int64 __fastcall sub_7C7DB0(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, __m128i a5)
{
  __int64 v7; // r14
  int v8; // r8d
  int v9; // r9d
  _QWORD *v10; // rdi
  __int64 (*v11)(void); // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, unsigned __int8); // rax
  int v16; // eax
  int v17; // r14d
  unsigned int v18; // ebp
  unsigned int v19; // eax
  __int64 v20; // r9
  void *v21; // rbx
  unsigned int v23; // eax
  unsigned __int64 v24; // r9
  unsigned int v25; // r8d
  int *v26; // rdx
  __int64 v27; // rax
  int *v28; // rdi
  unsigned __int64 v29; // rax
  __m128i v30; // xmm2
  const __m128i *v31; // rax
  __m128i v32; // xmm5
  int *m128i_i32; // rcx
  __m128 v34; // xmm1
  __m128 v35; // xmm3
  __m128i v36; // xmm0
  __m128i v37; // xmm2
  unsigned __int64 v38; // rax
  __m128i *v40; // [rsp+10h] [rbp-68h] BYREF
  __int64 v41; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v42[16]; // [rsp+20h] [rbp-58h] BYREF
  char v43[72]; // [rsp+30h] [rbp-48h] BYREF

  sub_168DDF0(v42, a1 + 96, *(_QWORD *)(a2 + 16));
  sub_7C71D0(a1, (__int64)v42);
  v40 = nullptr;
  v41 = 0;
  sub_7C7230(a1, a2, &v41);
  v7 = v41;
  sub_7C7B20(a1, a2, &v41, &v40, v8, v9);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  if ( !a3 )
    goto LABEL_8;
  v10 = *(_QWORD **)(a1 + 24);
  v11 = *(__int64 (**)(void))(*v10 + 72LL);
  if ( v11 == sub_7C9C70 )
  {
    v12 = v10[525];
    if ( !v12 )
      goto LABEL_15;
    v13 = *(_DWORD *)(v12 - 4);
  }
  else
  {
    v13 = v11();
  }
  if ( v13 )
  {
LABEL_8:
    v14 = *(_QWORD *)(a1 + 24);
    v15 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v14 + 24LL);
    if ( v15 == sub_788600 )
      v16 = sub_11CA540(v14, 1, 1);
    else
      v16 = v15(v14, 1u);
    v17 = v16;
    v18 = a4 + 2 * v16;
    v19 = sub_182D020(qword_1C7F2C0, v42);
    sub_7B9630(a1, v17, 0, (int **)&v40, v19, v20, a5);
    goto LABEL_11;
  }
LABEL_15:
  v23 = sub_182D020(qword_1C7F2C0, v42);
  v25 = v23;
  if ( a4 )
  {
    v26 = (int *)v40;
    v25 = 1 - v23;
    if ( v40 )
    {
      v27 = 8LL * v40[-1].m128i_u32[3];
      v28 = &v40->m128i_i32[(unsigned __int64)v27 / 4];
      if ( &v40->m128i_i8[v27] != (__int8 *)v40 )
      {
        v29 = v27 - 8;
        v24 = (v29 >> 3) + 1;
        if ( v29 <= 0x10 )
          goto LABEL_29;
        v30 = 0;
        v31 = v40;
        v32 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
        m128i_i32 = v40[2 * (v24 >> 2)].m128i_i32;
        do
        {
          v34 = (__m128)_mm_loadu_si128(v31);
          v35 = (__m128)_mm_loadu_si128(v31 + 1);
          v31 += 2;
          v30 = _mm_add_epi32(v30, (__m128i)_mm_shuffle_ps(v34, v35, 136));
          v36 = _mm_xor_si128((__m128i)_mm_shuffle_ps(v34, v35, 221), v32);
          v31[-2].m128i_i32[1] = _mm_cvtsi128_si32(v36);
          v31[-2].m128i_i32[3] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v36, 85));
          v31[-1].m128i_i32[1] = _mm_cvtsi128_si32(_mm_unpackhi_epi32(v36, v36));
          v31[-1].m128i_i32[3] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v36, 255));
        }
        while ( v31 != (const __m128i *)m128i_i32 );
        v37 = _mm_add_epi32(v30, _mm_srli_si128(v30, 8));
        a5 = _mm_srli_si128(v37, 4);
        v25 += _mm_cvtsi128_si32(_mm_add_epi32(v37, a5));
        v38 = v24 & 0xFFFFFFFFFFFFFFFCLL;
        v24 &= 3u;
        v26 += 2 * v38;
        if ( (_DWORD)v24 )
        {
LABEL_29:
          v26[1] ^= 1u;
          v25 += *v26;
          if ( v28 != v26 + 2 )
          {
            v26[3] ^= 1u;
            v25 += v26[2];
            if ( v28 != v26 + 4 )
            {
              v26[5] ^= 1u;
              v25 += v26[4];
            }
          }
        }
      }
    }
  }
  sub_7B9630(a1, 0x7FFFFFFF, a4, (int **)&v40, v25, v24, a5);
  v18 = -2;
LABEL_11:
  if ( v40 )
    sub_186B220(&v40[-1].m128i_u64[1]);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v42);
  sub_182CBA0(v21, v43);
  return v18;
}

