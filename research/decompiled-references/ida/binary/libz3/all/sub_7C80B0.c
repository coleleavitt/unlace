__int64 __fastcall sub_7C80B0(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, __m128i a5)
{
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // r9d
  int *v8; // rbx
  void *v9; // r14
  __int64 v10; // rdx
  void *v11; // r13
  void *v12; // r14
  _QWORD *v13; // rdi
  __int64 (*v14)(void); // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, unsigned __int8); // rax
  int v19; // eax
  int v20; // ebx
  unsigned int v21; // r12d
  unsigned int v22; // eax
  __int64 v23; // r9
  void *v24; // rbx
  unsigned int v26; // eax
  int *v27; // r9
  unsigned int v28; // r8d
  int *v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdi
  __m128i v33; // xmm2
  const __m128i *v34; // rax
  __m128i v35; // xmm5
  int *m128i_i32; // rsi
  __m128 v37; // xmm1
  __m128 v38; // xmm3
  __m128i v39; // xmm0
  __m128i v40; // xmm2
  int *v41; // [rsp+10h] [rbp-A8h]
  __m128i *v45; // [rsp+30h] [rbp-88h] BYREF
  __int64 v46; // [rsp+38h] [rbp-80h] BYREF
  int v47; // [rsp+40h] [rbp-78h] BYREF
  char v48; // [rsp+44h] [rbp-74h]
  int v49; // [rsp+50h] [rbp-68h] BYREF
  char v50; // [rsp+54h] [rbp-64h]
  _QWORD v51[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v52[9]; // [rsp+70h] [rbp-48h] BYREF

  sub_168DDF0(&v47, a1 + 96, *(_QWORD *)(a2 + 16));
  sub_1831620(qword_1C7F2C0, &v47);
  v45 = nullptr;
  v46 = 0;
  sub_7C7230(a1, a2, &v46);
  v5 = v46;
  sub_7C7B20(a1, a2, &v46, &v45, v6, v7);
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v8 = (int *)v45;
  if ( v45 )
  {
    v41 = &v45->m128i_i32[2 * v45[-1].m128i_u32[3]];
    if ( v41 != (int *)v45 )
    {
      do
      {
        v10 = (unsigned int)*v8;
        v8[1] ^= 1u;
        v51[0] = 0;
        v11 = qword_1C7F2C0;
        v51[1] = 0;
        v52[0] = 1;
        v52[1] = 0;
        if ( (int)v10 < 0 )
          sub_1830C40(qword_1C7F2C0, v51, v10);
        else
          LODWORD(v51[0]) = v10;
        sub_182CBA0(v11, v52);
        v12 = qword_1C7F2C0;
        LODWORD(v52[0]) = 1;
        BYTE4(v52[0]) &= ~1u;
        if ( LODWORD(v51[0]) )
        {
          if ( v47 )
          {
            if ( (v50 & 1) == 0 && v49 == 1 )
            {
              sub_1831A80(qword_1C7F2C0, &v47, v51, &v47);
              sub_182CBA0(v12, &v49);
              v50 &= ~1u;
              v49 = 1;
            }
            else
            {
              sub_1851D20(qword_1C7F2C0, &v47, v51, &v47);
            }
          }
          else
          {
            if ( (v51[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v47, v51);
            }
            else
            {
              v48 &= ~1u;
              v47 = v51[0];
            }
            if ( (v52[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v12, &v49, v52);
            }
            else
            {
              v50 &= ~1u;
              v49 = v52[0];
            }
          }
        }
        else
        {
          if ( (v48 & 1) != 0 )
            sub_182C690(qword_1C7F2C0, &v47, &v47);
          else
            v48 &= ~1u;
          if ( (v50 & 1) != 0 )
            sub_182C690(v12, &v49, &v49);
          else
            v50 &= ~1u;
        }
        v9 = qword_1C7F2C0;
        v8 += 2;
        sub_182CBA0(qword_1C7F2C0, v51);
        sub_182CBA0(v9, v52);
      }
      while ( v41 != v8 );
    }
  }
  sub_7C71D0(a1, (__int64)&v47);
  if ( !a3 )
    goto LABEL_28;
  v13 = *(_QWORD **)(a1 + 24);
  v14 = *(__int64 (**)(void))(*v13 + 72LL);
  if ( v14 == sub_7C9C70 )
  {
    v15 = v13[525];
    if ( !v15 )
      goto LABEL_39;
    v16 = *(_DWORD *)(v15 - 4);
  }
  else
  {
    v16 = v14();
  }
  if ( v16 )
  {
LABEL_28:
    v17 = *(_QWORD *)(a1 + 24);
    v18 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v17 + 24LL);
    if ( v18 == sub_788600 )
      v19 = sub_11CA540(v17, 1, 1);
    else
      v19 = v18(v17, 1u);
    v20 = v19;
    v21 = a4 + 2 * v19;
    v22 = sub_182D020(qword_1C7F2C0, &v47);
    sub_7B9630(a1, v20, 0, (int **)&v45, v22, v23, a5);
    goto LABEL_31;
  }
LABEL_39:
  v26 = sub_182D020(qword_1C7F2C0, &v47);
  v28 = v26;
  if ( a4 )
  {
    v29 = (int *)v45;
    v28 = 1 - v26;
    if ( v45 )
    {
      v30 = 8LL * v45[-1].m128i_u32[3];
      v27 = &v45->m128i_i32[(unsigned __int64)v30 / 4];
      if ( &v45->m128i_i8[v30] != (__int8 *)v45 )
      {
        v31 = v30 - 8;
        v32 = (v31 >> 3) + 1;
        if ( v31 <= 0x10 )
          goto LABEL_54;
        v33 = 0;
        v34 = v45;
        v35 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
        m128i_i32 = v45[2 * (v32 >> 2)].m128i_i32;
        do
        {
          v37 = (__m128)_mm_loadu_si128(v34);
          v38 = (__m128)_mm_loadu_si128(v34 + 1);
          v34 += 2;
          v33 = _mm_add_epi32(v33, (__m128i)_mm_shuffle_ps(v37, v38, 136));
          v39 = _mm_xor_si128((__m128i)_mm_shuffle_ps(v37, v38, 221), v35);
          v34[-2].m128i_i32[1] = _mm_cvtsi128_si32(v39);
          v34[-2].m128i_i32[3] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v39, 85));
          v34[-1].m128i_i32[1] = _mm_cvtsi128_si32(_mm_unpackhi_epi32(v39, v39));
          v34[-1].m128i_i32[3] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v39, 255));
        }
        while ( v34 != (const __m128i *)m128i_i32 );
        v40 = _mm_add_epi32(v33, _mm_srli_si128(v33, 8));
        a5 = _mm_srli_si128(v40, 4);
        v28 += _mm_cvtsi128_si32(_mm_add_epi32(v40, a5));
        v29 += 2 * (v32 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v32 & 3) != 0 )
        {
LABEL_54:
          v29[1] ^= 1u;
          v28 += *v29;
          if ( v27 != v29 + 2 )
          {
            v29[3] ^= 1u;
            v28 += v29[2];
            if ( v27 != v29 + 4 )
            {
              v29[5] ^= 1u;
              v28 += v29[4];
            }
          }
        }
      }
    }
  }
  sub_7B9630(a1, 0x7FFFFFFF, a4, (int **)&v45, v28, (__int64)v27, a5);
  v21 = -2;
LABEL_31:
  if ( v45 )
    sub_186B220(&v45[-1].m128i_u64[1]);
  v24 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v47);
  sub_182CBA0(v24, &v49);
  return v21;
}

