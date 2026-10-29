__int64 __fastcall sub_7C7830(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned __int8 a5, __m128i a6)
{
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, unsigned __int8); // rax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // r15d
  __int64 (__fastcall *v15)(__int64, unsigned __int8); // rax
  int v16; // eax
  int v17; // r12d
  unsigned int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rcx
  const __m128i *v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  bool v24; // cc
  const __m128i *v25; // rax
  __m128i v26; // xmm1
  const __m128i *v27; // rdx
  __m128i v28; // xmm0
  int v29; // eax
  __int64 v30; // rdi
  unsigned int v31; // r15d
  __int64 (__fastcall *v32)(__int64, unsigned __int8); // rax
  int v33; // eax
  unsigned int v34; // r13d
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  unsigned int v38; // ebp
  char v40; // [rsp+0h] [rbp-68h]
  unsigned int v41; // [rsp+0h] [rbp-68h]
  int v42; // [rsp+4h] [rbp-64h]
  unsigned int v43; // [rsp+4h] [rbp-64h]
  const __m128i *v45; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+20h] [rbp-48h] BYREF
  __int64 v47; // [rsp+28h] [rbp-40h]

  v45 = nullptr;
  sub_7C7230(a1, a2, &v45);
  v40 = a5 | a4 ^ 1;
  if ( v40 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v11 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v10 + 24LL);
    if ( v11 == sub_788600 )
      v12 = sub_11CA540(v10, 1, 1);
    else
      v12 = v11(v10, 1u);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = v12;
    v15 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v13 + 24LL);
    if ( v15 == sub_788600 )
      v16 = sub_11CA540(v13, 1, 1);
    else
      v16 = v15(v13, 1u);
    v17 = v16;
  }
  else
  {
    v14 = 0x7FFFFFFF;
    v17 = 0x7FFFFFFF;
  }
  v18 = sub_182D020(qword_1C7F2C0, a3);
  sub_7B8DA0(a1, v14, (__int64 *)&v45, v18, a6);
  v19 = (__int64)v45;
  if ( v45 )
  {
    v20 = v45[-1].m128i_u32[3];
    v21 = (const __m128i *)((char *)v45 + 4 * v20);
    if ( v45 == v21 )
      goto LABEL_19;
    v22 = 4 * v20 - 4;
    v23 = (v22 >> 2) + 1;
    v24 = v22 <= 8;
    v25 = v45;
    if ( !v24 )
    {
      v26 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      v27 = &v45[v23 >> 2];
      do
      {
        v28 = _mm_loadu_si128(v25++);
        a6 = _mm_xor_si128(v28, v26);
        v25[-1] = a6;
      }
      while ( v25 != v27 );
      if ( (v23 & 3) == 0 )
      {
LABEL_18:
        LODWORD(v20) = *(_DWORD *)(v19 - 4);
        goto LABEL_19;
      }
      v25 = (const __m128i *)(v19 + 4 * (v23 & 0xFFFFFFFFFFFFFFFCLL));
    }
    v25->m128i_i32[0] ^= 1u;
    if ( v21 != (const __m128i *)((char *)v25->m128i_i64 + 4) )
    {
      v25->m128i_i32[1] ^= 1u;
      if ( v21 != (const __m128i *)&v25->m128i_u64[1] )
        v25->m128i_i32[2] ^= 1u;
    }
    goto LABEL_18;
  }
  LODWORD(v20) = 0;
LABEL_19:
  v42 = v20;
  v29 = sub_182D020(qword_1C7F2C0, a3);
  sub_7B8DA0(a1, v17, (__int64 *)&v45, v42 - v29, a6);
  if ( v40 )
  {
    v30 = *(_QWORD *)(a1 + 24);
    v31 = 2 * v14;
    v41 = 2 * v17;
    v32 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v30 + 24LL);
    if ( v32 == sub_788600 )
      v33 = sub_11CA540(v30, 0, 1);
    else
      v33 = v32(v30, 0);
    v34 = 2 * v33;
    v35 = *(_QWORD *)(a1 + 24);
    v47 = 0;
    v46 = 0xFFFFFFFF00000001LL;
    v43 = (2 * v33) ^ 1;
    sub_11C4C70(v35, v43, v31, &v46);
    v36 = *(_QWORD *)(a1 + 24);
    v46 = 0xFFFFFFFF00000001LL;
    v47 = 0;
    sub_11C4C70(v36, v43, v41, &v46);
    v37 = *(_QWORD *)(a1 + 24);
    v46 = 0xFFFFFFFF00000001LL;
    v47 = 0;
    sub_11C4E60(v37, v31 ^ 1, v41 ^ 1, v34, &v46);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 64LL))(*(_QWORD *)(a1 + 88), a2, v34);
    v38 = v34 ^ a5;
  }
  else
  {
    v38 = -2;
  }
  if ( v45 )
    sub_186B220(&v45[-1].m128i_u64[1]);
  return v38;
}

