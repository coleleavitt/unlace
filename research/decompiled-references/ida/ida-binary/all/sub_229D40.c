__int64 __fastcall sub_229D40(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // r12
  __int64 v7; // rax
  __m128i v8; // xmm3
  __m128i v9; // xmm4
  __m128i v10; // xmm5
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned __int64 v14; // rbp
  __int64 v15; // rdi
  __m128i v16; // xmm6
  __int64 v17; // rdi
  __int64 v18; // rax
  __m128i v19; // xmm7
  __int64 result; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdi
  __int64 v23; // r13
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // r13
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __m128i v29; // [rsp+0h] [rbp-88h] BYREF
  __m128i v30; // [rsp+10h] [rbp-78h] BYREF
  __m128i v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+30h] [rbp-58h]
  unsigned __int16 v33; // [rsp+3Eh] [rbp-4Ah]
  __m128i v34; // [rsp+40h] [rbp-48h] BYREF

  i = a1;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = _mm_loadu_si128((const __m128i *)a1);
  v9 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  *(_OWORD *)(a1 + 24) = 0;
  v32 = v7;
  v11 = *(_QWORD *)(a1 - 80);
  LOWORD(v7) = *(_WORD *)(a1 + 72);
  v12 = *(_QWORD *)(a1 + 16);
  v34 = v8;
  v13 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v33 = v7;
  v31 = v9;
  v30 = v10;
  *(_OWORD *)(a1 + 48) = 0;
  if ( v11 >= v8.m128i_i64[0] )
  {
    v14 = v34.m128i_u64[1];
    for ( i = a1 - 80; v8.m128i_i64[0] < v11 || v14 < *(_QWORD *)(i + 8); i -= 80 )
    {
      v21 = _mm_loadu_si128((const __m128i *)i);
      v22 = *(_QWORD *)(i + 96);
      v23 = *(_QWORD *)(i + 16);
      *(_QWORD *)(i + 16) = 0;
      *(__m128i *)(i + 80) = v21;
      v24 = _mm_loadu_si128((const __m128i *)(i + 24));
      *(_OWORD *)(i + 24) = 0;
      if ( v22 )
      {
        *(_QWORD *)(i + 104) = 0;
        qfree(v22, a2, v11, a4, a5, a6, *(_OWORD *)&v24, *(_OWORD *)&v30, *(_OWORD *)&v31);
        v24 = _mm_load_si128(&v29);
      }
      v25 = *(_QWORD *)(i + 120);
      *(_QWORD *)(i + 96) = v23;
      *(__m128i *)(i + 104) = v24;
      v26 = *(_QWORD *)(i + 40);
      v27 = _mm_loadu_si128((const __m128i *)(i + 48));
      *(_QWORD *)(i + 40) = 0;
      *(_OWORD *)(i + 48) = 0;
      if ( v25 )
      {
        *(_QWORD *)(i + 128) = 0;
        v29 = v27;
        qfree(v25, a2);
        v27 = _mm_load_si128(&v29);
      }
      v28 = *(_QWORD *)(i + 64);
      *(_QWORD *)(i + 120) = v26;
      a4 = i - 80;
      *(__m128i *)(i + 128) = v27;
      *(_QWORD *)(i + 144) = v28;
      *(_BYTE *)(i + 152) = *(_BYTE *)(i + 72);
      *(_BYTE *)(i + 153) = *(_BYTE *)(i + 73);
      v11 = *(_QWORD *)(i - 80);
      if ( v11 < v8.m128i_i64[0] )
        goto LABEL_6;
    }
    i += 80;
LABEL_6:
    v15 = *(_QWORD *)(i + 16);
    *(__m128i *)i = _mm_load_si128(&v34);
    if ( v15 )
    {
      *(_QWORD *)(i + 24) = 0;
      qfree(v15, a2);
    }
  }
  v16 = _mm_load_si128(&v31);
  v17 = *(_QWORD *)(i + 40);
  *(_QWORD *)(i + 16) = v12;
  *(__m128i *)(i + 24) = v16;
  if ( v17 )
  {
    *(_QWORD *)(i + 48) = 0;
    qfree(v17, a2);
  }
  v18 = v32;
  v19 = _mm_load_si128(&v30);
  *(_QWORD *)(i + 40) = v13;
  *(_QWORD *)(i + 64) = v18;
  result = v33;
  *(__m128i *)(i + 48) = v19;
  *(_WORD *)(i + 72) = result;
  return result;
}
