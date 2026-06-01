__int64 __fastcall sub_4FB600(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r9
  unsigned __int64 *v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r15
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r11
  char v25; // al
  void *v26; // rbp
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned int v29; // r15d
  char *v31; // rdx
  char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  char v36; // al
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  const __m128i *v39; // rcx
  unsigned __int64 v40; // r8
  const __m128i *v41; // rdx
  __int64 v42; // rax
  __m128i v43; // xmm0
  bool v44; // cf
  unsigned __int64 v45; // rax
  const void **v46; // r14
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // r15
  char *v51; // rdi
  const __m128i *v52; // rdx
  const __m128i *v53; // rcx
  const void **v54; // r13
  __int64 v55; // rdx
  __m128i *v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r9
  __m128i v60; // xmm1
  __int32 v61; // r12d
  __int8 v62; // bp
  __int64 v63; // r14
  __int64 v64; // rax
  _QWORD *v65; // rcx
  __m128i *v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rsi
  __m128i v69; // xmm1
  __m128i v70; // xmm0
  _QWORD *v71; // rcx
  const void *v72; // rsi
  unsigned __int64 v73; // r14
  unsigned __int64 v74; // rax
  _QWORD *v75; // rdx
  unsigned __int64 v76; // r14
  unsigned __int64 v77; // r8
  _QWORD *v78; // r14
  unsigned __int64 v79; // rcx
  unsigned __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rax
  _QWORD *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __m128i *v91; // rdi
  __int64 v92; // r9
  __int64 v93; // rax
  const __m128i *v94; // rsi
  __m128i v95; // xmm0
  __int64 v96; // r9
  __int64 v97; // rax
  _QWORD *v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __m128i *v101; // rdi
  __int64 v102; // r9
  __int64 v103; // rax
  const __m128i *v104; // rsi
  __m128i v105; // xmm0
  __int64 v106; // r9
  __m128i v107; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v108; // [rsp+10h] [rbp-B8h]
  __int64 v109; // [rsp+18h] [rbp-B0h]
  __int64 v110; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v111; // [rsp+28h] [rbp-A0h]
  size_t n; // [rsp+30h] [rbp-98h]
  __int64 v113; // [rsp+38h] [rbp-90h]
  const void **v114; // [rsp+40h] [rbp-88h]
  __int64 v115; // [rsp+48h] [rbp-80h]
  unsigned __int64 v116; // [rsp+50h] [rbp-78h]
  __int64 v117; // [rsp+58h] [rbp-70h]
  __int64 ptr; // [rsp+60h] [rbp-68h] BYREF
  void *ptr_8[2]; // [rsp+68h] [rbp-60h]
  char v120; // [rsp+78h] [rbp-50h]
  unsigned __int64 v121; // [rsp+88h] [rbp-40h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 216);
  v110 = a3;
  v5 = *(_QWORD *)(a1 + 208);
  v121 = __readfsqword(0x28u);
  v6 = *a2;
  v111 = v4 - 1;
  v7 = *(_QWORD *)(v5 + 16 * (v4 - 1));
  v8 = **(_QWORD **)(a1 + 192) + 48 * v7;
  v9 = *(unsigned __int64 **)(v8 + 32);
  if ( v6 < v4 - 1 )
  {
    v10 = 0;
    v11 = v5 + 16 * v4;
    do
    {
      v10 += *(_QWORD *)(v11 - 8);
      v11 -= 16;
    }
    while ( v5 + 16 * v6 + 16 != v11 );
    v108 = (_QWORD *)(v110 + v10);
    if ( !(v110 + v10) )
    {
      v107.m128i_i64[0] = (__int64)v9;
      v12 = v111;
      v13 = 0;
      v14 = v8;
      while ( 1 )
      {
        v15 = v12--;
        v13 += *(_QWORD *)(v5 + 16 * v15 + 8);
        sub_4F9180(a1, *(_QWORD *)(v5 + 16 * v12), v7, v13);
        if ( v6 >= v12 )
          break;
        v5 = *(_QWORD *)(a1 + 208);
      }
      v16 = v14;
      v9 = (unsigned __int64 *)v107.m128i_i64[0];
      v17 = v111;
      while ( 1 )
      {
        v18 = v17--;
        v19 = *(_QWORD *)(a1 + 208);
        v20 = (__int64)v108 + *(_QWORD *)(v19 + 16 * v18 + 8);
        v21 = *(_QWORD **)(a1 + 192);
        v22 = *(_QWORD *)(v19 + 16 * v17);
        v108 = (_QWORD *)v20;
        v23 = *v21 + 48 * v22;
        *(_OWORD *)ptr_8 = 0;
        ptr = 0;
        v24 = *(_QWORD *)(v23 + 8);
        if ( v24 )
        {
          v115 = v20;
          v113 = v16;
          v114 = (const void **)v23;
          v107.m128i_i64[0] = v24;
          n = 24 * v24;
          ptr = qalloc_or_throw(24 * v24);
          ptr_8[1] = (void *)v107.m128i_i64[0];
          v72 = *v114;
          v109 = v107.m128i_i64[0];
          v107.m128i_i64[0] = (__int64)v114;
          memcpy((void *)ptr, v72, n);
          v20 = v115;
          v16 = v113;
          v23 = (__int64)v114;
          ptr_8[0] = (void *)v109;
        }
        v25 = *(_BYTE *)(v23 + 24);
        v120 = v25;
        if ( v25 )
        {
          if ( (unsigned __int8)(v25 - 10) > 1u && (unsigned __int8)(v25 - 12) > 1u )
          {
            if ( !under_debugger )
              interr(3076);
            goto LABEL_91;
          }
          if ( v20 )
          {
            v31 = (char *)(ptr + 24 * (__int64)ptr_8[0]);
            v32 = (char *)ptr;
            if ( (char *)ptr != v31 )
            {
              if ( ((24 * LOBYTE(ptr_8[0])) & 8) == 0 || (v32 = (char *)(ptr + 24), *(_QWORD *)ptr -= v20, v31 != v32) )
              {
                do
                {
                  *(_QWORD *)v32 -= v20;
                  *((_QWORD *)v32 + 3) -= v20;
                  v32 += 48;
                }
                while ( v31 != v32 );
              }
            }
            v113 = v20;
            n = v23;
            v109 = v16;
            v107.m128i_i64[0] = (__int64)&ptr;
            sub_4FB280((__int64)&ptr, (__int64)&ptr, (__int64)v31, v23, v20, v16);
            v16 = v109;
            v23 = n;
            v20 = v113;
          }
          v33 = *(_QWORD *)(v23 + 32);
          v107.m128i_i64[0] = v16;
          v34 = *(_QWORD *)(v33 + 8);
          v35 = *(_QWORD *)(v33 + 16);
          if ( v34 != -1 )
            v35 -= v20;
          v36 = sub_4F68C0(v9, v16, (__int64)&ptr, v34, v35);
          v16 = v107.m128i_i64[0];
          if ( !v36 )
          {
            if ( ptr )
            {
              ptr_8[0] = nullptr;
              qfree((void *)ptr);
            }
            v73 = v111;
            v29 = 1;
            do
            {
LABEL_61:
              --v73;
              sub_4FAB50(v3, *(_QWORD *)(*(_QWORD *)(v3 + 208) + 16 * v73));
            }
            while ( v6 < v73 );
            goto LABEL_62;
          }
          if ( ptr )
          {
            ptr_8[0] = nullptr;
            qfree((void *)ptr);
            v16 = v107.m128i_i64[0];
          }
        }
        else if ( ptr )
        {
          v107.m128i_i64[0] = v16;
          ptr_8[0] = nullptr;
          qfree((void *)ptr);
          v16 = v107.m128i_i64[0];
        }
        if ( v6 >= v17 )
          goto LABEL_37;
      }
    }
    goto LABEL_17;
  }
  if ( !v110 )
  {
LABEL_37:
    v37 = v9[7];
    v38 = v9[6];
    v39 = (const __m128i *)v9[9];
    v40 = v38;
    v41 = v39;
    v42 = ((__int64)(v38 + 32 * v37 - (_QWORD)v39) >> 5) - 1;
    if ( v42 < 0 )
    {
      v45 = v9[6];
    }
    else
    {
      do
      {
        v43 = _mm_loadu_si128(v41);
        v40 += 32LL;
        v41 += 2;
        *(__m128i *)(v40 - 32) = v43;
        *(__m128i *)(v40 - 16) = _mm_loadu_si128(v41 - 1);
        v44 = v42-- == 0;
      }
      while ( !v44 );
      v45 = v9[6];
      v37 = v9[7];
    }
    v9[9] = v45;
    v29 = 0;
    n = (size_t)(v9 + 6);
    v9[7] = v37 - ((__int64)((__int64)v39->m128i_i64 - v38) >> 5);
    if ( v6 < v111 )
    {
      v117 = v7;
      v46 = nullptr;
      v116 = v6;
      v47 = v111;
      do
      {
        v48 = v47--;
        v49 = *(_QWORD *)(v3 + 208);
        v46 = (const void **)((char *)v46 + *(_QWORD *)(v49 + 16 * v48 + 8));
        v50 = *(_QWORD **)(**(_QWORD **)(v3 + 192) + 48LL * *(_QWORD *)(v49 + 16 * v47) + 32);
        v51 = (char *)v50[6];
        v52 = (const __m128i *)(v50[9] + 32LL);
        v53 = (const __m128i *)&v51[32 * v50[7]];
        v50[9] = v52;
        if ( v52 != v53 )
        {
          v113 = v47;
          v54 = v46;
          v114 = v46;
          v115 = v3;
          do
          {
            v58 = v9[7];
            v59 = v9[8];
            v60 = _mm_loadu_si128(v52);
            v61 = v52[1].m128i_i32[2];
            v62 = v52[1].m128i_i8[12];
            v63 = v52[1].m128i_i64[0] - (_QWORD)v54;
            if ( v59 >= v58 + 1 )
            {
              v55 = v9[6];
            }
            else
            {
              v107 = v60;
              v108 = (_QWORD *)v59;
              v64 = qvector_reserve(n, 0, v58 + 1, 32);
              v65 = (_QWORD *)v9[8];
              v66 = (__m128i *)v9[6];
              v67 = v64;
              v68 = v9[7] - 1;
              v9[8] = (unsigned __int64)v108;
              v69 = _mm_load_si128(&v107);
              if ( v68 >= 0 )
              {
                do
                {
                  v70 = _mm_loadu_si128(v66);
                  v64 += 32;
                  v66 += 2;
                  *(__m128i *)(v64 - 32) = v70;
                  *(__m128i *)(v64 - 16) = _mm_loadu_si128(v66 - 1);
                  v44 = v68-- == 0;
                }
                while ( !v44 );
                v66 = (__m128i *)v9[6];
              }
              v109 = v67;
              v108 = v65;
              v107 = v69;
              qfree(v66);
              v55 = v109;
              v71 = v108;
              v58 = v9[7];
              v60 = _mm_load_si128(&v107);
              v9[6] = v109;
              v9[8] = (unsigned __int64)v71;
            }
            v56 = (__m128i *)(32 * v58 + v55);
            v56[1].m128i_i64[0] = v63;
            v56[1].m128i_i32[2] = v61;
            v56[1].m128i_i8[12] = v62;
            *v56 = v60;
            ++v9[7];
            v51 = (char *)v50[6];
            v52 = (const __m128i *)(v50[9] + 32LL);
            v57 = v50[7];
            v50[9] = v52;
          }
          while ( v52 != (const __m128i *)&v51[32 * v57] );
          v47 = v113;
          v46 = v114;
          v3 = v115;
        }
        if ( v51 )
        {
          v50[7] = 0;
          qfree(v51);
          v50[6] = 0;
          v50[8] = 0;
        }
      }
      while ( v116 < v47 );
      v6 = v116;
      v29 = 0;
      v7 = v117;
      v73 = v111;
      v9[9] = v9[6];
      goto LABEL_61;
    }
LABEL_62:
    v74 = *(_QWORD *)(v3 + 216);
    v75 = (_QWORD *)(v6 + 1);
    v76 = *(_QWORD *)(v3 + 208);
    if ( v6 + 1 == v74 )
      goto LABEL_70;
    ptr = -1;
    ptr_8[0] = nullptr;
    if ( v6 + 1 >= v74 )
    {
      v77 = *(_QWORD *)(v3 + 224);
      if ( (unsigned __int64)&ptr >= v76 && (unsigned __int64)&ptr < v76 + 16 * v77 )
      {
        if ( v77 < (unsigned __int64)v75 )
        {
          v107.m128i_i64[0] = *(_QWORD *)(v3 + 224);
          v108 = (_QWORD *)(v6 + 1);
          v97 = qvector_reserve(v3 + 208, 0, v75, 16);
          v98 = v108;
          v76 = v97;
          v99 = v97;
          v100 = *(_QWORD *)(v3 + 216);
          v101 = *(__m128i **)(v3 + 208);
          v102 = *(_QWORD *)(v3 + 224);
          *(_QWORD *)(v3 + 224) = v107.m128i_i64[0];
          v103 = v100 - 1;
          v104 = v101;
          if ( v103 >= 0 )
          {
            do
            {
              v105 = _mm_loadu_si128(v104);
              v99 += 16;
              ++v104;
              *(__m128i *)(v99 - 16) = v105;
              v44 = v103-- == 0;
            }
            while ( !v44 );
            v101 = *(__m128i **)(v3 + 208);
          }
          v107.m128i_i64[0] = v102;
          v108 = v98;
          qfree(v101);
          v106 = v107.m128i_i64[0];
          v75 = v108;
          *(_QWORD *)(v3 + 208) = v76;
          v74 = *(_QWORD *)(v3 + 216);
          *(_QWORD *)(v3 + 224) = v106;
        }
        if ( v74 >= (unsigned __int64)v75 )
        {
          v80 = *(_QWORD *)(v3 + 208);
        }
        else
        {
          do
          {
            v78 = (_QWORD *)(16 * v74 + v76);
            v79 = v74++;
            *v78 = -1;
            v78[1] = 0;
            v76 = *(_QWORD *)(v3 + 208);
            v80 = v76;
          }
          while ( v6 != v79 );
        }
        *(_QWORD *)(v3 + 216) = v75;
        v76 = v80;
        goto LABEL_70;
      }
      if ( v77 < (unsigned __int64)v75 )
      {
        v107.m128i_i64[0] = *(_QWORD *)(v3 + 224);
        v108 = (_QWORD *)(v6 + 1);
        v87 = qvector_reserve(v3 + 208, 0, v75, 16);
        v88 = v108;
        v76 = v87;
        v89 = v87;
        v90 = *(_QWORD *)(v3 + 216);
        v91 = *(__m128i **)(v3 + 208);
        v92 = *(_QWORD *)(v3 + 224);
        *(_QWORD *)(v3 + 224) = v107.m128i_i64[0];
        v93 = v90 - 1;
        v94 = v91;
        if ( v93 >= 0 )
        {
          do
          {
            v95 = _mm_loadu_si128(v94);
            v89 += 16;
            ++v94;
            *(__m128i *)(v89 - 16) = v95;
            v44 = v93-- == 0;
          }
          while ( !v44 );
          v91 = *(__m128i **)(v3 + 208);
        }
        v107.m128i_i64[0] = v92;
        v108 = v88;
        qfree(v91);
        v96 = v107.m128i_i64[0];
        v75 = v108;
        *(_QWORD *)(v3 + 208) = v76;
        v74 = *(_QWORD *)(v3 + 216);
        *(_QWORD *)(v3 + 224) = v96;
      }
      if ( v74 < (unsigned __int64)v75 )
      {
        do
        {
          *(__m128i *)(v76 + 16 * v74) = _mm_load_si128((const __m128i *)&ptr);
          v84 = v74;
          v76 = *(_QWORD *)(v3 + 208);
          ++v74;
        }
        while ( v6 != v84 );
      }
    }
    *(_QWORD *)(v3 + 216) = v75;
LABEL_70:
    v81 = v110;
    *(_QWORD *)(v76 + 16 * v6) = v7;
    *(_QWORD *)(*(_QWORD *)(v3 + 208) + 16 * v6 + 8) -= v81;
    *v9 = v6;
    return v29;
  }
LABEL_17:
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( !under_debugger )
      interr(3285);
LABEL_91:
    BUG();
  }
  v26 = (void *)v9[10];
  *(_BYTE *)(v8 + 24) = 6;
  *(_QWORD *)(v8 + 8) = 0;
  ptr = -1;
  ptr_8[0] = v26;
  LODWORD(ptr_8[1]) = 0;
  v27 = *(_QWORD *)v8;
  v28 = *(_QWORD *)(v8 + 16);
  if ( (unsigned __int64)&ptr >= *(_QWORD *)v8 && (unsigned __int64)&ptr < v27 + 24 * v28 )
  {
    if ( !v28 )
    {
      v108 = (_QWORD *)v8;
      v85 = qvector_reserve(v8, v27, 1, 24);
      v8 = (__int64)v108;
      v86 = v108[1];
      *v108 = v85;
      v27 = v85 + 24 * v86;
    }
    *(_QWORD *)v27 = -1;
    *(_QWORD *)(v27 + 8) = v26;
    *(_DWORD *)(v27 + 16) = 0;
  }
  else
  {
    if ( !v28 )
    {
      v108 = (_QWORD *)v8;
      v82 = qvector_reserve(v8, v27, 1, 24);
      v8 = (__int64)v108;
      v83 = v108[1];
      *v108 = v82;
      v27 = v82 + 24 * v83;
    }
    *(__m128i *)v27 = _mm_load_si128((const __m128i *)&ptr);
    *(void **)(v27 + 16) = ptr_8[1];
  }
  ++*(_QWORD *)(v8 + 8);
  v29 = 1;
  v9[1] = -1;
  v9[2] = 0;
  return v29;
}
