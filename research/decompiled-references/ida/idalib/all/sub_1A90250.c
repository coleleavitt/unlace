void __fastcall sub_1A90250(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  const __m128i *v6; // rbp
  __int64 *v7; // r12
  int v8; // r13d
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // r14
  char v19; // al
  __int64 (__fastcall *v20)(__int64); // rdx
  __int64 v21; // r14
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 *v25; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128i *v31; // r12
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  bool v36; // zf
  unsigned __int8 v37; // al
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128i *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __m128i *v57; // r12
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // r13
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __m128i *v67; // r12
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r13
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __m128i *v77; // r12
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r13
  __int64 v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // r13
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __m128i *v96; // r12
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r13
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __m128i *v106; // r12
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // r13
  unsigned int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rbp
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // r12
  __int64 v122; // rax
  _QWORD *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // r14
  __int64 v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rax
  _QWORD *v136; // rax
  bool v137; // cf
  unsigned int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // [rsp+8h] [rbp-F0h]
  bool v142; // [rsp+1Fh] [rbp-D9h] BYREF
  __int64 v143; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v144; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v145[200]; // [rsp+30h] [rbp-C8h] BYREF

  v9 = *(_QWORD *)(a3 + 72);
  v10 = *(unsigned __int16 *)(v9 + 8);
  if ( (unsigned __int16)v10 > 0xCCu )
  {
    if ( (unsigned __int16)v10 < 0xCEu )
      goto LABEL_18;
    if ( (unsigned __int16)v10 > 0xD0u )
    {
      v9 = (unsigned int)(v10 - 246);
      if ( (unsigned __int16)(v10 - 246) > 5u )
        goto LABEL_18;
      v8 = 2;
      goto LABEL_7;
    }
    goto LABEL_35;
  }
  if ( (unsigned __int16)v10 >= 0xCBu )
  {
LABEL_35:
    v8 = 0;
    goto LABEL_7;
  }
  if ( (_WORD)v10 != 60 )
  {
    if ( (unsigned __int16)v10 < 0x3Cu || (v9 = (unsigned int)(v10 - 64), (unsigned __int16)(v10 - 64) > 1u) )
    {
LABEL_18:
      while ( (_WORD)v10 != 208 )
      {
        a3 = (unsigned int)(v10 - 248);
        if ( (unsigned __int16)(v10 - 248) <= 1u )
        {
          v9 &= 0xFFFFFFFFFFFFFFF0LL;
          if ( (*(_BYTE *)(*(_QWORD *)v9 + 17LL) & 4) != 0 )
            goto LABEL_13;
          v12 = (__int64 *)(sub_F68450(*(_QWORD *)v9, a2, a3, v10, a5) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v12 && sub_F63270(*v12, a2, v13, v14, v15, v16) )
            goto LABEL_57;
          v17 = 1;
          v18 = 3;
          goto LABEL_23;
        }
      }
      v25 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*v25 + 17) & 4) != 0 )
      {
LABEL_37:
        v26 = sub_168B6C0((__int64)v7);
        v27 = sub_168B6C0((__int64)v7);
        v31 = (__m128i *)sub_1A88520((__int64 *)(v27 + 2352), 40, 3u, v28, v29, v30);
        sub_B14BB0(v31, v26, v6);
        sub_B8CC60(v5, (__int64)v31, v32, v33, v34, v35);
        return;
      }
      if ( (unsigned __int8)sub_F6AE00(*v25, a2, a3, v10, a5) )
        goto LABEL_57;
LABEL_69:
      v17 = 0;
      v18 = 2;
LABEL_23:
      if ( (v6[3].m128i_i8[10] & 2) != 0 )
        return;
      v19 = *(_BYTE *)(v5 + 28) & 0x7F;
      v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL);
      if ( v19 == 43 )
      {
        v82 = v20(v5);
        sub_168B9F0((__int64)v145, v7, v82, 0x1BF5u, 0);
        v83 = sub_15DD120((__int64)v145, (__int64)v6);
        v24 = v83;
        if ( *(_BYTE *)(v83 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v83 + 32), v18, 3u);
        }
        else if ( *(_BYTE *)(v83 + 132) )
        {
          v88 = sub_168B9E0((_QWORD *)v83);
          v89 = *(_QWORD *)(v24 + 16);
          if ( v89 )
            v89 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v89 + 32LL))(*(_QWORD *)(v24 + 16));
          v144 = v89;
          v90 = sub_1587BC0(v88, &v144, v84, v85, v86, v87);
          sub_AE9DF0((unsigned __int8 **)(*v90 + 32LL * *(unsigned int *)(v24 + 128) + 8), v18, 3u);
        }
      }
      else
      {
        v21 = 1;
        if ( v19 != 18 )
          v21 = 2LL * (v19 == 75);
        v22 = v20(v5);
        sub_168B9F0((__int64)v145, v7, v22, 0x1BF6u, 0);
        v23 = sub_15DD120((__int64)v145, (__int64)v6);
        v24 = v23;
        if ( *(_BYTE *)(v23 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v23 + 32), v21, 3u);
        }
        else
        {
          if ( !*(_BYTE *)(v23 + 132) )
            goto LABEL_29;
          v131 = sub_168B9E0((_QWORD *)v23);
          v135 = *(_QWORD *)(v24 + 16);
          if ( v135 )
          {
            v141 = v131;
            v135 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v135 + 32LL))(v135);
            v131 = v141;
          }
          v144 = v135;
          v136 = sub_1587BC0(v131, &v144, v131, v132, v133, v134);
          sub_AE9DF0((unsigned __int8 **)(*v136 + 32LL * *(unsigned int *)(v24 + 128) + 8), v21, 3u);
        }
        if ( *(_BYTE *)(v24 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v24 + 32), v17, 2u);
        }
        else if ( *(_BYTE *)(v24 + 132) )
        {
          v128 = sub_168B9E0((_QWORD *)v24);
          v129 = *(_QWORD *)(v24 + 16);
          if ( v129 )
            v129 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v129 + 32LL))(*(_QWORD *)(v24 + 16));
          v144 = v129;
          v130 = sub_1587BC0(v128, &v144, v124, v125, v126, v127);
          sub_AE9DF0((unsigned __int8 **)(*v130 + 32LL * *(unsigned int *)(v24 + 128) + 8), v17, 2u);
        }
      }
LABEL_29:
      v144 = v6[1].m128i_i64[1];
      sub_1587DB0(v24, &v144);
LABEL_30:
      sub_15F7200(v145);
      return;
    }
  }
  v8 = 1;
LABEL_7:
  v6 = (const __m128i *)a3;
  v5 = a2;
  v7 = (__int64 *)a1;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x12 )
  {
    v9 = *(_QWORD *)(a2 + 80);
    while ( 1 )
    {
      if ( (unsigned __int16)v10 > 0xCFu )
        goto LABEL_18;
      if ( (unsigned __int16)v10 >= 0xCEu )
      {
        v9 &= 0xFFFFFFFFFFFFFFF0LL;
        v51 = *(_QWORD *)v9;
        if ( (*(_BYTE *)(*(_QWORD *)v9 + 17LL) & 4) != 0 )
          goto LABEL_13;
        v9 = *(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v9 + 16) == 34 )
          goto LABEL_13;
        if ( !sub_F6AC10(v51, a2, a3, v10, a5) )
          goto LABEL_69;
      }
      else
      {
        a3 = (unsigned int)(v10 - 64);
        if ( (unsigned __int16)(v10 - 64) > 1u )
          goto LABEL_18;
        v9 &= 0xFFFFFFFFFFFFFFF0LL;
        v11 = *(_QWORD *)v9;
        if ( (*(_BYTE *)(*(_QWORD *)v9 + 17LL) & 4) != 0 )
          goto LABEL_13;
        v9 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (_BYTE)v9 == 42 || (_BYTE)v9 == 34 )
          goto LABEL_13;
        if ( !sub_F6AC10(v11, a2, a3, v10, a5) )
        {
          v17 = 1;
          v18 = 2;
          goto LABEL_23;
        }
      }
LABEL_57:
      v9 = v6[4].m128i_u64[1];
      v10 = *(unsigned __int16 *)(v9 + 8);
LABEL_13:
      if ( (_WORD)v10 == 207 )
      {
        v101 = sub_168B6C0((__int64)v7);
        v102 = sub_168B6C0((__int64)v7);
        v106 = (__m128i *)sub_1A88520((__int64 *)(v102 + 2352), 40, 3u, v103, v104, v105);
        sub_B14B80(v106, v101, v6);
        sub_B8CC60(v5, (__int64)v106, v107, v108, v109, v110);
        return;
      }
      if ( (unsigned __int16)v10 <= 0xCFu )
      {
        switch ( (_WORD)v10 )
        {
          case 0x41:
            v91 = sub_168B6C0((__int64)v7);
            v92 = sub_168B6C0((__int64)v7);
            v96 = (__m128i *)sub_1A88520((__int64 *)(v92 + 2352), 40, 3u, v93, v94, v95);
            sub_B0D9D0(v96, v91, v6);
            sub_B8CC60(v5, (__int64)v96, v97, v98, v99, v100);
            break;
          case 0xCE:
            v72 = sub_168B6C0((__int64)v7);
            v73 = sub_168B6C0((__int64)v7);
            v77 = (__m128i *)sub_1A88520((__int64 *)(v73 + 2352), 40, 3u, v74, v75, v76);
            sub_B14B50(v77, v72, v6);
            sub_B8CC60(v5, (__int64)v77, v78, v79, v80, v81);
            break;
          case 0x40:
            v62 = sub_168B6C0((__int64)v7);
            v63 = sub_168B6C0((__int64)v7);
            v67 = (__m128i *)sub_1A88520((__int64 *)(v63 + 2352), 40, 3u, v64, v65, v66);
            sub_B0D930(v67, v62, v6);
            sub_B8CC60(v5, (__int64)v67, v68, v69, v70, v71);
            break;
          default:
            goto LABEL_18;
        }
        return;
      }
      switch ( (_WORD)v10 )
      {
        case 0xF8:
          v52 = sub_168B6C0((__int64)v7);
          v53 = sub_168B6C0((__int64)v7);
          v57 = (__m128i *)sub_1A88520((__int64 *)(v53 + 2352), 40, 3u, v54, v55, v56);
          sub_B15A70(v57, v52, v6);
          sub_B8CC60(v5, (__int64)v57, v58, v59, v60, v61);
          return;
        case 0xF9:
          v41 = sub_168B6C0((__int64)v7);
          v42 = sub_168B6C0((__int64)v7);
          v46 = (__m128i *)sub_1A88520((__int64 *)(v42 + 2352), 40, 3u, v43, v44, v45);
          sub_B15AA0(v46, v41, v6);
          sub_B8CC60(v5, (__int64)v46, v47, v48, v49, v50);
          return;
        case 0xD0:
          goto LABEL_37;
      }
LABEL_51:
      v37 = v9 & 0x7F;
      if ( v37 == 75 )
      {
        a3 = v6[4].m128i_i64[1];
LABEL_53:
        v9 = *(_QWORD *)(v5 + 56);
        v10 = *(unsigned __int16 *)(a3 + 8);
      }
      else
      {
LABEL_42:
        a3 = (unsigned int)v37 - 34;
        if ( (unsigned int)a3 > 5 )
        {
          if ( v37 != 43 )
          {
            if ( (v6[3].m128i_i8[10] & 2) != 0 )
              return;
            v9 = *(unsigned __int16 *)(v6[4].m128i_i64[1] + 8);
            if ( (unsigned __int16)v9 > 0xD0u )
            {
              v137 = (_WORD)v9 == 248;
              LOWORD(v9) = v9 - 248;
              if ( !v137 && (_WORD)v9 != 1 )
                goto LABEL_18;
            }
            else
            {
              if ( (unsigned __int16)v9 >= 0xCEu )
              {
                v111 = 3;
                goto LABEL_87;
              }
              if ( (unsigned __int16)(v9 - 64) > 1u )
              {
LABEL_105:
                v138 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
                sub_168B9F0((__int64)v145, v7, v138, 0x1BF5u, 0);
                v139 = sub_15DD120((__int64)v145, (__int64)v6);
                v140 = sub_1588370(v139, (unsigned int *)&v143);
                v144 = v6[1].m128i_i64[1];
                sub_1587DB0(v140, &v144);
                sub_15F7200(v145);
                return;
              }
            }
            v111 = 5;
LABEL_87:
            v112 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
            sub_168B9F0((__int64)v145, v7, v112, 0x19C6u, 0);
            v144 = v6[1].m128i_i64[1];
            v113 = sub_1587DB0((__int64)v145, &v144);
            v114 = sub_15DD120(v113, (__int64)v6);
            v142 = (v6[2].m128i_i8[3] & 2) != 0;
            v115 = sub_1588420(v114, (unsigned __int8 *)&v142);
            v116 = v115;
            if ( *(_BYTE *)(v115 + 120) )
            {
              sub_AE9DF0((unsigned __int8 **)(v115 + 32), v111, 2u);
            }
            else if ( *(_BYTE *)(v115 + 132) )
            {
              v121 = sub_168B9E0((_QWORD *)v115);
              v122 = *(_QWORD *)(v116 + 16);
              if ( v122 )
                v122 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v122 + 32LL))(*(_QWORD *)(v116 + 16));
              v143 = v122;
              v123 = sub_1587BC0(v121, &v143, v117, v118, v119, v120);
              sub_AE9DF0((unsigned __int8 **)(*v123 + 32LL * *(unsigned int *)(v116 + 128) + 8), v111, 2u);
            }
            goto LABEL_30;
          }
          LODWORD(v143) = (v8 != 1) + 2;
          v9 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, v10, a5);
          if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_105;
          a3 = v6[4].m128i_i64[1];
          v10 = *(unsigned __int16 *)(a3 + 8);
        }
        else
        {
          v39 = *(_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v40 = (unsigned int)*(unsigned __int8 *)(v39 + 16) - 25;
          if ( (unsigned int)v40 > 1 )
            v39 = sub_F63050(v39, a2, v40, v10);
          a3 = v6[4].m128i_i64[1];
          v9 = *(_QWORD *)(v39 + 24);
          v10 = *(unsigned __int16 *)(a3 + 8);
        }
      }
    }
  }
  v36 = (*(_BYTE *)(sub_168B6E0(a1) + 107) & 4) == 0;
  LOBYTE(v9) = *(_BYTE *)(a2 + 28);
  if ( v36 )
    goto LABEL_51;
  v37 = *(_BYTE *)(a2 + 28) & 0x7F;
  v38 = (v37 + 120) & 0x7F;
  if ( (unsigned __int8)v38 > 0x3Au )
  {
    if ( v37 != 75 )
      goto LABEL_42;
    a3 = v6[4].m128i_i64[1];
    if ( *(_WORD *)(a3 + 8) != 208 )
      goto LABEL_53;
  }
  else
  {
    v10 = 0x7000FFFFC000001LL;
    if ( !_bittest64(&v10, v38) || *(_WORD *)(v6[4].m128i_i64[1] + 8) != 208 )
      goto LABEL_42;
  }
}
