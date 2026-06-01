void __fastcall sub_1862750(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int *v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  char v12; // r13
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // rdx
  unsigned int *v17; // rdi
  unsigned int *v18; // rsi
  unsigned int *v19; // rdi
  unsigned int *v20; // rsi
  const char *v21; // rsi
  unsigned __int8 *v22; // rax
  unsigned int *v23; // rsi
  unsigned int *v24; // rdi
  unsigned __int64 v25; // r13
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 *v28; // rdx
  char **v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // r13
  int v36; // ecx
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r13
  char *v51; // rax
  _QWORD *v52; // rax
  _BYTE *v53; // rax
  _BYTE *v54; // rax
  unsigned __int16 v55; // ax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __int64 v61; // r13
  _BYTE *v62; // rax
  _BYTE *v63; // rax
  _BYTE *v64; // rax
  _QWORD *v65; // rax
  size_t v66; // rax
  char *v67; // rdi
  unsigned __int8 *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r9
  unsigned int *v72; // [rsp+10h] [rbp-278h]
  __int64 v73; // [rsp+18h] [rbp-270h]
  __int64 v74; // [rsp+18h] [rbp-270h]
  char **v75; // [rsp+18h] [rbp-270h]
  __int64 v76; // [rsp+18h] [rbp-270h]
  __int64 v77; // [rsp+20h] [rbp-268h]
  _QWORD *v78; // [rsp+20h] [rbp-268h]
  __int64 v79; // [rsp+28h] [rbp-260h]
  unsigned int v80; // [rsp+28h] [rbp-260h]
  __int64 (__fastcall **v81)(); // [rsp+30h] [rbp-258h]
  __int16 v82; // [rsp+40h] [rbp-248h]
  unsigned int v83; // [rsp+44h] [rbp-244h]
  unsigned __int8 v84[4]; // [rsp+54h] [rbp-234h] BYREF
  unsigned __int8 *v85; // [rsp+58h] [rbp-230h] BYREF
  __int64 v86[2]; // [rsp+60h] [rbp-228h] BYREF
  unsigned int v87; // [rsp+70h] [rbp-218h]
  __int16 v88; // [rsp+74h] [rbp-214h]
  char v89; // [rsp+76h] [rbp-212h]
  char *v90; // [rsp+80h] [rbp-208h] BYREF
  __int64 v91; // [rsp+88h] [rbp-200h]
  __int128 v92; // [rsp+90h] [rbp-1F8h]
  _BYTE *v93; // [rsp+A0h] [rbp-1E8h]
  char v94; // [rsp+A8h] [rbp-1E0h]
  int v95; // [rsp+ACh] [rbp-1DCh]
  unsigned int *v96; // [rsp+B0h] [rbp-1D8h]
  __int64 (__fastcall **v97)(); // [rsp+C0h] [rbp-1C8h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-1C0h]
  __int128 v99; // [rsp+D0h] [rbp-1B8h]
  unsigned __int8 *v100; // [rsp+E0h] [rbp-1A8h] BYREF
  char v101; // [rsp+E8h] [rbp-1A0h]
  int v102; // [rsp+ECh] [rbp-19Ch]
  unsigned int *v103; // [rsp+F0h] [rbp-198h]
  char v104; // [rsp+138h] [rbp-150h]
  unsigned int v105; // [rsp+140h] [rbp-148h]
  char v106; // [rsp+144h] [rbp-144h]
  unsigned __int64 v107; // [rsp+150h] [rbp-138h]
  __int128 v108; // [rsp+158h] [rbp-130h]
  unsigned int v109; // [rsp+168h] [rbp-120h] BYREF
  char v110; // [rsp+16Ch] [rbp-11Ch]
  void *v111; // [rsp+1A0h] [rbp-E8h]
  signed __int64 v112; // [rsp+1A8h] [rbp-E0h]
  __int64 v113; // [rsp+1B0h] [rbp-D8h]
  _DWORD v114[4]; // [rsp+1B8h] [rbp-D0h] BYREF
  char v115; // [rsp+1C8h] [rbp-C0h]
  unsigned __int64 v116; // [rsp+1D0h] [rbp-B8h]
  __int128 v117; // [rsp+1D8h] [rbp-B0h]
  unsigned int v118; // [rsp+1E8h] [rbp-A0h] BYREF
  char v119; // [rsp+1ECh] [rbp-9Ch]
  void *ptr; // [rsp+220h] [rbp-68h]
  signed __int64 v121; // [rsp+228h] [rbp-60h]
  __int64 v122; // [rsp+230h] [rbp-58h]
  _DWORD v123[4]; // [rsp+238h] [rbp-50h] BYREF
  char v124; // [rsp+248h] [rbp-40h]
  char v125; // [rsp+268h] [rbp-20h] BYREF

  v4 = sub_BFBAE0(*(_QWORD *)(a2 + 16));
  v5 = sub_BFBAE0(*(_QWORD *)(a2 + 24));
  if ( (*(_WORD *)v4 & 0x1FF) != 0x73
    || (v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v13 + 16) != 13)
    || ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) != 0x1B4 )
  {
    if ( (*(_WORD *)v5 & 0x1FF) != 0x73
      || (v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v6 + 16) != 13)
      || ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) != 0x1B4 )
    {
      if ( sub_1837860(v4) || sub_1837860(v5) )
      {
        v110 &= ~1u;
        v9 = &v109;
        v119 &= ~1u;
        v111 = v114;
        ptr = v123;
        v107 = v4;
        v109 = 0;
        v114[3] = 0;
        v112 = 0;
        v113 = 12;
        v115 = 0;
        v116 = v5;
        v118 = 0;
        v123[3] = 0;
        v121 = 0;
        v122 = 12;
        v124 = 0;
        v72 = (unsigned int *)&v125;
        v108 = 0;
        v117 = 0;
        do
        {
          v10 = *((_QWORD *)v9 - 3);
          sub_C3D370(v10, (__int64)(v9 - 4), *(_QWORD *)(a1 + 248), 1, v7, v8);
          v8 = *(_QWORD *)(v10 + 8);
          v7 = *(_QWORD *)(a1 + 248);
          if ( *v9 <= 1 )
          {
LABEL_11:
            v12 = 0;
          }
          else
          {
            switch ( *v9 )
            {
              case 2u:
                v25 = v8 & 0xFFFFFFFFFFFFFFF0LL;
                v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v26 + 16) == 13 && ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) == 0x1B4 )
                {
                  if ( *((_BYTE *)v9 + 20) )
                  {
                    v65 = *((_QWORD **)v9 + 1);
                    if ( v9[4] > 0x40 )
                      v65 = (_QWORD *)*v65;
                    v74 = (__int64)v65;
LABEL_48:
                    LODWORD(v98) = 2;
                    v101 = 0;
                    v97 = &off_2BEBEE0;
                    v102 = 1;
                    v100 = nullptr;
                    v99 = 0;
                    v103 = v9 + 14;
                    sub_227B8B0(&v97, 0, 0, 0);
                    v21 = "false";
                    if ( v74 )
                      v21 = "true";
                  }
                  else
                  {
                    v27 = v9[4];
                    v28 = *((__int64 **)v9 + 1);
                    if ( v27 > 0x40 )
                    {
                      v74 = *v28;
                      goto LABEL_48;
                    }
                    if ( v27 )
                    {
                      v74 = (__int64)((_QWORD)v28 << (64 - (unsigned __int8)v27)) >> (64 - (unsigned __int8)v27);
                      goto LABEL_48;
                    }
                    LODWORD(v98) = 2;
                    v101 = 0;
                    v102 = 1;
                    v100 = nullptr;
                    v99 = 0;
                    v97 = &off_2BEBEE0;
                    v103 = v9 + 14;
                    sub_227B8B0(&v97, 0, 0, 0);
                    v21 = "false";
                  }
LABEL_35:
                  sub_995540((__int64)&v97, v21);
                  v12 = 1;
                  v97 = (__int64 (__fastcall **)())&unk_2C76288;
                  sub_227B7A0(&v97);
                  break;
                }
                v79 = *(_QWORD *)(v10 + 8);
                v77 = *(_QWORD *)(a1 + 248);
                v90 = (char *)&off_2BEBEE0;
                v75 = &v90;
                LODWORD(v91) = 2;
                v94 = 0;
                v95 = 1;
                v93 = nullptr;
                v92 = 0;
                v96 = v9 + 14;
                sub_227B8B0(&v90, 0, 0, 0);
                v34 = *(_QWORD *)(*(_QWORD *)v25 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
                v35 = *(_QWORD *)v34;
                if ( *(_BYTE *)(*(_QWORD *)v34 + 16LL) == 13
                  && (v36 = *(unsigned __int16 *)(v35 + 18),
                      LOWORD(v36) = (unsigned __int16)v36 >> 3,
                      v37 = (unsigned int)(v36 + 75),
                      LOWORD(v37) = v37 & 0x1FF,
                      (unsigned __int16)v37 <= 0xDu)
                  && ((1LL << v37) & 0x283D) != 0 )
                {
                  v83 = sub_AAC1F0(v77, v79, v33, v37, v77);
                  v38 = *((_QWORD **)v9 + 1);
                  if ( v9[4] > 0x40 )
                    v38 = (_QWORD *)*v38;
                  v78 = v38;
                  v80 = (unsigned int)v38;
                  switch ( ((*(_WORD *)(v35 + 18) >> 3) + 75) & 0x1FF )
                  {
                    case 0:
                    case 0xB:
                      break;
                    case 1:
                    case 2:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xA:
                    case 0xC:
                    case 0xD:
                      v53 = v93;
                      if ( (unsigned __int64)v93 >= *((_QWORD *)&v92 + 1) )
                      {
                        sub_227BA10(&v90, 76);
                      }
                      else
                      {
                        ++v93;
                        *v53 = 76;
                      }
                      break;
                    case 3:
                      sub_995540((__int64)&v90, "u8");
                      break;
                    case 4:
                      v63 = v93;
                      if ( (unsigned __int64)v93 >= *((_QWORD *)&v92 + 1) )
                      {
                        sub_227BA10(&v90, 117);
                      }
                      else
                      {
                        ++v93;
                        *v63 = 117;
                      }
                      break;
                    case 5:
                      v64 = v93;
                      if ( (unsigned __int64)v93 >= *((_QWORD *)&v92 + 1) )
                      {
                        sub_227BA10(&v90, 85);
                      }
                      else
                      {
                        ++v93;
                        *v64 = 85;
                      }
                      break;
                  }
                  v54 = v93;
                  if ( (unsigned __int64)v93 >= *((_QWORD *)&v92 + 1) )
                  {
                    sub_227BA10(&v90, 39);
                  }
                  else
                  {
                    ++v93;
                    *v54 = 39;
                  }
                  v85 = v84;
                  v55 = *(_WORD *)(v35 + 18);
                  LODWORD(v98) = 2;
                  v101 = 0;
                  v102 = 1;
                  v82 = (v55 >> 3) & 0x1FF;
                  v100 = nullptr;
                  v103 = v9 + 14;
                  v97 = &off_2BEBEE0;
                  v99 = 0u;
                  sub_227B8B0(&v97, 0, 0, 0);
                  v81 = (__int64 (__fastcall **)())(unsigned int)v78;
                  if ( v82 == 437 || ((v82 + 72) & 0x1F7) == 0 || v80 <= 0x7F )
                  {
                    switch ( v80 )
                    {
                      case 7u:
                        v66 = j__strlen("\\a");
                        v67 = "\\a";
                        goto LABEL_100;
                      case 8u:
                        v66 = j__strlen("\\b");
                        v67 = "\\b";
                        goto LABEL_100;
                      case 9u:
                        v66 = j__strlen("\\t");
                        v67 = "\\t";
                        goto LABEL_100;
                      case 0xAu:
                        v66 = j__strlen("\\n");
                        v67 = "\\n";
                        goto LABEL_100;
                      case 0xBu:
                        v66 = j__strlen("\\v");
                        v67 = "\\v";
                        goto LABEL_100;
                      case 0xCu:
                        v66 = j__strlen("\\f");
                        v67 = "\\f";
                        goto LABEL_100;
                      case 0xDu:
                        v66 = j__strlen("\\r");
                        v67 = "\\r";
                        goto LABEL_100;
                      case 0x27u:
                        v66 = j__strlen("\\'");
                        v67 = "\\'";
                        goto LABEL_100;
                      case 0x5Cu:
                        v66 = j__strlen("\\\\");
                        v67 = "\\\\";
LABEL_100:
                        if ( !v66 )
                          goto LABEL_101;
                        sub_FC7840((unsigned __int8 *)v67, v66, (_QWORD *)v9 + 7);
                        break;
                      default:
LABEL_101:
                        v68 = v100;
                        if ( (unsigned __int64)v100 >= *((_QWORD *)&v99 + 1) )
                        {
                          sub_227BA10(&v97, (unsigned __int8)v80);
                        }
                        else
                        {
                          ++v100;
                          *v68 = (unsigned __int8)v78;
                        }
                        break;
                    }
                  }
                  else if ( (unsigned __int8)sub_2219190(v80, &v85) )
                  {
                    sub_FC7840(v84, v85 - v84, (_QWORD *)v9 + 7);
                  }
                  else
                  {
                    v69 = sub_995540((__int64)&v97, "\\x");
                    v88 = 257;
                    v86[0] = (unsigned int)v78;
                    v86[1] = 0;
                    v89 = 0;
                    v87 = v83 >> 2;
                    sub_227CEF0(v69, v86, v83 >> 2, v70, 257, v71, v72, &v90, v78);
                  }
                  v97 = (__int64 (__fastcall **)())&unk_2C76288;
                  sub_227B7A0(&v97);
                  v56 = sub_995540((__int64)v75, "' (0x");
                  WORD2(v99) = 257;
                  v97 = v81;
                  v98 = 0;
                  LODWORD(v99) = 2;
                  BYTE6(v99) = 0;
                  v60 = sub_227CEF0(v56, &v97, v81, v57, v58, v59, v72, v75, v78);
                  v61 = sub_995540(v60, ", ");
                  sub_220C370(v9 + 2, v61, *((_BYTE *)v9 + 20) ^ 1u);
                  v62 = *(_BYTE **)(v61 + 32);
                  if ( (unsigned __int64)v62 >= *(_QWORD *)(v61 + 24) )
                  {
                    sub_227BA10(v61, 41);
                  }
                  else
                  {
                    *(_QWORD *)(v61 + 32) = v62 + 1;
                    *v62 = 41;
                  }
                  v12 = 1;
                  v90 = (char *)&unk_2C76288;
                  sub_227B7A0(v76);
                }
                else
                {
                  v12 = 1;
                  sub_220BA90((_DWORD)v9 + 8, (_DWORD)v9 + 56, 10, *((_BYTE *)v9 + 20) ^ 1, 0, 1, 0);
                  v90 = (char *)&unk_2C76288;
                  sub_227B7A0(&v90);
                }
                break;
              case 3u:
                v23 = v9 + 14;
                v24 = v9 + 2;
                if ( *((_QWORD *)v9 + 1) == sub_21F90D0(v10, v9 - 4, v11) )
                  sub_2204E00(v24, v23, 0, 3, 1);
                else
                  sub_2203EA0(v24, v23, 0, 3, 1);
                v12 = 1;
                break;
              case 5u:
                LODWORD(v98) = 2;
                v101 = 0;
                v97 = &off_2BEBEE0;
                v102 = 1;
                v100 = nullptr;
                v99 = 0;
                v103 = v9 + 14;
                sub_227B8B0(&v97, 0, 0, 0);
                v22 = v100;
                if ( (unsigned __int64)v100 >= *((_QWORD *)&v99 + 1) )
                {
                  sub_227BA10(&v97, 40);
                }
                else
                {
                  ++v100;
                  *v22 = 40;
                }
                sub_220BA90((_DWORD)v9 + 8, (_DWORD)v9 + 56, 10, *((_BYTE *)v9 + 20) ^ 1, 0, 1, 0);
                sub_995540((__int64)&v97, " + ");
                sub_220BA90((_DWORD)v9 + 24, (_DWORD)v9 + 56, 10, *((_BYTE *)v9 + 36) ^ 1, 0, 1, 0);
                sub_995540((__int64)&v97, "i)");
                v12 = 1;
                v97 = (__int64 (__fastcall **)())&unk_2C76288;
                sub_227B7A0(&v97);
                break;
              case 6u:
                v14 = 0;
                LODWORD(v98) = 2;
                v101 = 0;
                v97 = &off_2BEBEE0;
                v102 = 1;
                v100 = nullptr;
                v99 = 0;
                v103 = v9 + 14;
                sub_227B8B0(&v97, 0, 0, 0);
                v15 = v100;
                if ( (unsigned __int64)v100 >= *((_QWORD *)&v99 + 1) )
                {
                  v14 = 40;
                  sub_227BA10(&v97, 40);
                }
                else
                {
                  v16 = ++v100;
                  *v15 = 40;
                }
                v17 = v9 + 2;
                v73 = sub_21F90D0(&v97, v14, v16);
                v18 = v9 + 14;
                if ( *((_QWORD *)v9 + 1) == v73 )
                  sub_2204E00(v17, v18, 0, 3, 1);
                else
                  sub_2203EA0(v17, v18, 0, 3, 1);
                sub_995540((__int64)&v97, " + ");
                v19 = v9 + 8;
                v20 = v9 + 14;
                if ( *((_QWORD *)v9 + 4) == v73 )
                  sub_2204E00(v19, v20, 0, 3, 1);
                else
                  sub_2203EA0(v19, v20, 0, 3, 1);
                v21 = "i)";
                goto LABEL_35;
              case 7u:
                v12 = sub_A510C0((__int64)v9);
                if ( !v12 )
                  goto LABEL_11;
                v103 = v9 + 14;
                v99 = 0;
                v97 = &off_2BEBEE0;
                LODWORD(v98) = 2;
                v101 = 0;
                v102 = 1;
                v100 = nullptr;
                sub_227B8B0(&v97, 0, 0, 0);
                sub_995540((__int64)&v97, "nullptr");
                v97 = (__int64 (__fastcall **)())&unk_2C76288;
                sub_227B7A0(&v97);
                break;
              default:
                goto LABEL_11;
            }
          }
          *((_BYTE *)v9 + 96) = v12;
          v9 += 32;
        }
        while ( v72 != v9 );
        if ( v115 && v124 )
        {
          sub_168B9F0((__int64)&v97, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 4), 0x1752u, 0);
          if ( v104 )
          {
            sub_AEC220(&v100, v111, v112);
          }
          else if ( v106 )
          {
            v50 = sub_168B9E0(&v97);
            v51 = (char *)v99;
            if ( (_QWORD)v99 )
              v51 = (char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v99 + 32LL))(v99);
            v90 = v51;
            v52 = sub_1587BC0(v50, (__int64 *)&v90, v46, v47, v48, v49);
            sub_AEC220((unsigned __int8 **)(*v52 + 32LL * v105 + 8), v111, v112);
          }
          v29 = &v90;
          v90 = sub_BFA720((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
          v91 = v30;
          v31 = sub_166BAF0((__int64)&v97, (__int64)&v90);
          v32 = v31;
          if ( *(_BYTE *)(v31 + 120) )
          {
            v29 = (char **)ptr;
            sub_AEC220((unsigned __int8 **)(v31 + 32), ptr, v121);
          }
          else if ( *(_BYTE *)(v31 + 132) )
          {
            v43 = sub_168B9E0((_QWORD *)v31);
            v44 = *(_QWORD *)(v32 + 16);
            if ( v44 )
              v44 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 32LL))(*(_QWORD *)(v32 + 16));
            v86[0] = v44;
            v45 = sub_1587BC0(v43, v86, v39, v40, v41, v42);
            v29 = (char **)ptr;
            sub_AEC220((unsigned __int8 **)(*v45 + 32LL * *(unsigned int *)(v32 + 128) + 8), ptr, v121);
          }
          v86[0] = sub_EEC8C0(a2, (__int64)v29, 0.0);
          sub_1587DB0(v32, v86);
          sub_15F7200(&v97);
        }
        if ( ptr != v123 )
          free(ptr);
        if ( v118 > 1 )
          sub_A4F8E0((int *)&v118);
        if ( v111 != v114 )
          free(v111);
        if ( v109 > 1 )
          sub_A4F8E0((int *)&v109);
      }
    }
  }
}
