__int64 __fastcall sub_BC160(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 *a4)
{
  __int64 i; // r12
  __int64 v7; // r12
  __int64 v8; // r15
  __m128i v9; // xmm0
  __int64 v10; // r15
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned int *v15; // rdi
  __int64 v16; // r14
  unsigned int v17; // esi
  unsigned __int64 v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm6
  unsigned int v21; // r12d
  __int64 v22; // rax
  __m128i v23; // xmm7
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdi
  __m128i v27; // xmm1
  __int64 v28; // rdi
  __m128i si128; // xmm6
  int v30; // eax
  __int64 result; // rax
  __int64 v32; // r13
  __int64 v33; // r15
  __m128i v34; // xmm0
  __int64 v35; // r15
  __m128i v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // r15
  __m128i v41; // xmm0
  __int64 v42; // r15
  __m128i v43; // xmm0
  __m128i v45; // [rsp+10h] [rbp-98h] BYREF
  __m128i v46; // [rsp+20h] [rbp-88h] BYREF
  __m128i v47; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-68h]
  __int64 v49; // [rsp+48h] [rbp-60h]
  __int64 v50; // [rsp+50h] [rbp-58h]
  int v51; // [rsp+58h] [rbp-50h]
  unsigned __int16 v52; // [rsp+5Eh] [rbp-4Ah]
  __m128i v53[4]; // [rsp+60h] [rbp-48h] BYREF

  v48 = a3;
  v45.m128i_i64[0] = (__int64)(a3 - 1) / 2;
  if ( a2 >= v45.m128i_i64[0] )
  {
    v13 = a2;
    v16 = a1 + (a2 << 6);
  }
  else
  {
    for ( i = a2; ; i = v13 )
    {
      v13 = 2 * (i + 1);
      v14 = (i + 1) << 7;
      v15 = (unsigned int *)(a1 + v14 - 64);
      v16 = a1 + v14;
      v17 = *(_DWORD *)(a1 + v14);
      if ( *v15 >= v17 && (v17 != *v15 || *(_DWORD *)(v16 + 4) < v15[1]) )
        v16 = a1 + (--v13 << 6);
      v7 = a1 + (i << 6);
      *(_QWORD *)v7 = *(_QWORD *)v16;
      v8 = *(_QWORD *)(v16 + 8);
      v9 = _mm_loadu_si128((const __m128i *)(v16 + 16));
      *(_QWORD *)(v16 + 8) = 0;
      *(_OWORD *)(v16 + 16) = 0;
      if ( *(_QWORD *)(v7 + 8) )
      {
        *(_QWORD *)(v7 + 16) = 0;
        v46 = v9;
        qfree();
        v9 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v7 + 8) = v8;
      *(__m128i *)(v7 + 16) = v9;
      v10 = *(_QWORD *)(v16 + 32);
      v11 = _mm_loadu_si128((const __m128i *)(v16 + 40));
      *(_QWORD *)(v16 + 32) = 0;
      *(_OWORD *)(v16 + 40) = 0;
      if ( *(_QWORD *)(v7 + 32) )
      {
        *(_QWORD *)(v7 + 40) = 0;
        v46 = v11;
        qfree();
        v11 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v7 + 32) = v10;
      v12 = v45.m128i_i64[0];
      *(__m128i *)(v7 + 40) = v11;
      *(_DWORD *)(v7 + 56) = *(_DWORD *)(v16 + 56);
      *(_BYTE *)(v7 + 60) = *(_BYTE *)(v16 + 60);
      *(_BYTE *)(v7 + 61) = *(_BYTE *)(v16 + 61);
      if ( v13 >= v12 )
        break;
    }
  }
  if ( (v48 & 1) == 0 && (__int64)(v48 - 2) / 2 == v13 )
  {
    v37 = v13 + 1;
    v38 = 2 * (v13 + 1);
    v39 = a1 + (v37 << 7) - 64;
    *(_QWORD *)v16 = *(_QWORD *)v39;
    v40 = *(_QWORD *)(v39 + 8);
    *(_QWORD *)(v39 + 8) = 0;
    v41 = _mm_loadu_si128((const __m128i *)(v39 + 16));
    *(_OWORD *)(v39 + 16) = 0;
    if ( *(_QWORD *)(v16 + 8) )
    {
      *(_QWORD *)(v16 + 16) = 0;
      v45 = v41;
      qfree();
      v41 = _mm_load_si128(&v45);
    }
    *(_QWORD *)(v16 + 8) = v40;
    *(__m128i *)(v16 + 16) = v41;
    v42 = *(_QWORD *)(v39 + 32);
    v43 = _mm_loadu_si128((const __m128i *)(v39 + 40));
    *(_QWORD *)(v39 + 32) = 0;
    *(_OWORD *)(v39 + 40) = 0;
    if ( *(_QWORD *)(v16 + 32) )
    {
      *(_QWORD *)(v16 + 40) = 0;
      v45 = v43;
      qfree();
      v43 = _mm_load_si128(&v45);
    }
    *(_QWORD *)(v16 + 32) = v42;
    v13 = v38 - 1;
    *(__m128i *)(v16 + 40) = v43;
    *(_DWORD *)(v16 + 56) = *(_DWORD *)(v39 + 56);
    *(_BYTE *)(v16 + 60) = *(_BYTE *)(v39 + 60);
    *(_BYTE *)(v16 + 61) = *(_BYTE *)(v39 + 61);
    v16 = a1 + (v13 << 6);
  }
  v18 = *a4;
  v19 = _mm_loadu_si128((const __m128i *)a4 + 1);
  *((_OWORD *)a4 + 1) = 0;
  v20 = (__m128i)v18;
  v48 = v18;
  v21 = v18;
  v22 = a4[1];
  v46.m128i_i32[0] = _mm_cvtsi128_si32(_mm_shuffle_epi32(v20, 229));
  v23 = _mm_loadu_si128((const __m128i *)(a4 + 5));
  v49 = v22;
  v24 = a4[4];
  a4[1] = 0;
  v50 = v24;
  LODWORD(v24) = *((_DWORD *)a4 + 14);
  a4[4] = 0;
  v51 = v24;
  LOWORD(v24) = *((_WORD *)a4 + 30);
  *(_OWORD *)(a4 + 5) = 0;
  v25 = (v13 - 1) / 2;
  v52 = v24;
  v47 = v19;
  v53[0] = v23;
  if ( v13 > a2 )
  {
    while ( 1 )
    {
      v16 = a1 + (v25 << 6);
      if ( v21 < *(_DWORD *)v16 || v21 == *(_DWORD *)v16 && *(_DWORD *)(v16 + 4) >= v46.m128i_i32[0] )
        break;
      v32 = a1 + (v13 << 6);
      *(_QWORD *)v32 = *(_QWORD *)v16;
      v33 = *(_QWORD *)(v16 + 8);
      v34 = _mm_loadu_si128((const __m128i *)(v16 + 16));
      *(_QWORD *)(v16 + 8) = 0;
      *(_OWORD *)(v16 + 16) = 0;
      if ( *(_QWORD *)(v32 + 8) )
      {
        *(_QWORD *)(v32 + 16) = 0;
        v45 = v34;
        qfree();
        v34 = _mm_load_si128(&v45);
      }
      *(_QWORD *)(v32 + 8) = v33;
      *(__m128i *)(v32 + 16) = v34;
      v35 = *(_QWORD *)(v16 + 32);
      v36 = _mm_loadu_si128((const __m128i *)(v16 + 40));
      *(_QWORD *)(v16 + 32) = 0;
      *(_OWORD *)(v16 + 40) = 0;
      if ( *(_QWORD *)(v32 + 32) )
      {
        *(_QWORD *)(v32 + 40) = 0;
        v45 = v36;
        qfree();
        v36 = _mm_load_si128(&v45);
      }
      *(_QWORD *)(v32 + 32) = v35;
      *(__m128i *)(v32 + 40) = v36;
      *(_DWORD *)(v32 + 56) = *(_DWORD *)(v16 + 56);
      *(_BYTE *)(v32 + 60) = *(_BYTE *)(v16 + 60);
      *(_BYTE *)(v32 + 61) = *(_BYTE *)(v16 + 61);
      v13 = v25;
      if ( a2 >= v25 )
        goto LABEL_21;
      v25 = (v25 - 1) / 2;
    }
    v16 = a1 + (v13 << 6);
  }
LABEL_21:
  v26 = *(_QWORD *)(v16 + 8);
  *(_QWORD *)v16 = v48;
  if ( v26 )
  {
    *(_QWORD *)(v16 + 16) = 0;
    qfree();
  }
  v27 = _mm_load_si128(&v47);
  v28 = *(_QWORD *)(v16 + 32);
  *(_QWORD *)(v16 + 8) = v49;
  *(__m128i *)(v16 + 16) = v27;
  if ( v28 )
  {
    *(_QWORD *)(v16 + 40) = 0;
    qfree();
  }
  si128 = _mm_load_si128(v53);
  *(_QWORD *)(v16 + 32) = v50;
  v30 = v51;
  *(__m128i *)(v16 + 40) = si128;
  *(_DWORD *)(v16 + 56) = v30;
  result = v52;
  *(_WORD *)(v16 + 60) = v52;
  return result;
}

