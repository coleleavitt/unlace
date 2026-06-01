unsigned __int64 __fastcall sub_1DEE960(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 si128, __m128 a6)
{
  unsigned int *v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbx
  __int64 v13; // rcx
  bool v14; // zf
  bool v15; // r8
  bool v16; // r14
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  size_t v28; // r12
  _QWORD *v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  void **p_ptr; // r14
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  void *v37; // r15
  __int64 v38; // rbp
  unsigned int v39; // eax
  __int64 v40; // r13
  __int64 v41; // rdi
  int v42; // r15d
  unsigned int v43; // eax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  int v47; // r12d
  __int64 v48; // r13
  void *v49; // rax
  __int64 v50; // rdi
  int v51; // r15d
  unsigned int v52; // eax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rdi
  _QWORD *v59; // r14
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned int v62; // eax
  int v63; // eax
  __int64 v64; // r13
  unsigned __int64 v65; // rbp
  __int64 v66; // rax
  unsigned __int64 v67; // r14
  int v68; // ebp
  unsigned int v69; // r12d
  unsigned int v70; // r15d
  unsigned int v71; // esi
  unsigned int v72; // eax
  __int64 v73; // rsi
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rdx
  unsigned int *v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdi
  __int64 v80; // rcx
  int v81; // ecx
  __int64 v82; // rsi
  __int64 v83; // r8
  _DWORD *v84; // rdx
  size_t v85; // r12
  __int64 v86; // rcx
  __int64 v87; // r9
  __int64 v88; // rax
  unsigned __int64 v89; // r8
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  __int64 v93; // [rsp+0h] [rbp-158h]
  unsigned int v94; // [rsp+0h] [rbp-158h]
  __int64 v95; // [rsp+8h] [rbp-150h]
  __m128 v96; // [rsp+10h] [rbp-148h] BYREF
  __int64 v97; // [rsp+20h] [rbp-138h]
  size_t n; // [rsp+28h] [rbp-130h]
  void *v99; // [rsp+30h] [rbp-128h]
  void **v100; // [rsp+38h] [rbp-120h]
  bool v101; // [rsp+47h] [rbp-111h]
  void **v102; // [rsp+48h] [rbp-110h]
  __int64 v103; // [rsp+50h] [rbp-108h] BYREF
  unsigned int *v104; // [rsp+58h] [rbp-100h]
  char v105; // [rsp+6Ah] [rbp-EEh] BYREF
  char v106; // [rsp+6Bh] [rbp-EDh] BYREF
  unsigned int v107; // [rsp+6Ch] [rbp-ECh] BYREF
  __int64 v108; // [rsp+70h] [rbp-E8h] BYREF
  const __m128i *v109; // [rsp+78h] [rbp-E0h]
  void *v110; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v111; // [rsp+88h] [rbp-D0h]
  char v112; // [rsp+90h] [rbp-C8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-A0h]
  __int64 v115; // [rsp+C0h] [rbp-98h] BYREF
  void *v116; // [rsp+E0h] [rbp-78h] BYREF
  __m128i v117; // [rsp+E8h] [rbp-70h]
  _BYTE v118[32]; // [rsp+F8h] [rbp-60h] BYREF
  int v119; // [rsp+118h] [rbp-40h]
  char v120; // [rsp+11Ch] [rbp-3Ch]

  v104 = a4;
  v103 = a3;
  v97 = a2;
  v7 = &a4[2 * ((4 * ((*(_BYTE *)(a3 + 19) >> 2) + 2 * ((*(_WORD *)(a3 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 2];
  v8 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v95 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(v103 + 24),
          (const __m128i *)(v8 * (((unsigned __int64)v7 - (v7 != nullptr)) / v8 + (v7 != nullptr))),
          si128,
          a6,
          v9,
          v10);
  if ( (v95 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_F6C520(*(_QWORD *)(v103 + 24));
  v13 = v103;
  v14 = *(_QWORD *)(v103 + 24) == v95;
  v100 = &v110;
  v15 = !v14;
  v110 = &v112;
  v111 = 0x400000000LL;
  if ( ((*(_WORD *)(v103 + 18) >> 3) & 0x7F) != 0 )
  {
    v93 = 24;
    v16 = !v14;
    v99 = (void *)(8LL * (((*(_WORD *)(v103 + 18) >> 3) & 0x7Fu) - 1) + 32);
    while ( 1 )
    {
      v17 = *(_QWORD *)&v104[(unsigned __int64)v93 / 4];
      v18 = *(_QWORD *)v17;
      if ( (*(_QWORD *)v17 & 0xF) == 0
        && (v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL), v101 = v18 != 0 && *(_BYTE *)(v19 + 16) == 38) )
      {
        p_ptr = &ptr;
        v33 = *(_QWORD *)(v19 + 32);
        v34 = *a1;
        ptr = &v115;
        v114 = 0x200000000LL;
        sub_1E4C960(v34, v33);
        v35 = (unsigned int)sub_F6C520(*(_QWORD *)(v18 + 32));
        v36 = *(_QWORD *)(v18 + 32);
        v96.m128_u64[0] = (unsigned int)v114;
        v37 = ptr;
        v108 = v36;
        v105 = 0;
        v106 = 0;
        v109 = (const __m128i *)(v35 * ((v17 != -12) + (v17 + 12 - (unsigned __int64)(v17 != -12)) / v35));
        v107 = *(_DWORD *)(v19 + 20);
        v38 = (unsigned int)sub_F6CE20(&v108);
        v39 = sub_F6CCB0(&v108, si128);
        if ( sub_1DDBB60(
               a1,
               *(_DWORD *)(v17 + 8),
               (v38 << 32) | v39,
               (__int64)v37,
               v96.m128_i64[0],
               (__int64)&v105,
               si128,
               a6,
               (__int64)&v106,
               (__int64)&v107) )
        {
          v11 = 0;
          goto LABEL_27;
        }
        if ( v105 )
        {
          if ( v107 != 1 )
          {
            v102 = &ptr;
            v47 = 0;
            v96.m128_u64[0] = (unsigned __int64)v118;
            while ( 1 )
            {
              v48 = *a1;
              ++v47;
              v49 = (void *)v96.m128_u64[0];
              si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
              v50 = v108;
              v51 = *(_DWORD *)(*a1 + 12632);
              *(_DWORD *)(*a1 + 12632) = v47;
              v116 = v49;
              v117 = (__m128i)si128;
              v119 = 0;
              v120 = 0;
              v52 = sub_F6C560(v50);
              if ( (unsigned __int64)v52 > v117.m128i_i64[0] )
                sub_1EA60C0(&v116);
              v55 = sub_1DCE820(a1, (__int64)&v116, v108, v109, si128, a6, v53, v54);
              if ( (v55 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                break;
              v58 = *(_QWORD **)(*a1 + 248);
              n = v117.m128i_i64[0] - v117.m128i_i64[1];
              v59 = sub_A81BC0(
                      v58,
                      v55,
                      v117.m128i_i32[0] - v117.m128i_i32[2],
                      v117.m128i_i64[0] - v117.m128i_i64[1],
                      v56,
                      v57);
              memcpy(v59 + 1, (char *)v116 + v117.m128i_i64[1], n);
              v60 = (unsigned int)v111;
              v61 = (unsigned int)v111 + 1LL;
              if ( v61 > HIDWORD(v111) )
              {
                sub_2237220(v100, v100 + 2, v61, 8);
                v60 = (unsigned int)v111;
              }
              *((_QWORD *)v110 + v60) = v59;
              LODWORD(v111) = v111 + 1;
              if ( v116 && v116 != (void *)v96.m128_u64[0] )
                operator delete[](v116);
              v62 = v107;
              *(_DWORD *)(v48 + 12632) = v51;
              if ( v62 - 1 == v47 )
              {
                p_ptr = v102;
                goto LABEL_43;
              }
            }
            p_ptr = v102;
            v11 = 0;
            if ( v116 && v116 != v118 )
              operator delete[](v116);
            *(_DWORD *)(v48 + 12632) = v51;
LABEL_27:
            if ( ptr != p_ptr + 2 )
              free(ptr);
            goto LABEL_29;
          }
        }
        else
        {
          v40 = *a1;
          a6 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
          v41 = v108;
          v42 = *(_DWORD *)(*a1 + 12632);
          *(_DWORD *)(*a1 + 12632) = 0;
          v116 = v118;
          v117 = (__m128i)a6;
          v119 = 0;
          v120 = 0;
          v43 = sub_F6C560(v41);
          if ( (unsigned __int64)v43 > v117.m128i_i64[0] )
            sub_1EA60C0(&v116);
          v46 = sub_1DCE820(a1, (__int64)&v116, v108, v109, si128, a6, v44, v45);
          if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          {
            v11 = 0;
            if ( v116 != v118 && v116 )
              operator delete[](v116);
            *(_DWORD *)(v40 + 12632) = v42;
            goto LABEL_27;
          }
          v96.m128_u64[0] = sub_A781D0(*(_QWORD *)(*a1 + 248), v46, v107);
          sub_1EA6140(v97, v96.m128_u64[0], 4, 4);
          v83 = v96.m128_u64[0];
          *v84 = *(_DWORD *)(v17 + 8);
          v85 = v117.m128i_i64[0] - v117.m128i_i64[1];
          v96.m128_u64[0] = (unsigned __int64)sub_A81BC0(
                                                *(_QWORD **)(*a1 + 248),
                                                v83,
                                                v117.m128i_i32[0] - v117.m128i_i32[2],
                                                v86,
                                                v83,
                                                v87);
          memcpy((void *)(v96.m128_u64[0] + 8), (char *)v116 + v117.m128i_i64[1], v85);
          v88 = (unsigned int)v111;
          v89 = v96.m128_u64[0];
          v90 = (unsigned int)v111 + 1LL;
          if ( v90 > HIDWORD(v111) )
          {
            sub_2237220(v100, v100 + 2, v90, 8);
            v88 = (unsigned int)v111;
            v89 = v96.m128_u64[0];
          }
          *((_QWORD *)v110 + v88) = v89;
          LODWORD(v111) = v111 + 1;
          if ( v116 && v116 != v118 )
            operator delete[](v116);
          *(_DWORD *)(v40 + 12632) = v42;
        }
LABEL_43:
        if ( ptr != p_ptr + 2 )
          free(ptr);
        v16 = v101;
      }
      else
      {
        v96.m128_u64[0] = v17 + 8;
        v120 = 0;
        v116 = v118;
        v117 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
        v119 = 0;
        v20 = sub_F6C560(v18);
        v23 = v96.m128_u64[0];
        if ( (unsigned __int64)v20 > v117.m128i_i64[0] )
        {
          sub_1EA60C0(&v116);
          v23 = v96.m128_u64[0];
        }
        v96.m128_u64[0] = v23;
        v96 = _mm_loadh_ps((const double *)v96.m128_u64);
        v24 = sub_1DCE820(a1, (__int64)&v116, v96.m128_i64[0], (const __m128i *)v96.m128_u64[1], si128, a6, v21, v22);
        if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        {
          v11 = 0;
          if ( v116 && v116 != v118 )
            operator delete[](v116);
          goto LABEL_29;
        }
        if ( v24 == v18 )
        {
          v91 = (unsigned int)v111;
          v92 = (unsigned int)v111 + 1LL;
          if ( v92 > HIDWORD(v111) )
          {
            sub_2237220(v100, v100 + 2, v92, 8);
            v91 = (unsigned int)v111;
          }
          *((_QWORD *)v110 + v91) = v17;
          LODWORD(v111) = v111 + 1;
          if ( v116 && v116 != v118 )
            operator delete[](v116);
        }
        else
        {
          v28 = v117.m128i_i64[0] - v117.m128i_i64[1];
          v29 = sub_A81BC0(*(_QWORD **)(*a1 + 248), v24, v117.m128i_i32[0] - v117.m128i_i32[2], v25, v26, v27);
          memcpy(v29 + 1, (char *)v116 + v117.m128i_i64[1], v28);
          v30 = (unsigned int)v111;
          v31 = (unsigned int)v111 + 1LL;
          if ( v31 > HIDWORD(v111) )
          {
            sub_2237220(v100, v100 + 2, v31, 8);
            v30 = (unsigned int)v111;
          }
          *((_QWORD *)v110 + v30) = v29;
          LODWORD(v111) = v111 + 1;
          if ( v116 && v116 != v118 )
            operator delete[](v116);
          v16 = 1;
        }
      }
      v93 += 8;
      if ( v99 == (void *)v93 )
      {
        v13 = v103;
        v15 = v16;
        LOWORD(v63) = (*(_WORD *)(v103 + 18) >> 3) & 0x7F;
        goto LABEL_48;
      }
    }
  }
  LOBYTE(v63) = 0;
LABEL_48:
  v63 = (unsigned __int8)v63;
  v64 = *(_BYTE *)(v13 + 19) >> 2;
  if ( *(_DWORD *)(*a1 + 12632) || (v65 = v13, v15) )
  {
    v66 = 2LL * (unsigned __int8)v63;
    v67 = (unsigned int)v111;
    v68 = v104[1];
    v69 = v104[3];
    v70 = v104[2];
    v71 = *v104;
    n = (size_t)&v104[v66 + 6];
    v96.m128_u64[0] = v13 + v66 * 4 + 48;
    v94 = v71;
    v99 = v110;
    v72 = sub_F6CCB0(&v103, si128);
    v73 = *a1;
    v11 = 0;
    v74 = sub_1A8CD60(
            *(__int64 **)(v73 + 736),
            v95,
            v72,
            v94,
            (__int64)v99,
            v67,
            si128,
            v68,
            v70,
            v96.m128_u64[0],
            v64,
            n,
            v64,
            v69,
            1,
            1u);
    v65 = v74;
    if ( (v74 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_29;
    v63 = (*(_WORD *)(v74 + 18) >> 3) & 0x7F;
    LODWORD(v64) = *(_BYTE *)(v65 + 19) >> 2;
  }
  v75 = sub_1EA6140(v97, v65, 8 * ((unsigned int)(4 * (v64 + 2 * v63) + 23) >> 3) + 8, 8);
  v77 = v104;
  v78 = v103;
  *(_BYTE *)(v76 + 16) = 1;
  *(_DWORD *)v76 = *v77;
  if ( ((*(_WORD *)(v78 + 18) >> 3) & 0x7F) != 0 )
  {
    v79 = 8LL * (((*(_WORD *)(v78 + 18) >> 3) & 0x7Fu) - 1) + 8;
    v80 = 0;
    do
    {
      *(_QWORD *)(v76 + v80 + 24) = *(_QWORD *)((char *)v110 + v80);
      v80 += 8;
    }
    while ( v79 != v80 );
    v78 = v103;
    v77 = v104;
  }
  *(_DWORD *)(v76 + 4) = v77[1];
  *(_DWORD *)(v76 + 8) = v77[2];
  v81 = *(_BYTE *)(v78 + 19) >> 2;
  if ( *(_BYTE *)(v78 + 19) >> 2 )
  {
    v82 = 0;
    do
    {
      v82 += 4;
      *(_DWORD *)(v82 + v76 + (*(_WORD *)(v75 + 18) & 0x3F8) + 20) = *(unsigned int *)((char *)v77
                                                                                     + (*(_WORD *)(v78 + 18) & 0x3F8)
                                                                                     + v82
                                                                                     + 20);
    }
    while ( 4LL * (unsigned int)(v81 - 1) + 4 != v82 );
  }
  v11 = v65;
  *(_DWORD *)(v76 + 12) = v77[3];
LABEL_29:
  if ( v110 != v100 + 2 )
    free(v110);
  return v11;
}
