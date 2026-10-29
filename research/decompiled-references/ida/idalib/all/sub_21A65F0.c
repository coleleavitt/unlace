unsigned __int64 __fastcall sub_21A65F0(__int64 a1, const __m128i *a2, __int64 a3)
{
  __int64 v3; // rcx
  const __m128i *v6; // rbp
  __m128i *v7; // rbx
  __int8 *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // r14
  _BYTE *v14; // rsi
  _BYTE *v15; // rax
  unsigned __int64 v16; // rdx
  char *v17; // rax
  char *v18; // r9
  size_t v19; // r10
  __m128i v20; // xmm0
  char *v21; // rax
  int v22; // eax
  __m128i v23; // xmm2
  __int64 v24; // rdx
  __m128i v25; // xmm3
  __m128i v26; // xmm4
  __m128i v27; // xmm5
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  const __m128i *v30; // rcx
  __int32 v31; // eax
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __int32 v34; // eax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  unsigned __int64 v40; // r14
  const __m128i *v41; // rax
  unsigned __int64 v42; // rdx
  __int32 v43; // ecx
  __m128i v44; // xmm5
  __m128i v45; // xmm6
  __m128i v46; // xmm7
  __int32 v47; // ecx
  __m128i v48; // xmm1
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __m128i *i; // r15
  void *v53; // rdi
  unsigned __int64 v54; // rax
  unsigned __int64 result; // rax
  __m128 v56; // xmm0
  unsigned __int64 v57; // [rsp+8h] [rbp-50h] BYREF
  __m128i v58; // [rsp+10h] [rbp-48h] BYREF

  v3 = a3;
  v6 = *(const __m128i **)(a1 + 8);
  v7 = *(__m128i **)a1;
  v8 = &a2->m128i_i8[-*(_QWORD *)a1];
  v9 = ((__int64)v6->m128i_i64 - *(_QWORD *)a1) >> 7;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_29;
  }
  v10 = 2 * v9;
  if ( v9 > 2 * v9 || v10 > 0x1FFFFFFFFFFFFFFLL )
  {
    v10 = -128;
LABEL_4:
    v58.m128i_i64[0] = a3;
    v11 = operator new(v10);
    v3 = v58.m128i_i64[0];
    v57 = v11;
    goto LABEL_5;
  }
  v57 = 0;
  if ( v10 )
  {
LABEL_29:
    v10 <<= 7;
    goto LABEL_4;
  }
LABEL_5:
  v12 = *(_QWORD *)v3;
  v13 = &v8[v57];
  v14 = *(_BYTE **)(v3 + 8);
  *(_OWORD *)(v13 + 8) = 0;
  *(_QWORD *)v13 = v12;
  v15 = *(_BYTE **)(v3 + 16);
  *((_QWORD *)v13 + 3) = 0;
  v16 = v15 - v14;
  if ( (v15 - v14) >> 3 )
  {
    if ( (unsigned __int64)((v15 - v14) >> 3) > 0x1FFFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v58.m128i_i64[1] = v3;
    v58.m128i_i64[0] = v15 - v14;
    v17 = (char *)operator new(v16);
    v3 = v58.m128i_i64[1];
    v16 = v58.m128i_i64[0];
    v18 = v17;
    v15 = *(_BYTE **)(v58.m128i_i64[1] + 16);
    v14 = *(_BYTE **)(v58.m128i_i64[1] + 8);
    v19 = v15 - v14;
  }
  else
  {
    v19 = v15 - v14;
    v18 = nullptr;
  }
  v58.m128i_i64[0] = (__int64)v18;
  v20 = _mm_loadl_epi64(&v58);
  *((_QWORD *)v13 + 3) = &v18[v16];
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v20, v20);
  if ( v15 != v14 )
  {
    v58.m128i_i64[1] = v3;
    v58.m128i_i64[0] = v19;
    v21 = (char *)memmove(v18, v14, v19);
    v3 = v58.m128i_i64[1];
    v19 = v58.m128i_i64[0];
    v18 = v21;
  }
  v22 = *(_DWORD *)(v3 + 56);
  v23 = _mm_loadu_si128((const __m128i *)(v3 + 32));
  v24 = *(_QWORD *)(v3 + 48);
  v25 = _mm_loadu_si128((const __m128i *)(v3 + 64));
  *((_QWORD *)v13 + 2) = &v18[v19];
  v26 = _mm_loadu_si128((const __m128i *)(v3 + 88));
  v27 = _mm_loadu_si128((const __m128i *)(v3 + 104));
  *((_DWORD *)v13 + 14) = v22;
  v28 = *(_QWORD *)(v3 + 80);
  *((__m128i *)v13 + 2) = v23;
  *((_QWORD *)v13 + 6) = v24;
  *((_QWORD *)v13 + 10) = v28;
  LODWORD(v28) = *(_DWORD *)(v3 + 120);
  *((__m128i *)v13 + 4) = v25;
  *(__m128i *)(v13 + 88) = v26;
  *(__m128i *)(v13 + 104) = v27;
  *((_DWORD *)v13 + 30) = v28;
  if ( a2 == v7 )
  {
    v39 = v57;
  }
  else
  {
    v29 = v57;
    v30 = v7;
    do
    {
      v31 = v30->m128i_i32[0];
      v32 = _mm_loadu_si128(v30 + 2);
      v30 += 8;
      v29 += 128LL;
      v33 = _mm_loadu_si128(v30 - 4);
      *(_DWORD *)(v29 - 128) = v31;
      v34 = v30[-8].m128i_i32[1];
      *(_OWORD *)(v29 - 120) = 0;
      *(_QWORD *)(v29 - 104) = 0;
      *(_DWORD *)(v29 - 124) = v34;
      *(_QWORD *)(v29 - 120) = v30[-8].m128i_i64[1];
      v35 = v30[-7].m128i_i64[0];
      v30[-8].m128i_i64[1] = 0;
      v36 = *(_QWORD *)(v29 - 112);
      *(_QWORD *)(v29 - 112) = v35;
      v37 = v30[-7].m128i_i64[1];
      v30[-7].m128i_i64[0] = v36;
      v38 = *(_QWORD *)(v29 - 104);
      *(_QWORD *)(v29 - 104) = v37;
      v30[-7].m128i_i64[1] = v38;
      LODWORD(v38) = v30[-5].m128i_i32[0];
      *(__m128i *)(v29 - 96) = v32;
      *(_DWORD *)(v29 - 80) = v38;
      *(_DWORD *)(v29 - 76) = v30[-5].m128i_i32[1];
      LODWORD(v38) = v30[-5].m128i_i32[2];
      *(__m128i *)(v29 - 64) = v33;
      *(_DWORD *)(v29 - 72) = v38;
      *(_QWORD *)(v29 - 48) = v30[-3].m128i_i64[0];
      *(__m128i *)(v29 - 40) = _mm_loadu_si128((const __m128i *)((char *)v30 - 40));
      *(__m128i *)(v29 - 24) = _mm_loadu_si128((const __m128i *)((char *)v30 - 24));
      *(_DWORD *)(v29 - 8) = v30[-1].m128i_i32[2];
    }
    while ( a2 != v30 );
    v39 = v57 + (((char *)&a2[-8] - (char *)v7) & 0xFFFFFFFFFFFFFF80LL) + 128;
  }
  v40 = v39 + 128;
  v41 = a2;
  v42 = v40;
  if ( a2 != v6 )
  {
    do
    {
      v43 = v41->m128i_i32[0];
      v44 = _mm_loadu_si128(v41 + 2);
      v41 += 8;
      v42 += 128LL;
      v45 = _mm_loadu_si128(v41 - 4);
      v46 = _mm_loadu_si128((const __m128i *)((char *)v41 - 40));
      *(_DWORD *)(v42 - 128) = v43;
      v47 = v41[-8].m128i_i32[1];
      v48 = _mm_loadu_si128((const __m128i *)((char *)v41 - 24));
      *(__m128i *)(v42 - 96) = v44;
      *(_DWORD *)(v42 - 124) = v47;
      v49 = v41[-8].m128i_i64[1];
      *(__m128i *)(v42 - 64) = v45;
      *(_QWORD *)(v42 - 120) = v49;
      v50 = v41[-7].m128i_i64[0];
      *(const __m128i *)((char *)&v41[-8] + 8) = 0;
      *(_QWORD *)(v42 - 112) = v50;
      v51 = v41[-7].m128i_i64[1];
      v41[-7].m128i_i64[1] = 0;
      *(_QWORD *)(v42 - 104) = v51;
      LODWORD(v51) = v41[-5].m128i_i32[0];
      *(__m128i *)(v42 - 40) = v46;
      *(_DWORD *)(v42 - 80) = v51;
      LODWORD(v51) = v41[-5].m128i_i32[1];
      *(__m128i *)(v42 - 24) = v48;
      *(_DWORD *)(v42 - 76) = v51;
      *(_DWORD *)(v42 - 72) = v41[-5].m128i_i32[2];
      *(_QWORD *)(v42 - 48) = v41[-3].m128i_i64[0];
      *(_DWORD *)(v42 - 8) = v41[-1].m128i_i32[2];
    }
    while ( v6 != v41 );
    v40 += (((char *)v6 - (char *)a2 - 128) & 0xFFFFFFFFFFFFFF80LL) + 128;
  }
  for ( i = v7; i != v6; i += 8 )
  {
    while ( 1 )
    {
      v53 = (void *)i->m128i_i64[1];
      if ( !v53 )
        break;
      operator delete(v53);
      i += 8;
      if ( v6 == i )
        goto LABEL_20;
    }
  }
LABEL_20:
  if ( v7 )
    operator delete(v7);
  v54 = v57;
  v57 = v40;
  result = v10 + v54;
  v56 = _mm_loadh_ps((const double *)&v57);
  *(_QWORD *)(a1 + 16) = result;
  *(__m128 *)a1 = v56;
  return result;
}
