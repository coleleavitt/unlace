unsigned __int64 __fastcall sub_3F2530(__int64 a1, __m128 si128)
{
  __int64 v2; // rax
  bool v3; // zf
  __int64 ph; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  const __m128i *v8; // rdx
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // esi
  int v13; // r12d
  __int16 v14; // r12
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // r12d
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  int v25; // esi
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // esi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // esi
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // esi
  int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  int v60; // esi
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // esi
  int v64; // edx
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v68; // esi
  int v69; // esi
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // esi
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // esi
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // esi
  __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // esi
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // esi
  __int64 v85; // rdx
  __int64 v86; // rcx
  int v87; // esi
  __int64 v88; // rdx
  __int64 v89; // rcx
  void *v90; // r14
  __int64 v91; // rdx
  __int64 v92; // rcx
  unsigned __int64 v93; // rax
  __m128i v94; // xmm0
  __int64 v95; // rdi
  int v96; // esi
  __int64 v97; // rdx
  __int64 v98; // rcx
  int v99; // esi
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // esi
  __int64 v103; // rdx
  __int64 v104; // rcx
  int v105; // esi
  __int64 v106; // rdx
  __int64 v107; // rcx
  int v108; // esi
  __int64 v109; // rdx
  __int64 v110; // rcx
  int v111; // esi
  __int64 v112; // rdx
  __int64 v113; // rcx
  int v114; // esi
  __int64 v115; // rdx
  __int64 v116; // rcx
  size_t v117; // r13
  int v118; // esi
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 *v121; // [rsp+8h] [rbp-90h]
  int v122; // [rsp+8h] [rbp-90h]
  __m128i v123; // [rsp+10h] [rbp-88h] BYREF
  char v124; // [rsp+27h] [rbp-71h]
  __int64 *v125; // [rsp+28h] [rbp-70h]
  __int64 v126; // [rsp+30h] [rbp-68h] BYREF
  __int64 v127; // [rsp+38h] [rbp-60h]
  __int64 *v128; // [rsp+40h] [rbp-58h] BYREF
  __int128 v129; // [rsp+48h] [rbp-50h]
  unsigned __int64 v130; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 84) == 8;
  v130 = __readfsqword(0x28u);
  v124 = *(_BYTE *)(v2 + 148);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 48) = 790997;
    if ( (getinf() & 0xF) == 6 && (unsigned __int8)getinf_flag() )
      *(_DWORD *)(a1 + 48) |= 0x20u;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 791000;
  }
  if ( (getinf() & 0xF) != 7 )
    *(_DWORD *)(a1 + 48) |= 2u;
  ph = get_ph();
  if ( (unsigned __int8)getinf() )
    LOBYTE(v6) = getinf();
  else
    v6 = *(_QWORD *)(ph + 120);
  *(_DWORD *)(a1 + 448) = (unsigned __int8)v6;
  if ( !(_BYTE)v6 )
  {
    if ( !under_debugger )
      sub_383060(0xC738u, *(double *)si128.m128_u64);
LABEL_138:
    BUG();
  }
  v7 = a1 + 712;
  v8 = (const __m128i *)&unk_434CA0;
  v9 = 0;
  v10 = a1 + 712;
  do
  {
    v11 = v8->m128i_i64[0];
    if ( *(_DWORD *)(a1 + 84) == 8 || (unsigned __int64)(v11 - 412) > 0x1C && (unsigned __int64)(v11 - 624) > 0x3C )
    {
      *(__m128i *)v10 = _mm_load_si128(v8);
      si128 = (__m128)_mm_load_si128(v8 + 1);
      *(__m128 *)(v10 + 16) = si128;
      switch ( *(_DWORD *)(v10 + 24) )
      {
        case 1:
          LOWORD(v12) = *(_WORD *)(a1 + 80);
          break;
        case 2:
          LOWORD(v12) = 2 * *(_WORD *)(a1 + 80);
          break;
        case 3:
          LOWORD(v12) = *(_WORD *)(a1 + 448);
          break;
        case 4:
          LOWORD(v12) = 1;
          break;
        case 5:
          v12 = 2 * *(_DWORD *)(a1 + 80);
          if ( v12 < *(_DWORD *)(a1 + 448) )
            LOWORD(v12) = *(_DWORD *)(a1 + 448);
          break;
        default:
          LOWORD(v12) = *(unsigned __int8 *)(v10 + 18);
          break;
      }
      v13 = *(_DWORD *)(v10 + 20);
      *(_WORD *)(v10 + 18) = v12;
      switch ( v13 )
      {
        case 1:
          v68 = *(_DWORD *)(a1 + 80);
          goto LABEL_63;
        case 2:
          v68 = 2 * *(_DWORD *)(a1 + 80);
          if ( *(_QWORD *)v10 == -1 )
            goto LABEL_72;
          goto LABEL_64;
        case 3:
          v68 = *(_DWORD *)(a1 + 448);
          goto LABEL_63;
        case 4:
          v14 = 1;
          if ( v11 == -1 )
            goto LABEL_18;
          v14 = 1;
          v15 = v9 + 1 - *(_DWORD *)(a1 + 80);
          *(_DWORD *)(v10 + 28) = v15;
          goto LABEL_17;
        case 5:
          v68 = 2 * *(_DWORD *)(a1 + 80);
          if ( v68 < *(_DWORD *)(a1 + 448) )
            v68 = *(_DWORD *)(a1 + 448);
          goto LABEL_63;
        default:
          v68 = *(unsigned __int8 *)(v10 + 16);
LABEL_63:
          if ( *(_QWORD *)v10 == -1 )
          {
LABEL_72:
            v9 = *(_DWORD *)(v10 + 28);
          }
          else
          {
LABEL_64:
            if ( v68 > 0 && *(_DWORD *)(a1 + 88) >= v68 && v13 != 3 )
              v9 = (v9 + v68 - 1) & -v68;
            *(_DWORD *)(v10 + 28) = v9;
          }
          v14 = v68;
          v9 += v68;
          if ( v11 == -1 )
            goto LABEL_18;
          v15 = *(_DWORD *)(v10 + 28);
LABEL_17:
          *(_DWORD *)(a1 + v11) = v15;
LABEL_18:
          *(_WORD *)(v10 + 16) = v14;
          v10 += 32;
          break;
      }
    }
    v8 += 2;
  }
  while ( v8 != (const __m128i *)&unk_435880 );
  v16 = *(_DWORD *)(a1 + 448);
  v17 = *(_DWORD *)(a1 + 520) - *(_DWORD *)(a1 + 492);
  *(_QWORD *)(a1 + 3752) = (v10 - v7) >> 5;
  if ( v17 != 7 * v16 )
  {
    if ( !under_debugger )
      sub_383060(0xCDD4u, *(double *)si128.m128_u64);
    goto LABEL_138;
  }
  v18 = *(_QWORD *)(a1 + 120);
  v19 = *(_DWORD *)(a1 + 708);
  *(_QWORD *)(a1 + 112) = 0;
  v20 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 68) = _mm_unpacklo_epi32(
                           _mm_cvtsi32_si128((v19 + 31) & 0xFFFFFFE0),
                           _mm_cvtsi32_si128(*(_DWORD *)(a1 + 444))).m128i_u64[0];
  if ( v18 )
  {
    *(_QWORD *)(a1 + 128) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 136) = 0;
  }
  v21 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0;
  if ( v21 )
  {
    *(_QWORD *)(a1 + 168) = 0;
    qfree(v21);
    *(_QWORD *)(a1 + 160) = 0;
    *(_QWORD *)(a1 + 176) = 0;
  }
  v22 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 192) = 0;
  if ( v22 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v22);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v23 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 232) = 0;
  if ( v23 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v23);
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v24 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = 0;
  if ( v24 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 280) = 0;
    *(_QWORD *)(a1 + 296) = 0;
  }
  v25 = *(_DWORD *)(a1 + 452);
  v26 = *(_DWORD *)(a1 + 480);
  v126 = 0;
  v127 = 0;
  sub_63E80(&v126, v25, v26 - v25);
  v128 = nullptr;
  v129 = 0;
  sub_64280((__int64 *)(a1 + 104), &v126);
  sub_316CB0((__int64 *)(a1 + 120), &v128, v27, v28);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  v126 = 0;
  v127 = 0;
  sub_63E80(&v126, 0, 5);
  v128 = nullptr;
  v129 = 0;
  sub_64280((__int64 *)(a1 + 184), &v126);
  sub_316CB0((__int64 *)(a1 + 200), &v128, v29, v30);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  if ( (getinf() & 0xF) != 3 )
  {
    v31 = *(_DWORD *)(a1 + 388);
    v126 = 0;
    v127 = 0;
    sub_63E80(&v126, v31, v20);
    v128 = nullptr;
    v129 = 0;
    sub_64280((__int64 *)(a1 + 184), &v126);
    sub_316CB0((__int64 *)(a1 + 200), &v128, v32, v33);
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      qfree((__int64)v128);
    }
    qfree(v126);
    v34 = *(_DWORD *)(a1 + 444);
    v126 = 0;
    v127 = 0;
    sub_63E80(&v126, v34, 2);
    v128 = nullptr;
    v129 = 0;
    sub_64280((__int64 *)(a1 + 184), &v126);
    sub_316CB0((__int64 *)(a1 + 200), &v128, v35, v36);
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      qfree((__int64)v128);
    }
    qfree(v126);
    v37 = *(_DWORD *)(a1 + 524);
    v126 = 0;
    v127 = 0;
    sub_63E80(&v126, v37, 6);
    v128 = nullptr;
    v129 = 0;
    sub_64280((__int64 *)(a1 + 184), &v126);
    sub_316CB0((__int64 *)(a1 + 200), &v128, v38, v39);
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      qfree((__int64)v128);
    }
    qfree(v126);
    if ( *(_DWORD *)(a1 + 84) != 8 )
      goto LABEL_43;
    if ( v124 == 2 )
    {
      v96 = *(_DWORD *)(a1 + 380);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v96, v20);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 184), &v126);
      sub_316CB0((__int64 *)(a1 + 200), &v128, v97, v98);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v99 = *(_DWORD *)(a1 + 428);
      v122 = 2 * v20;
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v99, 2 * v20);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 184), &v126);
      sub_316CB0((__int64 *)(a1 + 200), &v128, v100, v101);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v102 = *(_DWORD *)(a1 + 388);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v102, v122);
      v128 = nullptr;
      v123.m128i_i64[0] = a1 + 264;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 264), &v126);
      v125 = (__int64 *)(a1 + 280);
      sub_316CB0((__int64 *)(a1 + 280), &v128, v103, v104);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v105 = *(_DWORD *)(a1 + 404);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v105, v122);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)v123.m128i_i64[0], &v126);
      sub_316CB0(v125, &v128, v106, v107);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v108 = *(_DWORD *)(a1 + 412);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v108, 4 * v20);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)v123.m128i_i64[0], &v126);
      sub_316CB0(v125, &v128, v109, v110);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v111 = *(_DWORD *)(a1 + 560);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v111, 240);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 184), &v126);
      sub_316CB0((__int64 *)(a1 + 200), &v128, v112, v113);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v114 = *(_DWORD *)(a1 + 620);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v114, 16);
      v128 = nullptr;
      v123.m128i_i64[0] = a1 + 224;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 224), &v126);
      v125 = (__int64 *)(a1 + 240);
      sub_316CB0((__int64 *)(a1 + 240), &v128, v115, v116);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
    }
    else
    {
      v69 = *(_DWORD *)(a1 + 412);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v69, 4 * v20);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 184), &v126);
      sub_316CB0((__int64 *)(a1 + 200), &v128, v70, v71);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v72 = *(_DWORD *)(a1 + 576);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v72, 32);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 184), &v126);
      sub_316CB0((__int64 *)(a1 + 200), &v128, v73, v74);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v75 = *(_DWORD *)(a1 + 428);
      v122 = 2 * v20;
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v75, 2 * v20);
      v128 = nullptr;
      v123.m128i_i64[0] = a1 + 224;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 224), &v126);
      v125 = (__int64 *)(a1 + 240);
      sub_316CB0((__int64 *)(a1 + 240), &v128, v76, v77);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      if ( (getinf() & 0xF) != 1 )
        goto LABEL_93;
      v118 = *(_DWORD *)(a1 + 584);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v118, 160);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)v123.m128i_i64[0], &v126);
      sub_316CB0(v125, &v128, v119, v120);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
    }
    qfree(v126);
LABEL_93:
    v78 = *(_DWORD *)(a1 + 436);
    v126 = 0;
    v127 = 0;
    sub_63E80(&v126, v78, v122);
    v128 = nullptr;
    v129 = 0;
    sub_64280((__int64 *)v123.m128i_i64[0], &v126);
    sub_316CB0(v125, &v128, v79, v80);
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      qfree((__int64)v128);
    }
    qfree(v126);
LABEL_43:
    v121 = (__int64 *)(a1 + 264);
    sub_64280((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
    sub_316CB0((__int64 *)(a1 + 280), (__int64 **)(a1 + 200), v40, v41);
    v42 = *(_DWORD *)(a1 + 380);
    v126 = 0;
    v127 = 0;
    sub_63E80(&v126, v42, v20);
    v128 = nullptr;
    v129 = 0;
    sub_64280((__int64 *)(a1 + 264), &v126);
    sub_316CB0((__int64 *)(a1 + 280), &v128, v43, v44);
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      qfree((__int64)v128);
    }
    qfree(v126);
    goto LABEL_46;
  }
  v90 = nullptr;
  v121 = (__int64 *)(a1 + 264);
  sub_648D0((__int64 *)(a1 + 264), (__int64 *)(a1 + 184));
  v93 = *(_QWORD *)(a1 + 208);
  v94 = _mm_unpacklo_epi64((__m128i)v93, (__m128i)v93);
  if ( v93 )
  {
    v123 = v94;
    v117 = 16 * v93;
    v90 = (void *)qalloc_or_throw(16 * v93, a1 + 184, v91, v92);
    memcpy(v90, *(const void **)(a1 + 200), v117);
    v94 = _mm_load_si128(&v123);
  }
  v95 = *(_QWORD *)(a1 + 280);
  if ( v95 )
  {
    *(_QWORD *)(a1 + 288) = 0;
    v123 = v94;
    qfree(v95);
    v94 = _mm_load_si128(&v123);
  }
  *(_QWORD *)(a1 + 280) = v90;
  *(__m128i *)(a1 + 288) = v94;
LABEL_46:
  v126 = 0;
  v127 = 0;
  sub_63E80(&v126, 8, v20);
  v128 = nullptr;
  v129 = 0;
  sub_64280(v121, &v126);
  sub_316CB0((__int64 *)(a1 + 280), &v128, v45, v46);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  v126 = 0;
  v127 = 0;
  v128 = nullptr;
  v129 = 0;
  v128 = (__int64 *)qvector_reserve((__int64)&v128, 0, 1, 16);
  *(__m128i *)&v128[2 * v129] = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)&v129 = v129 + 1;
  sub_64280(v121, &v126);
  sub_316CB0((__int64 *)(a1 + 280), &v128, v47, v48);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  if ( v124 != 2 )
  {
    if ( (getinf() & 0xF) != 6 || !(unsigned __int8)getinf_flag() )
    {
      v81 = *(_DWORD *)(a1 + 408);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v81, v20);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 224), &v126);
      sub_316CB0((__int64 *)(a1 + 240), &v128, v82, v83);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
      v84 = *(_DWORD *)(a1 + 404);
      v126 = 0;
      v127 = 0;
      sub_63E80(&v126, v84, v20);
      v128 = nullptr;
      v129 = 0;
      sub_64280((__int64 *)(a1 + 224), &v126);
      sub_316CB0((__int64 *)(a1 + 240), &v128, v85, v86);
      if ( v128 )
      {
        *(_QWORD *)&v129 = 0;
        qfree((__int64)v128);
      }
      qfree(v126);
    }
    v87 = *(_DWORD *)(a1 + 396);
    v126 = 0;
    v127 = 0;
    sub_63E80(&v126, v87, v20);
    v128 = nullptr;
    v129 = 0;
    sub_64280((__int64 *)(a1 + 224), &v126);
    sub_316CB0((__int64 *)(a1 + 240), &v128, v88, v89);
    if ( v128 )
    {
      *(_QWORD *)&v129 = 0;
      qfree((__int64)v128);
    }
    qfree(v126);
  }
  v49 = *(_DWORD *)(a1 + 400);
  v126 = 0;
  v127 = 0;
  sub_63E80(&v126, v49, v20);
  v128 = nullptr;
  v129 = 0;
  sub_64280((__int64 *)(a1 + 224), &v126);
  sub_316CB0((__int64 *)(a1 + 240), &v128, v50, v51);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  v52 = *(_DWORD *)(a1 + 60);
  v126 = 0;
  v127 = 0;
  sub_63E80(&v126, 8, v52 - 8);
  v128 = nullptr;
  v129 = 0;
  sub_64280((__int64 *)(a1 + 144), &v126);
  sub_316CB0((__int64 *)(a1 + 160), &v128, v53, v54);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  v55 = *(_DWORD *)(a1 + 400);
  v56 = *(_DWORD *)(a1 + 444);
  v126 = 0;
  v127 = 0;
  sub_63E80(&v126, v55, v56 - v55);
  v128 = nullptr;
  v129 = 0;
  sub_64280((__int64 *)(a1 + 144), &v126);
  sub_316CB0((__int64 *)(a1 + 160), &v128, v57, v58);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  v59 = *(_DWORD *)(a1 + 448);
  v60 = *(_DWORD *)(a1 + 492);
  v126 = 0;
  v127 = 0;
  sub_63E80(&v126, v60, 8 * v59);
  v128 = nullptr;
  v129 = 0;
  sub_64280((__int64 *)(a1 + 144), &v126);
  sub_316CB0((__int64 *)(a1 + 160), &v128, v61, v62);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  v63 = *(_DWORD *)(a1 + 528);
  v64 = *(_DWORD *)(a1 + 708);
  v126 = 0;
  v127 = 0;
  sub_63E80(&v126, v63, v64 - v63);
  v128 = nullptr;
  v129 = 0;
  sub_64280((__int64 *)(a1 + 144), &v126);
  sub_316CB0((__int64 *)(a1 + 160), &v128, v65, v66);
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree((__int64)v128);
  }
  qfree(v126);
  *(__m128i *)(a1 + 3760) = _mm_loadu_si128((const __m128i *)(a1 + 452));
  return v130 - __readfsqword(0x28u);
}
