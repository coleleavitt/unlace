void __fastcall sub_1C43FC0(__int64 a1, unsigned __int64 a2, __int64 a3, double a4, double a5)
{
  unsigned int v5; // eax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  __int64 v13; // r9
  __int64 p_s; // rsi
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int16 v18; // r14
  int v19; // eax
  unsigned int v20; // r14d
  unsigned __int64 v21; // rdi
  __int64 *v22; // r12
  __int64 v23; // rsi
  size_t v24; // rax
  char *v25; // rsi
  void *v26; // rdi
  __int64 v27; // r13
  _QWORD *v28; // r14
  unsigned __int16 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 **v32; // rax
  __int64 *v33; // rcx
  unsigned __int64 v34; // rax
  __int64 *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  char v42; // al
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rax
  __int64 v47; // rdx
  char v48; // al
  __int64 v49; // rdi
  __int64 **v50; // rax
  __int64 *v51; // rcx
  unsigned __int64 v52; // rax
  __int64 *v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r14
  int v56; // eax
  __int64 *v57; // rbp
  int v58; // eax
  char *v59; // r15
  int v60; // esi
  int v61; // eax
  char *v62; // r15
  int v63; // edx
  int v64; // eax
  __int16 v65; // ax
  __int16 v66; // ax
  bool v67; // zf
  int v68; // eax
  __int64 v69; // rax
  size_t v70; // rax
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r13
  __int64 *v77; // rax
  __int64 v78; // rdx
  __int64 *v79; // rax
  unsigned __int64 *v80; // rax
  __int64 *v81; // rdx
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  unsigned __int16 *v85; // rax
  __int64 v86; // rdx
  unsigned __int16 v87; // ax
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 **v93; // rax
  __int64 *v94; // rdx
  unsigned __int64 v95; // rax
  __int64 *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rbp
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  _QWORD *v103; // rax
  __int64 *v104; // rcx
  __int64 *v105; // rax
  __int64 v106; // rdx
  char v107; // dl
  __int64 *v108; // rax
  __int64 *v109; // rax
  __int64 v110; // rdx
  _WORD *v111; // rsi
  __int64 v112; // rax
  __int64 *v113; // rax
  __int64 v114; // rcx
  __int64 *v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 *v119; // rax
  __int64 v120; // rdx
  __int64 *v121; // rax
  __int64 v122; // rcx
  __int64 v123; // [rsp-8h] [rbp-170h]
  int v125; // [rsp+Ch] [rbp-15Ch]
  bool v126; // [rsp+10h] [rbp-158h]
  unsigned int v127; // [rsp+18h] [rbp-150h]
  bool v128; // [rsp+1Fh] [rbp-149h]
  signed int v129; // [rsp+24h] [rbp-144h] BYREF
  __int64 v130; // [rsp+28h] [rbp-140h] BYREF
  __int64 v131; // [rsp+30h] [rbp-138h] BYREF
  __int64 v132; // [rsp+38h] [rbp-130h] BYREF
  void *v133[2]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v134[16]; // [rsp+50h] [rbp-118h] BYREF
  __int64 v135; // [rsp+60h] [rbp-108h] BYREF
  char v136; // [rsp+68h] [rbp-100h]
  __int64 v137; // [rsp+6Ch] [rbp-FCh]
  char v138; // [rsp+74h] [rbp-F4h]
  void *v139; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v140; // [rsp+80h] [rbp-E8h]
  _BYTE v141[16]; // [rsp+88h] [rbp-E0h] BYREF
  char v142; // [rsp+98h] [rbp-D0h]
  char *s; // [rsp+A0h] [rbp-C8h] BYREF
  unsigned __int64 v144; // [rsp+A8h] [rbp-C0h]
  __int64 v145; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v146; // [rsp+C0h] [rbp-A8h] BYREF
  char v147; // [rsp+118h] [rbp-50h]
  unsigned int v148; // [rsp+120h] [rbp-48h]
  char v149; // [rsp+124h] [rbp-44h]

  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( v5 == 3 || v5 <= 1 )
    return;
  v7 = a2;
  v125 = a3;
  v8 = sub_BFBAE0(a2);
  v12 = sub_C00A40(v8, a2, v9, v10, v11);
  v126 = sub_1020410(*(_QWORD *)(a1 + 272), v12);
  if ( !v126 )
  {
    v57 = *(__int64 **)(a1 + 272);
    while ( v12 < 0 )
    {
      v58 = sub_1021B90((__int64)v57, v12);
      sub_1022900((__int64)&s, v57, v58, 1);
      v59 = s;
      if ( !s
        || strlen(s) != 15
        || *(_QWORD *)v59 != 0x686374617263733CLL
        || *((_DWORD *)v59 + 2) != 1634759456
        || *((_WORD *)v59 + 6) != 25955
        || v59[14] != 62 )
      {
        v60 = sub_1021B90((__int64)v57, v12);
        if ( v60 )
        {
          v61 = sub_1021680((__int64)v57, v60);
          v126 = v61 != 3 && v61 != 0;
        }
        break;
      }
LABEL_86:
      if ( (unsigned __int8)sub_1020490((__int64)v57, v12, nullptr) )
      {
        v12 = sub_10205A0((__int64)v57, v12);
      }
      else
      {
        s = (char *)sub_101FC50((__int64)v57, v12);
        v12 = (int)s;
        LODWORD(v144) = v71;
      }
      if ( v12 >= 0 )
        v64 = v12;
      else
        v64 = sub_1021B90((__int64)v57, v12);
      while ( 1 )
      {
        sub_1022900((__int64)&s, v57, v64, 1);
        v62 = s;
        if ( !s || strlen(s) != 15 )
          break;
        if ( *(_QWORD *)v62 != 0x686374617263733CLL
          || *((_DWORD *)v62 + 2) != 1634759456
          || *((_WORD *)v62 + 6) != 25955
          || (v63 = 0, v62[14] != 62) )
        {
          v63 = 1;
        }
        v64 = v12;
        if ( v63 )
          break;
        if ( v12 < 0 )
          goto LABEL_86;
      }
    }
  }
  v13 = *(_QWORD *)(a1 + 248);
  p_s = (__int64)&v130;
  v129 = 0;
  v131 = 0;
  v132 = 0;
  if ( !(unsigned __int8)sub_C04410(v7, (unsigned __int64 *)&v130, &v129, (__int64)&v131, (__int64)&v132, v13) )
    return;
  v18 = *(_WORD *)v7 & 0x1FF;
  if ( v18 == 10 )
  {
    if ( v129 < 0 )
      return;
    goto LABEL_32;
  }
  if ( (*(_WORD *)sub_BFB840(v7) & 0x1FF) == 0x14 && v129 < 0 )
  {
    LODWORD(s) = v129;
    v70 = j__strlen("UNREFERENCED_PARAMETER");
    p_s = (__int64)&s;
    if ( (unsigned __int8)sub_15F1800(a1, (int *)&s, "UNREFERENCED_PARAMETER", v70, a4, a5) )
      return;
    v18 = *(_WORD *)v7 & 0x1FF;
  }
  if ( ((v18 + 452) & 0x1FFu) <= 1 )
  {
    v7 = *(_QWORD *)(v7 + 16);
    v18 = *(_WORD *)v7 & 0x1FF;
  }
  if ( v18 == 116 )
  {
    v7 = *(_QWORD *)(v7 + 24);
    v18 = *(_WORD *)v7 & 0x1FF;
  }
  if ( v18 > 0x75u )
  {
    if ( v18 <= 0x77u )
    {
      v19 = (*(_WORD *)(v7 + 2) >> 3) & 0x3F;
      if ( (unsigned int)(v19 - 9) <= 6 )
      {
        v127 = 0;
        if ( v19 != 14 )
        {
          v127 = 1;
          if ( v19 != 15 )
            v127 = (v19 == 9) + 2;
        }
        v20 = *(_DWORD *)(v7 + 4);
        v21 = *(_QWORD *)(v7 + 16);
        goto LABEL_19;
      }
    }
LABEL_32:
    v27 = v130;
    v28 = (_QWORD *)v130;
    v29 = *(_WORD *)v130 & 0x1FF;
    v30 = v29;
    if ( ((v29 + 433) & 0x1FFu) <= 9 )
    {
      if ( ((*(_WORD *)(v130 + 2) >> 3) & 0x7Fu) > 0x1B
        || (v30 = 135266336, !_bittest64(&v30, (*(_WORD *)(v130 + 2) >> 3) & 0x7F)) )
      {
        v28 = (_QWORD *)v130;
        if ( (unsigned int)v29 - 113 <= 1 )
        {
LABEL_35:
          v31 = v28[2];
          if ( !v31 )
            goto LABEL_52;
          if ( (*(_BYTE *)(v31 + 29) & 1) != 0 )
          {
            v32 = (__int64 **)sub_B8C3D0(v31, p_s, v30, v15, v16, v17);
            v33 = *v32;
            v34 = (unsigned __int64)&(*v32)[*((unsigned int *)v32 + 2)];
            if ( (unsigned __int64)v33 >= v34 )
            {
              if ( v33 != (__int64 *)v34 )
              {
                if ( *(_WORD *)(*(_QWORD *)v34 + 36LL) == 398 )
                {
LABEL_161:
                  v41 = *v33;
                  if ( *(_WORD *)(*v33 + 36) != 398 )
                  {
                    v104 = v33 + 1;
                    do
                      v41 = *v104++;
                    while ( *(_WORD *)(v41 + 36) != 398 );
                  }
                  p_s = 0;
                  goto LABEL_46;
                }
                v105 = (__int64 *)(v34 + 8);
                while ( v105 != v33 )
                {
                  v106 = *v105++;
                  if ( *(_WORD *)(v106 + 36) == 398 )
                    goto LABEL_161;
                }
              }
            }
            else
            {
              v35 = v33;
              while ( *(_WORD *)(*v35 + 36) != 398 )
              {
                if ( (__int64 *)v34 == ++v35 )
                  goto LABEL_41;
              }
              if ( (__int64 *)v34 != v35 )
                goto LABEL_161;
            }
          }
LABEL_41:
          v38 = *(_QWORD *)(sub_B8C1B0(v31 + 72) + 16);
          if ( (v38 & 4) != 0 )
            p_s = *(_QWORD *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
          else
            p_s = v38 & 0xFFFFFFFFFFFFFFF8LL;
          if ( p_s )
            p_s -= 64;
          v41 = sub_C04350(p_s, p_s, v36, v37, v39, v40);
LABEL_46:
          v42 = sub_1C43990(a1, p_s, v41, v129, v131, v132, 1u);
          goto LABEL_50;
        }
        goto LABEL_141;
      }
      v85 = (unsigned __int16 *)sub_BFB840(*(_QWORD *)(v130 + 16));
      v30 = *v85;
      v28 = v85;
      LOWORD(v30) = v30 & 0x1FF;
    }
    if ( (((_WORD)v30 + 423) & 0x1FFu) > 4 )
    {
      if ( (unsigned int)(unsigned __int16)v30 - 113 <= 1 )
        goto LABEL_35;
      if ( (_WORD)v30 == 53 )
      {
        v43 = sub_F631C0(*(_QWORD *)(v28[1] & 0xFFFFFFFFFFFFFFF0LL), p_s, v30, v15, v16, v17);
        v45 = (__int64)v43;
        if ( v43 )
        {
          v46 = sub_C04350((__int64)v43, p_s, v44, v15, v16, v17);
          p_s = v45;
          v42 = sub_1C43990(a1, v45, v46, v129, v131, v132, 0);
LABEL_50:
          v16 = v123;
          if ( v42 )
            return;
          goto LABEL_51;
        }
        goto LABEL_51;
      }
LABEL_141:
      if ( v126 )
        return;
LABEL_52:
      if ( v29 != 33 )
      {
        if ( v29 == 17 )
        {
          v65 = **(_WORD **)(v27 + 16);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL) )
          {
            v66 = v65 & 0x1FF;
            if ( ((v66 + 423) & 0x1FFu) <= 4 )
            {
              if ( *(_WORD *)(v27 + 4) == 2 )
              {
                v111 = *(_WORD **)(v27 + 24);
                if ( ((*v111 + 423) & 0x1FFu) <= 4 )
                {
                  sub_1C43FC0(a1, v111, a3);
                  return;
                }
              }
              goto LABEL_99;
            }
          }
          else
          {
            v66 = v65 & 0x1FF;
          }
          if ( v66 == 28 )
          {
            v125 = 7522;
          }
          else
          {
            v67 = v66 == 32;
            v68 = 7533;
            if ( !v67 )
              v68 = v125;
            v125 = v68;
          }
        }
        else
        {
          if ( v29 != 86 )
            goto LABEL_65;
          v86 = *(_QWORD *)(v27 + 16);
          v87 = *(_WORD *)v86 & 0x1FF;
          if ( v87 == 116 )
          {
            v86 = *(_QWORD *)(v86 + 24);
            v87 = *(_WORD *)v86 & 0x1FF;
          }
          if ( v87 == 114 )
            return;
          if ( (unsigned int)v87 - 113 <= 1 )
          {
            v88 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v86 + 8) & 0xFFFFFFFFFFFFFFF0LL), p_s, v86, v15, v16, v17);
            if ( v88 )
            {
              if ( (*((_BYTE *)v88 + 29) & 1) == 0 )
                return;
              v93 = (__int64 **)sub_B8C3D0((__int64)v88, p_s, v89, v90, v91, v92);
              v94 = *v93;
              v95 = (unsigned __int64)&(*v93)[*((unsigned int *)v93 + 2)];
              if ( (unsigned __int64)v94 >= v95 )
              {
                if ( v94 == (__int64 *)v95 )
                  return;
                if ( *(_WORD *)(*(_QWORD *)v95 + 36LL) != 397 )
                {
                  v121 = (__int64 *)(v95 + 8);
                  while ( v94 != v121 )
                  {
                    v122 = *v121++;
                    if ( *(_WORD *)(v122 + 36) == 397 )
                      goto LABEL_209;
                  }
                  return;
                }
              }
              else
              {
                v96 = v94;
                while ( *(_WORD *)(*v96 + 36) != 397 )
                {
                  if ( (__int64 *)v95 == ++v96 )
                    return;
                }
                if ( (__int64 *)v95 == v96 )
                  return;
              }
LABEL_209:
              v29 = *(_WORD *)v27 & 0x1FF;
              if ( *(_WORD *)(*v94 + 36) != 397 )
              {
                v119 = v94 + 1;
                do
                  v120 = *v119++;
                while ( *(_WORD *)(v120 + 36) != 397 );
              }
              goto LABEL_65;
            }
            goto LABEL_64;
          }
        }
LABEL_99:
        if ( (*(_BYTE *)(v27 + 1) & 6) != 0
          && ((v69 = *(_QWORD *)(v27 + 8), (v69 & 4) != 0) || (byte_8[v69 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0)
          && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) > 4u )
        {
          sub_168B9F0((__int64)&s, (__int64 *)(a1 + 8), v129, 0x1D74u, 0);
          v112 = sub_15884C0((__int64)&s, &v131);
          sub_15884C0(v112, &v132);
          sub_15F7200(&s);
        }
        else if ( v125 != 7518 || (sub_1DBADC0(a1), !v107) )
        {
          sub_168B9B0((__int64)&s, a1 + 8, v125);
          v136 = 1;
          v135 = v131;
          sub_AEC610((__int64 *)&s, &v135);
          v136 = 1;
          v135 = v132;
          sub_AEC610((__int64 *)&s, &v135);
          v135 = v27;
          sub_18C9A50(a1, v129, &v135, 1, (__int64)&s);
          if ( s )
          {
            if ( v144 )
              sub_1580C40(v144, (unsigned __int64)s);
          }
        }
        return;
      }
      v47 = *(_QWORD *)(a1 + 232);
      v48 = *(_BYTE *)(v27 + 27);
      if ( (*(_BYTE *)(v47 + 107) & 4) != 0 && (v48 & 2) != 0 )
      {
        sub_168B9F0((__int64)&s, (__int64 *)(a1 + 8), v129, 0xBE6u, 0);
        sub_15884C0((__int64)&s, &v131);
        sub_15F7200(&s);
        return;
      }
      if ( (v48 & 1) == 0 )
        goto LABEL_99;
      v49 = *(_QWORD *)(v27 + 16);
      if ( !v49 )
        goto LABEL_99;
      if ( (*(_BYTE *)(v49 + 29) & 1) != 0 )
      {
        v50 = (__int64 **)sub_B8C3D0(v49, p_s, v47, v15, v16, v17);
        v51 = *v50;
        v52 = (unsigned __int64)&(*v50)[*((unsigned int *)v50 + 2)];
        if ( (unsigned __int64)v51 >= v52 )
        {
          if ( v51 != (__int64 *)v52 )
          {
            if ( *(_WORD *)(*(_QWORD *)v52 + 36LL) == 398 )
            {
LABEL_177:
              v54 = *v51;
              if ( *(_WORD *)(*v51 + 36) != 398 )
              {
                v108 = v51 + 1;
                do
                  v54 = *v108++;
                while ( *(_WORD *)(v54 + 36) != 398 );
              }
LABEL_63:
              if ( (unsigned __int8)sub_1C43990(a1, 0, v54, v129, v131, v132, 0) )
                return;
LABEL_64:
              v29 = *(_WORD *)v27 & 0x1FF;
LABEL_65:
              if ( v29 == 87 )
              {
                v55 = *(_QWORD *)(v27 + 24);
                if ( *(_QWORD *)v55 == *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19056LL) )
                {
                  sub_168B9F0((__int64)&s, (__int64 *)(a1 + 8), v129, 0x1D73u, 0);
                  v56 = *(_DWORD *)(v55 + 8);
                  v137 = 0;
                  v138 = 0;
                  v139 = v141;
                  v140 = 0;
                  v141[0] = 0;
                  v142 = 0;
                  LODWORD(v135) = v56;
                  HIDWORD(v135) = v56;
                  v136 = 1;
                  sub_1589170((__int64)&s, &v135);
                  v26 = v139;
                  if ( v139 == v141 )
                    goto LABEL_30;
                  goto LABEL_29;
                }
              }
              goto LABEL_99;
            }
            v109 = (__int64 *)(v52 + 8);
            while ( v51 != v109 )
            {
              v110 = *v109++;
              if ( *(_WORD *)(v110 + 36) == 398 )
                goto LABEL_177;
            }
          }
        }
        else
        {
          v53 = v51;
          while ( *(_WORD *)(*v53 + 36) != 398 )
          {
            if ( (__int64 *)v52 == ++v53 )
              goto LABEL_62;
          }
          if ( (__int64 *)v52 != v53 )
            goto LABEL_177;
        }
      }
LABEL_62:
      v54 = 0;
      goto LABEL_63;
    }
    v72 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v72 + 16) == 13 && ((*(_WORD *)(v72 + 18) >> 3) & 0x1FF) == 0x1B3 )
      return;
    p_s = sub_BFD120((__int64)v28, *(_QWORD *)(a1 + 248));
    if ( (unsigned __int8)sub_1C43990(a1, p_s, v73, v129, v131, v132, 0) )
      return;
    v74 = sub_BFBC70(v28[4]);
    v76 = v74;
    if ( !v74 )
      goto LABEL_51;
    if ( v126 )
      return;
    if ( (*(_BYTE *)(v74 + 29) & 1) == 0 )
      goto LABEL_51;
    v77 = sub_B8C3D0(v74, p_s, v75, v15, v16, v17);
    v78 = *v77;
    v15 = *v77 + 8LL * *((unsigned int *)v77 + 2);
    if ( *v77 >= v15 )
    {
      if ( v78 != v15 )
      {
        if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 338 )
        {
LABEL_205:
          sub_168B9F0((__int64)&s, (__int64 *)(a1 + 8), v129, 0x1D5Du, 0);
          v117 = sub_15884C0((__int64)&s, &v131);
          v118 = sub_15884C0(v117, &v132);
          if ( *(_BYTE *)(v118 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v118 + 32), (__int64)"pure", 1u);
          }
          else if ( *(_BYTE *)(v118 + 132) )
          {
            sub_1C39890(v118, (__int64)"pure");
          }
          goto LABEL_30;
        }
        v115 = (__int64 *)(v15 + 8);
        while ( 1 )
        {
          v15 = (unsigned __int64)v115;
          if ( v115 == (__int64 *)v78 )
            break;
          v116 = *v115++;
          if ( *(_WORD *)(v116 + 36) == 338 )
            goto LABEL_205;
        }
      }
    }
    else
    {
      v79 = (__int64 *)*v77;
      while ( 1 )
      {
        v78 = *v79;
        if ( *(_WORD *)(*v79 + 36) == 338 )
          break;
        if ( (__int64 *)v15 == ++v79 )
          goto LABEL_130;
      }
      if ( (__int64 *)v15 != v79 )
        goto LABEL_205;
    }
LABEL_130:
    if ( (*(_BYTE *)(v76 + 29) & 1) != 0 )
    {
      v80 = sub_B8C3D0(v76, p_s, v78, v15, v16, v17);
      v81 = (__int64 *)*v80;
      v15 = *v80 + 8LL * *((unsigned int *)v80 + 2);
      if ( *v80 >= v15 )
      {
        if ( v81 == (__int64 *)v15 )
          goto LABEL_51;
        if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 181 )
        {
          v113 = (__int64 *)(v15 + 8);
          do
          {
            v15 = (unsigned __int64)v113;
            if ( v81 == v113 )
              goto LABEL_51;
            v114 = *v113++;
          }
          while ( *(_WORD *)(v114 + 36) != 181 );
        }
      }
      else
      {
        v82 = *v80;
        while ( *(_WORD *)(*(_QWORD *)v82 + 36LL) != 181 )
        {
          v82 += 8LL;
          if ( v15 == v82 )
            goto LABEL_51;
        }
        if ( v15 == v82 )
          goto LABEL_51;
      }
      sub_168B9F0((__int64)&s, (__int64 *)(a1 + 8), v129, 0x1D5Du, 0);
      v83 = sub_15884C0((__int64)&s, &v131);
      v84 = sub_15884C0(v83, &v132);
      sub_162C0B0(v84, (__int64)"const");
      sub_15F7200(&s);
      return;
    }
LABEL_51:
    v27 = v130;
    v29 = *(_WORD *)v130 & 0x1FF;
    goto LABEL_52;
  }
  if ( v18 != 91 )
    goto LABEL_32;
  switch ( ((*(_BYTE *)(v7 + 3) >> 1) + 48) & 0x3F )
  {
    case 0:
    case 1:
    case 0x10:
    case 0x11:
      v127 = 2;
      break;
    case 0xE:
      v127 = 0;
      break;
    case 0xF:
      v127 = 1;
      break;
    case 0x12:
      v127 = 3;
      break;
    default:
      goto LABEL_32;
  }
  v20 = *(_DWORD *)(v7 + 20);
  v21 = *(_QWORD *)(v7 + 8 * (((*(_BYTE *)(v7 + 2) & 8) != 0) + 1LL) + 32);
LABEL_19:
  p_s = v20;
  v128 = ((*(_BYTE *)(sub_BFBAE0(v21) + 1) >> 1) & 3) == 1;
  if ( sub_1020410(*(_QWORD *)(a1 + 272), v20) )
    goto LABEL_32;
  v22 = (__int64 *)(a1 + 8);
  v23 = (__int64)v22;
  sub_168B9F0((__int64)&s, v22, v20, 0x1D5Fu, 0);
  if ( v147 )
  {
    v23 = v127;
    sub_AE9DF0(&v146, v127, 3u);
  }
  else if ( v149 )
  {
    v99 = sub_168B9E0(&s);
    v102 = v145;
    if ( v145 )
      v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v145 + 32LL))(v145);
    v135 = v102;
    v103 = sub_1587BC0(v99, &v135, v97, v98, v100, v101);
    v23 = v127;
    sub_AE9DF0((unsigned __int8 **)(*v103 + 32LL * v148 + 8), v127, 3u);
  }
  v135 = sub_EEC8C0(v7, v23, a4);
  sub_1587DB0((__int64)&s, &v135);
  sub_15F7200(&s);
  if ( v128 )
  {
    if ( v127 == 1 )
    {
      sub_168B9F0((__int64)&s, v22, v20, 0x179Bu, 0);
      v24 = j__strlen("|=");
      v137 = 0;
      v25 = "|=";
      v138 = 0;
      v139 = v141;
      v140 = 0;
      v141[0] = 0;
      v142 = 0;
      LODWORD(v135) = v20;
      HIDWORD(v135) = v20;
      v136 = 1;
      v133[0] = v134;
LABEL_26:
      sub_1C32AD0(v133, v25, (__int64)&v25[v24]);
      sub_A0AAD0((__int64)&v139, v133);
      if ( v133[0] != v134 )
        operator delete(v133[0]);
      sub_1589170((__int64)&s, &v135);
      v26 = v139;
      if ( v139 == v141 )
        goto LABEL_30;
LABEL_29:
      operator delete(v26);
LABEL_30:
      sub_15F7200(&s);
      return;
    }
    if ( !v127 )
    {
      sub_168B9F0((__int64)&s, v22, v20, 0x1732u, 0);
      v24 = j__strlen("=");
      v137 = 0;
      v25 = "=";
      v138 = 0;
      v139 = v141;
      v140 = 0;
      v141[0] = 0;
      v142 = 0;
      LODWORD(v135) = v20;
      HIDWORD(v135) = v20;
      v136 = 1;
      v133[0] = v134;
      goto LABEL_26;
    }
  }
}
