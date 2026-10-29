__int64 __fastcall sub_7C7340(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned __int8 a5, __m128i a6)
{
  unsigned int v10; // edx
  _QWORD *v11; // rdi
  __int64 (*v12)(void); // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, unsigned __int8); // rax
  int v17; // eax
  unsigned int v18; // r14d
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v22; // ecx
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  bool v28; // cc
  const __m128i *v29; // rax
  __m128i v30; // xmm1
  __int64 v31; // rcx
  __m128i v32; // xmm0
  int v33; // [rsp+8h] [rbp-50h]
  unsigned int v34; // [rsp+8h] [rbp-50h]
  __int64 v35[8]; // [rsp+18h] [rbp-40h] BYREF

  v35[0] = 0;
  sub_7C7230(a1, a2, v35);
  v10 = sub_182D020(qword_1C7F2C0, a3);
  if ( !a4 )
  {
LABEL_6:
    v15 = *(_QWORD *)(a1 + 24);
    v16 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v15 + 24LL);
    if ( v16 == sub_788600 )
      v17 = sub_11CA540(v15, 1, 1);
    else
      v17 = v16(v15, 1u);
    v33 = v17;
    v18 = 2 * v17;
    v19 = sub_182D020(qword_1C7F2C0, a3);
    sub_7B8DA0(a1, v33, v35, v19, a6);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 64LL))(*(_QWORD *)(a1 + 88), a2, v18);
    v20 = v18 ^ a5;
    goto LABEL_9;
  }
  v11 = *(_QWORD **)(a1 + 24);
  v12 = *(__int64 (**)(void))(*v11 + 72LL);
  if ( v12 == sub_7C9C70 )
  {
    v13 = v11[525];
    if ( !v13 )
      goto LABEL_12;
    v14 = *(_DWORD *)(v13 - 4);
  }
  else
  {
    v34 = v10;
    v14 = v12();
    v10 = v34;
  }
  if ( v14 )
    goto LABEL_6;
LABEL_12:
  v22 = v10;
  if ( a5 )
  {
    v23 = v35[0];
    if ( !v35[0] )
    {
      LODWORD(v24) = 0;
      goto LABEL_24;
    }
    v24 = *(unsigned int *)(v35[0] - 4);
    v25 = v35[0] + 4 * v24;
    if ( v25 == v35[0] )
    {
LABEL_24:
      v22 = v24 - v10 + 1;
      goto LABEL_25;
    }
    v26 = 4 * v24 - 4;
    v27 = (v26 >> 2) + 1;
    v28 = v26 <= 8;
    v29 = (const __m128i *)v35[0];
    if ( !v28 )
    {
      v30 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      v31 = v35[0] + 16 * (v27 >> 2);
      do
      {
        v32 = _mm_loadu_si128(v29++);
        a6 = _mm_xor_si128(v32, v30);
        v29[-1] = a6;
      }
      while ( (const __m128i *)v31 != v29 );
      if ( (v27 & 3) == 0 )
      {
LABEL_23:
        LODWORD(v24) = *(_DWORD *)(v23 - 4);
        goto LABEL_24;
      }
      v29 = (const __m128i *)(v23 + 4 * (v27 & 0xFFFFFFFFFFFFFFFCLL));
    }
    v29->m128i_i32[0] ^= 1u;
    if ( (const __m128i *)v25 != (const __m128i *)((char *)v29->m128i_i64 + 4) )
    {
      v29->m128i_i32[1] ^= 1u;
      if ( (unsigned __int64 *)v25 != &v29->m128i_u64[1] )
        v29->m128i_i32[2] ^= 1u;
    }
    goto LABEL_23;
  }
LABEL_25:
  sub_7B8DA0(a1, 0x7FFFFFFF, v35, v22, a6);
  v20 = -2;
LABEL_9:
  if ( v35[0] )
    sub_186B220((void *)(v35[0] - 8));
  return v20;
}

