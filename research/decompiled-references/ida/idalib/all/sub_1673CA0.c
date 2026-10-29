void __fastcall sub_1673CA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        unsigned int a8)
{
  char v10; // al
  __int64 v11; // r8
  bool v12; // bp
  __int64 v13; // rdi
  char v14; // r14
  __m128i *v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r13
  __int64 v22; // r14
  size_t v23; // rax
  __int64 v24; // rax
  size_t v25; // r14
  const void *v26; // r15
  void *v27; // rax
  unsigned __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v35; // r13
  size_t v36; // r14
  const void *v37; // r15
  __m128i *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128i v44; // xmm0
  __int64 v45; // r12
  char v46; // bp
  __m128i *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  _QWORD *v53; // rax
  __int64 *v54; // rdx
  __int64 *v55; // r14
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rsi
  _QWORD *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __m128i *v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 *v80; // r13
  __int64 v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r13
  size_t v92; // rax
  __int64 v93; // rax
  const void *v94; // r13
  size_t v95; // r14
  void *v96; // rax
  void *v97; // r13
  unsigned __int64 v98; // r15
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 *v105; // rbp
  __int64 v106; // rsi
  __int64 v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  _QWORD *v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  _QWORD *v117; // rax
  __int64 *v118; // rdx
  __int64 *v119; // r13
  _QWORD *v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rsi
  _QWORD *v123; // rcx
  __int64 v124; // r14
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  _QWORD *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  size_t v134; // r13
  const void *v135; // r14
  void *v136; // r15
  __m128i *v137; // r14
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  void *v142; // [rsp+0h] [rbp-C8h]
  void *v143; // [rsp+0h] [rbp-C8h]
  __int64 v144; // [rsp+0h] [rbp-C8h]
  __int64 v145; // [rsp+8h] [rbp-C0h]
  __int64 v146; // [rsp+10h] [rbp-B8h]
  __int64 v147; // [rsp+18h] [rbp-B0h] BYREF
  __m128i v148; // [rsp+20h] [rbp-A8h]
  unsigned int v149; // [rsp+30h] [rbp-98h]
  __m128i v150; // [rsp+40h] [rbp-88h]
  unsigned int v151; // [rsp+50h] [rbp-78h]
  __m128i v152; // [rsp+60h] [rbp-68h] BYREF
  __int128 v153; // [rsp+70h] [rbp-58h]
  unsigned int v154; // [rsp+80h] [rbp-48h]

  v10 = *(_BYTE *)(a3 + 32);
  v147 = a2;
  if ( (v10 & 1) != 0 )
  {
    v149 = a8;
    v35 = a8;
    v148 = _mm_loadu_si128((const __m128i *)&a7);
    v150 = v148;
    v151 = a8;
    if ( (a8 & 1) == 0 )
    {
      v152 = 0;
      v153 = 0;
      v154 = v154 & 0xFF000000 | 0x101A4;
      HIBYTE(v154) &= 0xFCu;
      v36 = *(_QWORD *)(a3 + 8);
      v37 = *(const void **)a3;
      v143 = (void *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), v36, 3u);
      memcpy(v143, v37, v36);
      v38 = (__m128i *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 64, 3u);
      sub_B30430(v38, *(_QWORD *)(a1 + 248), &v152, v143, v36);
      v39 = sub_B35EA0(*(_QWORD *)(a1 + 248), v150.m128i_i64[0], v150.m128i_i64[1], (__int64)v38, (v35 & 2) != 0, 0);
      sub_B8CC60(a2, v39, v40, v41, v42, v43);
LABEL_15:
      v10 = *(_BYTE *)(a3 + 32);
      goto LABEL_2;
    }
    v117 = (_QWORD *)sub_9C8850(a2);
    v119 = v118;
    v120 = v117;
    v121 = ((char *)v119 - (char *)v117) >> 5;
    v122 = v119 - v117;
    if ( v121 > 0 )
    {
      if ( *(_WORD *)(*v117 + 36LL) != 386 )
      {
        if ( *(_WORD *)(v117[1] + 36LL) == 386 )
        {
          v119 = v117 + 1;
        }
        else if ( *(_WORD *)(v117[2] + 36LL) == 386 )
        {
          v119 = v117 + 2;
        }
        else
        {
          v123 = &v117[4 * v121];
          if ( *(_WORD *)(v117[3] + 36LL) == 386 )
          {
            v119 = v117 + 3;
          }
          else
          {
            while ( 1 )
            {
              v117 = v120 + 4;
              if ( v120 + 4 == v123 )
              {
                v122 = v119 - v123;
                goto LABEL_61;
              }
              if ( *(_WORD *)(v120[4] + 36LL) == 386 )
                goto LABEL_67;
              if ( *(_WORD *)(v120[5] + 36LL) == 386 )
              {
                v119 = v120 + 5;
                goto LABEL_64;
              }
              if ( *(_WORD *)(v120[6] + 36LL) == 386 )
              {
                v119 = v120 + 6;
                goto LABEL_64;
              }
              if ( *(_WORD *)(v120[7] + 36LL) == 386 )
                break;
              v120 += 4;
            }
            v119 = v120 + 7;
          }
        }
        goto LABEL_64;
      }
      goto LABEL_67;
    }
LABEL_61:
    if ( v122 != 2 )
    {
      if ( v122 != 3 )
      {
        if ( v122 != 1 )
        {
LABEL_64:
          if ( (__int64 *)sub_9C88C0(a2) != v119 )
          {
            v124 = sub_B35EA0(*(_QWORD *)(a1 + 248), v150.m128i_i64[0], v150.m128i_i64[1], *v119, 1, 0);
            v129 = sub_B8C3D0(a2, v150.m128i_i64[0], v125, v126, v127, v128);
            sub_1672BE0((__int64)v129, (__int64)v119);
            sub_B8CC60(a2, v124, v130, v131, v132, v133);
          }
          v152 = 0;
          v153 = 0;
          v154 = v154 & 0xFF000000 | 0x101A4;
          HIBYTE(v154) &= 0xFCu;
          v134 = *(_QWORD *)(a3 + 8);
          v135 = *(const void **)a3;
          v136 = (void *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), v134, 3u);
          memcpy(v136, v135, v134);
          v137 = (__m128i *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 64, 3u);
          sub_B30430(v137, *(_QWORD *)(a1 + 248), &v152, v136, v134);
          sub_B8CC60(a2, (__int64)v137, v138, v139, v140, v141);
          goto LABEL_15;
        }
LABEL_86:
        if ( *(_WORD *)(*v117 + 36LL) == 386 )
          v119 = v117;
        goto LABEL_64;
      }
      if ( *(_WORD *)(*v117 + 36LL) == 386 )
      {
LABEL_67:
        v119 = v117;
        goto LABEL_64;
      }
      ++v117;
    }
    if ( *(_WORD *)(*v117 + 36LL) != 386 )
    {
      ++v117;
      goto LABEL_86;
    }
    goto LABEL_67;
  }
LABEL_2:
  if ( (v10 & 2) != 0 )
  {
    v151 = a8;
    v21 = a8;
    v150 = _mm_loadu_si128((const __m128i *)&a7);
    if ( (a8 & 1) != 0 )
    {
      v78 = (_QWORD *)sub_9C8850(v147);
      v80 = sub_16714C0(v78, v79);
      if ( (__int64 *)sub_9C88C0(v147) != v80 )
      {
        v81 = sub_B35EA0(*(_QWORD *)(a1 + 248), v150.m128i_i64[0], v150.m128i_i64[1], *v80, 1, 0);
        v86 = sub_B8C3D0(v147, v150.m128i_i64[0], v82, v83, v84, v85);
        sub_1672BE0((__int64)v86, (__int64)v80);
        sub_B8CC60(v147, v81, v87, v88, v89, v90);
      }
      v152 = 0;
      v153 = 0;
      v154 = v154 & 0xFF000000 | 0x101A4;
      HIBYTE(v154) &= 0xFCu;
      v91 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL);
      v92 = j__strlen("swift");
      v93 = sub_6F3470(v91, "swift", v92);
      v94 = *(const void **)a3;
      v144 = v93;
      v95 = *(_QWORD *)(a3 + 8);
      v96 = (void *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), v95, 3u);
      v97 = memcpy(v96, v94, v95);
      v98 = sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 144, 3u);
      sub_B2DC90(v98, *(_QWORD *)(a1 + 248), &v152, v144, 0, 0, 0, 0, 1, (__int64)v97, v95, 0, 0, 0, 0, 0);
      sub_B8CC60(v147, v98, v99, v100, v101, v102);
    }
    else
    {
      v152 = 0;
      v153 = 0;
      v154 = v154 & 0xFF000000 | 0x101A4;
      HIBYTE(v154) &= 0xFCu;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17504LL);
      v23 = j__strlen("swift");
      v24 = sub_6F3470(v22, "swift", v23);
      v25 = *(_QWORD *)(a3 + 8);
      v26 = *(const void **)a3;
      v146 = v24;
      v27 = (void *)sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), v25, 3u);
      v145 = v25;
      v142 = memcpy(v27, v26, v25);
      v28 = sub_1673960((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 144, 3u);
      sub_B2DC90(v28, *(_QWORD *)(a1 + 248), &v152, v146, 0, 0, 0, 0, 1, (__int64)v142, v145, 0, 0, 0, 0, 0);
      v29 = sub_B35EA0(*(_QWORD *)(a1 + 248), v150.m128i_i64[0], v150.m128i_i64[1], v28, (v21 & 2) != 0, 0);
      sub_B8CC60(v147, v29, v30, v31, v32, v33);
    }
    v10 = *(_BYTE *)(a3 + 32);
  }
  if ( (v10 & 4) != 0 )
  {
    v11 = a8;
    v12 = (v10 & 8) != 0;
    v149 = a8;
    v148 = _mm_loadu_si128((const __m128i *)&a7);
    v150 = v148;
    v151 = a8;
    if ( (a8 & 1) == 0 )
    {
      v13 = *(_QWORD *)(a1 + 248);
      v14 = (a8 & 2) != 0;
      if ( (v10 & 8) != 0 )
      {
        v152 = 0;
        v153 = 0;
        v154 = v154 & 0xFF000000 | 0x101A4;
        HIBYTE(v154) &= 0xFCu;
        LOBYTE(v11) = (unsigned __int8)a8 >> 1;
        v15 = (__m128i *)sub_1672F50((__int64 *)(v13 + 2352), 40, 3u, a4, v11, a6);
        sub_B19C30(v15, *(_QWORD *)(a1 + 248), &v152);
        v16 = sub_B35EA0(*(_QWORD *)(a1 + 248), v150.m128i_i64[0], v150.m128i_i64[1], (__int64)v15, v14, 0);
      }
      else
      {
        v16 = sub_B35E00(v13, v150.m128i_i64[0], v150.m128i_i64[1], 374, (a8 & 2) != 0, 0);
      }
      sub_B8CC60(v147, v16, v17, v18, v19, v20);
      goto LABEL_8;
    }
    v53 = (_QWORD *)sub_9C8850(v147);
    v55 = v54;
    v56 = v53;
    v57 = ((char *)v55 - (char *)v53) >> 5;
    v58 = v55 - v53;
    if ( v57 > 0 )
    {
      if ( *(_WORD *)(*v53 + 36LL) != 374 )
      {
        if ( *(_WORD *)(v53[1] + 36LL) == 374 )
        {
          v55 = v53 + 1;
        }
        else if ( *(_WORD *)(v53[2] + 36LL) == 374 )
        {
          v55 = v53 + 2;
        }
        else
        {
          v59 = &v53[4 * v57];
          if ( *(_WORD *)(v53[3] + 36LL) == 374 )
          {
            v55 = v53 + 3;
          }
          else
          {
            while ( 1 )
            {
              v53 = v56 + 4;
              if ( v56 + 4 == v59 )
              {
                v58 = v55 - v59;
                goto LABEL_34;
              }
              if ( *(_WORD *)(v56[4] + 36LL) == 374 )
                goto LABEL_68;
              if ( *(_WORD *)(v56[5] + 36LL) == 374 )
              {
                v55 = v56 + 5;
                goto LABEL_37;
              }
              if ( *(_WORD *)(v56[6] + 36LL) == 374 )
              {
                v55 = v56 + 6;
                goto LABEL_37;
              }
              if ( *(_WORD *)(v56[7] + 36LL) == 374 )
                break;
              v56 += 4;
            }
            v55 = v56 + 7;
          }
        }
        goto LABEL_37;
      }
      goto LABEL_68;
    }
LABEL_34:
    if ( v58 != 2 )
    {
      if ( v58 != 3 )
      {
        if ( v58 != 1 )
        {
LABEL_37:
          if ( (__int64 *)sub_9C88C0(v147) != v55 )
          {
            v63 = sub_B35EA0(*(_QWORD *)(a1 + 248), v150.m128i_i64[0], v150.m128i_i64[1], *v55, 1, 0);
            v68 = sub_B8C3D0(v147, v150.m128i_i64[0], v64, v65, v66, v67);
            sub_1672BE0((__int64)v68, (__int64)v55);
            sub_B8CC60(v147, v63, v69, v70, v71, v72);
          }
          if ( v12 )
          {
            v152 = 0;
            v153 = 0;
            v154 = v154 & 0xFF000000 | 0x101A4;
            HIBYTE(v154) &= 0xFCu;
            v73 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v60, v61, v62);
            sub_B19C30(v73, *(_QWORD *)(a1 + 248), &v152);
            sub_B8CC60(v147, (__int64)v73, v74, v75, v76, v77);
          }
          goto LABEL_8;
        }
LABEL_79:
        if ( *(_WORD *)(*v53 + 36LL) == 374 )
          v55 = v53;
        goto LABEL_37;
      }
      if ( *(_WORD *)(*v53 + 36LL) == 374 )
      {
LABEL_68:
        v55 = v53;
        goto LABEL_37;
      }
      ++v53;
    }
    if ( *(_WORD *)(*v53 + 36LL) != 374 )
    {
      ++v53;
      goto LABEL_79;
    }
    goto LABEL_68;
  }
LABEL_8:
  if ( !*(_QWORD *)(a3 + 48) )
    return;
  *(_QWORD *)&v153 = a3;
  v44 = _mm_loadu_si128((const __m128i *)&a7);
  v45 = v147;
  v152.m128i_i64[0] = a1;
  v152.m128i_i64[1] = (__int64)&v147;
  v46 = a8;
  v148 = v44;
  v149 = a8;
  v150 = v44;
  v151 = a8;
  if ( (a8 & 1) != 0 )
  {
    v103 = (_QWORD *)sub_9C8850(v147);
    v105 = sub_1671150(v103, v104);
    if ( (__int64 *)sub_9C88C0(v45) != v105 )
    {
      v106 = v150.m128i_i64[0];
      v107 = sub_B35EA0(*(_QWORD *)(a1 + 248), v150.m128i_i64[0], v150.m128i_i64[1], *v105, 1, 0);
      v112 = sub_B8C3D0(v45, v106, v108, v109, v110, v111);
      sub_1672BE0((__int64)v112, (__int64)v105);
      sub_B8CC60(v45, v107, v113, v114, v115, v116);
    }
    v48 = (__int64)sub_1673A40(&v152);
    if ( v48 )
      goto LABEL_19;
  }
  else
  {
    v47 = sub_1673A40(&v152);
    if ( v47 )
    {
      v48 = sub_B35EA0(*(_QWORD *)(a1 + 248), v150.m128i_i64[0], v150.m128i_i64[1], (__int64)v47, (v46 & 2) != 0, 0);
LABEL_19:
      sub_B8CC60(v45, v48, v49, v50, v51, v52);
    }
  }
}
