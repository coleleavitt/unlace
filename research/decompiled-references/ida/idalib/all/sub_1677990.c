void __fastcall sub_1677990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // edi
  __int64 v8; // rax
  int v9; // r14d
  __int64 *v10; // rbx
  __int64 v11; // rbp
  __int32 v12; // r13d
  __int64 v13; // r9
  char v14; // al
  __int64 v15; // rdx
  char v16; // bl
  bool v17; // r10
  char v18; // r12
  __int64 *v19; // rax
  __int64 v20; // rcx
  __m128i v21; // xmm0
  char v22; // al
  __int64 v23; // r8
  __int64 v24; // rdi
  char v25; // bp
  int v26; // ecx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // bp
  __int64 v35; // rdi
  _BOOL8 v36; // r8
  int v37; // ecx
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  __int64 *v46; // rdx
  __int64 *v47; // r11
  _QWORD *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rsi
  _QWORD *v51; // rcx
  _QWORD *v52; // rax
  __int64 *v53; // rdx
  __int64 *v54; // rbp
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rsi
  _QWORD *v58; // rcx
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // ecx
  int v70; // edx
  __int64 v71; // rcx
  __m128i *v72; // rbp
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  bool v78; // r10
  __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  int v89; // ecx
  int v90; // edx
  __int64 v91; // rcx
  __m128i *v92; // rbp
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v98; // [rsp+38h] [rbp-220h]
  __int64 v99; // [rsp+40h] [rbp-218h]
  __m128i *v100; // [rsp+40h] [rbp-218h]
  __m128i *v101; // [rsp+40h] [rbp-218h]
  bool v102; // [rsp+40h] [rbp-218h]
  __int64 *v103; // [rsp+40h] [rbp-218h]
  __int64 v104; // [rsp+40h] [rbp-218h]
  __int64 v105; // [rsp+40h] [rbp-218h]
  int v107; // [rsp+50h] [rbp-208h]
  int v108; // [rsp+54h] [rbp-204h]
  int v109; // [rsp+70h] [rbp-1E8h]
  int v110; // [rsp+74h] [rbp-1E4h]
  int v111; // [rsp+78h] [rbp-1E0h]
  int v112; // [rsp+7Ch] [rbp-1DCh]
  char v113; // [rsp+80h] [rbp-1D8h]
  __int64 v114; // [rsp+80h] [rbp-1D8h]
  bool v115; // [rsp+80h] [rbp-1D8h]
  __int64 v116; // [rsp+88h] [rbp-1D0h]
  int v117; // [rsp+90h] [rbp-1C8h]
  int v118; // [rsp+94h] [rbp-1C4h]
  int v119; // [rsp+98h] [rbp-1C0h]
  int v120; // [rsp+9Ch] [rbp-1BCh]
  __m128i v121; // [rsp+A0h] [rbp-1B8h] BYREF
  unsigned int v122; // [rsp+B0h] [rbp-1A8h]
  __m128i v123; // [rsp+C0h] [rbp-198h] BYREF
  unsigned int v124; // [rsp+D0h] [rbp-188h]
  __m128i v125; // [rsp+E0h] [rbp-178h]
  unsigned int v126; // [rsp+F0h] [rbp-168h]
  __m128i v127; // [rsp+100h] [rbp-158h]
  unsigned int v128; // [rsp+110h] [rbp-148h]
  __int128 v129; // [rsp+120h] [rbp-138h] BYREF
  __int128 v130; // [rsp+130h] [rbp-128h]
  unsigned int v131; // [rsp+140h] [rbp-118h]
  char *v132; // [rsp+150h] [rbp-108h] BYREF
  __int64 v133; // [rsp+158h] [rbp-100h]
  _BYTE v134[16]; // [rsp+160h] [rbp-F8h] BYREF
  char v135; // [rsp+170h] [rbp-E8h]
  _QWORD v136[2]; // [rsp+178h] [rbp-E0h] BYREF
  char v137; // [rsp+188h] [rbp-D0h] BYREF
  _BYTE v138[40]; // [rsp+198h] [rbp-C0h] BYREF
  _BYTE v139[40]; // [rsp+1C0h] [rbp-98h] BYREF
  char v140; // [rsp+1E8h] [rbp-70h]
  __int64 v141; // [rsp+210h] [rbp-48h]

  v7 = *(_DWORD *)(a3 + 8);
  v107 = v7;
  if ( !*(_BYTE *)(a1 + 289) )
  {
    v132 = v134;
    v133 = 0x100000000LL;
    if ( v7 )
      sub_A24C20((__int64)&v132, a3);
    v141 = *(_QWORD *)(a3 + 192);
    sub_1672CF0(a1, a2, (__int64 *)&v132, a4, a5, a6);
    sub_A20D20(&v132);
    v107 = *(_DWORD *)(a3 + 8);
  }
  v133 = 0;
  v134[0] = 0;
  v8 = *(_QWORD *)(a3 + 192);
  v137 = 0;
  v136[1] = 0;
  v138[32] = 0;
  v139[32] = 0;
  v140 = 0;
  if ( !BYTE4(v8) )
    LODWORD(v8) = v107;
  v135 &= 0xF0u;
  v108 = v8;
  v132 = v134;
  v136[0] = &v137;
  if ( v107 )
  {
    v98 = 0;
    v116 = 176LL * (unsigned int)v8;
    v9 = 0;
    while ( 1 )
    {
      v10 = (__int64 *)(*(_QWORD *)a3 + v98);
      v11 = *v10;
      v12 = *(_DWORD *)v10;
      v99 = v10[1];
      sub_9EE8A0((__int64)&v132, (__int64)(v10 + 2));
      v135 = v10[6] & 0xF | v135 & 0xF0;
      sub_9EE8A0((__int64)v136, (__int64)(v10 + 7));
      sub_A21AD0((__int64)v138, (__int64)(v10 + 11));
      sub_A21AD0((__int64)v139, (__int64)(v10 + 16));
      v14 = *((_BYTE *)v10 + 168);
      v15 = v99;
      v16 = *(_BYTE *)(a1 + 289);
      v140 = v14;
      v17 = (v14 & 0x20) != 0;
      if ( v108 == v9 )
      {
        v16 ^= 1u;
        v18 = 0;
      }
      else
      {
        v18 = 0;
        if ( v16 )
        {
          v16 = 0;
        }
        else if ( !v12 )
        {
          v18 = v16;
          if ( ((HIDWORD(v99) | (unsigned int)v99 | HIDWORD(v11)) & 0x7FFFFFFF) == 0 )
          {
            v18 = 1;
            v19 = (__int64 *)(*(_QWORD *)a3 + v116);
            v11 = *v19;
            v15 = v19[1];
            v12 = *(_DWORD *)v19;
          }
        }
      }
      v121.m128i_i64[1] = v15;
      v20 = v16 & 1;
      v121.m128i_i32[1] = (v11 & 0xFFFFFFFF00000000LL) >> 32;
      v121.m128i_i32[0] = v12;
      v21 = _mm_load_si128(&v121);
      v123 = v21;
      LOBYTE(v122) = (2 * v18) | v20 | v122 & 0xFC;
      v22 = v140;
      v23 = v122;
      v124 = v122;
      if ( (v140 & 0x10) != 0 )
        break;
LABEL_20:
      if ( (v22 & 0x40) != 0 )
      {
        v123.m128i_i32[0] = v12;
        v34 = (unsigned __int8)v22 >> 7;
        v125 = _mm_load_si128(&v123);
        v127 = v125;
        LOBYTE(v124) = (2 * v18) | v16 & 1 | v124 & 0xFC;
        v126 = v124;
        v128 = v124;
        if ( (v124 & 1) != 0 )
        {
          v45 = (_QWORD *)sub_9C8850(a2);
          v47 = v46;
          v48 = v45;
          v49 = ((char *)v47 - (char *)v45) >> 5;
          v50 = v47 - v45;
          if ( v49 > 0 )
          {
            if ( *(_WORD *)(*v45 + 36LL) != 438 )
            {
              if ( *(_WORD *)(v45[1] + 36LL) == 438 )
              {
                v47 = v45 + 1;
              }
              else if ( *(_WORD *)(v45[2] + 36LL) == 438 )
              {
                v47 = v45 + 2;
              }
              else
              {
                v51 = &v45[4 * v49];
                if ( *(_WORD *)(v45[3] + 36LL) == 438 )
                {
                  v47 = v45 + 3;
                }
                else
                {
                  while ( 1 )
                  {
                    v45 = v48 + 4;
                    if ( v51 == v48 + 4 )
                    {
                      v50 = v47 - v45;
                      goto LABEL_42;
                    }
                    if ( *(_WORD *)(v48[4] + 36LL) == 438 )
                      goto LABEL_69;
                    if ( *(_WORD *)(v48[5] + 36LL) == 438 )
                    {
                      v47 = v48 + 5;
                      goto LABEL_70;
                    }
                    if ( *(_WORD *)(v48[6] + 36LL) == 438 )
                    {
                      v47 = v48 + 6;
                      goto LABEL_70;
                    }
                    if ( *(_WORD *)(v48[7] + 36LL) == 438 )
                      break;
                    v48 += 4;
                  }
                  v47 = v48 + 7;
                }
              }
              goto LABEL_70;
            }
LABEL_69:
            v47 = v45;
LABEL_70:
            v103 = v47;
            if ( (__int64 *)sub_9C88C0(a2) != v47 )
            {
              v59 = v127.m128i_i64[0];
              v114 = (__int64)v103;
              v104 = sub_B35EA0(*(_QWORD *)(a1 + 248), v127.m128i_i64[0], v127.m128i_i64[1], *v103, 1, 0);
              v64 = sub_B8C3D0(a2, v59, v60, v61, v62, v63);
              sub_1672BE0((__int64)v64, v114);
              sub_B8CC60(a2, v104, v65, v66, v67, v68);
            }
            if ( v34 )
            {
              v69 = v118;
              v70 = v117;
              v129 = 0;
              BYTE1(v69) = BYTE1(v118) & 0xFC;
              v130 = 0;
              BYTE1(v70) = BYTE1(v117) & 0xFC;
              v118 = v69;
              v131 = v131 & 0xFF000000 | 0x101A4;
              v71 = BYTE1(v69) & 1;
              v117 = v70;
              HIBYTE(v131) = (2 * ((v70 & 0x200) != 0)) | v71 | HIBYTE(v131) & 0xFC;
              v72 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v71, v23, v13);
              sub_B19C00(v72, *(_QWORD *)(a1 + 248), (const __m128i *)&v129);
              sub_B8CC60(a2, (__int64)v72, v73, v74, v75, v76);
            }
            goto LABEL_25;
          }
LABEL_42:
          if ( v50 != 2 )
          {
            if ( v50 != 3 )
            {
              if ( v50 != 1 )
                goto LABEL_70;
LABEL_45:
              if ( *(_WORD *)(*v45 + 36LL) == 438 )
                v47 = v45;
              goto LABEL_70;
            }
            if ( *(_WORD *)(*v45 + 36LL) == 438 )
              goto LABEL_69;
            ++v45;
          }
          if ( *(_WORD *)(*v45 + 36LL) == 438 )
            goto LABEL_69;
          ++v45;
          goto LABEL_45;
        }
        v35 = *(_QWORD *)(a1 + 248);
        v36 = (v124 & 2) != 0;
        if ( v22 >= 0 )
        {
          v40 = sub_B35E00(v35, v127.m128i_i64[0], v127.m128i_i64[1], 438, v36, 0);
        }
        else
        {
          v37 = v110;
          v38 = v109;
          v113 = (v124 & 2) != 0;
          BYTE1(v37) = BYTE1(v110) & 0xFC;
          v129 = 0;
          BYTE1(v38) = BYTE1(v109) & 0xFC;
          v110 = v37;
          v131 = v131 & 0xFF000000 | 0x101A4;
          v39 = BYTE1(v37) & 1;
          v109 = v38;
          v130 = 0;
          HIBYTE(v131) = (2 * ((v38 & 0x200) != 0)) | v39 | HIBYTE(v131) & 0xFC;
          v101 = (__m128i *)sub_1672F50((__int64 *)(v35 + 2352), 40, 3u, v39, v36, v13);
          sub_B19C00(v101, *(_QWORD *)(a1 + 248), (const __m128i *)&v129);
          v40 = sub_B35EA0(*(_QWORD *)(a1 + 248), v127.m128i_i64[0], v127.m128i_i64[1], (__int64)v101, v113, 0);
        }
        sub_B8CC60(a2, v40, v41, v42, v43, v44);
      }
LABEL_25:
      v123.m128i_i32[0] = v12;
      ++v9;
      v129 = (__int128)_mm_load_si128(&v123);
      LOBYTE(v124) = (2 * v18) | v16 & 1 | v124 & 0xFC;
      LODWORD(v130) = v124;
      sub_1674810(a1, a2, (__int64)&v132, v20, v23, v13, v129, v124);
      v98 += 176;
      if ( v9 == v107 )
        goto LABEL_26;
    }
    v125 = v21;
    v126 = v122;
    v127 = v21;
    v128 = v122;
    if ( (v122 & 1) == 0 )
    {
      v24 = *(_QWORD *)(a1 + 248);
      v25 = (v122 & 2) != 0;
      if ( v17 )
      {
        v26 = v112;
        v27 = v111;
        v129 = 0;
        BYTE1(v26) = BYTE1(v112) & 0xFC;
        v130 = 0;
        BYTE1(v27) = BYTE1(v111) & 0xFC;
        v112 = v26;
        v131 = v131 & 0xFF000000 | 0x101A4;
        v28 = BYTE1(v26) & 1;
        v111 = v27;
        HIBYTE(v131) = (2 * ((v27 & 0x200) != 0)) | v28 | HIBYTE(v131) & 0xFC;
        LOBYTE(v23) = (unsigned __int8)v122 >> 1;
        v100 = (__m128i *)sub_1672F50((__int64 *)(v24 + 2352), 40, 3u, v28, v23, v13);
        sub_B19A80(v100, *(_QWORD *)(a1 + 248), (const __m128i *)&v129);
        v29 = sub_B35EA0(*(_QWORD *)(a1 + 248), v127.m128i_i64[0], v127.m128i_i64[1], (__int64)v100, v25, 0);
      }
      else
      {
        v29 = sub_B35E00(v24, v127.m128i_i64[0], v127.m128i_i64[1], 370, (v122 & 2) != 0, 0);
      }
      sub_B8CC60(a2, v29, v30, v31, v32, v33);
LABEL_19:
      v22 = v140;
      goto LABEL_20;
    }
    v102 = v17;
    v52 = (_QWORD *)sub_9C8850(a2);
    v54 = v53;
    v55 = v52;
    v56 = ((char *)v54 - (char *)v52) >> 5;
    v57 = v54 - v52;
    if ( v56 > 0 )
    {
      if ( *(_WORD *)(*v52 + 36LL) != 370 )
      {
        if ( *(_WORD *)(v52[1] + 36LL) == 370 )
        {
          v54 = v52 + 1;
        }
        else if ( *(_WORD *)(v52[2] + 36LL) == 370 )
        {
          v54 = v52 + 2;
        }
        else
        {
          v58 = &v52[4 * v56];
          if ( *(_WORD *)(v52[3] + 36LL) == 370 )
          {
            v54 = v52 + 3;
          }
          else
          {
            while ( 1 )
            {
              v52 = v55 + 4;
              if ( v58 == v55 + 4 )
              {
                v57 = v54 - v52;
                goto LABEL_61;
              }
              if ( *(_WORD *)(v55[4] + 36LL) == 370 )
                goto LABEL_74;
              if ( *(_WORD *)(v55[5] + 36LL) == 370 )
              {
                v54 = v55 + 5;
                goto LABEL_75;
              }
              if ( *(_WORD *)(v55[6] + 36LL) == 370 )
              {
                v54 = v55 + 6;
                goto LABEL_75;
              }
              if ( *(_WORD *)(v55[7] + 36LL) == 370 )
                break;
              v55 += 4;
            }
            v54 = v55 + 7;
          }
        }
        goto LABEL_75;
      }
      goto LABEL_74;
    }
LABEL_61:
    if ( v57 != 2 )
    {
      if ( v57 != 3 )
      {
        if ( v57 != 1 )
        {
LABEL_75:
          v77 = sub_9C88C0(a2);
          v78 = v102;
          if ( (__int64 *)v77 != v54 )
          {
            v79 = v127.m128i_i64[0];
            v115 = v102;
            v105 = sub_B35EA0(*(_QWORD *)(a1 + 248), v127.m128i_i64[0], v127.m128i_i64[1], *v54, 1, 0);
            v84 = sub_B8C3D0(a2, v79, v80, v81, v82, v83);
            sub_1672BE0((__int64)v84, (__int64)v54);
            sub_B8CC60(a2, v105, v85, v86, v87, v88);
            v78 = v115;
          }
          if ( v78 )
          {
            v89 = v120;
            v90 = v119;
            v129 = 0;
            BYTE1(v89) = BYTE1(v120) & 0xFC;
            v130 = 0;
            BYTE1(v90) = BYTE1(v119) & 0xFC;
            v120 = v89;
            v131 = v131 & 0xFF000000 | 0x101A4;
            v91 = BYTE1(v89) & 1;
            v119 = v90;
            HIBYTE(v131) = (2 * ((v90 & 0x200) != 0)) | v91 | HIBYTE(v131) & 0xFC;
            v92 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v91, v23, v13);
            sub_B19A80(v92, *(_QWORD *)(a1 + 248), (const __m128i *)&v129);
            sub_B8CC60(a2, (__int64)v92, v93, v94, v95, v96);
          }
          goto LABEL_19;
        }
LABEL_64:
        if ( *(_WORD *)(*v52 + 36LL) == 370 )
          v54 = v52;
        goto LABEL_75;
      }
      if ( *(_WORD *)(*v52 + 36LL) == 370 )
      {
LABEL_74:
        v54 = v52;
        goto LABEL_75;
      }
      ++v52;
    }
    if ( *(_WORD *)(*v52 + 36LL) != 370 )
    {
      ++v52;
      goto LABEL_64;
    }
    goto LABEL_74;
  }
LABEL_26:
  sub_A09C70((__int64)&v132);
}
