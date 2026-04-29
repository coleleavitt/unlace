unsigned __int64 __fastcall sub_1F24B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // al
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm7
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 j; // r15
  _QWORD *v25; // rdx
  __int64 v26; // rdi
  __m128i v27; // xmm6
  char v28; // dl
  __int64 v29; // r14
  __int64 v30; // rax
  __m128i v31; // xmm0
  __m128i v32; // xmm1
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // r14
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  bool v39; // al
  __int64 v40; // rbp
  __int64 v41; // r12
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // rax
  __m128i v45; // xmm3
  __int64 v46; // rdi
  __int64 v47; // r12
  __int64 m; // r15
  _QWORD *v49; // rdx
  __int64 v50; // rdi
  __m128i v51; // xmm5
  char v52; // al
  __int64 v53; // rdi
  __int64 v54; // rbp
  __m128i v55; // xmm0
  __int64 v56; // rdi
  __m128i v57; // xmm7
  __int64 v58; // r14
  __int64 v59; // r13
  __int64 n; // rbp
  _QWORD *v61; // r12
  __int64 v62; // rdi
  __m128i v63; // xmm2
  __int64 v64; // rdi
  __int64 v65; // rax
  __m128i si128; // xmm0
  __int64 v67; // r12
  __int64 v68; // rbx
  _QWORD *v69; // rbp
  __int64 v70; // rdi
  __int64 v72; // rax
  __m128i v73; // xmm3
  __m128i v74; // xmm0
  __int64 v75; // r12
  __int64 v76; // r15
  __int64 v77; // rbp
  __int64 v78; // r12
  __m128i v79; // xmm0
  __int64 v80; // rdi
  __int64 v81; // rax
  __m128i v82; // xmm4
  __int64 v83; // rdi
  __int64 v84; // r12
  __int64 k; // r14
  _QWORD *v86; // rdx
  __int64 v87; // rdi
  __m128i v88; // xmm5
  __m128i v89; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v90; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v91; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v92; // [rsp+30h] [rbp-C8h]
  __int64 v93; // [rsp+38h] [rbp-C0h]
  __int64 v94; // [rsp+40h] [rbp-B8h]
  __int64 v95; // [rsp+48h] [rbp-B0h]
  __int64 v96[2]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+60h] [rbp-98h]
  __m128i v98; // [rsp+68h] [rbp-90h] BYREF
  __int64 v99; // [rsp+78h] [rbp-80h]
  __m128i v100; // [rsp+80h] [rbp-78h] BYREF
  _BYTE v101[24]; // [rsp+90h] [rbp-68h] BYREF
  char v102; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v103; // [rsp+B8h] [rbp-40h]

  v94 = a3;
  v92 = a2;
  v95 = a4;
  v103 = __readfsqword(0x28u);
  v93 = (a3 - 1) / 2;
  if ( a2 < v93 )
  {
    for ( i = a2; ; i = v14 )
    {
      v6 = 192 * (i + 1);
      v7 = a1 + v6 - 96;
      v8 = a1 + v6;
      v9 = *(_QWORD *)(v8 + 64);
      v10 = *(_QWORD *)(v7 + 64);
      if ( v9 != v10 )
      {
        v11 = *(_QWORD *)(v7 + 72);
        if ( !*(_QWORD *)(v8 + 72) || !v11 )
        {
          v13 = v11 == 0;
          goto LABEL_8;
        }
        v12 = *(_QWORD *)(v10 + 24);
        if ( *(_QWORD *)(v9 + 24) != v12 )
        {
          v13 = *(_QWORD *)(v9 + 24) < v12;
          goto LABEL_8;
        }
      }
      v28 = *(_BYTE *)(v8 + 84);
      if ( v28 == *(_BYTE *)(v7 + 84) )
        v13 = *(_DWORD *)(v8 + 80) < *(_DWORD *)(v7 + 80);
      else
        v13 = v28 ^ 1;
LABEL_8:
      v14 = 2 * (i + 1) - v13;
      v15 = a1 + 96 * i;
      v16 = a1 + 96 * v14;
      sub_648D0((__int64 *)v15, (__int64 *)v16);
      v17 = *(_QWORD *)(v16 + 16);
      v18 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      v19 = *(_QWORD *)(v15 + 16);
      if ( v19 )
      {
        *(_QWORD *)(v15 + 24) = 0;
        v89 = v18;
        qfree(v19);
        v18 = _mm_load_si128(&v89);
      }
      *(_QWORD *)(v15 + 16) = v17;
      *(__m128i *)(v15 + 24) = v18;
      v20 = *(_QWORD *)(v16 + 40);
      v21 = _mm_loadu_si128((const __m128i *)(v16 + 48));
      *(_QWORD *)(v16 + 40) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      v22 = *(_QWORD *)(v15 + 40);
      v90.m128i_i64[0] = v20;
      v91 = v21;
      if ( v22 )
      {
        v23 = *(_QWORD *)(v15 + 48);
        if ( v23 )
        {
          for ( j = 0; j != v23; ++j )
          {
            v25 = (_QWORD *)(v22 + 40 * j);
            v26 = v25[2];
            if ( v26 )
            {
              v25[3] = 0;
              v89.m128i_i64[0] = (__int64)v25;
              qfree(v26);
              v25 = (_QWORD *)v89.m128i_i64[0];
            }
            qfree(*v25);
            v22 = *(_QWORD *)(v15 + 40);
          }
        }
        *(_QWORD *)(v15 + 48) = 0;
        qfree(v22);
      }
      v27 = _mm_load_si128(&v91);
      *(_QWORD *)(v15 + 40) = v90.m128i_i64[0];
      *(__m128i *)(v15 + 48) = v27;
      *(__m128i *)(v15 + 64) = _mm_loadu_si128((const __m128i *)(v16 + 64));
      *(_QWORD *)(v15 + 77) = *(_QWORD *)(v16 + 77);
      *(_BYTE *)(v15 + 88) = *(_BYTE *)(v16 + 88);
      if ( v93 <= v14 )
        goto LABEL_24;
    }
  }
  v14 = v92;
  v16 = a1 + 96 * v92;
LABEL_24:
  if ( (v94 & 1) == 0 && (v94 - 2) / 2 == v14 )
  {
    v75 = v14 + 1;
    v76 = 2 * v75;
    v77 = a1 + 192 * v75 - 96;
    sub_648D0((__int64 *)v16, (__int64 *)v77);
    v78 = *(_QWORD *)(v77 + 16);
    v79 = _mm_loadu_si128((const __m128i *)(v77 + 24));
    *(_QWORD *)(v77 + 16) = 0;
    *(_OWORD *)(v77 + 24) = 0;
    v80 = *(_QWORD *)(v16 + 16);
    if ( v80 )
    {
      *(_QWORD *)(v16 + 24) = 0;
      v89 = v79;
      qfree(v80);
      v79 = _mm_load_si128(&v89);
    }
    *(__m128i *)(v16 + 24) = v79;
    *(_QWORD *)(v16 + 16) = v78;
    v81 = *(_QWORD *)(v77 + 40);
    v82 = _mm_loadu_si128((const __m128i *)(v77 + 48));
    *(_QWORD *)(v77 + 40) = 0;
    *(_OWORD *)(v77 + 48) = 0;
    v83 = *(_QWORD *)(v16 + 40);
    v91.m128i_i64[0] = v81;
    v90 = v82;
    if ( v83 )
    {
      v84 = *(_QWORD *)(v16 + 48);
      if ( v84 )
      {
        for ( k = 0; k != v84; ++k )
        {
          v86 = (_QWORD *)(v83 + 40 * k);
          v87 = v86[2];
          if ( v87 )
          {
            v86[3] = 0;
            v89.m128i_i64[0] = (__int64)v86;
            qfree(v87);
            v86 = (_QWORD *)v89.m128i_i64[0];
          }
          qfree(*v86);
          v83 = *(_QWORD *)(v16 + 40);
        }
      }
      *(_QWORD *)(v16 + 48) = 0;
      qfree(v83);
    }
    v88 = _mm_load_si128(&v90);
    v14 = v76 - 1;
    *(_QWORD *)(v16 + 40) = v91.m128i_i64[0];
    *(__m128i *)(v16 + 48) = v88;
    *(__m128i *)(v16 + 64) = _mm_loadu_si128((const __m128i *)(v77 + 64));
    *(_QWORD *)(v16 + 77) = *(_QWORD *)(v77 + 77);
    *(_BYTE *)(v16 + 88) = *(_BYTE *)(v77 + 88);
    v16 = a1 + 96 * (v76 - 1);
  }
  v29 = v95;
  v93 = (__int64)v96;
  sub_64000(v96, v95);
  v30 = *(_QWORD *)(v29 + 16);
  v31 = _mm_loadu_si128((const __m128i *)(v29 + 24));
  *(_QWORD *)(v29 + 16) = 0;
  v32 = _mm_loadu_si128((const __m128i *)(v29 + 48));
  v97 = v30;
  v33 = *(_QWORD *)(v29 + 40);
  v98 = v31;
  v99 = v33;
  v34 = *(_QWORD *)(v29 + 80);
  *(_OWORD *)(v29 + 24) = 0;
  *(_QWORD *)&v101[16] = v34;
  LOBYTE(v34) = *(_BYTE *)(v29 + 88);
  *(_OWORD *)(v29 + 48) = 0;
  v35 = _mm_loadu_si128((const __m128i *)(v29 + 64));
  v102 = v34;
  *(_QWORD *)(v29 + 40) = 0;
  v100 = v32;
  *(__m128i *)v101 = v35;
  v36 = (v14 - 1) / 2;
  if ( v14 > v92 )
  {
    while ( 1 )
    {
      v16 = a1 + 96 * v36;
      v37 = *(_QWORD *)(v16 + 64);
      if ( v37 != *(_QWORD *)v101 )
      {
        if ( !*(_QWORD *)(v16 + 72) )
        {
          v39 = *(_QWORD *)&v101[8] == 0;
LABEL_32:
          if ( !v39 )
            goto LABEL_46;
          goto LABEL_33;
        }
        if ( !*(_QWORD *)&v101[8] )
          goto LABEL_33;
        v38 = *(_QWORD *)(*(_QWORD *)v101 + 24LL);
        if ( *(_QWORD *)(v37 + 24) != v38 )
        {
          v39 = *(_QWORD *)(v37 + 24) < v38;
          goto LABEL_32;
        }
      }
      v52 = *(_BYTE *)(v16 + 84);
      if ( v52 == v101[20] )
      {
        if ( *(_DWORD *)(v16 + 80) >= *(int *)&v101[16] )
        {
          v16 = a1 + 96 * v14;
          break;
        }
      }
      else if ( v52 )
      {
LABEL_46:
        v16 = a1 + 96 * v14;
        break;
      }
LABEL_33:
      v40 = a1 + 96 * v14;
      sub_648D0((__int64 *)v40, (__int64 *)(a1 + 96 * v36));
      v41 = *(_QWORD *)(v16 + 16);
      v42 = _mm_loadu_si128((const __m128i *)(v16 + 24));
      *(_QWORD *)(v16 + 16) = 0;
      *(_OWORD *)(v16 + 24) = 0;
      v43 = *(_QWORD *)(v40 + 16);
      if ( v43 )
      {
        *(_QWORD *)(v40 + 24) = 0;
        v89 = v42;
        qfree(v43);
        v42 = _mm_load_si128(&v89);
      }
      *(_QWORD *)(v40 + 16) = v41;
      *(__m128i *)(v40 + 24) = v42;
      v44 = *(_QWORD *)(v16 + 40);
      v45 = _mm_loadu_si128((const __m128i *)(v16 + 48));
      *(_QWORD *)(v16 + 40) = 0;
      *(_OWORD *)(v16 + 48) = 0;
      v46 = *(_QWORD *)(v40 + 40);
      v91.m128i_i64[0] = v44;
      v90 = v45;
      if ( v46 )
      {
        v47 = *(_QWORD *)(v40 + 48);
        if ( v47 )
        {
          for ( m = 0; m != v47; ++m )
          {
            v49 = (_QWORD *)(v46 + 40 * m);
            v50 = v49[2];
            if ( v50 )
            {
              v49[3] = 0;
              v89.m128i_i64[0] = (__int64)v49;
              qfree(v50);
              v49 = (_QWORD *)v89.m128i_i64[0];
            }
            qfree(*v49);
            v46 = *(_QWORD *)(v40 + 40);
          }
        }
        *(_QWORD *)(v40 + 48) = 0;
        qfree(v46);
      }
      v51 = _mm_load_si128(&v90);
      v14 = v36;
      *(_QWORD *)(v40 + 40) = v91.m128i_i64[0];
      *(__m128i *)(v40 + 48) = v51;
      *(__m128i *)(v40 + 64) = _mm_loadu_si128((const __m128i *)(v16 + 64));
      *(_QWORD *)(v40 + 77) = *(_QWORD *)(v16 + 77);
      *(_BYTE *)(v40 + 88) = *(_BYTE *)(v16 + 88);
      if ( v92 >= v36 )
        break;
      v36 = (v36 - 1) / 2;
    }
  }
  sub_648D0((__int64 *)v16, (__int64 *)v93);
  v53 = *(_QWORD *)(v16 + 16);
  v54 = v97;
  v97 = 0;
  v55 = _mm_loadu_si128(&v98);
  v98 = 0;
  if ( v53 )
  {
    *(_QWORD *)(v16 + 24) = 0;
    v89 = v55;
    qfree(v53);
    v55 = _mm_load_si128(&v89);
  }
  v56 = *(_QWORD *)(v16 + 40);
  *(__m128i *)(v16 + 24) = v55;
  v57 = _mm_load_si128(&v100);
  v58 = v99;
  *(_QWORD *)(v16 + 16) = v54;
  v99 = 0;
  v89 = v57;
  v100 = 0;
  if ( v56 )
  {
    v59 = *(_QWORD *)(v16 + 48);
    if ( v59 )
    {
      for ( n = 0; n != v59; ++n )
      {
        v61 = (_QWORD *)(v56 + 40 * n);
        v62 = v61[2];
        if ( v62 )
        {
          v61[3] = 0;
          qfree(v62);
        }
        qfree(*v61);
        v56 = *(_QWORD *)(v16 + 40);
      }
    }
    *(_QWORD *)(v16 + 48) = 0;
    qfree(v56);
    v63 = _mm_load_si128(&v89);
    v64 = v99;
    *(_QWORD *)(v16 + 40) = v58;
    v65 = *(_QWORD *)&v101[13];
    si128 = _mm_load_si128((const __m128i *)v101);
    *(__m128i *)(v16 + 48) = v63;
    *(__m128i *)(v16 + 64) = si128;
    *(_QWORD *)(v16 + 77) = v65;
    *(_BYTE *)(v16 + 88) = v102;
    if ( v64 )
    {
      v67 = v100.m128i_i64[0];
      if ( v100.m128i_i64[0] )
      {
        v68 = 0;
        do
        {
          v69 = (_QWORD *)(v64 + 40 * v68);
          v70 = v69[2];
          if ( v70 )
          {
            v69[3] = 0;
            qfree(v70);
          }
          ++v68;
          qfree(*v69);
          v64 = v99;
        }
        while ( v67 != v68 );
      }
      v100.m128i_i64[0] = 0;
      qfree(v64);
    }
  }
  else
  {
    v72 = *(_QWORD *)&v101[13];
    v73 = _mm_load_si128(&v89);
    *(_QWORD *)(v16 + 40) = v58;
    v74 = _mm_load_si128((const __m128i *)v101);
    *(__m128i *)(v16 + 48) = v73;
    *(__m128i *)(v16 + 64) = v74;
    *(_QWORD *)(v16 + 77) = v72;
    *(_BYTE *)(v16 + 88) = v102;
  }
  if ( v97 )
  {
    v98.m128i_i64[0] = 0;
    qfree(v97);
  }
  qfree(v96[0]);
  return v103 - __readfsqword(0x28u);
}
