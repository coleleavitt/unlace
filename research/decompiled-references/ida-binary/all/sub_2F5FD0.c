unsigned __int64 __fastcall sub_2F5FD0(__int64 a1, const char *a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r14
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rdi
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm2
  __int64 v27; // r15
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm2
  __int64 v31; // rax
  __m128i v32; // xmm2
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // r13
  __m128i v36; // xmm0
  __int64 v37; // rdi
  __int64 v38; // r13
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __int64 v41; // r13
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // r13
  __m128i v45; // xmm0
  __int64 v46; // rdi
  __int64 v47; // rbx
  _QWORD *v48; // rbp
  unsigned __int64 v49; // xmm1_8
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rbx
  __m128i v53; // xmm0
  __int64 v54; // rdi
  __int64 v55; // rbx
  __m128i v56; // xmm0
  __int64 v57; // rdi
  double v58; // xmm0_8
  __m128i v59; // xmm1
  __int64 v60; // rbx
  __m128i v61; // xmm1
  __int64 v62; // rdi
  __int64 v64; // r14
  _QWORD *v65; // rbx
  __int64 v66; // r15
  __int64 v67; // r13
  __m128i v68; // xmm0
  __int64 v69; // rdi
  __int64 v70; // r13
  __m128i v71; // xmm0
  __int64 v72; // rdi
  __int64 v73; // r13
  __m128i v74; // xmm0
  __int64 v75; // rdi
  __int64 v76; // r13
  __m128i v77; // xmm0
  __int64 v78; // rdi
  __m128i v79; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v80; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v81; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+38h] [rbp-B0h]
  __int64 v83; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v84; // [rsp+48h] [rbp-A0h]
  __int64 v85; // [rsp+58h] [rbp-90h]
  __m128i v86; // [rsp+60h] [rbp-88h] BYREF
  __int64 v87; // [rsp+70h] [rbp-78h]
  __m128i v88; // [rsp+78h] [rbp-70h] BYREF
  __int64 v89; // [rsp+88h] [rbp-60h]
  __m128i v90; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v91; // [rsp+A8h] [rbp-40h]

  v5 = (a3 - 1) / 2;
  v79.m128i_i64[0] = (__int64)a2;
  v82 = a3;
  v91 = __readfsqword(0x28u);
  if ( (__int64)a2 >= v5 )
  {
    v7 = v79.m128i_i64[0];
  }
  else
  {
    v7 = (__int64)a2;
    do
    {
      v8 = 192 * (v7 + 1);
      a2 = (const char *)(a1 + v8 - 96);
      v9 = 2 * (v7 + 1) - (unsigned __int8)sub_2E3DE0(a1 + v8, (__int64)a2);
      v10 = 3 * v7;
      v7 = v9;
      v11 = (__int64 *)(a1 + 32 * v10);
      v12 = a1 + 96 * v9;
      v13 = *(_QWORD *)v12;
      v14 = _mm_loadu_si128((const __m128i *)(v12 + 8));
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      v15 = *v11;
      if ( *v11 )
      {
        v11[1] = 0;
        v81.m128i_i64[0] = v13;
        v80 = v14;
        qfree(v15, a2);
        v13 = v81.m128i_i64[0];
        v14 = _mm_load_si128(&v80);
      }
      *v11 = v13;
      *(__m128i *)(v11 + 1) = v14;
      v16 = *(_QWORD *)(v12 + 24);
      v17 = _mm_loadu_si128((const __m128i *)(v12 + 32));
      *(_QWORD *)(v12 + 24) = 0;
      *(_OWORD *)(v12 + 32) = 0;
      v18 = v11[3];
      if ( v18 )
      {
        v11[4] = 0;
        v80.m128i_i64[0] = v16;
        v81 = v17;
        qfree(v18, a2);
        v17 = _mm_load_si128(&v81);
        v16 = v80.m128i_i64[0];
      }
      v11[3] = v16;
      *((__m128i *)v11 + 2) = v17;
      v19 = *(_QWORD *)(v12 + 48);
      v20 = _mm_loadu_si128((const __m128i *)(v12 + 56));
      *(_QWORD *)(v12 + 48) = 0;
      *(_OWORD *)(v12 + 56) = 0;
      v21 = v11[6];
      if ( v21 )
      {
        v11[7] = 0;
        v80.m128i_i64[0] = v19;
        v81 = v20;
        qfree(v21, a2);
        v20 = _mm_load_si128(&v81);
        v19 = v80.m128i_i64[0];
      }
      v11[6] = v19;
      *(__m128i *)(v11 + 7) = v20;
      v22 = *(_QWORD *)(v12 + 72);
      v23 = _mm_loadu_si128((const __m128i *)(v12 + 80));
      *(_QWORD *)(v12 + 72) = 0;
      *(_OWORD *)(v12 + 80) = 0;
      v24 = v11[9];
      if ( v24 )
      {
        v11[10] = 0;
        v80.m128i_i64[0] = v22;
        v81 = v23;
        qfree(v24, a2);
        v23 = _mm_load_si128(&v81);
        v22 = v80.m128i_i64[0];
      }
      v11[9] = v22;
      *((__m128i *)v11 + 5) = v23;
    }
    while ( v7 < v5 );
  }
  if ( (v82 & 1) == 0 && (v82 - 2) / 2 == v7 )
  {
    v64 = 2 * (v7 + 1);
    v65 = (_QWORD *)(a1 + 96 * v7);
    v66 = a1 + 192 * (v7 + 1) - 96;
    v67 = *(_QWORD *)v66;
    v68 = _mm_loadu_si128((const __m128i *)(v66 + 8));
    *(_QWORD *)v66 = 0;
    *(_OWORD *)(v66 + 8) = 0;
    v69 = *v65;
    if ( *v65 )
    {
      v65[1] = 0;
      v80 = v68;
      qfree(v69, a2);
      v68 = _mm_load_si128(&v80);
    }
    *v65 = v67;
    *(__m128i *)(v65 + 1) = v68;
    v70 = *(_QWORD *)(v66 + 24);
    v71 = _mm_loadu_si128((const __m128i *)(v66 + 32));
    *(_QWORD *)(v66 + 24) = 0;
    *(_OWORD *)(v66 + 32) = 0;
    v72 = v65[3];
    if ( v72 )
    {
      v65[4] = 0;
      v80 = v71;
      qfree(v72, a2);
      v71 = _mm_load_si128(&v80);
    }
    v65[3] = v70;
    *((__m128i *)v65 + 2) = v71;
    v73 = *(_QWORD *)(v66 + 48);
    v74 = _mm_loadu_si128((const __m128i *)(v66 + 56));
    *(_QWORD *)(v66 + 48) = 0;
    *(_OWORD *)(v66 + 56) = 0;
    v75 = v65[6];
    if ( v75 )
    {
      v65[7] = 0;
      v80 = v74;
      qfree(v75, a2);
      v74 = _mm_load_si128(&v80);
    }
    v65[6] = v73;
    *(__m128i *)(v65 + 7) = v74;
    v76 = *(_QWORD *)(v66 + 72);
    v77 = _mm_loadu_si128((const __m128i *)(v66 + 80));
    *(_QWORD *)(v66 + 72) = 0;
    *(_OWORD *)(v66 + 80) = 0;
    v78 = v65[9];
    if ( v78 )
    {
      v65[10] = 0;
      v80 = v77;
      qfree(v78, a2);
      v77 = _mm_load_si128(&v80);
    }
    v65[9] = v76;
    v7 = v64 - 1;
    *((__m128i *)v65 + 5) = v77;
  }
  v25 = a4[3];
  v26 = _mm_loadu_si128((const __m128i *)a4 + 2);
  a4[3] = 0;
  v27 = *a4;
  v28 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  *((_OWORD *)a4 + 2) = 0;
  v85 = v25;
  v29 = a4[6];
  v86 = v26;
  v30 = _mm_loadu_si128((const __m128i *)(a4 + 7));
  v87 = v29;
  v31 = a4[9];
  v88 = v30;
  v32 = _mm_loadu_si128((const __m128i *)a4 + 5);
  v89 = v31;
  v83 = v27;
  *a4 = 0;
  v33 = v79.m128i_i64[0];
  v84 = v28;
  a4[6] = 0;
  v34 = (v7 - 1) / 2;
  a4[9] = 0;
  *(_OWORD *)(a4 + 1) = 0;
  *(_OWORD *)(a4 + 7) = 0;
  v90 = v32;
  *((_OWORD *)a4 + 5) = 0;
  if ( v7 <= v33 )
  {
    v49 = _mm_srli_si128(v28, 8).m128i_u64[0];
    v48 = (_QWORD *)(a1 + 96 * v7);
  }
  else
  {
    while ( 1 )
    {
      a2 = (const char *)&v83;
      v47 = a1 + 96 * v34;
      v48 = (_QWORD *)(a1 + 96 * v7);
      if ( !(unsigned __int8)sub_2E3DE0(v47, (__int64)&v83) )
      {
        v27 = v83;
        v49 = v84.m128i_u64[1];
        v28.m128i_i64[0] = v84.m128i_i64[0];
        goto LABEL_28;
      }
      v35 = *(_QWORD *)v47;
      v36 = _mm_loadu_si128((const __m128i *)(v47 + 8));
      *(_QWORD *)v47 = 0;
      *(_OWORD *)(v47 + 8) = 0;
      v37 = *v48;
      if ( *v48 )
      {
        v48[1] = 0;
        v80 = v36;
        qfree(v37, (const char *)&v83);
        v36 = _mm_load_si128(&v80);
      }
      *v48 = v35;
      *(__m128i *)(v48 + 1) = v36;
      v38 = *(_QWORD *)(v47 + 24);
      v39 = _mm_loadu_si128((const __m128i *)(v47 + 32));
      *(_QWORD *)(v47 + 24) = 0;
      *(_OWORD *)(v47 + 32) = 0;
      v40 = v48[3];
      if ( v40 )
      {
        v48[4] = 0;
        v80 = v39;
        qfree(v40, (const char *)&v83);
        v39 = _mm_load_si128(&v80);
      }
      v48[3] = v38;
      *((__m128i *)v48 + 2) = v39;
      v41 = *(_QWORD *)(v47 + 48);
      v42 = _mm_loadu_si128((const __m128i *)(v47 + 56));
      *(_QWORD *)(v47 + 48) = 0;
      *(_OWORD *)(v47 + 56) = 0;
      v43 = v48[6];
      if ( v43 )
      {
        v48[7] = 0;
        v80 = v42;
        qfree(v43, (const char *)&v83);
        v42 = _mm_load_si128(&v80);
      }
      v48[6] = v41;
      *(__m128i *)(v48 + 7) = v42;
      v44 = *(_QWORD *)(v47 + 72);
      v45 = _mm_loadu_si128((const __m128i *)(v47 + 80));
      *(_QWORD *)(v47 + 72) = 0;
      *(_OWORD *)(v47 + 80) = 0;
      v46 = v48[9];
      if ( v46 )
      {
        v48[10] = 0;
        v80 = v45;
        qfree(v46, (const char *)&v83);
        v45 = _mm_load_si128(&v80);
      }
      v48[9] = v44;
      v7 = v34;
      *((__m128i *)v48 + 5) = v45;
      if ( v79.m128i_i64[0] >= v34 )
        break;
      v34 = (v34 - 1) / 2;
    }
    v27 = v83;
    v28.m128i_i64[0] = v84.m128i_i64[0];
    v48 = (_QWORD *)(a1 + 96 * v34);
    v49 = v84.m128i_u64[1];
  }
LABEL_28:
  v50 = *v48;
  v83 = 0;
  v84 = 0;
  if ( v50 )
  {
    v48[1] = 0;
    v80.m128i_i64[0] = v49;
    v79.m128i_i64[0] = v28.m128i_i64[0];
    qfree(v50, a2);
    v49 = v80.m128i_i64[0];
    v28.m128i_i64[0] = v79.m128i_i64[0];
  }
  v51 = v48[3];
  v52 = v85;
  v48[2] = v49;
  v48[1] = v28.m128i_i64[0];
  v53 = _mm_load_si128(&v86);
  *v48 = v27;
  v85 = 0;
  v86 = 0;
  if ( v51 )
  {
    v48[4] = 0;
    v79 = v53;
    qfree(v51, a2);
    v53 = _mm_load_si128(&v79);
  }
  v54 = v48[6];
  v48[3] = v52;
  *((__m128i *)v48 + 2) = v53;
  v55 = v87;
  v56 = _mm_loadu_si128(&v88);
  v87 = 0;
  v88 = 0;
  if ( v54 )
  {
    v48[7] = 0;
    v79 = v56;
    qfree(v54, a2);
    v56 = _mm_load_si128(&v79);
  }
  v57 = v48[9];
  *(__m128i *)(v48 + 7) = v56;
  v58 = 0.0;
  v59 = _mm_load_si128(&v90);
  v48[6] = v55;
  v60 = v89;
  v90 = 0;
  v89 = 0;
  if ( v57 )
  {
    v48[10] = 0;
    v79 = v59;
    v58 = qfree(v57, a2);
    v61 = _mm_load_si128(&v79);
    v48[9] = v60;
    v62 = v89;
    *((__m128i *)v48 + 5) = v61;
    if ( v62 )
    {
      v90.m128i_i64[0] = 0;
      v58 = qfree(v62, a2, v58);
    }
  }
  else
  {
    v48[9] = v60;
    *((__m128i *)v48 + 5) = v59;
  }
  if ( v87 )
  {
    v88.m128i_i64[0] = 0;
    v58 = qfree(v87, a2, v58);
  }
  if ( v85 )
  {
    v86.m128i_i64[0] = 0;
    v58 = qfree(v85, a2, v58);
  }
  if ( v83 )
  {
    v84.m128i_i64[0] = 0;
    qfree(v83, a2, v58);
  }
  return v91 - __readfsqword(0x28u);
}
