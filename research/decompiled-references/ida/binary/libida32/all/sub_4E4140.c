__int64 __fastcall sub_4E4140(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r9
  __int64 v9; // rbx
  int v10; // ebp
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  int v13; // ebx
  __int64 v14; // rbp
  __int64 v15; // rcx
  const char *v16; // rsi
  __int64 v17; // r9
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // r11
  char v24; // al
  unsigned int v25; // ebp
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned int v28; // ebp
  __int64 v30; // rdx
  char *v31; // rax
  char *v32; // rsi
  __int64 v33; // rdi
  unsigned int v34; // ecx
  char v35; // al
  __int64 v36; // rsi
  __int64 v37; // rdi
  const __m128i *v38; // rcx
  __int64 v39; // r8
  const __m128i *v40; // rdx
  signed __int64 v41; // rax
  __m128i v42; // xmm0
  bool v43; // cf
  __int64 v44; // rdx
  __int64 v45; // r15
  unsigned __int64 v46; // r12
  int v47; // r14d
  __int64 v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rbp
  char *v51; // rdi
  __int64 v52; // rdx
  char *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r13
  int v58; // r15d
  __int64 v59; // rax
  int v60; // r14d
  char v61; // r12
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rcx
  __m128i *v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rsi
  __m128i v68; // xmm0
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r15
  unsigned __int64 v73; // r8
  __int64 v74; // r15
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // rcx
  __int64 v80; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  __m128i *v83; // rdi
  __int64 v84; // r9
  __int64 v85; // rax
  const __m128i *v86; // rsi
  __m128i v87; // xmm0
  unsigned __int64 v88; // rcx
  __int64 v89; // rax
  __m128i *v90; // rdi
  __int64 v91; // r9
  __int64 v92; // rax
  const __m128i *v93; // rsi
  __m128i v94; // xmm0
  int v95; // [rsp+8h] [rbp-C0h]
  int v96; // [rsp+8h] [rbp-C0h]
  _QWORD *v97; // [rsp+8h] [rbp-C0h]
  _QWORD *v98; // [rsp+8h] [rbp-C0h]
  __int64 v99; // [rsp+10h] [rbp-B8h]
  __int64 v100; // [rsp+10h] [rbp-B8h]
  __int64 v101; // [rsp+10h] [rbp-B8h]
  __int64 v102; // [rsp+10h] [rbp-B8h]
  __int64 v103; // [rsp+10h] [rbp-B8h]
  void *v104; // [rsp+10h] [rbp-B8h]
  __int64 v105; // [rsp+10h] [rbp-B8h]
  __int64 v106; // [rsp+10h] [rbp-B8h]
  __int64 v107; // [rsp+10h] [rbp-B8h]
  __int64 v108; // [rsp+10h] [rbp-B8h]
  __int64 v109; // [rsp+18h] [rbp-B0h]
  __int64 v110; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v112; // [rsp+28h] [rbp-A0h]
  size_t na; // [rsp+30h] [rbp-98h]
  __int64 n; // [rsp+30h] [rbp-98h]
  int v115; // [rsp+38h] [rbp-90h]
  unsigned __int64 v116; // [rsp+38h] [rbp-90h]
  __int64 v117; // [rsp+38h] [rbp-90h]
  int v118; // [rsp+40h] [rbp-88h]
  const void **v119; // [rsp+40h] [rbp-88h]
  __int64 v120; // [rsp+48h] [rbp-80h]
  int v121; // [rsp+48h] [rbp-80h]
  unsigned __int64 v122; // [rsp+50h] [rbp-78h]
  __int64 v123; // [rsp+58h] [rbp-70h]
  __int64 ptr; // [rsp+60h] [rbp-68h] BYREF
  void *ptr_8[2]; // [rsp+68h] [rbp-60h]
  char v126; // [rsp+78h] [rbp-50h]
  unsigned __int64 v127; // [rsp+88h] [rbp-40h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 176);
  v127 = __readfsqword(0x28u);
  v6 = *a2;
  v112 = v4 - 1;
  v7 = *(_QWORD *)(v5 + 16 * (v4 - 1));
  v8 = **(_QWORD **)(a1 + 160) + 48 * v7;
  v9 = *(_QWORD *)(v8 + 32);
  if ( *a2 < v4 - 1 )
  {
    v10 = 0;
    v11 = v5 + 16 * v4;
    do
    {
      v10 += *(_DWORD *)(v11 - 8);
      v11 -= 16;
    }
    while ( v5 + 16 * v6 + 16 != v11 );
    v95 = a3 + v10;
    if ( !(a3 + v10) )
    {
      v99 = *(_QWORD *)(v8 + 32);
      v12 = v112;
      v13 = 0;
      v14 = **(_QWORD **)(a1 + 160) + 48 * v7;
      while ( 1 )
      {
        v15 = v12--;
        v13 += *(_DWORD *)(v5 + 16 * v15 + 8);
        v16 = *(const char **)(v5 + 16 * v12);
        sub_4E26C0(a1, (__int64)v16, v7, v13);
        if ( v6 >= v12 )
          break;
        v5 = *(_QWORD *)(a1 + 176);
      }
      v17 = v14;
      v9 = v99;
      v18 = v112;
      while ( 1 )
      {
        v19 = v18--;
        v20 = *(_QWORD *)(v3 + 176);
        v21 = *(_DWORD *)(v20 + 16 * v19 + 8) + v95;
        v95 = v21;
        v22 = **(_QWORD **)(v3 + 160) + 48LL * *(_QWORD *)(v20 + 16 * v18);
        *(_OWORD *)ptr_8 = 0;
        ptr = 0;
        v23 = *(_QWORD *)(v22 + 8);
        if ( v23 )
        {
          v121 = v21;
          v117 = v17;
          v119 = (const void **)v22;
          v104 = *(void **)(v22 + 8);
          n = 16 * v23;
          ptr = qalloc_or_throw(16 * v23, v16);
          ptr_8[1] = v104;
          v16 = (const char *)*v119;
          memcpy((void *)ptr, *v119, n);
          v21 = v121;
          v17 = v117;
          v22 = (__int64)v119;
          ptr_8[0] = v104;
        }
        v24 = *(_BYTE *)(v22 + 24);
        v126 = v24;
        if ( v24 )
        {
          if ( (unsigned __int8)(v24 - 10) > 1u && (unsigned __int8)(v24 - 12) > 1u )
          {
            if ( !under_debugger )
              interr(3076);
            goto LABEL_91;
          }
          v30 = (unsigned int)-v21;
          if ( v21 )
          {
            v31 = (char *)ptr;
            v32 = (char *)(ptr + 16 * (__int64)ptr_8[0]);
            if ( (char *)ptr != v32 )
            {
              if ( ((16 * LOBYTE(ptr_8[0])) & 0x10) == 0
                || (v31 = (char *)(ptr + 16), *(_QWORD *)ptr += v30, v32 != v31) )
              {
                do
                {
                  *(_QWORD *)v31 += v30;
                  *((_QWORD *)v31 + 2) += v30;
                  v31 += 32;
                }
                while ( v32 != v31 );
              }
            }
            v115 = v21;
            na = v22;
            v109 = v17;
            sub_4DE040((__int64)&ptr);
            v17 = v109;
            v22 = na;
            v21 = v115;
          }
          v33 = *(_QWORD *)(v22 + 32);
          v34 = *(_DWORD *)(v33 + 16);
          if ( *(_QWORD *)(v33 + 8) != -1 )
            v34 -= v21;
          v100 = v17;
          v16 = (const char *)v17;
          v35 = sub_4DFAD0(
                  v9,
                  v17,
                  (__int64)&ptr,
                  *(_QWORD *)(v33 + 8),
                  v34 | *(_QWORD *)(v33 + 16) & 0xFFFFFFFF00000000LL);
          v17 = v100;
          if ( !v35 )
          {
            if ( ptr )
            {
              ptr_8[0] = nullptr;
              qfree((void *)ptr);
            }
            v69 = v112;
            v28 = 1;
            do
            {
LABEL_61:
              --v69;
              sub_4E4050(v3, *(_QWORD *)(*(_QWORD *)(v3 + 176) + 16 * v69));
            }
            while ( v6 < v69 );
            goto LABEL_62;
          }
          if ( ptr )
          {
            ptr_8[0] = nullptr;
            qfree((void *)ptr);
            v17 = v100;
          }
        }
        else if ( ptr )
        {
          v103 = v17;
          ptr_8[0] = nullptr;
          qfree((void *)ptr);
          v17 = v103;
        }
        if ( v6 >= v18 )
          goto LABEL_37;
      }
    }
    goto LABEL_17;
  }
  if ( !a3 )
  {
LABEL_37:
    v36 = *(_QWORD *)(v9 + 56);
    v37 = *(_QWORD *)(v9 + 48);
    v38 = *(const __m128i **)(v9 + 72);
    v39 = v37;
    v40 = v38;
    v41 = 0xCCCCCCCCCCCCCCCDLL * ((v37 + 20 * v36 - (__int64)v38) >> 2) - 1;
    if ( v41 < 0 )
    {
      v44 = *(_QWORD *)(v9 + 48);
    }
    else
    {
      do
      {
        v42 = _mm_loadu_si128(v40);
        v39 += 20;
        v40 = (const __m128i *)((char *)v40 + 20);
        *(__m128i *)(v39 - 20) = v42;
        *(_DWORD *)(v39 - 4) = v40[-1].m128i_i32[3];
        v43 = v41-- == 0;
      }
      while ( !v43 );
      v44 = *(_QWORD *)(v9 + 48);
      v36 = *(_QWORD *)(v9 + 56);
    }
    *(_QWORD *)(v9 + 72) = v44;
    v28 = 0;
    *(_QWORD *)(v9 + 56) = v36 - 0xCCCCCCCCCCCCCCCDLL * (((__int64)v38->m128i_i64 - v37) >> 2);
    if ( v6 < v112 )
    {
      v122 = v6;
      v45 = v3;
      v46 = v112;
      v123 = v7;
      v47 = 0;
      do
      {
        v48 = v46--;
        v49 = *(_QWORD *)(v45 + 176);
        v47 += *(_DWORD *)(v49 + 16 * v48 + 8);
        v50 = *(_QWORD **)(**(_QWORD **)(v45 + 160) + 48LL * *(_QWORD *)(v49 + 16 * v46) + 32);
        v51 = (char *)v50[6];
        v52 = v50[9] + 20LL;
        v53 = &v51[20 * v50[7]];
        v50[9] = v52;
        if ( (char *)v52 != v53 )
        {
          v116 = v46;
          v118 = v47;
          v120 = v45;
          v96 = v47;
          do
          {
            v57 = *(_QWORD *)v52;
            v58 = *(_DWORD *)(v52 + 8) - v96;
            v59 = *(_QWORD *)(v9 + 56);
            v60 = *(_DWORD *)(v52 + 12);
            v61 = *(_BYTE *)(v52 + 16);
            if ( *(_QWORD *)(v9 + 64) >= (unsigned __int64)(v59 + 1) )
            {
              v54 = *(_QWORD *)(v9 + 48);
            }
            else
            {
              v101 = *(_QWORD *)(v9 + 64);
              v62 = qvector_reserve(v9 + 48, 0, v59 + 1, 20);
              v63 = *(_QWORD *)(v9 + 56);
              v64 = *(_QWORD *)(v9 + 64);
              v65 = *(__m128i **)(v9 + 48);
              v66 = v62;
              *(_QWORD *)(v9 + 64) = v101;
              v67 = v63 - 1;
              if ( v67 >= 0 )
              {
                do
                {
                  v68 = _mm_loadu_si128(v65);
                  v62 += 20;
                  v65 = (__m128i *)((char *)v65 + 20);
                  *(__m128i *)(v62 - 20) = v68;
                  *(_DWORD *)(v62 - 4) = v65[-1].m128i_i32[3];
                  v43 = v67-- == 0;
                }
                while ( !v43 );
                v65 = *(__m128i **)(v9 + 48);
              }
              v110 = v66;
              v102 = v64;
              qfree(v65);
              v54 = v110;
              v59 = *(_QWORD *)(v9 + 56);
              *(_QWORD *)(v9 + 48) = v110;
              *(_QWORD *)(v9 + 64) = v102;
            }
            v55 = v54 + 20 * v59;
            *(_QWORD *)v55 = v57;
            *(_DWORD *)(v55 + 8) = v58;
            *(_DWORD *)(v55 + 12) = v60;
            *(_BYTE *)(v55 + 16) = v61;
            ++*(_QWORD *)(v9 + 56);
            v51 = (char *)v50[6];
            v52 = v50[9] + 20LL;
            v56 = v50[7];
            v50[9] = v52;
          }
          while ( (char *)v52 != &v51[20 * v56] );
          v46 = v116;
          v47 = v118;
          v45 = v120;
        }
        if ( v51 )
        {
          v50[7] = 0;
          qfree(v51);
          v50[6] = 0;
          v50[8] = 0;
        }
      }
      while ( v122 < v46 );
      v3 = v45;
      v6 = v122;
      v28 = 0;
      v7 = v123;
      v69 = v112;
      *(_QWORD *)(v9 + 72) = *(_QWORD *)(v9 + 48);
      goto LABEL_61;
    }
LABEL_62:
    v70 = *(_QWORD *)(v3 + 184);
    v71 = v6 + 1;
    v72 = *(_QWORD *)(v3 + 176);
    if ( v6 + 1 == v70 )
      goto LABEL_70;
    ptr = -1;
    LODWORD(ptr_8[0]) = 0;
    if ( v6 + 1 >= v70 )
    {
      v73 = *(_QWORD *)(v3 + 192);
      if ( (unsigned __int64)&ptr >= v72 && (unsigned __int64)&ptr < v72 + 16 * v73 )
      {
        if ( v73 < v71 )
        {
          v107 = *(_QWORD *)(v3 + 192);
          v72 = qvector_reserve(v3 + 176, 0, v71, 16);
          v88 = v72;
          v89 = *(_QWORD *)(v3 + 184);
          v90 = *(__m128i **)(v3 + 176);
          v91 = *(_QWORD *)(v3 + 192);
          *(_QWORD *)(v3 + 192) = v107;
          v92 = v89 - 1;
          v93 = v90;
          if ( v92 >= 0 )
          {
            do
            {
              v94 = _mm_loadu_si128(v93);
              v88 += 16LL;
              ++v93;
              *(__m128i *)(v88 - 16) = v94;
              v43 = v92-- == 0;
            }
            while ( !v43 );
            v90 = *(__m128i **)(v3 + 176);
          }
          v108 = v91;
          qfree(v90);
          v71 = v6 + 1;
          *(_QWORD *)(v3 + 176) = v72;
          v70 = *(_QWORD *)(v3 + 184);
          *(_QWORD *)(v3 + 192) = v108;
        }
        if ( v70 >= v71 )
        {
          v76 = *(_QWORD *)(v3 + 176);
        }
        else
        {
          do
          {
            v74 = 16 * v70 + v72;
            v75 = v70++;
            *(_QWORD *)v74 = -1;
            *(_DWORD *)(v74 + 8) = 0;
            v72 = *(_QWORD *)(v3 + 176);
            v76 = v72;
          }
          while ( v6 != v75 );
        }
        *(_QWORD *)(v3 + 184) = v71;
        v72 = v76;
        goto LABEL_70;
      }
      if ( v73 < v71 )
      {
        v105 = *(_QWORD *)(v3 + 192);
        v72 = qvector_reserve(v3 + 176, 0, v71, 16);
        v81 = v72;
        v82 = *(_QWORD *)(v3 + 184);
        v83 = *(__m128i **)(v3 + 176);
        v84 = *(_QWORD *)(v3 + 192);
        *(_QWORD *)(v3 + 192) = v105;
        v85 = v82 - 1;
        v86 = v83;
        if ( v85 >= 0 )
        {
          do
          {
            v87 = _mm_loadu_si128(v86);
            v81 += 16LL;
            ++v86;
            *(__m128i *)(v81 - 16) = v87;
            v43 = v85-- == 0;
          }
          while ( !v43 );
          v83 = *(__m128i **)(v3 + 176);
        }
        v106 = v84;
        qfree(v83);
        v71 = v6 + 1;
        *(_QWORD *)(v3 + 176) = v72;
        v70 = *(_QWORD *)(v3 + 184);
        *(_QWORD *)(v3 + 192) = v106;
      }
      if ( v70 < v71 )
      {
        do
        {
          *(__m128i *)(v72 + 16 * v70) = _mm_load_si128((const __m128i *)&ptr);
          v79 = v70;
          v72 = *(_QWORD *)(v3 + 176);
          ++v70;
        }
        while ( v6 != v79 );
      }
    }
    *(_QWORD *)(v3 + 184) = v71;
LABEL_70:
    *(_QWORD *)(v72 + 16 * v6) = v7;
    *(_DWORD *)(*(_QWORD *)(v3 + 176) + 16 * v6 + 8) -= a3;
    *(_QWORD *)v9 = v6;
    return v28;
  }
LABEL_17:
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( !under_debugger )
      interr(3285);
LABEL_91:
    BUG();
  }
  v25 = *(_DWORD *)(v9 + 80);
  *(_BYTE *)(v8 + 24) = 6;
  *(_QWORD *)(v8 + 8) = 0;
  ptr = 0xFFFFFFFFLL;
  ptr_8[0] = (void *)v25;
  v26 = *(_QWORD *)v8;
  v27 = *(_QWORD *)(v8 + 16);
  if ( (unsigned __int64)&ptr >= *(_QWORD *)v8 && (unsigned __int64)&ptr < v26 + 16 * v27 )
  {
    if ( !v27 )
    {
      v98 = (_QWORD *)v8;
      v80 = qvector_reserve(v8, v26, 1, 16);
      v8 = (__int64)v98;
      *v98 = v80;
      v26 = 16LL * v98[1] + v80;
    }
    *(_DWORD *)(v26 + 8) = v25;
    *(_QWORD *)v26 = 0xFFFFFFFFLL;
    *(_DWORD *)(v26 + 12) = 0;
  }
  else
  {
    if ( !v27 )
    {
      v97 = (_QWORD *)v8;
      v77 = qvector_reserve(v8, v26, 1, 16);
      v8 = (__int64)v97;
      v78 = v97[1];
      *v97 = v77;
      v26 = v77 + 16 * v78;
    }
    *(__m128i *)v26 = _mm_load_si128((const __m128i *)&ptr);
  }
  ++*(_QWORD *)(v8 + 8);
  v28 = 1;
  *(_QWORD *)(v9 + 8) = -1;
  *(_DWORD *)(v9 + 16) = 0;
  return v28;
}

