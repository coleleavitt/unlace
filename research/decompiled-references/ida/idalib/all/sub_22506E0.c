void __fastcall sub_22506E0(__int64 a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i *v5; // r14
  double v6; // xmm1_8
  _BYTE *v7; // rsi
  double v8; // xmm2_8
  __m128i *v9; // rbp
  double v10; // xmm0_8
  __int64 v11; // rdx
  __m128i v12; // xmm3
  __int64 v13; // rax
  __int64 m128i_i64; // r13
  __int64 v15; // rbp
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __m128i v18; // xmm2
  void *v19; // rdi
  double v20; // xmm0_8
  __m128i *v21; // rax
  double v22; // xmm1_8
  __m128i *j; // r13
  __m128i *v24; // rbp
  __m128i *v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // r14
  __int64 v28; // r12
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  _QWORD *v31; // rax
  _BYTE *v32; // r14
  __int64 v33; // r12
  _QWORD *v34; // rax
  __m128i v35; // xmm7
  __m128i v36; // xmm3
  __m128i *v37; // r12
  __int64 v38; // r14
  const __m128i *i; // r12
  _BYTE *v40; // rsi
  __m128i v41; // xmm5
  __m128i v42; // xmm6
  __int64 v43; // rdx
  _BYTE *v44; // rsi
  __m128i v45; // xmm7
  __m128i v46; // xmm2
  __m128i *v47; // rbp
  __int64 v48; // rdx
  _BYTE *v49; // rsi
  __m128i v50; // xmm5
  __m128i v51; // xmm4
  __int64 v52; // r14
  __int64 v53; // rdx
  _BYTE *v54; // rsi
  __int64 v55; // rdx
  __m128i v56; // xmm2
  __m128i v57; // xmm4
  __int64 v58; // rax
  __m128i v59; // xmm4
  __int64 v60; // rax
  __m128i v61; // xmm5
  __m128i v62; // xmm6
  __m128i v63; // xmm5
  __int64 v64; // rax
  _BYTE *v65; // rsi
  __int64 v66; // rdx
  __m128i v67; // xmm6
  __m128i v68; // xmm7
  __m128i v69; // xmm3
  __m128i v70; // xmm5
  __int64 v71; // rax
  __m128i v72; // xmm6
  _BYTE *v73; // rsi
  __int64 v74; // rdx
  __m128i v75; // xmm7
  __m128i v76; // xmm2
  __m128i v77; // xmm4
  __int64 v78; // [rsp+8h] [rbp-150h]
  __int64 v79; // [rsp+10h] [rbp-148h]
  __m128i *v80; // [rsp+10h] [rbp-148h]
  __int64 v81; // [rsp+20h] [rbp-138h]
  __int64 v82; // [rsp+28h] [rbp-130h]
  __m128i *v83; // [rsp+30h] [rbp-128h]
  __m128i *v84; // [rsp+38h] [rbp-120h]
  __m128i v85; // [rsp+40h] [rbp-118h] BYREF
  __m128i v86; // [rsp+50h] [rbp-108h] BYREF
  __int64 v87; // [rsp+60h] [rbp-F8h]
  void *v88; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v89; // [rsp+70h] [rbp-E8h]
  _BYTE v90[16]; // [rsp+78h] [rbp-E0h] BYREF
  void *v91; // [rsp+88h] [rbp-D0h] BYREF
  __int64 v92; // [rsp+90h] [rbp-C8h]
  _BYTE v93[24]; // [rsp+98h] [rbp-C0h] BYREF
  __m128i v94; // [rsp+B0h] [rbp-A8h] BYREF
  __m128i v95; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v96; // [rsp+D0h] [rbp-88h]
  void *v97[2]; // [rsp+D8h] [rbp-80h] BYREF
  _QWORD v98[2]; // [rsp+E8h] [rbp-70h] BYREF
  void *v99[2]; // [rsp+F8h] [rbp-60h] BYREF
  _QWORD v100[10]; // [rsp+108h] [rbp-50h] BYREF

  v3 = (__int64)a2->m128i_i64 - a1;
  v79 = a3;
  if ( (__int64)a2->m128i_i64 - a1 <= 1664 )
    return;
  if ( !a3 )
  {
    v37 = a2;
    v81 = a1 + 40;
    v82 = a1 + 72;
LABEL_46:
    v80 = v37;
    v78 = 0x4EC4EC4EC4EC4EC5LL * (v3 >> 3);
    v38 = (v78 - 2) >> 1;
    for ( i = (const __m128i *)(a1 + 104 * v38); ; i = (const __m128i *)((char *)i - 104) )
    {
      v40 = (_BYTE *)i[2].m128i_i64[1];
      v41 = _mm_loadu_si128(i);
      v42 = _mm_loadu_si128(i + 1);
      v87 = i[2].m128i_i64[0];
      v88 = v90;
      v43 = i[3].m128i_i64[0];
      v85 = v41;
      v86 = v42;
      sub_224DA20(&v88, v40, (__int64)&v40[v43]);
      v44 = (_BYTE *)i[4].m128i_i64[1];
      v91 = v93;
      sub_224DA20(&v91, v44, (__int64)&v44[i[5].m128i_i64[0]]);
      v45 = _mm_load_si128(&v85);
      v46 = _mm_load_si128(&v86);
      v97[0] = v98;
      v96 = v87;
      v94 = v45;
      v95 = v46;
      sub_224DA20(v97, v88, (__int64)v88 + v89);
      v99[0] = v100;
      sub_224DA20(v99, v91, (__int64)v91 + v92);
      sub_2250300(a1, v38, v78, &v94);
      if ( v99[0] != v100 )
        operator delete(v99[0]);
      if ( v97[0] != v98 )
        operator delete(v97[0]);
      if ( !v38 )
        break;
      --v38;
      if ( v91 != v93 )
        operator delete(v91);
      if ( v88 != v90 )
        operator delete(v88);
    }
    if ( v91 != v93 )
      operator delete(v91);
    if ( v88 != v90 )
      operator delete(v88);
    v47 = (__m128i *)((char *)v80 - 104);
    do
    {
      while ( 1 )
      {
        v48 = v47[2].m128i_i64[0];
        v49 = (_BYTE *)v47[2].m128i_i64[1];
        v50 = _mm_loadu_si128(v47 + 1);
        v51 = _mm_loadu_si128(v47);
        v88 = v90;
        v52 = (__int64)v47->m128i_i64 - a1;
        v87 = v48;
        v53 = v47[3].m128i_i64[0];
        v86 = v50;
        v85 = v51;
        sub_224DA20(&v88, v49, (__int64)&v49[v53]);
        v54 = (_BYTE *)v47[4].m128i_i64[1];
        v55 = (__int64)&v54[v47[5].m128i_i64[0]];
        v91 = v93;
        sub_224DA20(&v91, v54, v55);
        *v47 = _mm_loadu_si128((const __m128i *)a1);
        v47[1] = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v47[2].m128i_i64[0] = *(_QWORD *)(a1 + 32);
        sub_9EE8A0((__int64)&v47[2].m128i_i64[1], v81);
        sub_9EE8A0((__int64)&v47[4].m128i_i64[1], v82);
        v56 = _mm_load_si128(&v85);
        v57 = _mm_load_si128(&v86);
        v96 = v87;
        v94 = v56;
        v95 = v57;
        v97[0] = v98;
        sub_224DA20(v97, v88, (__int64)v88 + v89);
        v99[0] = v100;
        sub_224DA20(v99, v91, (__int64)v91 + v92);
        sub_2250300(a1, 0, 0x4EC4EC4EC4EC4EC5LL * (((__int64)v47->m128i_i64 - a1) >> 3), &v94);
        if ( v99[0] != v100 )
          operator delete(v99[0]);
        if ( v97[0] != v98 )
          operator delete(v97[0]);
        if ( v91 != v93 )
          operator delete(v91);
        if ( v88 == v90 )
          break;
        operator delete(v88);
        v47 = (__m128i *)((char *)v47 - 104);
        if ( v52 <= 104 )
          return;
      }
      v47 = (__m128i *)((char *)v47 - 104);
    }
    while ( v52 > 104 );
    return;
  }
  v5 = a2;
  v84 = (__m128i *)(a1 + 104);
  v81 = a1 + 40;
  v82 = a1 + 72;
  while ( 2 )
  {
    v6 = *(double *)(a1 + 104);
    v7 = *(_BYTE **)(a1 + 40);
    --v79;
    v8 = *(double *)&v5[-7].m128i_i64[1];
    v9 = (__m128i *)(a1 + 104 * (0x4EC4EC4EC4EC4EC5LL * (((__int64)v5->m128i_i64 - a1) >> 3) / 2));
    v10 = *(double *)v9->m128i_i64;
    v11 = (__int64)&v7[*(_QWORD *)(a1 + 48)];
    if ( *(double *)v9->m128i_i64 <= v6 )
    {
      if ( v8 > v6 )
      {
        v70 = _mm_loadu_si128((const __m128i *)a1);
        v71 = *(_QWORD *)(a1 + 32);
        v97[0] = v98;
        m128i_i64 = a1 + 144;
        v72 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v15 = a1 + 176;
        v94 = v70;
        v95 = v72;
        v96 = v71;
        sub_224DA20(v97, v7, v11);
        v73 = *(_BYTE **)(a1 + 72);
        v74 = (__int64)&v73[*(_QWORD *)(a1 + 80)];
        v99[0] = v100;
        sub_224DA20(v99, v73, v74);
        v75 = _mm_loadu_si128((const __m128i *)(a1 + 104));
        v76 = _mm_loadu_si128((const __m128i *)(a1 + 120));
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 136);
        *(__m128i *)a1 = v75;
        *(__m128i *)(a1 + 16) = v76;
        sub_9EE8A0(v81, a1 + 144);
        sub_9EE8A0(v82, a1 + 176);
        v77 = _mm_load_si128(&v95);
        *(__m128i *)(a1 + 104) = _mm_load_si128(&v94);
        *(__m128i *)(a1 + 120) = v77;
        *(_QWORD *)(a1 + 136) = v96;
        goto LABEL_9;
      }
      v94 = _mm_loadu_si128((const __m128i *)a1);
      v95 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v58 = *(_QWORD *)(a1 + 32);
      v97[0] = v98;
      v96 = v58;
      if ( v8 > v10 )
      {
        sub_224DA20(v97, v7, v11);
        m128i_i64 = (__int64)v5[-4].m128i_i64;
        v15 = (__int64)v5[-2].m128i_i64;
        v99[0] = v100;
        sub_224DA20(v99, *(_BYTE **)(a1 + 72), *(_QWORD *)(a1 + 72) + *(_QWORD *)(a1 + 80));
        *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v5 - 104));
        *(__m128i *)(a1 + 16) = _mm_loadu_si128((__m128i *)((char *)v5 - 88));
        *(_QWORD *)(a1 + 32) = v5[-5].m128i_i64[1];
        sub_9EE8A0(v81, m128i_i64);
        sub_9EE8A0(v82, v15);
        v59 = _mm_load_si128(&v95);
        *(__m128i *)((char *)v5 - 104) = _mm_load_si128(&v94);
        *(__m128i *)((char *)v5 - 88) = v59;
        goto LABEL_8;
      }
LABEL_75:
      sub_224DA20(v97, v7, v11);
      v99[0] = v100;
      sub_224DA20(v99, *(_BYTE **)(a1 + 72), *(_QWORD *)(a1 + 72) + *(_QWORD *)(a1 + 80));
      *(__m128i *)a1 = _mm_loadu_si128(v9);
      *(__m128i *)(a1 + 16) = _mm_loadu_si128(v9 + 1);
      *(_QWORD *)(a1 + 32) = v9[2].m128i_i64[0];
      sub_9EE8A0(v81, (__int64)&v9[2].m128i_i64[1]);
      sub_9EE8A0(v82, (__int64)&v9[4].m128i_i64[1]);
      *v9 = _mm_load_si128(&v94);
      v9[1] = _mm_load_si128(&v95);
      v9[2].m128i_i64[0] = v96;
      sub_9EE8A0((__int64)&v9[2].m128i_i64[1], (__int64)v97);
      sub_9EE8A0((__int64)&v9[4].m128i_i64[1], (__int64)v99);
      v19 = v99[0];
      if ( v99[0] == v100 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( v8 > v10 )
    {
      v60 = *(_QWORD *)(a1 + 32);
      v61 = _mm_loadu_si128((const __m128i *)a1);
      v97[0] = v98;
      v62 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v96 = v60;
      v94 = v61;
      v95 = v62;
      goto LABEL_75;
    }
    v94 = _mm_loadu_si128((const __m128i *)a1);
    if ( v8 > v6 )
    {
      v12 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v13 = *(_QWORD *)(a1 + 32);
      v97[0] = v98;
      m128i_i64 = (__int64)v5[-4].m128i_i64;
      v15 = (__int64)v5[-2].m128i_i64;
      v95 = v12;
      v96 = v13;
      sub_224DA20(v97, v7, v11);
      v16 = *(_BYTE **)(a1 + 72);
      v17 = (__int64)&v16[*(_QWORD *)(a1 + 80)];
      v99[0] = v100;
      sub_224DA20(v99, v16, v17);
      *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v5 - 104));
      *(__m128i *)(a1 + 16) = _mm_loadu_si128((__m128i *)((char *)v5 - 88));
      *(_QWORD *)(a1 + 32) = v5[-5].m128i_i64[1];
      sub_9EE8A0(v81, m128i_i64);
      sub_9EE8A0(v82, v15);
      v18 = _mm_load_si128(&v95);
      *(__m128i *)((char *)v5 - 104) = _mm_load_si128(&v94);
      *(__m128i *)((char *)v5 - 88) = v18;
LABEL_8:
      v5[-5].m128i_i64[1] = v96;
      goto LABEL_9;
    }
    v63 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v64 = *(_QWORD *)(a1 + 32);
    v97[0] = v98;
    m128i_i64 = a1 + 144;
    v15 = a1 + 176;
    v95 = v63;
    v96 = v64;
    sub_224DA20(v97, v7, v11);
    v65 = *(_BYTE **)(a1 + 72);
    v66 = (__int64)&v65[*(_QWORD *)(a1 + 80)];
    v99[0] = v100;
    sub_224DA20(v99, v65, v66);
    v67 = _mm_loadu_si128((const __m128i *)(a1 + 104));
    v68 = _mm_loadu_si128((const __m128i *)(a1 + 120));
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 136);
    *(__m128i *)a1 = v67;
    *(__m128i *)(a1 + 16) = v68;
    sub_9EE8A0(v81, a1 + 144);
    sub_9EE8A0(v82, a1 + 176);
    v69 = _mm_load_si128(&v95);
    *(__m128i *)(a1 + 104) = _mm_load_si128(&v94);
    *(__m128i *)(a1 + 120) = v69;
    *(_QWORD *)(a1 + 136) = v96;
LABEL_9:
    sub_9EE8A0(m128i_i64, (__int64)v97);
    sub_9EE8A0(v15, (__int64)v99);
    v19 = v99[0];
    if ( v99[0] != v100 )
LABEL_10:
      operator delete(v19);
LABEL_11:
    if ( v97[0] != v98 )
      operator delete(v97[0]);
    v83 = v5;
    v20 = *(double *)a1;
    v21 = v5;
    v22 = *(double *)&v5[-7].m128i_i64[1];
    for ( j = v84; ; j = (__m128i *)((char *)j + 104) )
    {
      if ( v20 > *(double *)j->m128i_i64 )
        continue;
      v24 = (__m128i *)((char *)v21 - 104);
      v25 = v21 - 13;
      if ( v22 > v20 )
      {
        do
        {
          v24 = v25;
          v25 = (__m128i *)((char *)v25 - 104);
        }
        while ( *(double *)&v25[6].m128i_i64[1] > v20 );
      }
      if ( j >= v24 )
        break;
      v26 = j[2].m128i_i64[0];
      v27 = (_BYTE *)j[2].m128i_i64[1];
      v97[0] = v98;
      v28 = j[3].m128i_i64[0];
      v29 = _mm_loadu_si128(j);
      v30 = _mm_loadu_si128(j + 1);
      v96 = v26;
      v94 = v29;
      v95 = v30;
      if ( &v27[v28] && !v27 )
LABEL_83:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v28 > 0xF )
      {
        if ( v28 < 0 )
LABEL_82:
          std::__throw_length_error("basic_string::_M_create");
        v31 = (_QWORD *)operator new(v28 + 1);
        v98[0] = v28;
        v97[0] = v31;
LABEL_43:
        memcpy(v31, v27, v28);
        v31 = v97[0];
        goto LABEL_23;
      }
      if ( v28 == 1 )
      {
        LOBYTE(v98[0]) = *v27;
        v31 = v98;
      }
      else
      {
        v31 = v98;
        if ( v28 )
          goto LABEL_43;
      }
LABEL_23:
      v97[1] = (void *)v28;
      *((_BYTE *)v31 + v28) = 0;
      v32 = (_BYTE *)j[4].m128i_i64[1];
      v33 = j[5].m128i_i64[0];
      v99[0] = v100;
      if ( &v32[v33] && !v32 )
        goto LABEL_83;
      if ( (unsigned __int64)v33 > 0xF )
      {
        if ( v33 < 0 )
          goto LABEL_82;
        v34 = (_QWORD *)operator new(v33 + 1);
        v100[0] = v33;
        v99[0] = v34;
LABEL_38:
        memcpy(v34, v32, v33);
        v34 = v99[0];
        goto LABEL_28;
      }
      if ( v33 == 1 )
      {
        LOBYTE(v100[0]) = *v32;
        v34 = v100;
      }
      else
      {
        v34 = v100;
        if ( v33 )
          goto LABEL_38;
      }
LABEL_28:
      v99[1] = (void *)v33;
      *((_BYTE *)v34 + v33) = 0;
      *j = _mm_loadu_si128(v24);
      j[1] = _mm_loadu_si128(v24 + 1);
      j[2].m128i_i64[0] = v24[2].m128i_i64[0];
      sub_9EE8A0((__int64)&j[2].m128i_i64[1], (__int64)&v24[2].m128i_i64[1]);
      sub_9EE8A0((__int64)&j[4].m128i_i64[1], (__int64)&v24[4].m128i_i64[1]);
      v35 = _mm_load_si128(&v94);
      v36 = _mm_load_si128(&v95);
      v24[2].m128i_i64[0] = v96;
      *v24 = v35;
      v24[1] = v36;
      sub_9EE8A0((__int64)&v24[2].m128i_i64[1], (__int64)v97);
      sub_9EE8A0((__int64)&v24[4].m128i_i64[1], (__int64)v99);
      if ( v99[0] != v100 )
        operator delete(v99[0]);
      if ( v97[0] != v98 )
        operator delete(v97[0]);
      v20 = *(double *)a1;
      v22 = *(double *)&v24[-7].m128i_i64[1];
      v21 = v24;
    }
    v37 = j;
    sub_22506E0(j, v83, v79);
    v3 = (__int64)j->m128i_i64 - a1;
    if ( (__int64)j->m128i_i64 - a1 > 1664 )
    {
      v5 = j;
      if ( !v79 )
        goto LABEL_46;
      continue;
    }
    break;
  }
}
