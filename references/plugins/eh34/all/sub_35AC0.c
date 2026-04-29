__int64 __fastcall sub_35AC0(_QWORD *a1, unsigned int *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // r12
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rax
  __m128i *v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // eax
  __m128i *v11; // rax
  __int64 v13; // rdi
  __m128i *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  void (__fastcall *hexdsp)(__int64, unsigned int *, __int64 *); // rax
  __int64 *v19; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm0
  bool v22; // cf
  unsigned __int64 v23; // xmm0_8
  void (__fastcall *v24)(__int64, _QWORD *, _BYTE *); // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __m128i si128; // xmm0
  __int64 v28; // rcx
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rcx
  const __m128i *v33; // r14
  __int64 v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rax
  void (__fastcall *v37)(__int64, __int64, unsigned __int64 *); // rax
  __int64 v38; // rax
  __m128i v39; // xmm0
  unsigned __int64 v40; // rax
  void (__fastcall *v41)(__int64, __int64, _QWORD *); // rax
  __int64 v42; // rdi
  __m128i v43; // xmm0
  __int64 v44; // rdi
  void (__fastcall *v45)(__int64, __int64, _QWORD); // rax
  __int64 (__fastcall *v46)(__int64, __int64, __int64); // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  const __m128i *v51; // r15
  __int64 v52; // rbx
  __int64 v53; // r14
  __int32 v54; // eax
  void (__fastcall *v55)(__int64, __int64, unsigned __int64 *); // rax
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  void (__fastcall *v63)(__int64, unsigned int *, __int64); // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __m128i v66; // xmm0
  __int64 v67; // [rsp+0h] [rbp-108h]
  unsigned int *v68; // [rsp+8h] [rbp-100h]
  __int64 v71; // [rsp+20h] [rbp-E8h]
  __int64 v72; // [rsp+28h] [rbp-E0h]
  __int64 v73; // [rsp+38h] [rbp-D0h]
  __int128 v74; // [rsp+44h] [rbp-C4h]
  _BYTE v75[44]; // [rsp+54h] [rbp-B4h] BYREF
  unsigned __int64 v76; // [rsp+80h] [rbp-88h]
  __int64 v77; // [rsp+88h] [rbp-80h]
  char v78; // [rsp+90h] [rbp-78h]
  int v79; // [rsp+94h] [rbp-74h]
  _QWORD v80[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-60h]
  __m128i v82; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v83; // [rsp+C8h] [rbp-40h]

  v4 = a1;
  v5 = (__int64)(int)a4 << 6;
  v6 = a2[2];
  v68 = a2;
  v83 = __readfsqword(0x28u);
  v7 = a1[70];
  v71 = v5;
  v8 = (__m128i *)(v7 + v5);
  v9 = v7 + v5 + 64;
  if ( v9 != (a1[71] << 6) + v7 && (v8[5].m128i_i8[0] & 1) == 0 && v8[4].m128i_i8[12] && v6 == v8[4].m128i_i32[2] )
  {
    v13 = v8[6].m128i_i64[1];
    v8->m128i_i32[1] = v8[4].m128i_i32[1];
    if ( v13 )
    {
      v8[7].m128i_i64[0] = 0;
      qfree(v13);
    }
    a1 = (_QWORD *)v8[5].m128i_i64[1];
    v14 = v8 + 8;
    qfree(a1);
    v15 = v4[71];
    v16 = ((v4[70] + (v15 << 6) - v9) >> 6) - 2;
    if ( v16 >= 0 )
    {
      do
      {
        v17 = v14->m128i_i64[0];
        v14[-3].m128i_i64[1] = 0;
        v14[-2].m128i_i64[0] = 0;
        v14[-4].m128i_i64[0] = v17;
        v14[-4].m128i_i64[1] = v14->m128i_i64[1];
        v14[-3].m128i_i8[0] = v14[1].m128i_i8[0];
        v14[-3].m128i_i32[1] = v14[1].m128i_i32[1];
        hexdsp = (void (__fastcall *)(__int64, unsigned int *, __int64 *))get_hexdsp(a1, a2);
        v19 = &v14[1].m128i_i64[1];
        a2 = &v14[-3].m128i_u32[2];
        v14 += 4;
        hexdsp(203, a2, v19);
        v20 = v14[-2].m128i_i64[1];
        v21 = _mm_loadu_si128(v14 - 1);
        v14[-2].m128i_i64[1] = 0;
        v14[-1].m128i_i64[1] = 0;
        a1 = (_QWORD *)v14[-3].m128i_i64[1];
        v14[-6].m128i_i64[1] = v20;
        v14[-5] = v21;
        qfree(a1);
        v22 = v16-- == 0;
      }
      while ( !v22 );
      v15 = v4[71];
    }
    v4[71] = v15 - 1;
    v6 = v68[2];
  }
  v10 = *v68;
  if ( v8->m128i_i32[0] == *v68 )
  {
    v11 = (__m128i *)v4[70];
    if ( v8 == v11
      || v11 == &v8[-4]
      || (v8[-3].m128i_i8[0] & 1) != 0
      || !v8[-4].m128i_i8[12]
      || v8[-4].m128i_i32[2] != v6 )
    {
      v8->m128i_i32[2] = v6;
      v8->m128i_i8[12] = 1;
      return v83 - __readfsqword(0x28u);
    }
    v58 = v8[2].m128i_i64[1];
    v8[-4].m128i_i32[1] = v8->m128i_i32[1];
    if ( v58 )
    {
      v8[3].m128i_i64[0] = 0;
      qfree(v58);
    }
    v59 = v8[1].m128i_i64[1];
    qfree(v59);
    v60 = v4[71];
    v61 = ((v4[70] + (v60 << 6) - (__int64)v8) >> 6) - 2;
    if ( v61 >= 0 )
    {
      do
      {
        v62 = *(_QWORD *)v9;
        *(_QWORD *)(v9 - 40) = 0;
        *(_QWORD *)(v9 - 32) = 0;
        *(_QWORD *)(v9 - 64) = v62;
        *(_QWORD *)(v9 - 56) = *(_QWORD *)(v9 + 8);
        *(_BYTE *)(v9 - 48) = *(_BYTE *)(v9 + 16);
        *(_DWORD *)(v9 - 44) = *(_DWORD *)(v9 + 20);
        v63 = (void (__fastcall *)(__int64, unsigned int *, __int64))get_hexdsp(v59, a2);
        v64 = v9 + 24;
        a2 = (unsigned int *)(v9 - 40);
        v9 += 64;
        v63(203, a2, v64);
        v65 = *(_QWORD *)(v9 - 24);
        v66 = _mm_loadu_si128((const __m128i *)(v9 - 16));
        *(_QWORD *)(v9 - 24) = 0;
        *(_QWORD *)(v9 - 8) = 0;
        v59 = *(_QWORD *)(v9 - 40);
        *(_QWORD *)(v9 - 88) = v65;
        *(__m128i *)(v9 - 80) = v66;
        qfree(v59);
        v22 = v61-- == 0;
      }
      while ( !v22 );
      v60 = v4[71];
    }
    v4[71] = v60 - 1;
    v46 = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v59, a2);
    v47 = a4 - 1;
  }
  else
  {
    v74 = 0;
    memset(v75, 0, sizeof(v75));
    DWORD1(v74) = v6;
    BYTE8(v74) = 1;
    v23 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v10), _mm_cvtsi32_si128(v8->m128i_u32[1])).m128i_u64[0];
    *(_QWORD *)&v75[4] = 0;
    v77 = *(_QWORD *)((char *)&v74 + 4);
    v78 = 0;
    v79 = 0;
    v80[0] = 0;
    v80[1] = 0;
    v76 = v23;
    v24 = (void (__fastcall *)(__int64, _QWORD *, _BYTE *))get_hexdsp(a1, a2);
    v25 = 203;
    v24(203, v80, &v75[4]);
    v26 = *(_QWORD *)&v75[20];
    si128 = _mm_load_si128((const __m128i *)&v75[28]);
    memset(&v75[20], 0, 24);
    v28 = v4[71];
    v29 = v4[72];
    v81 = v26;
    v30 = v4[70];
    v82 = si128;
    v31 = v9 - v30;
    v67 = v30;
    v72 = v9 - v30;
    if ( v29 < v28 + 1 )
    {
      v48 = v4 + 70;
      v31 = 0;
      v49 = qvector_reserve(v4 + 70, 0, v28 + 1, 64);
      v50 = v4[72];
      v4[72] = v29;
      v67 = v49;
      v73 = v50;
      v51 = (const __m128i *)v4[70];
      v52 = v4[71] - 1LL;
      if ( v52 >= 0 )
      {
        v53 = v49;
        do
        {
          *(_QWORD *)v53 = v51->m128i_i64[0];
          *(_QWORD *)(v53 + 8) = v51->m128i_i64[1];
          *(_BYTE *)(v53 + 16) = v51[1].m128i_i8[0];
          v54 = v51[1].m128i_i32[1];
          *(_QWORD *)(v53 + 24) = 0;
          *(_DWORD *)(v53 + 20) = v54;
          *(_QWORD *)(v53 + 32) = 0;
          v55 = (void (__fastcall *)(__int64, __int64, unsigned __int64 *))get_hexdsp(v48, v31);
          v31 = v53 + 24;
          v55(203, v53 + 24, &v51[1].m128i_u64[1]);
          v56 = v51[2].m128i_i64[1];
          v57 = _mm_loadu_si128(v51 + 3);
          v53 += 64;
          v51 += 4;
          v51[-2].m128i_i64[1] = 0;
          *(_QWORD *)(v53 - 24) = v56;
          v51[-1].m128i_i64[1] = 0;
          *(__m128i *)(v53 - 16) = v57;
          v48 = (_QWORD *)v51[-3].m128i_i64[1];
          qfree(v48);
          v22 = v52-- == 0;
        }
        while ( !v22 );
        v51 = (const __m128i *)v4[70];
      }
      v25 = (__int64)v51;
      qfree(v51);
      v4[72] = v73;
      v4[70] = v67;
      v9 = v67 + v72;
      v28 = v4[71];
    }
    v32 = v28 << 6;
    v33 = (const __m128i *)(v32 + v67);
    v34 = v9 + v32 - v72 + 64;
    v35 = ((v32 - v72) >> 6) - 1;
    if ( v35 >= 0 )
    {
      do
      {
        v36 = v33[-4].m128i_i64[0];
        v33 -= 4;
        v34 -= 64;
        *(_QWORD *)v34 = v36;
        *(_QWORD *)(v34 + 8) = v33->m128i_i64[1];
        *(_BYTE *)(v34 + 16) = v33[1].m128i_i8[0];
        LODWORD(v36) = v33[1].m128i_i32[1];
        *(_QWORD *)(v34 + 24) = 0;
        *(_DWORD *)(v34 + 20) = v36;
        *(_QWORD *)(v34 + 32) = 0;
        v37 = (void (__fastcall *)(__int64, __int64, unsigned __int64 *))get_hexdsp(v25, v31);
        v31 = v34 + 24;
        v37(203, v34 + 24, &v33[1].m128i_u64[1]);
        v38 = v33[2].m128i_i64[1];
        v39 = _mm_loadu_si128(v33 + 3);
        v33[2].m128i_i64[1] = 0;
        v33[3].m128i_i64[1] = 0;
        *(_QWORD *)(v34 + 40) = v38;
        *(__m128i *)(v34 + 48) = v39;
        v25 = v33[1].m128i_i64[1];
        qfree(v25);
        v22 = v35-- == 0;
      }
      while ( !v22 );
    }
    v40 = v76;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    *(_QWORD *)v9 = v40;
    *(_QWORD *)(v9 + 8) = v77;
    *(_BYTE *)(v9 + 16) = v78;
    *(_DWORD *)(v9 + 20) = v79;
    v41 = (void (__fastcall *)(__int64, __int64, _QWORD *))get_hexdsp(v25, v31);
    v41(203, v9 + 24, v80);
    v42 = v80[0];
    v43 = _mm_load_si128(&v82);
    *(_QWORD *)(v9 + 40) = v81;
    *(__m128i *)(v9 + 48) = v43;
    ++v4[71];
    qfree(v42);
    if ( *(_QWORD *)&v75[20] )
    {
      *(_QWORD *)&v75[28] = 0;
      qfree(*(_QWORD *)&v75[20]);
    }
    v44 = *(_QWORD *)&v75[4];
    qfree(*(_QWORD *)&v75[4]);
    *(_DWORD *)(v4[70] + v71 + 4) = *v68 - 1;
    v45 = (void (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(v44, v71);
    v45(205, a3, a4);
    v46 = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(205, a3);
    v47 = a4 + 1;
  }
  return v46(205, a3, v47);
}
