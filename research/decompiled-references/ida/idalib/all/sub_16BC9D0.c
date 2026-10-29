__int64 __fastcall sub_16BC9D0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // r8
  __int64 v7; // rbp
  __int64 v8; // r14
  int v9; // r13d
  __int16 v10; // r15
  int v11; // r14d
  char *v12; // rsi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  char v15; // dl
  unsigned __int64 v16; // rsi
  __m128i v17; // xmm1
  int v18; // edi
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  char v23; // dl
  int v24; // edx
  __int64 v25; // rax
  __int16 v26; // r13
  __int64 v27; // rbp
  char *v28; // rsi
  __int64 v29; // rbx
  __int16 v30; // r13
  unsigned __int64 v31; // rax
  __int32 v32; // edx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdi
  int v35; // esi
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  char v38; // al
  char v39; // r14
  int v40; // eax
  int v41; // r13d
  unsigned int v42; // r13d
  int v44; // ecx
  int v45; // r13d
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rsi
  char v48; // dl
  char v49; // r15
  size_t v50; // rax
  __m128i v51; // xmm1
  __m128i v52; // xmm0
  __int64 v53; // rdx
  int v54; // r13d
  __int16 v55; // r13
  int v56; // r15d
  unsigned __int64 v57; // rax
  char v58; // dl
  unsigned __int64 v59; // rsi
  int v60; // r14d
  unsigned int v61; // r8d
  size_t v62; // rax
  __m128i v63; // xmm1
  __m128i v64; // xmm0
  __int64 v65; // rcx
  __m128i v66; // xmm0
  unsigned __int64 v67; // r8
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  __m128i *v70; // rax
  __m128i *v71; // rcx
  __m128i *v72; // rbx
  unsigned __int64 v73; // rdx
  unsigned int v74; // r13d
  unsigned __int64 v75; // r12
  __m128i *v76; // rax
  size_t v77; // rax
  unsigned __int64 v78; // r13
  __int64 v79; // rdx
  __m128i v80; // xmm1
  __m128i *v81; // r14
  __m128i v82; // xmm0
  __m128i *v83; // rax
  size_t v84; // rax
  unsigned __int64 v85; // r13
  unsigned __int64 v86; // rdx
  __m128i v87; // xmm1
  __m128i v88; // xmm0
  __m128i *v89; // r15
  __m128i *v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rsi
  __int64 v93; // rsi
  __int64 v94; // rsi
  int v97; // [rsp+18h] [rbp-110h]
  int v98; // [rsp+18h] [rbp-110h]
  __int16 v99; // [rsp+18h] [rbp-110h]
  __int16 v100; // [rsp+18h] [rbp-110h]
  unsigned __int64 v101; // [rsp+18h] [rbp-110h]
  char *v102; // [rsp+20h] [rbp-108h]
  char *v103; // [rsp+20h] [rbp-108h]
  unsigned __int64 v104; // [rsp+20h] [rbp-108h]
  unsigned int v105; // [rsp+20h] [rbp-108h]
  unsigned int v106; // [rsp+20h] [rbp-108h]
  unsigned __int64 v107; // [rsp+20h] [rbp-108h]
  int v108; // [rsp+28h] [rbp-100h]
  unsigned int v109; // [rsp+28h] [rbp-100h]
  __int64 v110; // [rsp+28h] [rbp-100h]
  __int64 v111; // [rsp+28h] [rbp-100h]
  __int64 v112; // [rsp+30h] [rbp-F8h]
  unsigned int v113; // [rsp+30h] [rbp-F8h]
  char v114; // [rsp+30h] [rbp-F8h]
  int v115; // [rsp+38h] [rbp-F0h]
  char v116; // [rsp+38h] [rbp-F0h]
  unsigned __int64 v117; // [rsp+38h] [rbp-F0h]
  int v118; // [rsp+40h] [rbp-E8h]
  __m128i v119; // [rsp+60h] [rbp-C8h] BYREF
  __m128i v120; // [rsp+70h] [rbp-B8h] BYREF
  __m128i v121; // [rsp+80h] [rbp-A8h]
  __m128i v122; // [rsp+90h] [rbp-98h]
  __m128i v123; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v124[20]; // [rsp+B0h] [rbp-78h]
  char *v125; // [rsp+C8h] [rbp-60h]
  size_t v126; // [rsp+D0h] [rbp-58h]
  int v127; // [rsp+D8h] [rbp-50h]
  int v128; // [rsp+DCh] [rbp-4Ch]
  char v129; // [rsp+E0h] [rbp-48h]
  int v130; // [rsp+E4h] [rbp-44h]
  int v131; // [rsp+E8h] [rbp-40h]

  v4 = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(a1 + 120);
  if ( *(_DWORD *)(a2 + 28) == 2 )
  {
    v54 = *(_DWORD *)(v7 + 8);
    if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
      v54 = *(_DWORD *)(a2 + 32);
    v109 = *(_DWORD *)(v7 + 8);
    v55 = v54 & 0x3FFF;
    sub_C9D980((__int64)&v119, a2 + 16, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL));
    v56 = sub_16B5B40(a1, *(_DWORD *)(a2 + 16) - (unsigned int)*(unsigned __int8 *)(a2 + 37));
    v57 = sub_16B5B90(a1, a3, a4);
    v59 = *(unsigned int *)(v7 + 12);
    v60 = v57;
    v61 = v109;
    v101 = HIDWORD(v57);
    if ( *(unsigned int *)(v7 + 8) >= v59 )
    {
      v116 = v58;
      v111 = *(unsigned int *)(v7 + 8);
      v106 = v61;
      v77 = j__strlen("*");
      v131 = (16 * (v55 & 0x3FFF)) | 1;
      v126 = v77;
      v78 = *(_QWORD *)v7;
      v129 = v116;
      v79 = v111 + 1;
      v80 = _mm_load_si128(&v119);
      v4 = v106;
      v127 = v60;
      v81 = &v123;
      v128 = v101;
      v82 = _mm_load_si128(&v120);
      v121 = v80;
      v83 = (__m128i *)(v78 + 80 * v111);
      v122 = v82;
      v123 = v80;
      *(__m128i *)v124 = v82;
      *(_DWORD *)&v124[16] = 0;
      v125 = (char *)"*";
      v130 = v56;
      if ( v59 < v111 + 1 )
      {
        v93 = v7 + 16;
        if ( v78 <= (unsigned __int64)&v123 && v83 > &v123 )
        {
          sub_2237220(v7, v93, v79, 80);
          v4 = v106;
          v81 = (__m128i *)((char *)&v123 + *(_QWORD *)v7 - v78);
          v83 = (__m128i *)(80LL * *(unsigned int *)(v7 + 8) + *(_QWORD *)v7);
        }
        else
        {
          sub_2237220(v7, v93, v79, 80);
          v4 = v106;
          v83 = (__m128i *)(*(_QWORD *)v7 + 80LL * *(unsigned int *)(v7 + 8));
        }
      }
      *v83 = _mm_loadu_si128(v81);
      v83[1] = _mm_loadu_si128(v81 + 1);
      v83[2] = _mm_loadu_si128(v81 + 2);
      v83[3] = _mm_loadu_si128(v81 + 3);
      v83[4] = _mm_loadu_si128(v81 + 4);
      ++*(_DWORD *)(v7 + 8);
    }
    else
    {
      v114 = v58;
      v110 = *(unsigned int *)(v7 + 8);
      v105 = v61;
      v62 = j__strlen("*");
      v63 = _mm_load_si128(&v119);
      v64 = _mm_load_si128(&v120);
      v4 = v105;
      v123 = v63;
      v65 = *(_QWORD *)v7 + 80 * v110;
      *(__m128i *)v124 = v64;
      *(_QWORD *)(v65 + 48) = v62;
      *(__m128i *)v65 = v63;
      *(__m128i *)(v65 + 16) = v64;
      *(_DWORD *)(v65 + 32) = 0;
      *(_QWORD *)(v65 + 40) = "*";
      *(_DWORD *)(v65 + 56) = v60;
      *(_DWORD *)(v65 + 60) = v101;
      *(_BYTE *)(v65 + 64) = v114;
      *(_DWORD *)(v65 + 68) = v56;
      *(_DWORD *)(v65 + 72) = (16 * (v55 & 0x3FFF)) | 1;
      ++*(_DWORD *)(v7 + 8);
      v121 = v63;
      v122 = v64;
    }
    v7 = *(_QWORD *)(a1 + 120);
  }
  v8 = 0xFFFFFFFFLL;
  if ( *(_DWORD *)(a2 + 356) == 2 )
  {
    v8 = *(unsigned int *)(v7 + 8);
    v44 = *(_DWORD *)(v7 + 8);
    if ( (*(_BYTE *)(a2 + 364) & 1) != 0 )
      v44 = *(_DWORD *)(a2 + 360);
    v99 = v44;
    v113 = v4;
    sub_C9D980((__int64)&v119, a2 + 344, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL));
    v45 = sub_16B5B40(a1, *(_DWORD *)(a2 + 344) - (unsigned int)*(unsigned __int8 *)(a2 + 365));
    v46 = sub_16B5B90(a1, a3, a4);
    v47 = *(unsigned int *)(v7 + 8);
    v104 = HIDWORD(v46);
    v49 = v48;
    v100 = v99 & 0x3FFF;
    if ( v47 >= *(unsigned int *)(v7 + 12) )
    {
      v118 = v46;
      v117 = *(unsigned int *)(v7 + 12);
      v84 = j__strlen(".*");
      v130 = v45;
      v126 = v84;
      v85 = *(_QWORD *)v7;
      v86 = v47 + 1;
      v87 = _mm_load_si128(&v119);
      v88 = _mm_load_si128(&v120);
      v129 = v49;
      v128 = v104;
      v121 = v87;
      v89 = &v123;
      v4 = v113;
      v90 = (__m128i *)(v85 + 80 * v47);
      v122 = v88;
      v123 = v87;
      *(__m128i *)v124 = v88;
      *(_DWORD *)&v124[16] = 0;
      v125 = ".*";
      v127 = v118;
      v131 = (16 * (v100 & 0x3FFF)) | 2;
      if ( v117 < v47 + 1 )
      {
        v94 = v7 + 16;
        if ( v85 > (unsigned __int64)&v123 || v90 <= &v123 )
        {
          sub_2237220(v7, v94, v86, 80);
          v89 = &v123;
          v4 = v113;
          v90 = (__m128i *)(*(_QWORD *)v7 + 80LL * *(unsigned int *)(v7 + 8));
        }
        else
        {
          sub_2237220(v7, v94, v86, 80);
          v4 = v113;
          v89 = (__m128i *)((char *)&v123 + *(_QWORD *)v7 - v85);
          v90 = (__m128i *)(80LL * *(unsigned int *)(v7 + 8) + *(_QWORD *)v7);
        }
      }
      *v90 = _mm_loadu_si128(v89);
      v90[1] = _mm_loadu_si128(v89 + 1);
      v90[2] = _mm_loadu_si128(v89 + 2);
      v90[3] = _mm_loadu_si128(v89 + 3);
      v90[4] = _mm_loadu_si128(v89 + 4);
      ++*(_DWORD *)(v7 + 8);
    }
    else
    {
      v115 = v46;
      v50 = j__strlen(".*");
      v51 = _mm_load_si128(&v119);
      v52 = _mm_load_si128(&v120);
      v53 = *(_QWORD *)v7 + 80 * v47;
      v4 = v113;
      *(_QWORD *)(v53 + 48) = v50;
      *(__m128i *)v53 = v51;
      *(__m128i *)(v53 + 16) = v52;
      *(_DWORD *)(v53 + 32) = 0;
      *(_QWORD *)(v53 + 40) = ".*";
      *(_DWORD *)(v53 + 56) = v115;
      *(_DWORD *)(v53 + 60) = v104;
      *(_BYTE *)(v53 + 64) = v49;
      *(_DWORD *)(v53 + 68) = v45;
      *(_DWORD *)(v53 + 72) = (16 * (v100 & 0x3FFF)) | 2;
      ++*(_DWORD *)(v7 + 8);
      v123 = v51;
      *(__m128i *)v124 = v52;
      v121 = v51;
      v122 = v52;
    }
    v7 = *(_QWORD *)(a1 + 120);
  }
  if ( *(_BYTE *)(a2 + 96) )
    v9 = *(_DWORD *)(a2 + 100);
  else
    v9 = *(_DWORD *)(v7 + 8);
  v10 = v9 & 0x3FFF;
  if ( (_DWORD)v4 != -1 )
  {
    *(_WORD *)(*(_QWORD *)v7 + 80 * v4 + 74) = (4 * v10) | *(_WORD *)(*(_QWORD *)v7 + 80 * v4 + 74) & 3;
    v7 = *(_QWORD *)(a1 + 120);
  }
  if ( (_DWORD)v8 != -1 )
  {
    *(_WORD *)(*(_QWORD *)v7 + 80 * v8 + 74) = (4 * v10) | *(_WORD *)(*(_QWORD *)v7 + 80 * v8 + 74) & 3;
    v7 = *(_QWORD *)(a1 + 120);
  }
  LOBYTE(v11) = 1;
  if ( !*(_BYTE *)(a2 + 288) )
  {
    LOBYTE(v11) = 2;
    if ( !*(_BYTE *)(a2 + 312) )
      v11 = -*(unsigned __int8 *)(a2 + 336) & 3;
  }
  sub_ECD290((__int64)&v119, (_DWORD *)a2, *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL), *(_DWORD *)(a1 + 32) == 2);
  v12 = *(char **)(a2 + 48);
  v102 = v12;
  v13 = (unsigned int)*(_QWORD *)(a2 + 56) - (unsigned int)v12;
  v108 = *(_DWORD *)(a2 + 8);
  if ( !*(_QWORD *)(a2 + 56) )
    v13 = 1;
  v112 = v13;
  v97 = sub_16B5B40(a1, (int)v12);
  v14 = sub_16B5B90(a1, a3, a4);
  v16 = *(unsigned int *)(v7 + 12);
  v17 = _mm_load_si128(&v119);
  v18 = v14;
  v19 = HIDWORD(v14);
  v20 = *(unsigned int *)(v7 + 8);
  if ( v20 >= v16 )
  {
    v129 = v15;
    v66 = _mm_load_si128(&v120);
    v126 = v112;
    v125 = v102;
    v67 = *(_QWORD *)v7;
    v121 = v17;
    v122 = v66;
    v123 = v17;
    LOBYTE(v131) = (4 * (v11 & 3)) | v131 & 0xF3;
    *(__m128i *)v124 = v66;
    *(_DWORD *)&v124[16] = v108;
    v127 = v18;
    v128 = v19;
    v130 = v97;
    v131 = (16 * (v9 & 0x3FFF)) | v131 & 0xC;
    v68 = 80 * v20;
    v69 = v20 + 1;
    v70 = &v123;
    v71 = (__m128i *)(v67 + v68);
    if ( v16 < v69 )
    {
      v91 = v7 + 16;
      v107 = v67;
      if ( v67 > (unsigned __int64)&v123 || v71 <= &v123 )
      {
        sub_2237220(v7, v91, v69, 80);
        v70 = &v123;
        v71 = (__m128i *)(*(_QWORD *)v7 + 80LL * *(unsigned int *)(v7 + 8));
      }
      else
      {
        sub_2237220(v7, v91, v69, 80);
        v70 = (__m128i *)((char *)&v123 + *(_QWORD *)v7 - v107);
        v71 = (__m128i *)(*(_QWORD *)v7 + 80LL * *(unsigned int *)(v7 + 8));
      }
    }
    *v71 = _mm_loadu_si128(v70);
    v71[1] = _mm_loadu_si128(v70 + 1);
    v71[2] = _mm_loadu_si128(v70 + 2);
    v71[3] = _mm_loadu_si128(v70 + 3);
    v71[4] = _mm_loadu_si128(v70 + 4);
    ++*(_DWORD *)(v7 + 8);
  }
  else
  {
    v21 = _mm_load_si128(&v120);
    v123 = v17;
    v22 = *(_QWORD *)v7 + 80 * v20;
    v121 = v17;
    *(_BYTE *)(v22 + 64) = v15;
    *(_QWORD *)(v22 + 48) = v112;
    v23 = *(_BYTE *)(v22 + 72);
    *(__m128i *)v124 = v21;
    v122 = v21;
    *(__m128i *)v22 = v17;
    *(__m128i *)(v22 + 16) = v21;
    *(_BYTE *)(v22 + 72) = (4 * (v11 & 3)) | v23 & 0xF3;
    *(_DWORD *)(v22 + 32) = v108;
    v24 = *(_DWORD *)(v22 + 72);
    *(_QWORD *)(v22 + 40) = v102;
    *(_DWORD *)(v22 + 56) = v18;
    *(_DWORD *)(v22 + 60) = v19;
    *(_DWORD *)(v22 + 68) = v97;
    *(_DWORD *)(v22 + 72) = (16 * (v9 & 0x3FFF)) | v24 & 0xC;
    ++*(_DWORD *)(v7 + 8);
  }
  if ( (unsigned int)(*(_DWORD *)(a2 + 64) - 34) <= 1 )
  {
    v25 = *(_QWORD *)(a2 + 56);
    v26 = v9 + 1;
    v27 = *(_QWORD *)(a1 + 120);
    v28 = *(char **)(a2 + 48);
    v103 = v28;
    v29 = (unsigned int)(v25 - (_DWORD)v28);
    if ( !v25 )
      v29 = 1;
    v30 = v26 & 0x3FFF;
    v98 = sub_16B5B40(a1, (int)v28);
    v31 = sub_16B5B90(a1, a3, a4);
    v33 = *(unsigned int *)(v27 + 8);
    v34 = *(unsigned int *)(v27 + 12);
    v121.m128i_i64[0] = v31;
    v35 = v31;
    v36 = HIDWORD(v31);
    v121.m128i_i32[2] = v32;
    if ( v33 >= v34 )
    {
      v128 = v36;
      v129 = v32;
      v126 = v29;
      v72 = &v123;
      v123.m128i_i32[0] = 6;
      v123.m128i_i64[1] = 0;
      v73 = v33 + 1;
      *(_QWORD *)v124 = 0;
      LOBYTE(v131) = (4 * (v11 & 3)) | v131 & 0xF0 | 3;
      v124[8] = 0;
      v125 = v103;
      v74 = (16 * (v30 & 0x3FFF)) | v131 & 0xFFFC000F;
      *(_QWORD *)&v124[12] = 0;
      LOWORD(v131) = v74;
      v127 = v35;
      v130 = v98;
      HIWORD(v131) = (4 * v10) | BYTE2(v74) & 3;
      v75 = *(_QWORD *)v27;
      v76 = (__m128i *)(*(_QWORD *)v27 + 80 * v33);
      if ( v34 < v33 + 1 )
      {
        v92 = v27 + 16;
        if ( v75 > (unsigned __int64)&v123 || v76 <= &v123 )
        {
          sub_2237220(v27, v92, v73, 80);
          v72 = &v123;
          v76 = (__m128i *)(*(_QWORD *)v27 + 80LL * *(unsigned int *)(v27 + 8));
        }
        else
        {
          sub_2237220(v27, v92, v73, 80);
          v72 = (__m128i *)((char *)&v123 + *(_QWORD *)v27 - v75);
          v76 = (__m128i *)(80LL * *(unsigned int *)(v27 + 8) + *(_QWORD *)v27);
        }
      }
      *v76 = _mm_loadu_si128(v72);
      v76[1] = _mm_loadu_si128(v72 + 1);
      v76[2] = _mm_loadu_si128(v72 + 2);
      v76[3] = _mm_loadu_si128(v72 + 3);
      v76[4] = _mm_loadu_si128(v72 + 4);
      ++*(_DWORD *)(v27 + 8);
    }
    else
    {
      v37 = *(_QWORD *)v27 + 80 * v33;
      *(_DWORD *)(v37 + 60) = v36;
      v38 = *(_BYTE *)(v37 + 72);
      *(_DWORD *)v37 = 6;
      *(_QWORD *)(v37 + 8) = 0;
      *(_QWORD *)(v37 + 16) = 0;
      v39 = v38 & 0xF0 | 3 | (4 * (v11 & 3));
      v40 = v30 & 0x3FFF;
      *(_BYTE *)(v37 + 24) = 0;
      *(_BYTE *)(v37 + 72) = v39;
      v41 = *(_DWORD *)(v37 + 72);
      *(_QWORD *)(v37 + 28) = 0;
      *(_QWORD *)(v37 + 40) = v103;
      v42 = (16 * v40) | v41 & 0xFFFC000F;
      *(_QWORD *)(v37 + 48) = v29;
      *(_DWORD *)(v37 + 72) = v42;
      *(_DWORD *)(v37 + 56) = v35;
      *(_BYTE *)(v37 + 64) = v32;
      *(_DWORD *)(v37 + 68) = v98;
      *(_WORD *)(v37 + 74) = (4 * v10) | BYTE2(v42) & 3;
      ++*(_DWORD *)(v27 + 8);
    }
  }
  return 1;
}
