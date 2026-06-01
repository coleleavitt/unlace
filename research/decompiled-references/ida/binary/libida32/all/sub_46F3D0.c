__int64 __fastcall sub_46F3D0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 i; // r12
  __int64 v7; // r12
  __int64 v8; // r15
  __m128i v9; // xmm0
  void *v10; // rdi
  __int64 v11; // r15
  __m128i v12; // xmm0
  void *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  unsigned int *v17; // rdi
  __int64 v18; // r14
  unsigned int v19; // esi
  unsigned __int64 v20; // rax
  __m128i v21; // xmm1
  __m128i v22; // xmm6
  unsigned int v23; // r12d
  __int64 v24; // rax
  __m128i v25; // xmm7
  __int64 v26; // rax
  __int64 v27; // rbp
  void *v28; // rdi
  __m128i v29; // xmm1
  void *v30; // rdi
  __m128i si128; // xmm6
  int v32; // eax
  __int64 result; // rax
  __int64 v34; // r13
  __int64 v35; // r15
  __m128i v36; // xmm0
  void *v37; // rdi
  __int64 v38; // r15
  __m128i v39; // xmm0
  void *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // r13
  __int64 v43; // r12
  __int64 v44; // r15
  __m128i v45; // xmm0
  void *v46; // rdi
  __int64 v47; // r15
  __m128i v48; // xmm0
  void *v49; // rdi
  __m128i v51; // [rsp+10h] [rbp-98h] BYREF
  __m128i v52; // [rsp+20h] [rbp-88h] BYREF
  __m128i v53; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v54; // [rsp+40h] [rbp-68h]
  __int64 v55; // [rsp+48h] [rbp-60h]
  __int64 v56; // [rsp+50h] [rbp-58h]
  int v57; // [rsp+58h] [rbp-50h]
  unsigned __int16 v58; // [rsp+5Eh] [rbp-4Ah]
  __m128i v59[4]; // [rsp+60h] [rbp-48h] BYREF

  v54 = a3;
  v51.m128i_i64[0] = (__int64)(a3 - 1) / 2;
  if ( a2 >= v51.m128i_i64[0] )
  {
    v15 = a2;
    v18 = a1 + (a2 << 6);
  }
  else
  {
    for ( i = a2; ; i = v15 )
    {
      v15 = 2 * (i + 1);
      v16 = (i + 1) << 7;
      v17 = (unsigned int *)(a1 + v16 - 64);
      v18 = a1 + v16;
      v19 = *(_DWORD *)(a1 + v16);
      if ( *v17 >= v19 && (v19 != *v17 || *(_DWORD *)(v18 + 4) < v17[1]) )
        v18 = a1 + (--v15 << 6);
      v7 = a1 + (i << 6);
      *(_QWORD *)v7 = *(_QWORD *)v18;
      v8 = *(_QWORD *)(v18 + 8);
      v9 = _mm_loadu_si128((const __m128i *)(v18 + 16));
      *(_QWORD *)(v18 + 8) = 0;
      *(_OWORD *)(v18 + 16) = 0;
      v10 = *(void **)(v7 + 8);
      if ( v10 )
      {
        *(_QWORD *)(v7 + 16) = 0;
        v52 = v9;
        qfree(v10);
        v9 = _mm_load_si128(&v52);
      }
      *(_QWORD *)(v7 + 8) = v8;
      *(__m128i *)(v7 + 16) = v9;
      v11 = *(_QWORD *)(v18 + 32);
      v12 = _mm_loadu_si128((const __m128i *)(v18 + 40));
      *(_QWORD *)(v18 + 32) = 0;
      *(_OWORD *)(v18 + 40) = 0;
      v13 = *(void **)(v7 + 32);
      if ( v13 )
      {
        *(_QWORD *)(v7 + 40) = 0;
        v52 = v12;
        qfree(v13);
        v12 = _mm_load_si128(&v52);
      }
      *(_QWORD *)(v7 + 32) = v11;
      v14 = v51.m128i_i64[0];
      *(__m128i *)(v7 + 40) = v12;
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v18 + 56);
      *(_BYTE *)(v7 + 60) = *(_BYTE *)(v18 + 60);
      *(_BYTE *)(v7 + 61) = *(_BYTE *)(v18 + 61);
      if ( v15 >= v14 )
        break;
    }
  }
  if ( (v54 & 1) == 0 && (__int64)(v54 - 2) / 2 == v15 )
  {
    v41 = v15 + 1;
    v42 = 2 * (v15 + 1);
    v43 = a1 + (v41 << 7) - 64;
    *(_QWORD *)v18 = *(_QWORD *)v43;
    v44 = *(_QWORD *)(v43 + 8);
    *(_QWORD *)(v43 + 8) = 0;
    v45 = _mm_loadu_si128((const __m128i *)(v43 + 16));
    *(_OWORD *)(v43 + 16) = 0;
    v46 = *(void **)(v18 + 8);
    if ( v46 )
    {
      *(_QWORD *)(v18 + 16) = 0;
      v51 = v45;
      qfree(v46);
      v45 = _mm_load_si128(&v51);
    }
    *(_QWORD *)(v18 + 8) = v44;
    *(__m128i *)(v18 + 16) = v45;
    v47 = *(_QWORD *)(v43 + 32);
    v48 = _mm_loadu_si128((const __m128i *)(v43 + 40));
    *(_QWORD *)(v43 + 32) = 0;
    *(_OWORD *)(v43 + 40) = 0;
    v49 = *(void **)(v18 + 32);
    if ( v49 )
    {
      *(_QWORD *)(v18 + 40) = 0;
      v51 = v48;
      qfree(v49);
      v48 = _mm_load_si128(&v51);
    }
    *(_QWORD *)(v18 + 32) = v47;
    v15 = v42 - 1;
    *(__m128i *)(v18 + 40) = v48;
    *(_DWORD *)(v18 + 56) = *(_DWORD *)(v43 + 56);
    *(_BYTE *)(v18 + 60) = *(_BYTE *)(v43 + 60);
    *(_BYTE *)(v18 + 61) = *(_BYTE *)(v43 + 61);
    v18 = a1 + (v15 << 6);
  }
  v20 = *a4;
  v21 = _mm_loadu_si128((const __m128i *)a4 + 1);
  *((_OWORD *)a4 + 1) = 0;
  v22 = (__m128i)v20;
  v54 = v20;
  v23 = v20;
  v24 = a4[1];
  v52.m128i_i32[0] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v22, 229));
  v25 = _mm_loadu_si128((const __m128i *)(a4 + 5));
  v55 = v24;
  v26 = a4[4];
  a4[1] = 0;
  v56 = v26;
  LODWORD(v26) = *((_DWORD *)a4 + 14);
  a4[4] = 0;
  v57 = v26;
  LOWORD(v26) = *((_WORD *)a4 + 30);
  *(_OWORD *)(a4 + 5) = 0;
  v27 = (v15 - 1) / 2;
  v58 = v26;
  v53 = v21;
  v59[0] = v25;
  if ( v15 > a2 )
  {
    while ( 1 )
    {
      v18 = a1 + (v27 << 6);
      if ( v23 < *(_DWORD *)v18 || v23 == *(_DWORD *)v18 && *(_DWORD *)(v18 + 4) >= v52.m128i_i32[0] )
        break;
      v34 = a1 + (v15 << 6);
      *(_QWORD *)v34 = *(_QWORD *)v18;
      v35 = *(_QWORD *)(v18 + 8);
      v36 = _mm_loadu_si128((const __m128i *)(v18 + 16));
      *(_QWORD *)(v18 + 8) = 0;
      *(_OWORD *)(v18 + 16) = 0;
      v37 = *(void **)(v34 + 8);
      if ( v37 )
      {
        *(_QWORD *)(v34 + 16) = 0;
        v51 = v36;
        qfree(v37);
        v36 = _mm_load_si128(&v51);
      }
      *(_QWORD *)(v34 + 8) = v35;
      *(__m128i *)(v34 + 16) = v36;
      v38 = *(_QWORD *)(v18 + 32);
      v39 = _mm_loadu_si128((const __m128i *)(v18 + 40));
      *(_QWORD *)(v18 + 32) = 0;
      *(_OWORD *)(v18 + 40) = 0;
      v40 = *(void **)(v34 + 32);
      if ( v40 )
      {
        *(_QWORD *)(v34 + 40) = 0;
        v51 = v39;
        qfree(v40);
        v39 = _mm_load_si128(&v51);
      }
      *(_QWORD *)(v34 + 32) = v38;
      *(__m128i *)(v34 + 40) = v39;
      *(_DWORD *)(v34 + 56) = *(_DWORD *)(v18 + 56);
      *(_BYTE *)(v34 + 60) = *(_BYTE *)(v18 + 60);
      *(_BYTE *)(v34 + 61) = *(_BYTE *)(v18 + 61);
      v15 = v27;
      if ( a2 >= v27 )
        goto LABEL_21;
      v27 = (v27 - 1) / 2;
    }
    v18 = a1 + (v15 << 6);
  }
LABEL_21:
  v28 = *(void **)(v18 + 8);
  *(_QWORD *)v18 = v54;
  if ( v28 )
  {
    *(_QWORD *)(v18 + 16) = 0;
    qfree(v28);
  }
  v29 = _mm_load_si128(&v53);
  v30 = *(void **)(v18 + 32);
  *(_QWORD *)(v18 + 8) = v55;
  *(__m128i *)(v18 + 16) = v29;
  if ( v30 )
  {
    *(_QWORD *)(v18 + 40) = 0;
    qfree(v30);
  }
  si128 = _mm_load_si128(v59);
  *(_QWORD *)(v18 + 32) = v56;
  v32 = v57;
  *(__m128i *)(v18 + 40) = si128;
  *(_DWORD *)(v18 + 56) = v32;
  result = v58;
  *(_WORD *)(v18 + 60) = v58;
  return result;
}

