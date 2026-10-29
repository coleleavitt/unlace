unsigned __int64 __fastcall sub_1DFB0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 i; // r14
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // edi
  __int64 v13; // rbx
  __m128i v14; // xmm1
  __int64 v15; // rcx
  unsigned int v16; // esi
  __m128i v17; // xmm0
  __int32 v18; // eax
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __m128i v21; // xmm2
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned int v24; // esi
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  __m128i v27; // xmm5
  __int64 v28; // r13
  __m128i v29; // xmm6
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // rax
  __m128i v35; // xmm7
  __m128i v36; // xmm3
  __int64 v37; // rdx
  __m128i v38; // xmm3
  __int64 v39; // rdi
  __int64 v40; // rsi
  __m128i v41; // xmm2
  __int64 v42; // rsi
  __m128i v43; // xmm2
  __int64 v44; // r13
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rsi
  __int32 v48; // ecx
  int v49; // edx
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __int64 v52; // r13
  __int64 v53; // rcx
  __int32 v54; // edx
  int v55; // ebx
  __m128i v56; // xmm2
  __m128i v57; // xmm1
  __int64 v58; // rax
  __m128i v59; // xmm3
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v65; // rbx
  __m128i v66; // xmm3
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rbx
  __m128i v70; // xmm3
  __int64 v71; // rdi
  __m128i v72; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v73; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v74; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v75; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v76; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v77; // [rsp+50h] [rbp-98h] BYREF
  __int64 v78; // [rsp+68h] [rbp-80h]
  __int64 v79; // [rsp+70h] [rbp-78h] BYREF
  __m128i v80; // [rsp+78h] [rbp-70h]
  __int64 v81; // [rsp+88h] [rbp-60h]
  __m128i v82; // [rsp+90h] [rbp-58h]
  __int32 v83; // [rsp+A0h] [rbp-48h]
  int v84; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v85; // [rsp+A8h] [rbp-40h]

  v78 = a3;
  v85 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) <= 896 )
    return v85 - __readfsqword(0x28u);
  for ( i = a2; ; i = v9 )
  {
    v6 = 0x6DB6DB6DB6DB6DB7LL * (v3 >> 3);
    v7 = v6 >> 1;
    if ( !v78 )
      break;
    --v78;
    v8 = *(_QWORD *)a1;
    v9 = a1 + 56;
    v10 = 7 * v7;
    v11 = *(_DWORD *)(a1 + 108);
    v12 = *(_DWORD *)(i - 4);
    v13 = a1 + 8 * v10;
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v15 = *(_QWORD *)(a1 + 24);
    v16 = *(_DWORD *)(v13 + 52);
    v17 = _mm_loadu_si128((const __m128i *)(a1 + 32));
    v18 = *(_DWORD *)(a1 + 48);
    v19 = *(_DWORD *)(a1 + 52);
    if ( v11 >= v16 )
    {
      if ( v11 < v12 )
        goto LABEL_31;
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      if ( v16 < v12 )
      {
        v69 = *(_QWORD *)(i - 56);
        v70 = _mm_loadu_si128((const __m128i *)(i - 48));
        *(_QWORD *)(i - 56) = 0;
        *(_OWORD *)(i - 48) = 0;
        v71 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          v74.m128i_i32[0] = v18;
          v73.m128i_i64[0] = v15;
          v76 = v17;
          v75 = v70;
          v72 = v14;
          qfree(v71);
          v17 = _mm_load_si128(&v76);
          v70 = _mm_load_si128(&v75);
          v18 = v74.m128i_i32[0];
          v15 = v73.m128i_i64[0];
          v14 = _mm_load_si128(&v72);
        }
        *(_QWORD *)a1 = v69;
        *(__m128i *)(a1 + 8) = v70;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(i - 32);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(i - 24);
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(i - 16);
        *(_DWORD *)(a1 + 48) = *(_DWORD *)(i - 8);
        *(_DWORD *)(a1 + 52) = *(_DWORD *)(i - 4);
        v68 = *(_QWORD *)(i - 56);
        if ( v68 )
        {
LABEL_47:
          *(_QWORD *)(i - 48) = 0;
          v74.m128i_i32[0] = v18;
          v73.m128i_i64[0] = v15;
          v75 = v17;
          v72 = v14;
          qfree(v68);
          v17 = _mm_load_si128(&v75);
          v18 = v74.m128i_i32[0];
          v15 = v73.m128i_i64[0];
          v14 = _mm_load_si128(&v72);
        }
LABEL_48:
        *(_QWORD *)(i - 56) = v8;
        v24 = v19;
        *(_QWORD *)(i - 32) = v15;
        *(_DWORD *)(i - 8) = v18;
        *(_DWORD *)(i - 4) = v19;
        *(__m128i *)(i - 48) = v14;
        *(__m128i *)(i - 24) = v17;
        v11 = *(_DWORD *)(a1 + 52);
        v19 = *(_DWORD *)(a1 + 108);
        goto LABEL_11;
      }
      v37 = *(_QWORD *)v13;
      v38 = _mm_loadu_si128((const __m128i *)(v13 + 8));
      *(_QWORD *)v13 = 0;
      *(_OWORD *)(v13 + 8) = 0;
      v39 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v76.m128i_i32[0] = v18;
        v75.m128i_i64[0] = v15;
        v74.m128i_i64[0] = v37;
        v77 = v17;
        v73 = v14;
        v72 = v38;
        qfree(v39);
        v17 = _mm_load_si128(&v77);
        v18 = v76.m128i_i32[0];
        v15 = v75.m128i_i64[0];
        v37 = v74.m128i_i64[0];
        v14 = _mm_load_si128(&v73);
        v38 = _mm_load_si128(&v72);
      }
      *(_QWORD *)a1 = v37;
      *(__m128i *)(a1 + 8) = v38;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v13 + 32);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(v13 + 40);
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(v13 + 48);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(v13 + 52);
      v23 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
        goto LABEL_9;
    }
    else
    {
      if ( v16 >= v12 )
      {
        if ( v11 < v12 )
        {
          *(_QWORD *)a1 = 0;
          *(_OWORD *)(a1 + 8) = 0;
          v65 = *(_QWORD *)(i - 56);
          v66 = _mm_loadu_si128((const __m128i *)(i - 48));
          *(_QWORD *)(i - 56) = 0;
          *(_OWORD *)(i - 48) = 0;
          v67 = *(_QWORD *)a1;
          if ( *(_QWORD *)a1 )
          {
            *(_QWORD *)(a1 + 8) = 0;
            v75.m128i_i32[0] = v18;
            v74.m128i_i64[0] = v15;
            v76 = v17;
            v73 = v14;
            v72 = v66;
            qfree(v67);
            v17 = _mm_load_si128(&v76);
            v18 = v75.m128i_i32[0];
            v15 = v74.m128i_i64[0];
            v14 = _mm_load_si128(&v73);
            v66 = _mm_load_si128(&v72);
          }
          *(_QWORD *)a1 = v65;
          *(__m128i *)(a1 + 8) = v66;
          *(_QWORD *)(a1 + 24) = *(_QWORD *)(i - 32);
          *(_QWORD *)(a1 + 32) = *(_QWORD *)(i - 24);
          *(_QWORD *)(a1 + 40) = *(_QWORD *)(i - 16);
          *(_DWORD *)(a1 + 48) = *(_DWORD *)(i - 8);
          *(_DWORD *)(a1 + 52) = *(_DWORD *)(i - 4);
          v68 = *(_QWORD *)(i - 56);
          if ( v68 )
            goto LABEL_47;
          goto LABEL_48;
        }
LABEL_31:
        v40 = *(_QWORD *)(a1 + 56);
        v41 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        *(_DWORD *)(a1 + 52) = v11;
        *(_QWORD *)(a1 + 56) = v8;
        *(_QWORD *)a1 = v40;
        v42 = *(_QWORD *)(a1 + 80);
        *(__m128i *)(a1 + 8) = v41;
        v43 = _mm_loadu_si128((const __m128i *)(a1 + 88));
        *(_QWORD *)(a1 + 24) = v42;
        LODWORD(v42) = *(_DWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 80) = v15;
        *(_DWORD *)(a1 + 48) = v42;
        *(_DWORD *)(a1 + 104) = v18;
        *(_DWORD *)(a1 + 108) = v19;
        *(__m128i *)(a1 + 32) = v43;
        *(__m128i *)(a1 + 64) = v14;
        *(__m128i *)(a1 + 88) = v17;
        v24 = *(_DWORD *)(i - 4);
        goto LABEL_11;
      }
      *(_QWORD *)a1 = 0;
      *(_OWORD *)(a1 + 8) = 0;
      v20 = *(_QWORD *)v13;
      v21 = _mm_loadu_si128((const __m128i *)(v13 + 8));
      *(_QWORD *)v13 = 0;
      *(_OWORD *)(v13 + 8) = 0;
      v22 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v76.m128i_i32[0] = v18;
        v75.m128i_i64[0] = v15;
        v72.m128i_i64[0] = v20;
        v77 = v17;
        v74 = v21;
        v73 = v14;
        qfree(v22);
        v17 = _mm_load_si128(&v77);
        v18 = v76.m128i_i32[0];
        v15 = v75.m128i_i64[0];
        v21 = _mm_load_si128(&v74);
        v14 = _mm_load_si128(&v73);
        v20 = v72.m128i_i64[0];
      }
      *(_QWORD *)a1 = v20;
      *(__m128i *)(a1 + 8) = v21;
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)(v13 + 32);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(v13 + 40);
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(v13 + 48);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(v13 + 52);
      v23 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
      {
LABEL_9:
        *(_QWORD *)(v13 + 8) = 0;
        v74.m128i_i32[0] = v18;
        v73.m128i_i64[0] = v15;
        v75 = v17;
        v72 = v14;
        qfree(v23);
        v17 = _mm_load_si128(&v75);
        v18 = v74.m128i_i32[0];
        v15 = v73.m128i_i64[0];
        v14 = _mm_load_si128(&v72);
      }
    }
    *(_QWORD *)v13 = v8;
    *(_QWORD *)(v13 + 24) = v15;
    *(_DWORD *)(v13 + 48) = v18;
    *(_DWORD *)(v13 + 52) = v19;
    *(__m128i *)(v13 + 8) = v14;
    *(__m128i *)(v13 + 32) = v17;
    v19 = *(_DWORD *)(a1 + 108);
    v11 = *(_DWORD *)(a1 + 52);
    v24 = *(_DWORD *)(i - 4);
LABEL_11:
    v25 = i;
    while ( v19 < v11 )
    {
LABEL_21:
      v9 += 56LL;
      v19 = *(_DWORD *)(v9 + 52);
    }
    while ( 1 )
    {
      v25 -= 56LL;
      if ( v11 < v24 )
      {
        do
          v25 -= 56LL;
        while ( v11 < *(_DWORD *)(v25 + 52) );
      }
      if ( v9 >= v25 )
        break;
      v26 = *(_QWORD *)(v9 + 24);
      v27 = _mm_loadu_si128((const __m128i *)(v9 + 8));
      v28 = *(_QWORD *)v9;
      *(_OWORD *)(v9 + 8) = 0;
      v29 = _mm_loadu_si128((const __m128i *)(v9 + 32));
      *(_QWORD *)v9 = 0;
      v30 = *(_QWORD *)v25;
      v74.m128i_i64[0] = v26;
      v31 = _mm_loadu_si128((const __m128i *)(v25 + 8));
      LODWORD(v26) = *(_DWORD *)(v9 + 48);
      *(_QWORD *)v25 = 0;
      *(_OWORD *)(v25 + 8) = 0;
      v32 = *(_QWORD *)v9;
      v75.m128i_i32[0] = v26;
      v72 = v27;
      v73 = v29;
      if ( v32 )
      {
        *(_QWORD *)(v9 + 8) = 0;
        v77.m128i_i64[0] = v30;
        v76 = v31;
        qfree(v32);
        v30 = v77.m128i_i64[0];
        v31 = _mm_load_si128(&v76);
      }
      *(_QWORD *)v9 = v30;
      *(__m128i *)(v9 + 8) = v31;
      *(_QWORD *)(v9 + 24) = *(_QWORD *)(v25 + 24);
      *(_QWORD *)(v9 + 32) = *(_QWORD *)(v25 + 32);
      *(_QWORD *)(v9 + 40) = *(_QWORD *)(v25 + 40);
      *(_DWORD *)(v9 + 48) = *(_DWORD *)(v25 + 48);
      *(_DWORD *)(v9 + 52) = *(_DWORD *)(v25 + 52);
      v33 = *(_QWORD *)v25;
      if ( *(_QWORD *)v25 )
      {
        *(_QWORD *)(v25 + 8) = 0;
        qfree(v33);
      }
      v34 = v74.m128i_i64[0];
      v35 = _mm_load_si128(&v72);
      *(_QWORD *)v25 = v28;
      v9 += 56LL;
      v36 = _mm_load_si128(&v73);
      v24 = *(_DWORD *)(v25 - 4);
      *(_DWORD *)(v25 + 52) = v19;
      *(_QWORD *)(v25 + 24) = v34;
      LODWORD(v34) = v75.m128i_i32[0];
      *(__m128i *)(v25 + 8) = v35;
      *(_DWORD *)(v25 + 48) = v34;
      *(__m128i *)(v25 + 32) = v36;
      v19 = *(_DWORD *)(v9 + 52);
      v11 = *(_DWORD *)(a1 + 52);
      if ( v19 < v11 )
        goto LABEL_21;
    }
    sub_1DFB0(v9, i, v78);
    v3 = v9 - a1;
    if ( (__int64)(v9 - a1) <= 896 )
      return v85 - __readfsqword(0x28u);
  }
  v44 = v7 - 1;
  v45 = a1 + 56 * v7;
  while ( 1 )
  {
    v46 = *(_QWORD *)(v45 - 56);
    v47 = *(_QWORD *)(v45 - 32);
    v48 = *(_DWORD *)(v45 - 8);
    v49 = *(_DWORD *)(v45 - 4);
    *(_QWORD *)(v45 - 56) = 0;
    v50 = _mm_loadu_si128((const __m128i *)(v45 - 48));
    v51 = _mm_loadu_si128((const __m128i *)(v45 - 24));
    *(_OWORD *)(v45 - 48) = 0;
    v81 = v47;
    v83 = v48;
    v84 = v49;
    v79 = v46;
    v80 = v50;
    v82 = v51;
    sub_1DC10(a1, v44, v6, (__int64)&v79);
    if ( v79 )
      qfree(v79);
    v45 -= 56;
    if ( !v44 )
      break;
    --v44;
  }
  while ( (__int64)(i - a1) > 56 )
  {
    v52 = *(_QWORD *)(i - 56);
    v53 = *(_QWORD *)(i - 32);
    i -= 56LL;
    v54 = *(_DWORD *)(i + 48);
    v55 = *(_DWORD *)(i + 52);
    *(_QWORD *)i = 0;
    v56 = _mm_loadu_si128((const __m128i *)(i + 8));
    v57 = _mm_loadu_si128((const __m128i *)(i + 32));
    *(_OWORD *)(i + 8) = 0;
    v58 = *(_QWORD *)a1;
    v59 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v60 = *(_QWORD *)i;
    if ( *(_QWORD *)i )
    {
      *(_QWORD *)(i + 8) = 0;
      v74.m128i_i64[0] = v58;
      v73.m128i_i32[0] = v54;
      v72.m128i_i64[0] = v53;
      v77 = v57;
      v76 = v56;
      v75 = v59;
      qfree(v60);
      v57 = _mm_load_si128(&v77);
      v56 = _mm_load_si128(&v76);
      v59 = _mm_load_si128(&v75);
      v58 = v74.m128i_i64[0];
      v54 = v73.m128i_i32[0];
      v53 = v72.m128i_i64[0];
    }
    *(_QWORD *)i = v58;
    *(__m128i *)(i + 8) = v59;
    v61 = *(_QWORD *)(a1 + 24);
    v84 = v55;
    *(_QWORD *)(i + 24) = v61;
    v62 = *(_QWORD *)(a1 + 32);
    v83 = v54;
    *(_QWORD *)(i + 32) = v62;
    v63 = *(_QWORD *)(a1 + 40);
    v81 = v53;
    *(_QWORD *)(i + 40) = v63;
    LODWORD(v63) = *(_DWORD *)(a1 + 48);
    v79 = v52;
    *(_DWORD *)(i + 48) = v63;
    LODWORD(v63) = *(_DWORD *)(a1 + 52);
    v80 = v56;
    *(_DWORD *)(i + 52) = v63;
    v82 = v57;
    sub_1DC10(a1, 0, 0x6DB6DB6DB6DB6DB7LL * ((__int64)(i - a1) >> 3), (__int64)&v79);
    if ( v79 )
      qfree(v79);
  }
  return v85 - __readfsqword(0x28u);
}

