void __fastcall sub_50AC80(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v11; // rsi
  __m128i v13; // xmm0
  int v14; // r10d
  char v15; // dl
  __int64 v16; // rcx
  int v17; // edx
  __m128i v18; // xmm0
  char v19; // r15
  int v20; // ebx
  __int64 v21; // r8
  bool v22; // r14
  bool v23; // r14
  __int64 v24; // r9
  unsigned __int64 v25; // r12
  __m128i v26; // xmm0
  char v27; // al
  __m128i v28; // xmm0
  int v29; // eax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  int v37; // edx
  int v38; // eax
  unsigned __int64 v39; // rdi
  __int64 v40; // rsi
  __m128i v41; // xmm4
  char v42; // r11
  __int64 v43; // r12
  __int64 v44; // rcx
  __m128i v45; // xmm3
  int v46; // r10d
  unsigned __int64 v47; // rdx
  __m128i v48; // xmm2
  __int64 v49; // r9
  __m128i v50; // xmm0
  __int64 v51; // r10
  signed __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rcx
  const __m128i *v58; // rdx
  const __m128i *v59; // rbx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r15
  const __m128i *v62; // rcx
  __m128i v63; // xmm0
  __int8 v64; // cl
  __m128i v65; // xmm0
  __int32 v66; // ecx
  __m128i v67; // xmm0
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  const __m128i *v71; // rdx
  __int32 v72; // ecx
  __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rcx
  unsigned __int64 *v78; // rdx
  const __m128i *v79; // rdx
  volatile signed __int32 *v80; // rax
  unsigned __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rbx
  unsigned __int64 v84; // rcx
  volatile signed __int32 *v85; // rax
  unsigned __int64 v86; // rax
  __int64 v87; // r10
  __int64 v88; // rax
  __m128i v89; // xmm0
  int v90; // eax
  __m128i v91; // xmm0
  __int64 v92; // rax
  __m128i v93; // xmm0
  __m128i v94; // xmm0
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rsi
  char v98; // dl
  __m128i v99; // xmm0
  __int64 v100; // r12
  __m128i v101; // xmm1
  int v102; // edx
  __m128i v103; // xmm0
  __int64 v104; // rdx
  __m128i v105; // xmm0
  __m128i v106; // xmm0
  unsigned __int64 v107; // rax
  __int64 v108; // rsi
  volatile signed __int32 *v109; // rdx
  __m128i v110; // xmm0
  __int64 v111; // rdx
  __m128i v112; // xmm0
  __m128i v113; // xmm0
  char v114; // cl
  __int64 v115; // rax
  int v116; // [rsp+Ch] [rbp-DCh]
  int v117; // [rsp+Ch] [rbp-DCh]
  unsigned __int64 v118; // [rsp+18h] [rbp-D0h] BYREF
  unsigned __int64 *v119; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v120; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v121[2]; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v122; // [rsp+40h] [rbp-A8h] BYREF
  char v123; // [rsp+50h] [rbp-98h]
  __m128i v124; // [rsp+54h] [rbp-94h] BYREF
  int v125; // [rsp+64h] [rbp-84h]
  __m128i v126; // [rsp+68h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v128; // [rsp+88h] [rbp-60h]
  char v129; // [rsp+90h] [rbp-58h]
  int v130; // [rsp+94h] [rbp-54h]
  int v131; // [rsp+98h] [rbp-50h]
  unsigned __int64 v132; // [rsp+A8h] [rbp-40h]

  v11 = a1->m128i_i64[0];
  v132 = __readfsqword(0x28u);
  if ( !v11
    || (a5 = (__m128)_mm_loadu_si128((const __m128i *)a3),
        a9 = *(unsigned __int8 *)(a3 + 16),
        v13 = _mm_loadu_si128((const __m128i *)(a3 + 20)),
        v14 = *(_DWORD *)(a3 + 36),
        *(int *)v11 > 1) )
  {
LABEL_3:
    v15 = *(_BYTE *)(a3 + 16);
    v16 = *(_QWORD *)(a3 + 72);
    v122 = _mm_loadu_si128((const __m128i *)a3);
    v123 = v15;
    v17 = *(_DWORD *)(a3 + 36);
    v124 = _mm_loadu_si128((const __m128i *)(a3 + 20));
    v125 = v17;
    v126 = _mm_loadu_si128((const __m128i *)(a3 + 40));
    v18 = _mm_loadu_si128((const __m128i *)(a3 + 56));
    v128 = v16;
    *(__m128i *)ptr = v18;
    if ( v18.m128i_i64[0] )
    {
      _InterlockedAdd((volatile signed __int32 *)v18.m128i_i64[0], 1u);
      v11 = a1->m128i_i64[0];
    }
    v19 = *(_BYTE *)(a3 + 80);
    v20 = *(_DWORD *)(a3 + 84);
    v21 = *(unsigned int *)(a3 + 88);
    v22 = a1[1].m128i_i64[0] != 0;
    v129 = v19;
    v130 = v20;
    v131 = v21;
    v23 = a2 == 0 && v22;
    if ( !v23 )
    {
      if ( v11 )
      {
        v24 = 0;
        if ( *(int *)v11 > 1 )
        {
LABEL_8:
          sub_503260(a1, v24, 1, 0, v21, v24, *(double *)v18.m128i_i64, *(double *)a5.m128_u64, a6);
          v25 = a1->m128i_u64[1];
LABEL_9:
          v19 = v129;
          v20 = v130;
          LODWORD(v21) = v131;
          if ( v23 )
          {
LABEL_10:
            v26 = _mm_load_si128(&v122);
            v27 = v123;
            *(_BYTE *)(v25 - 16) = v19;
            *(_DWORD *)(v25 - 12) = v20;
            *(__m128i *)(v25 - 96) = v26;
            v28 = _mm_loadu_si128(&v124);
            *(_BYTE *)(v25 - 80) = v27;
            v29 = v125;
            *(__m128i *)(v25 - 76) = v28;
            v30 = _mm_loadu_si128(&v126);
            *(_DWORD *)(v25 - 60) = v29;
            v31 = v128;
            *(__m128i *)(v25 - 56) = v30;
            v32 = _mm_loadu_si128((const __m128i *)ptr);
            *(_QWORD *)(v25 - 24) = v31;
            *(_DWORD *)(v25 - 8) = v21;
            *(__m128i *)(v25 - 40) = v32;
            a1->m128i_i64[1] -= 96;
            ++a1[1].m128i_i64[0];
            return;
          }
          v40 = a1[1].m128i_i64[0];
          v39 = v25;
          goto LABEL_19;
        }
        v39 = a1->m128i_u64[1];
        v51 = *(_QWORD *)(v11 + 8);
        v52 = a1->m128i_i64[1] - ((v11 + 31) & 0xFFFFFFFFFFFFFFF0LL);
        v40 = a1[1].m128i_i64[0];
        v53 = 0xAAAAAAAAAAAAAAABLL * (v52 >> 5);
        if ( (__int64)(v51 - v40 - v53) <= 0 )
        {
          if ( v52 <= 0 )
            goto LABEL_8;
          v54 = 2 * v40;
          if ( 3 * v40 >= 2 * v51 )
            goto LABEL_8;
          v55 = 0;
LABEL_30:
          v56 = v55 - v53;
          v25 = v39 + 96 * v56;
          if ( !v40 || v25 == v39 || !v39 || !v25 )
            goto LABEL_56;
          if ( v25 < v39 )
          {
            sub_50A9E0(v39, v40, v39 + 96 * v56);
            goto LABEL_56;
          }
          v121[0] = 0;
          v57 = 32 * (v40 + v54);
          v119 = &v118;
          v58 = (const __m128i *)(v25 + v57);
          v59 = (const __m128i *)(v39 + v57);
          v118 = v25 + v57;
          v120 = v25 + v57;
          if ( v25 >= v39 + v57 )
          {
            v60 = v39 + 96 * v56;
            v61 = v39 + v57;
            if ( (const __m128i *)v25 == v58 )
            {
              v78 = &v120;
              v121[0] = v25;
              v119 = &v120;
LABEL_48:
              v81 = *v78;
              if ( v120 < *v78 )
              {
                v82 = 1;
LABEL_50:
                v83 = -96 * v82;
                do
                {
                  *v78 = v83 + v81;
                  v78 = v119;
                  v84 = *v119;
                  v85 = *(volatile signed __int32 **)(*v119 - 40);
                  if ( v85 )
                  {
                    if ( !_InterlockedSub(v85, 1u) )
                      free(*(void **)(v84 - 40));
                    v78 = v119;
                  }
                  v81 = *v78;
                }
                while ( *v78 != v120 );
                goto LABEL_56;
              }
              v82 = -1;
              if ( v120 != *v78 )
                goto LABEL_50;
LABEL_56:
              a1->m128i_i64[1] = v25;
              goto LABEL_9;
            }
          }
          else
          {
            v60 = v39 + v57;
            v61 = v25;
            if ( v59 == v58 )
            {
              v121[0] = v39 + v57;
              v119 = v121;
              goto LABEL_40;
            }
          }
          v62 = v59 - 6;
          do
          {
            v63 = _mm_loadu_si128(v62);
            v59 = v62;
            v64 = v62[1].m128i_i8[0];
            v58[-6] = v63;
            v65 = _mm_loadu_si128((const __m128i *)((char *)v59 + 20));
            v58[-5].m128i_i8[0] = v64;
            v66 = v59[2].m128i_i32[1];
            *(__m128i *)((char *)v58 - 76) = v65;
            v67 = _mm_loadu_si128((const __m128i *)((char *)v59 + 40));
            v58[-4].m128i_i32[1] = v66;
            *(__m128i *)((char *)v58 - 56) = v67;
            v68 = v59[3].m128i_i64[1];
            v59[3].m128i_i64[1] = 0;
            v58[-3].m128i_i64[1] = v68;
            v69 = v59[4].m128i_i64[0];
            v59[4].m128i_i64[0] = 0;
            v58[-2].m128i_i64[0] = v69;
            v70 = v59[4].m128i_i64[1];
            v59[4].m128i_i64[1] = 0;
            v58[-2].m128i_i64[1] = v70;
            v58[-1].m128i_i8[0] = v59[5].m128i_i8[0];
            v58[-1].m128i_i32[1] = v59[5].m128i_i32[1];
            v58[-1].m128i_i32[2] = v59[5].m128i_i32[2];
            v62 = v59 - 6;
            v58 = (const __m128i *)(v118 - 96);
            v118 = (unsigned __int64)v58;
          }
          while ( v58 != (const __m128i *)v60 );
          v121[0] = *v119;
          v119 = v121;
          if ( v25 == v60 )
          {
LABEL_42:
            v78 = &v120;
            v119 = &v120;
            if ( (const __m128i *)v61 != v59 )
            {
              do
              {
                v79 = v59;
                v59 += 6;
                v80 = (volatile signed __int32 *)v79[3].m128i_i64[1];
                if ( v80 && !_InterlockedSub(v80, 1u) )
                  free((void *)v79[3].m128i_i64[1]);
              }
              while ( v59 != (const __m128i *)v61 );
              v78 = v119;
            }
            goto LABEL_48;
          }
LABEL_40:
          v71 = v59 - 6;
          do
          {
            v72 = v71->m128i_i32[0];
            v59 = v71;
            v71 -= 6;
            *(_DWORD *)(v60 - 96) = v72;
            *(_DWORD *)(v60 - 92) = v71[6].m128i_i32[1];
            *(_DWORD *)(v60 - 88) = v71[6].m128i_i32[2];
            *(_DWORD *)(v60 - 84) = v71[6].m128i_i32[3];
            *(_BYTE *)(v60 - 80) = v71[7].m128i_i8[0];
            *(_DWORD *)(v60 - 76) = v71[7].m128i_i32[1];
            *(_DWORD *)(v60 - 72) = v71[7].m128i_i32[2];
            *(_DWORD *)(v60 - 68) = v71[7].m128i_i32[3];
            *(_DWORD *)(v60 - 64) = v71[8].m128i_i32[0];
            *(_DWORD *)(v60 - 60) = v71[8].m128i_i32[1];
            v73 = *(_QWORD *)(v60 - 40);
            *(__m128i *)(v60 - 56) = _mm_loadu_si128((const __m128i *)((char *)v71 + 136));
            *(_QWORD *)(v60 - 40) = v71[9].m128i_i64[1];
            v74 = v71[10].m128i_i64[0];
            v71[9].m128i_i64[1] = v73;
            v75 = *(_QWORD *)(v60 - 32);
            *(_QWORD *)(v60 - 32) = v74;
            v76 = v71[10].m128i_i64[1];
            v71[10].m128i_i64[0] = v75;
            v77 = *(_QWORD *)(v60 - 24);
            *(_QWORD *)(v60 - 24) = v76;
            v71[10].m128i_i64[1] = v77;
            *(_BYTE *)(v60 - 16) = v71[11].m128i_i8[0];
            *(_DWORD *)(v60 - 12) = v71[11].m128i_i32[1];
            *(_DWORD *)(v60 - 8) = v71[11].m128i_i32[2];
            v60 = v118 - 96;
            v118 = v60;
          }
          while ( v25 != v60 );
          goto LABEL_42;
        }
      }
      else
      {
        v116 = v21;
        sub_503260(a1, 0, 1, 0, v21, a9, *(double *)v18.m128i_i64, *(double *)a5.m128_u64, a6);
        v39 = a1->m128i_u64[1];
        v40 = a1[1].m128i_i64[0];
        LODWORD(v21) = v116;
      }
LABEL_19:
      v41 = _mm_load_si128(&v122);
      v42 = v123;
      v43 = a2 + 1 - v40;
      v44 = v40 + 1;
      v45 = _mm_loadu_si128(&v124);
      v46 = v125;
      v47 = v39 + 96 * v40;
      v48 = _mm_loadu_si128((const __m128i *)ptr);
      v49 = v128;
      if ( v40 - a2 <= 0 && v43 )
      {
        v50 = _mm_loadu_si128(&v126);
        *(_BYTE *)(v47 + 16) = v123;
        *(_DWORD *)(v47 + 36) = v46;
        *(_QWORD *)(v47 + 72) = v49;
        *(_BYTE *)(v47 + 80) = v19;
        *(_DWORD *)(v47 + 84) = v20;
        *(_DWORD *)(v47 + 88) = v21;
        *(__m128i *)v47 = v41;
        *(__m128i *)(v47 + 20) = v45;
        *(__m128i *)(v47 + 40) = v50;
        *(__m128i *)(v47 + 56) = v48;
        a1->m128i_i64[1] = v39;
        a1[1].m128i_i64[0] = v44;
      }
      else
      {
        v89 = _mm_loadu_si128((const __m128i *)(v47 - 96));
        *(_BYTE *)(v47 + 16) = *(_BYTE *)(v47 - 80);
        v90 = *(_DWORD *)(v47 - 60);
        *(__m128i *)v47 = v89;
        v91 = _mm_loadu_si128((const __m128i *)(v47 - 76));
        *(_DWORD *)(v47 + 36) = v90;
        v92 = *(_QWORD *)(v47 - 24);
        *(__m128i *)(v47 + 20) = v91;
        v93 = _mm_loadu_si128((const __m128i *)(v47 - 56));
        *(_QWORD *)(v47 + 72) = v92;
        LOBYTE(v92) = *(_BYTE *)(v47 - 16);
        *(__m128i *)(v47 + 40) = v93;
        v94 = _mm_loadu_si128((const __m128i *)(v47 - 40));
        *(_BYTE *)(v47 + 80) = v92;
        v95 = *(_QWORD *)(v47 - 12);
        *(_QWORD *)(v47 - 24) = 0;
        *(_QWORD *)(v47 + 84) = v95;
        *(_OWORD *)(v47 - 40) = 0;
        *(__m128i *)(v47 + 56) = v94;
        if ( v43 )
        {
          v96 = v47 - 192;
          v97 = v47 + 96 * v43 - 192;
          do
          {
            v98 = *(_BYTE *)(v96 + 16);
            v99 = _mm_loadu_si128((const __m128i *)v96);
            v96 -= 96LL;
            v100 = *(_QWORD *)(v96 + 168);
            v101 = _mm_loadu_si128((const __m128i *)(v96 + 152));
            *(_BYTE *)(v96 + 208) = v98;
            v102 = *(_DWORD *)(v96 + 132);
            *(__m128i *)(v96 + 192) = v99;
            v103 = _mm_loadu_si128((const __m128i *)(v96 + 116));
            *(_DWORD *)(v96 + 228) = v102;
            v104 = *(_QWORD *)(v96 + 264);
            *(__m128i *)(v96 + 212) = v103;
            v105 = _mm_loadu_si128((const __m128i *)(v96 + 136));
            *(_QWORD *)(v96 + 168) = v104;
            LOBYTE(v104) = *(_BYTE *)(v96 + 176);
            *(__m128i *)(v96 + 232) = v105;
            v106 = _mm_loadu_si128((const __m128i *)(v96 + 248));
            *(_BYTE *)(v96 + 272) = v104;
            LODWORD(v104) = *(_DWORD *)(v96 + 180);
            *(__m128i *)(v96 + 248) = v101;
            *(_DWORD *)(v96 + 276) = v104;
            LODWORD(v104) = *(_DWORD *)(v96 + 184);
            *(__m128i *)(v96 + 152) = v106;
            *(_QWORD *)(v96 + 264) = v100;
            *(_DWORD *)(v96 + 280) = v104;
          }
          while ( v96 != v97 );
        }
        v107 = v39 + 96 * a2;
        v108 = *(_QWORD *)(v107 + 72);
        v109 = *(volatile signed __int32 **)(v107 + 56);
        *(__m128i *)(v107 + 40) = _mm_loadu_si128(&v126);
        v110 = _mm_loadu_si128((const __m128i *)(v107 + 56));
        *(_BYTE *)(v107 + 16) = v42;
        *(_DWORD *)(v107 + 36) = v46;
        *(_QWORD *)(v107 + 72) = v49;
        *(_BYTE *)(v107 + 80) = v19;
        *(_DWORD *)(v107 + 84) = v20;
        *(_DWORD *)(v107 + 88) = v21;
        *(__m128i *)v107 = v41;
        *(__m128i *)(v107 + 20) = v45;
        *(__m128i *)(v107 + 56) = v48;
        v128 = v108;
        a1->m128i_i64[1] = v39;
        a1[1].m128i_i64[0] = v44;
        *(__m128i *)ptr = v110;
        if ( v109 )
        {
          if ( !_InterlockedSub(v109, 1u) )
            free(ptr[0]);
        }
      }
      return;
    }
    if ( !v11 )
    {
      v117 = v21;
      sub_503260(a1, 1, 1, 0, v21, a9, *(double *)v18.m128i_i64, *(double *)a5.m128_u64, a6);
      v25 = a1->m128i_u64[1];
      LODWORD(v21) = v117;
      goto LABEL_10;
    }
    v24 = 1;
    if ( *(int *)v11 > 1 )
      goto LABEL_8;
    v39 = a1->m128i_u64[1];
    v86 = (v11 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    v25 = a1->m128i_u64[1];
    if ( (__int64)(v39 - v86) > 0 )
      goto LABEL_10;
    v87 = *(_QWORD *)(v11 + 8);
    v40 = a1[1].m128i_i64[0];
    v53 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v39 - v86) >> 5);
    v21 = v87 - v40;
    if ( (__int64)(v87 - v40 - v53) <= 0 )
      goto LABEL_8;
    v54 = 2 * v40;
    if ( v87 <= 3 * v40 )
      goto LABEL_8;
    v88 = (v21 - 1) / 2;
    if ( v88 < 0 )
      v88 = 0;
    v55 = v88 + 1;
    goto LABEL_30;
  }
  if ( a1[1].m128i_i64[0] == a2 )
  {
    v33 = a1->m128i_i64[1];
    v34 = (v11 + 31) & 0xFFFFFFFFFFFFFFF0LL;
    if ( a2 != *(_QWORD *)(v11 + 8) - 0xAAAAAAAAAAAAAAABLL * ((__int64)(v33 - v34) >> 5) )
    {
      v111 = v33 + 96 * a2;
      *(__m128i *)(v111 + 20) = v13;
      v112 = _mm_loadu_si128((const __m128i *)(a3 + 40));
      *(_BYTE *)(v111 + 16) = a9;
      *(_DWORD *)(v111 + 36) = v14;
      *(__m128 *)v111 = a5;
      *(__m128i *)(v111 + 40) = v112;
      v113 = _mm_loadu_si128((const __m128i *)(a3 + 56));
      *(_QWORD *)(v111 + 72) = *(_QWORD *)(a3 + 72);
      *(__m128i *)(v111 + 56) = v113;
      if ( v113.m128i_i64[0] )
        _InterlockedAdd((volatile signed __int32 *)v113.m128i_i64[0], 1u);
      v114 = *(_BYTE *)(a3 + 80);
      v115 = *(_QWORD *)(a3 + 84);
      *(_BYTE *)(v111 + 80) = v114;
      *(_QWORD *)(v111 + 84) = v115;
      ++a1[1].m128i_i64[0];
      return;
    }
    if ( a2 )
      goto LABEL_3;
  }
  else
  {
    if ( a2 )
      goto LABEL_3;
    v33 = a1->m128i_i64[1];
    v34 = (v11 + 31) & 0xFFFFFFFFFFFFFFF0LL;
  }
  if ( v34 == v33 )
    goto LABEL_3;
  *(__m128i *)(v33 - 76) = v13;
  v35 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  *(_BYTE *)(v33 - 80) = a9;
  *(_DWORD *)(v33 - 60) = v14;
  *(__m128 *)(v33 - 96) = a5;
  *(__m128i *)(v33 - 56) = v35;
  v36 = _mm_loadu_si128((const __m128i *)(a3 + 56));
  *(_QWORD *)(v33 - 24) = *(_QWORD *)(a3 + 72);
  *(__m128i *)(v33 - 40) = v36;
  if ( v36.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v36.m128i_i64[0], 1u);
  *(_BYTE *)(v33 - 16) = *(_BYTE *)(a3 + 80);
  v37 = *(_DWORD *)(a3 + 84);
  v38 = *(_DWORD *)(a3 + 88);
  *(_DWORD *)(v33 - 12) = v37;
  *(_DWORD *)(v33 - 8) = v38;
  a1->m128i_i64[1] -= 96;
  ++a1[1].m128i_i64[0];
}
