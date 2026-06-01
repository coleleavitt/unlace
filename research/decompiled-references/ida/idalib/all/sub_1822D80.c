__int64 __fastcall sub_1822D80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __m128i a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        __int64 a17)
{
  _QWORD *v18; // rax
  int v19; // r12d
  unsigned int v20; // r14d
  char v21; // bp
  int v22; // r15d
  _QWORD *v23; // r12
  __int64 v24; // rbx
  const __m128i **v25; // rdi
  const __m128i *v26; // rcx
  int v27; // esi
  __m128i v28; // xmm3
  __m128i v29; // xmm4
  unsigned int v30; // ebp
  __m128i v31; // xmm5
  char v32; // al
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // rcx
  __m128i v36; // xmm6
  __m128i v37; // xmm7
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rdi
  __int64 v44; // rdx
  int v45; // eax
  const __m128i *v46; // r12
  unsigned int v47; // esi
  __int64 v48; // rbp
  __int64 result; // rax
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r15
  unsigned __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // rdx
  char v57; // al
  char v58; // al
  char v59; // al
  unsigned __int64 v60; // rdi
  __int64 v61; // rax
  __m128i v62; // kr10_16
  __m128i v63; // xmm7
  unsigned __int32 v64; // r11d
  unsigned int v65; // esi
  __int8 v66; // al
  __int8 v67; // cl
  __m128i v68; // xmm7
  unsigned int v69; // edx
  char v70; // al
  __m128i v71; // xmm6
  __m128i v72; // xmm7
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 *v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rax
  char v80; // al
  __m128i v81; // xmm6
  __m128i v82; // xmm7
  unsigned int v83; // edx
  void *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rdx
  __m128i v89; // [rsp+0h] [rbp-248h] BYREF
  __m128i v90; // [rsp+10h] [rbp-238h]
  __int128 v91; // [rsp+20h] [rbp-228h]
  const __m128i *v92; // [rsp+38h] [rbp-210h]
  unsigned int v93; // [rsp+44h] [rbp-204h]
  unsigned int v94; // [rsp+48h] [rbp-200h]
  unsigned __int32 v95; // [rsp+4Ch] [rbp-1FCh]
  __int128 v96; // [rsp+50h] [rbp-1F8h]
  __m128i *v97; // [rsp+60h] [rbp-1E8h]
  unsigned int v98; // [rsp+68h] [rbp-1E0h]
  int v99; // [rsp+6Ch] [rbp-1DCh]
  __m128i v100; // [rsp+70h] [rbp-1D8h] BYREF
  int v101; // [rsp+80h] [rbp-1C8h]
  int v102; // [rsp+84h] [rbp-1C4h]
  unsigned __int8 *v103; // [rsp+88h] [rbp-1C0h]
  char *v104; // [rsp+90h] [rbp-1B8h]
  __int64 *v105; // [rsp+98h] [rbp-1B0h]
  __int64 v106; // [rsp+A0h] [rbp-1A8h]
  __int64 v107; // [rsp+A8h] [rbp-1A0h]
  __m128i v108; // [rsp+B0h] [rbp-198h]
  bool v109; // [rsp+C2h] [rbp-186h]
  char v110; // [rsp+C3h] [rbp-185h]
  unsigned __int32 v111; // [rsp+C4h] [rbp-184h]
  unsigned __int64 v112; // [rsp+C8h] [rbp-180h]
  bool v113; // [rsp+DFh] [rbp-169h] BYREF
  __m128i v114; // [rsp+E0h] [rbp-168h] BYREF
  __m128i v115; // [rsp+F0h] [rbp-158h] BYREF
  __m128i v116; // [rsp+100h] [rbp-148h] BYREF
  __m128i v117; // [rsp+110h] [rbp-138h] BYREF
  __m128i v118; // [rsp+120h] [rbp-128h] BYREF
  _QWORD v119[2]; // [rsp+130h] [rbp-118h] BYREF
  void *v120; // [rsp+140h] [rbp-108h] BYREF
  char v121; // [rsp+150h] [rbp-F8h] BYREF
  void *v122[4]; // [rsp+160h] [rbp-E8h] BYREF
  _QWORD v123[2]; // [rsp+180h] [rbp-C8h] BYREF
  __int64 *v124; // [rsp+190h] [rbp-B8h]
  unsigned __int8 *v125; // [rsp+1A0h] [rbp-A8h] BYREF
  char v126; // [rsp+1F8h] [rbp-50h]
  unsigned int v127; // [rsp+200h] [rbp-48h]
  char v128; // [rsp+204h] [rbp-44h]

  *(_QWORD *)&v91 = a1;
  v92 = (const __m128i *)a3;
  v102 = a12;
  v99 = a5;
  v101 = a6;
  v96 = a7;
  v110 = a6;
  v89 = _mm_loadu_si128((const __m128i *)&a8);
  v93 = a7;
  v90 = _mm_loadu_si128(&a9);
  v94 = a8;
  v95 = a9.m128i_i32[0];
  v98 = a15 - 2;
  v109 = (unsigned int)(a15 - 2) <= 2;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_31;
  v18 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v19 = *((_DWORD *)v18 + 2);
  if ( !v19 )
    goto LABEL_31;
  v20 = 0;
  v21 = 0;
  v97 = &v114;
  v103 = (unsigned __int8 *)&v120;
  v104 = &v121;
  v22 = v19;
  v23 = v18;
  do
  {
    while ( 1 )
    {
      v24 = 8LL * v20;
      v25 = (const __m128i **)(*v23 + v24);
      v26 = *v25;
      if ( (*v25)[2].m128i_i16[2] != 142 || a4 != v26[2].m128i_i64[1] || a17 != v26[8].m128i_i64[1] )
      {
        ++v20;
        goto LABEL_5;
      }
      v27 = v26[8].m128i_i32[0];
      if ( a16 > v27 )
        return 0;
      if ( a16 < v27 )
      {
        v55 = *((unsigned int *)v23 + 2);
        v56 = *v23 + 8 * v55;
        if ( (const __m128i **)v56 != v25 + 1 )
        {
          memmove(v25, v25 + 1, v56 - (_QWORD)(v25 + 1));
          LODWORD(v55) = *((_DWORD *)v23 + 2);
        }
        --v22;
        *((_DWORD *)v23 + 2) = v55 - 1;
        goto LABEL_5;
      }
      v28 = _mm_loadu_si128(v26 + 3);
      v29 = _mm_loadu_si128(v26 + 4);
      v100.m128i_i64[0] = (__int64)*v25;
      v30 = v109;
      v31 = _mm_loadu_si128(v26 + 5);
      v114 = v28;
      v115 = v29;
      v116 = v31;
      v32 = sub_18058D0((unsigned int *)v97, (unsigned int *)&a7, v109);
      v33 = v100.m128i_i64[0];
      if ( !v32 )
        goto LABEL_75;
      v57 = sub_18058D0((unsigned int *)&a8, (unsigned int *)&v115, v30);
      v33 = v100.m128i_i64[0];
      if ( !v57 )
        goto LABEL_75;
      v58 = sub_18058D0((unsigned int *)&a9, (unsigned int *)&v116, v30);
      v33 = v100.m128i_i64[0];
      v21 = v58;
      if ( !v58 )
        goto LABEL_75;
      v59 = *(_BYTE *)(v100.m128i_i64[0] + 96);
      if ( v110 == v59 )
        goto LABEL_49;
      if ( v98 <= 2 && !v59 )
      {
        if ( v110 )
        {
LABEL_49:
          v60 = v93 | v96 & 0xFFFFFFFF00000000LL;
          *(_QWORD *)&v96 = v60;
          v61 = v60;
          v107 = *((_QWORD *)&v96 + 1);
          LODWORD(v106) = v93;
          v89.m128i_i64[0] = v94 | v89.m128i_i64[0] & 0xFFFFFFFF00000000LL;
          v100 = _mm_load_si128(&v89);
          v90.m128i_i64[0] = v95 | v90.m128i_i64[0] & 0xFFFFFFFF00000000LL;
          v62 = v90;
          if ( !v93 && ((HIDWORD(v96) | DWORD2(v96) | HIDWORD(v60)) & 0x7FFFFFFF) == 0 )
          {
            v107 = v114.m128i_i64[1];
            v61 = v114.m128i_i64[0];
            LODWORD(v106) = v114.m128i_i32[0];
          }
          LODWORD(v105) = v94;
          if ( !v94 && ((v89.m128i_i32[3] | v89.m128i_i32[2] | v89.m128i_i32[1]) & 0x7FFFFFFF) == 0 )
          {
            v63 = _mm_load_si128(&v115);
            LODWORD(v105) = v115.m128i_i32[0];
            v100 = v63;
          }
          v64 = v95;
          if ( !v95 && ((v90.m128i_i32[3] | v90.m128i_i32[2] | v90.m128i_i32[1]) & 0x7FFFFFFF) == 0 )
          {
            v62 = v116;
            v64 = v116.m128i_i32[0];
          }
          v65 = *(_DWORD *)(v33 + 24);
          v111 = v64;
          v112 = (unsigned int)v106 | v61 & 0xFFFFFFFF00000000LL;
          v100.m128i_i64[0] = (unsigned int)v105 | v100.m128i_i64[0] & 0xFFFFFFFF00000000LL;
          v108.m128i_i64[0] = v64 | v62.m128i_i64[0] & 0xFFFFFFFF00000000LL;
          v108.m128i_i64[1] = v62.m128i_i64[1];
          v66 = sub_180C720(
                  v91,
                  v65,
                  a4,
                  v112,
                  v107,
                  v62.m128i_i64[0],
                  v100.m128i_i64[0],
                  v100.m128i_i64[1],
                  v108.m128i_i64[0],
                  v62.m128i_i64[1]);
          a6 = v108.m128i_i64[0];
          v67 = v66;
          if ( v66 )
          {
            v86 = *v23 + v24;
            v87 = *((unsigned int *)v23 + 2);
            v88 = *v23 + 8 * v87;
            if ( v88 != v86 + 8 )
            {
              v100.m128i_i8[0] = v67;
              memmove((void *)v86, (const void *)(v86 + 8), v88 - (v86 + 8));
              LODWORD(v87) = *((_DWORD *)v23 + 2);
              v67 = v100.m128i_i8[0];
            }
            --v22;
            v21 = v67;
            *((_DWORD *)v23 + 2) = v87 - 1;
          }
          else
          {
            v68 = _mm_load_si128(&v100);
            v90 = v108;
            ++v20;
            v89 = v68;
            *(_QWORD *)&v96 = v112;
            v95 = v111;
            *((_QWORD *)&v96 + 1) = v107;
            v94 = (unsigned int)v105;
            v93 = v106;
          }
          goto LABEL_5;
        }
      }
      else
      {
LABEL_75:
        if ( v98 > 2 )
        {
          v69 = *(_DWORD *)(v33 + 24);
          v100.m128i_i64[0] = v91 + 8;
          sub_168B9F0((__int64)v123, (__int64 *)(v91 + 8), v69, 0x1BB4u, 0);
          sub_15F7200(v123);
          sub_168B9F0((__int64)v123, (__int64 *)v100.m128i_i64[0], v92[1].m128i_u32[2], 0x1889u, 0);
          sub_15F7200(v123);
          goto LABEL_26;
        }
      }
      v100.m128i_i64[0] = v33;
      v117 = 0;
      v118 = 0;
      v34 = sub_18058D0((unsigned int *)v97, (unsigned int *)&a7, 1u);
      v35 = v100.m128i_i64[0];
      if ( v34 )
        break;
      v36 = _mm_load_si128(&v114);
      v37 = _mm_loadu_si128((const __m128i *)&a7);
      v106 = 0;
      v117 = v36;
      v118 = v37;
LABEL_15:
      if ( a15 != 4 )
        goto LABEL_16;
      ++v20;
      v21 = 1;
LABEL_5:
      if ( v22 == v20 )
        goto LABEL_29;
    }
    v70 = sub_18058D0((unsigned int *)&a8, (unsigned int *)&v115, 1u);
    v35 = v100.m128i_i64[0];
    if ( !v70 )
    {
      v71 = _mm_loadu_si128((const __m128i *)&a8);
      v72 = _mm_load_si128(&v115);
      v106 = 1;
      v117 = v71;
      v118 = v72;
LABEL_16:
      v38 = *(_DWORD *)(v35 + 24);
      v105 = (__int64 *)(v91 + 8);
      sub_168B9F0((__int64)v123, (__int64 *)(v91 + 8), v38, 0x1BB5u, 0);
      if ( v126 )
      {
        sub_AE9DF0(&v125, v106, 2u);
        v100.m128i_i64[0] = (__int64)v122;
      }
      else
      {
        v100.m128i_i64[0] = (__int64)v122;
        if ( v128 )
        {
          v73 = sub_168B9E0(v123);
          v77 = v124;
          if ( v124 )
          {
            v78 = *v124;
            v100.m128i_i64[0] = v73;
            v77 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v78 + 32))(v124);
            v73 = v100.m128i_i64[0];
          }
          v122[0] = v77;
          v100.m128i_i64[0] = (__int64)v122;
          v79 = sub_1587BC0(v73, (__int64 *)v122, v73, v74, v75, v76);
          sub_AE9DF0((unsigned __int8 **)(*v79 + 32LL * v127 + 8), v106, 2u);
        }
      }
      v39 = sub_B8FAD0(*(_QWORD *)(a4 + 16) + 16LL, **(unsigned int **)(a4 + 16));
      v119[1] = v40;
      v119[0] = v39;
      v106 = sub_166BAF0((__int64)v123, (__int64)v119);
      sub_2257830(v103, &v117);
      v106 = sub_1682AF0(v106, (__int64)v103);
      sub_2257830(v100.m128i_i64[0], &v118);
      v41 = sub_1682AF0(v106, v100.m128i_i64[0]);
      v113 = a15 == 2;
      sub_1588420(v41, (unsigned __int8 *)&v113);
      if ( v122[0] != (void *)(v100.m128i_i64[0] + 16) )
        operator delete(v122[0]);
      if ( v120 != v104 )
        operator delete(v120);
      sub_15F7200(v123);
      goto LABEL_23;
    }
    v80 = sub_18058D0((unsigned int *)&a9, (unsigned int *)&v116, 1u);
    v35 = v100.m128i_i64[0];
    if ( !v80 )
    {
      v81 = _mm_loadu_si128(&a9);
      v82 = _mm_load_si128(&v116);
      v106 = 2;
      v117 = v81;
      v118 = v82;
      goto LABEL_15;
    }
    v83 = *(_DWORD *)(v100.m128i_i64[0] + 24);
    v105 = (__int64 *)(v91 + 8);
    sub_168B9F0((__int64)v123, (__int64 *)(v91 + 8), v83, 0x1BB6u, 0);
    v122[0] = (void *)sub_B8FAD0(*(_QWORD *)(a4 + 16) + 16LL, **(unsigned int **)(a4 + 16));
    v122[1] = v84;
    v85 = sub_166BAF0((__int64)v123, (__int64)v122);
    LOBYTE(v120) = a15 == 2;
    sub_1588420(v85, v103);
    sub_15F7200(v123);
LABEL_23:
    v42 = 6203;
    if ( a15 != 2 )
      v42 = 6327;
    sub_168B9F0((__int64)v123, v105, v92[1].m128i_u32[2], v42, 0);
    sub_15F7200(v123);
LABEL_26:
    v43 = *v23 + v24;
    v44 = *v23 + 8LL * *((unsigned int *)v23 + 2);
    v45 = *((_DWORD *)v23 + 2);
    if ( v44 != v43 + 8 )
    {
      memmove((void *)v43, (const void *)(v43 + 8), v44 - (v43 + 8));
      v45 = *((_DWORD *)v23 + 2);
    }
    --v22;
    v21 = 1;
    *((_DWORD *)v23 + 2) = v45 - 1;
  }
  while ( v22 != v20 );
LABEL_29:
  if ( v21
    && (_DWORD)a7 == v93
    && v94 == (_DWORD)a8
    && v95 == a9.m128i_i32[0]
    && ((HIDWORD(a8) ^ v89.m128i_i32[3]
       | v89.m128i_i32[2] ^ DWORD2(a8)
       | DWORD1(a8) ^ v89.m128i_i32[1]
       | HIDWORD(a7) ^ HIDWORD(v96)
       | DWORD1(a7) ^ DWORD1(v96)
       | DWORD2(v96) ^ DWORD2(a7)
       | a9.m128i_i32[3] ^ v90.m128i_i32[3]
       | v90.m128i_i32[2] ^ a9.m128i_i32[2]
       | a9.m128i_i32[1] ^ v90.m128i_i32[1])
      & 0x7FFFFFFF) == 0 )
  {
    return 0;
  }
LABEL_31:
  v46 = v92;
  v47 = v92[1].m128i_u32[2];
  v89.m128i_i64[0] = v94 | v89.m128i_i64[0] & 0xFFFFFFFF00000000LL;
  v90.m128i_i64[0] = v95 | v90.m128i_i64[0] & 0xFFFFFFFF00000000LL;
  v48 = v91;
  if ( (unsigned __int8)sub_180C720(
                          v91,
                          v47,
                          a4,
                          v93 | v96 & 0xFFFFFFFF00000000LL,
                          *((__int64 *)&v96 + 1),
                          a6,
                          v89.m128i_i64[0],
                          v89.m128i_i64[1],
                          v90.m128i_i64[0],
                          v90.m128i_i64[1])
    || v109 )
  {
    return 0;
  }
  v50 = *(_QWORD *)(v48 + 248);
  v51 = a7;
  v91 = a8;
  v52 = *((_QWORD *)&a7 + 1);
  v90 = a9;
  v89.m128i_i64[0] = v50;
  v53 = sub_1806F50((__int64 *)(v50 + 2352), 144, 3u);
  v54 = *(_QWORD *)(v48 + 248);
  v89.m128i_i64[0] = v53;
  sub_B2DC90(v53, v54, v46, a4, v51, v52, v91, (__int128)v90, v101, a10, a11, v102, a13, a14, a16, a17);
  result = v89.m128i_i64[0];
  *(_BYTE *)(v89.m128i_i64[0] + 38) = *(_BYTE *)(v89.m128i_i64[0] + 38) & 0xFB | (4 * (v99 & 1));
  return result;
}
