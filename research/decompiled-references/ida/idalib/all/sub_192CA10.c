__int64 __fastcall sub_192CA10(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned __int64 a10,
        unsigned int a11,
        unsigned __int8 a12,
        unsigned __int8 a13)
{
  __int64 v16; // r12
  unsigned __int64 v17; // r15
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  unsigned __int64 *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rcx
  char v27; // al
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rcx
  char v32; // al
  __int64 v33; // rdx
  unsigned __int8 v34; // al
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rsi
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  __int64 v43; // rax
  _WORD *v44; // rbx
  unsigned __int64 *v45; // rbx
  char **v46; // r12
  char **v47; // rbp
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rsi
  __int64 v53; // rcx
  char v54; // al
  __int64 v55; // rdx
  unsigned __int8 v56; // al
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r15
  __int64 v60; // rcx
  char v61; // al
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  char v64; // al
  unsigned __int64 v65; // rax
  unsigned __int64 *v66; // rax
  unsigned __int64 *v67; // rcx
  unsigned __int64 **v68; // rax
  __int64 v69; // rax
  __int64 v70; // r15
  _QWORD *v71; // rdi
  unsigned __int64 v72; // rax
  _WORD *v73; // rax
  unsigned __int64 *v74; // rax
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rax
  unsigned __int64 *v78; // rax
  unsigned __int64 **v79; // rax
  unsigned __int64 *v80; // rax
  unsigned __int64 *v81; // rax
  unsigned __int64 *v82; // rax
  unsigned __int64 **v83; // rax
  unsigned __int64 *v84; // rax
  unsigned __int64 *v85; // rcx
  unsigned __int64 *v86; // rax
  unsigned __int64 *v87; // rax
  unsigned __int8 v88; // bl
  char **v89; // rbp
  char *v90; // rdx
  unsigned __int64 v91; // rax
  unsigned __int64 *v92; // rax
  __int64 v93; // [rsp+8h] [rbp-C0h]
  unsigned __int8 v94; // [rsp+8h] [rbp-C0h]
  unsigned int v96; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v97; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v98; // [rsp+30h] [rbp-98h]
  unsigned int v99; // [rsp+40h] [rbp-88h]
  char v100; // [rsp+45h] [rbp-83h]
  _QWORD *v101; // [rsp+48h] [rbp-80h]
  _QWORD *v102; // [rsp+48h] [rbp-80h]
  _WORD *v103; // [rsp+58h] [rbp-70h] BYREF
  __int64 (__fastcall **v104)(); // [rsp+60h] [rbp-68h] BYREF
  __int64 v105; // [rsp+68h] [rbp-60h]
  _WORD **v106; // [rsp+70h] [rbp-58h]
  int v107; // [rsp+78h] [rbp-50h]
  unsigned __int64 v108; // [rsp+80h] [rbp-48h]

  v96 = a2;
  v99 = *(unsigned __int16 *)(a4 + 22);
  if ( (unsigned int)a5 < v99 )
  {
    v16 = (unsigned int)a5;
    v17 = 0;
    while ( 1 )
    {
      v18 = 0;
      v93 = *(_QWORD *)(a4 + 8 * v16 + 48);
      if ( a3 )
        v18 = *(_QWORD *)(*(_QWORD *)(a3 + 120) + 8 * v16);
      if ( a10 <= v17 )
      {
        v57 = sub_190FB60((__int64)a1, v96, a3, v18, nullptr, *(double *)a7.m128_u64, a8);
        if ( v57 == 1 )
          return 1;
        v42 = v57 & 0xFFFFFFFFFFFFFFFELL;
        v103 = (_WORD *)(v57 & 0xFFFFFFFFFFFFFFFELL);
        goto LABEL_42;
      }
      v98 = v17 + 1;
      v103 = *(_WORD **)(a9 + 8 * v17);
      v19 = (unsigned int)sub_EEB7E0((unsigned __int64)v103, a2, *(double *)a7.m128_u64);
      LODWORD(v105) = 3380;
      v104 = off_2BC64D8;
      v106 = &v103;
      v100 = sub_1E63C20(a1, v19, v93, 1, &v104);
      if ( v100 )
        return 1;
      v23 = a1[31];
      if ( *(_QWORD *)(v23 + 19128) != *((_QWORD *)v103 + 1) )
      {
        if ( (*(_BYTE *)(a1[29] + 107LL) & 4) == 0 )
          goto LABEL_11;
        if ( !a3 )
          goto LABEL_11;
        v24 = a3;
        if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
          goto LABEL_11;
        goto LABEL_82;
      }
      if ( !a3 )
        goto LABEL_11;
      if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
      {
        v78 = sub_B8C3D0(a3, v19, v23, (__int64)v20, v21, v22);
        v23 = *v78;
        v20 = (unsigned __int64 *)(*v78 + 8LL * *((unsigned int *)v78 + 2));
        if ( *v78 < (unsigned __int64)v20 )
        {
          v81 = (unsigned __int64 *)*v78;
          while ( 1 )
          {
            v23 = *v81;
            if ( *(_WORD *)(*v81 + 36) == 151 )
              break;
            if ( v20 == ++v81 )
              goto LABEL_80;
          }
          if ( v20 == v81 )
            goto LABEL_80;
        }
        else
        {
          if ( (unsigned __int64 *)v23 == v20 )
            goto LABEL_80;
          if ( *(_WORD *)(*v20 + 36) != 151 )
          {
            v79 = (unsigned __int64 **)(v20 + 1);
            do
            {
              v20 = (unsigned __int64 *)v79;
              if ( (unsigned __int64 **)v23 == v79 )
                goto LABEL_80;
              v20 = *v79++;
            }
            while ( *((_WORD *)v20 + 18) != 151 );
          }
        }
        if ( !v18 || (*(_BYTE *)(v18 + 29) & 1) == 0 )
          goto LABEL_116;
        v82 = sub_B8C3D0(v18, v19, v23, (__int64)v20, v21, v22);
        v23 = *v82;
        v20 = (unsigned __int64 *)(*v82 + 8LL * *((unsigned int *)v82 + 2));
        if ( *v82 < (unsigned __int64)v20 )
        {
          v92 = (unsigned __int64 *)*v82;
          while ( 1 )
          {
            v23 = *v92;
            if ( *(_WORD *)(*v92 + 36) == 97 )
              break;
            if ( v20 == ++v92 )
              goto LABEL_116;
          }
          if ( v20 == v92 )
            goto LABEL_116;
        }
        else
        {
          if ( (unsigned __int64 *)v23 == v20 )
            goto LABEL_116;
          if ( *(_WORD *)(*v20 + 36) != 97 )
          {
            v83 = (unsigned __int64 **)(v20 + 1);
            while ( (unsigned __int64 **)v23 != v83 )
            {
              v20 = *v83++;
              if ( *((_WORD *)v20 + 18) == 97 )
                goto LABEL_80;
            }
LABEL_116:
            v19 = (unsigned __int64)v103;
            v103 = (_WORD *)sub_19D0DD0(a1[92]);
            goto LABEL_11;
          }
        }
      }
LABEL_80:
      if ( (*(_BYTE *)(a1[29] + 107LL) & 4) == 0 )
        goto LABEL_11;
      v24 = a3;
      if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
        goto LABEL_11;
LABEL_82:
      v66 = sub_B8C3D0(v24, v19, v23, (__int64)v20, v21, v22);
      v23 = *v66;
      v67 = (unsigned __int64 *)(*v66 + 8LL * *((unsigned int *)v66 + 2));
      if ( *v66 < (unsigned __int64)v67 )
      {
        v80 = (unsigned __int64 *)*v66;
        while ( 1 )
        {
          v23 = *v80;
          if ( *(_WORD *)(*v80 + 36) == 151 )
            break;
          if ( v67 == ++v80 )
            goto LABEL_11;
        }
        if ( v67 == v80 )
          goto LABEL_11;
      }
      else
      {
        if ( (unsigned __int64 *)v23 == v67 )
          goto LABEL_11;
        if ( *(_WORD *)(*v67 + 36) != 151 )
        {
          v68 = (unsigned __int64 **)(v67 + 1);
          while ( (unsigned __int64 **)v23 != v68 )
          {
            v67 = *v68++;
            if ( *((_WORD *)v67 + 18) == 151 )
              goto LABEL_126;
          }
          goto LABEL_11;
        }
      }
LABEL_126:
      if ( !v18 || (*(_BYTE *)(v18 + 29) & 1) == 0 )
        goto LABEL_128;
      v84 = sub_B8C3D0(v18, v19, v23, (__int64)v67, v21, v22);
      v85 = (unsigned __int64 *)*v84;
      v23 = *v84 + 8LL * *((unsigned int *)v84 + 2);
      if ( *v84 >= v23 )
      {
        if ( v85 == (unsigned __int64 *)v23 )
          goto LABEL_128;
        if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 97 )
        {
          v87 = (unsigned __int64 *)(v23 + 8);
          while ( 1 )
          {
            v23 = (unsigned __int64)v87;
            if ( v85 == v87 )
              break;
            v19 = *v87++;
            if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 97 )
              goto LABEL_149;
          }
LABEL_128:
          v100 = 1;
          goto LABEL_11;
        }
      }
      else
      {
        v86 = (unsigned __int64 *)*v84;
        while ( 1 )
        {
          v19 = *v86;
          v85 = v86;
          if ( *(_WORD *)(*v86 + 36) == 97 )
            break;
          if ( (unsigned __int64 *)v23 == ++v86 )
            goto LABEL_128;
        }
      }
LABEL_149:
      v100 = v85 == (unsigned __int64 *)v23;
LABEL_11:
      v25 = *(_QWORD *)(a4 + 16);
      if ( (v25 & 0x20000000) != 0 )
      {
        v26 = 8LL * *(unsigned __int16 *)(a4 + 22) + 48;
        v27 = *(_BYTE *)(a4 + 19);
        v19 = (a4 + v26 + ((SBYTE3(v25) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v28 = (v25 & 0x40000000) != 0;
        if ( (v27 & 0x40) != 0 )
          v28 += (*(_BYTE *)(((a4 + v26 + ((v27 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v29 = v19 + 8 * v28;
        v30 = ((unsigned __int8)v27 >> 1) & 0xF;
        if ( v30 != 2 )
          __asm { jmp     rcx }
        v23 = v29 + 8LL * (*(_WORD *)((a4 + ((SBYTE3(v25) >> 5) & 4) + v26 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
        if ( (*(_BYTE *)(v23 + v16) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 11 )
        {
          v19 = a1[31];
          v73 = sub_BFD8A0(v103, v19, *(double *)a7.m128_u64);
          v23 = (unsigned __int16)*v73;
          LOWORD(v23) = v23 & 0x1FF;
          if ( (_WORD)v23 == 117 )
          {
            *(_BYTE *)(*((_QWORD *)v73 + 2) + 50LL) |= 2u;
            v25 = *(_QWORD *)(a4 + 16);
          }
        }
      }
      if ( (v25 & 0x20000000) != 0 )
      {
        v31 = 8LL * *(unsigned __int16 *)(a4 + 22) + 48;
        v32 = *(_BYTE *)(a4 + 19);
        v19 = (a4 + v31 + ((SBYTE3(v25) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v33 = (v25 & 0x40000000) != 0;
        if ( (v32 & 0x40) != 0 )
          v33 += (*(_BYTE *)(((a4 + v31 + ((v32 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
        v23 = v19 + 8 * v33;
        v34 = ((unsigned __int8)v32 >> 1) & 0xF;
        if ( v34 != 2 )
        {
          v19 = v34;
          switch ( v34 )
          {
            case 0u:
            case 1u:
            case 3u:
            case 4u:
            case 5u:
            case 6u:
            case 7u:
            case 8u:
            case 0xBu:
              switch ( v34 )
              {
                case 6u:
                case 7u:
                case 8u:
                  v23 += 8LL;
                  goto LABEL_25;
                case 9u:
                  goto LABEL_60;
                case 0xAu:
                  goto LABEL_54;
                default:
LABEL_25:
                  switch ( v34 )
                  {
                    case 0u:
                    case 1u:
                    case 3u:
                    case 4u:
                    case 5u:
                    case 6u:
                    case 7u:
                    case 8u:
                    case 0xBu:
                      goto LABEL_27;
                    case 9u:
                      goto LABEL_60;
                    case 0xAu:
                      goto LABEL_54;
                    default:
                      goto LABEL_168;
                  }
              }
            case 9u:
LABEL_60:
              v35 = v16 + 8;
              goto LABEL_28;
            case 0xAu:
LABEL_54:
              if ( (*(_BYTE *)(v23 + v16 + 16) & 0xF) != 5 )
                goto LABEL_55;
              goto LABEL_29;
            default:
LABEL_168:
              BUG();
          }
        }
        v23 += 8LL * (*(_WORD *)((a4 + ((SBYTE3(v25) >> 5) & 4) + v31 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_27:
        v35 = v16;
LABEL_28:
        if ( (*(_BYTE *)(v23 + v35) & 0xF) == 5 )
          goto LABEL_29;
      }
LABEL_55:
      if ( (v25 & 0x20000000) == 0 )
        goto LABEL_31;
      v53 = 8LL * *(unsigned __int16 *)(a4 + 22) + 48;
      v54 = *(_BYTE *)(a4 + 19);
      v19 = (a4 + v53 + ((SBYTE3(v25) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v55 = (v25 & 0x40000000) != 0;
      if ( (v54 & 0x40) != 0 )
        v55 += (*(_BYTE *)(((a4 + v53 + ((v54 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v23 = v19 + 8 * v55;
      v56 = ((unsigned __int8)v54 >> 1) & 0xF;
      if ( v56 != 2 )
      {
        v19 = v56;
        switch ( v56 )
        {
          case 0u:
          case 1u:
          case 3u:
          case 4u:
          case 5u:
          case 6u:
          case 7u:
          case 8u:
          case 0xBu:
            switch ( v56 )
            {
              case 6u:
              case 7u:
              case 8u:
                v23 += 8LL;
                goto LABEL_65;
              case 9u:
                goto LABEL_76;
              case 0xAu:
                goto LABEL_75;
              default:
LABEL_65:
                switch ( v56 )
                {
                  case 0u:
                  case 1u:
                  case 3u:
                  case 4u:
                  case 5u:
                  case 6u:
                  case 7u:
                  case 8u:
                  case 0xBu:
                    goto LABEL_67;
                  case 9u:
                    goto LABEL_76;
                  case 0xAu:
                    goto LABEL_75;
                  default:
                    goto LABEL_168;
                }
            }
          case 9u:
LABEL_76:
            v58 = v16 + 8;
            goto LABEL_68;
          case 0xAu:
LABEL_75:
            v58 = v16 + 16;
            goto LABEL_68;
          default:
            goto LABEL_168;
        }
      }
      v23 += 8LL * (*(_WORD *)((a4 + ((SBYTE3(v25) >> 5) & 4) + v53 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_67:
      v58 = v16;
LABEL_68:
      if ( (*(_BYTE *)(v23 + v58) & 0xF) == 6 )
      {
LABEL_29:
        v19 = v18;
        v36 = sub_1A02500(a1[85], v18, v103);
        if ( v36 == 1 )
          return 1;
        v103 = (_WORD *)(v36 & 0xFFFFFFFFFFFFFFFELL);
LABEL_31:
        if ( !v18 )
          goto LABEL_70;
        goto LABEL_32;
      }
      if ( !v18 )
      {
LABEL_70:
        v59 = *(_QWORD *)(a4 + 16);
        if ( (v59 & 0x20000000) != 0 )
        {
          v60 = 8LL * *(unsigned __int16 *)(a4 + 22) + 48;
          v61 = *(_BYTE *)(a4 + 19);
          v62 = (v59 & 0x40000000) != 0;
          if ( (v61 & 0x40) != 0 )
            v62 += (*(_BYTE *)(((a4 + v60 + ((v61 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
          v63 = ((a4 + v60 + ((SBYTE3(v59) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v62;
          v64 = ((unsigned __int8)v61 >> 1) & 0xF;
          if ( v64 != 2 )
          {
            switch ( v64 )
            {
              case 0:
              case 1:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 11:
                switch ( v64 )
                {
                  case 6:
                  case 7:
                  case 8:
                    v63 += 8LL;
                    goto LABEL_91;
                  case 9:
                    goto LABEL_135;
                  case 10:
                    goto LABEL_134;
                  default:
LABEL_91:
                    switch ( v64 )
                    {
                      case 0:
                      case 1:
                      case 3:
                      case 4:
                      case 5:
                      case 6:
                      case 7:
                      case 8:
                      case 11:
                        goto LABEL_93;
                      case 9:
                        goto LABEL_135;
                      case 10:
                        goto LABEL_134;
                      default:
                        goto LABEL_168;
                    }
                }
              case 9:
LABEL_135:
                v69 = v16 + 8;
                goto LABEL_94;
              case 10:
LABEL_134:
                v69 = v16 + 16;
                goto LABEL_94;
              default:
                goto LABEL_168;
            }
          }
          v63 += 8LL * (*(_WORD *)((a4 + ((SBYTE3(v59) >> 5) & 4) + v60 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_93:
          v69 = v16;
LABEL_94:
          v70 = 4LL * ((*(_BYTE *)(v63 + v69) & 0x10) != 0);
        }
        else
        {
          v70 = 0;
        }
        v71 = (_QWORD *)a1[31];
        v105 = 0;
        v107 = 0;
        LODWORD(v104) = 1;
        v72 = sub_A73320(v71, v93);
        v108 = v70;
        v106 = (_WORD **)v72;
        goto LABEL_38;
      }
LABEL_32:
      v37 = (_QWORD *)a1[31];
      if ( (*(_BYTE *)(v37[290] + 107LL) & 4) != 0 && (*(_BYTE *)(v18 + 29) & 1) != 0 )
      {
        v102 = (_QWORD *)a1[31];
        v74 = sub_B8C3D0(v18, v19, v23, (__int64)v37, v21, v22);
        v37 = v102;
        v75 = *v74;
        v76 = *v74 + 8LL * *((unsigned int *)v74 + 2);
        if ( v75 < v76 )
        {
          v23 = v75;
          while ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 99 )
          {
            v23 += 8LL;
            if ( v76 == v23 )
              goto LABEL_34;
          }
          v38 = 4LL * (v23 != v76);
          goto LABEL_35;
        }
        if ( v75 != v76 )
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)v76;
            if ( *(_WORD *)(*(_QWORD *)v76 + 36LL) == 99 )
              break;
            v76 += 8LL;
            if ( v75 == v76 )
              goto LABEL_34;
          }
          v38 = 4LL * (v75 != v76);
          goto LABEL_35;
        }
      }
LABEL_34:
      v38 = 0;
LABEL_35:
      v107 = 0;
      v105 = 0;
      LODWORD(v104) = 1;
      v39 = *(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v39 + 8) & 0xF) != 0 )
      {
        v101 = v37;
        v65 = sub_F64F00(v93, v39, v23, (__int64)v37, v21);
        v37 = v101;
        v40 = v65 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v40 = v39 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v106 = (_WORD **)sub_A73320(v37, v40);
      v108 = v18 & 0xFFFFFFFFFFFFFFFBLL | v38;
LABEL_38:
      if ( v100 )
        LODWORD(v104) = 19;
      v41 = sub_1A24E20(a1, &v104, 0, v103, a13, a12);
      if ( v41 == 1 )
        return 1;
      v17 = v98;
      v103 = (_WORD *)(v41 & 0xFFFFFFFFFFFFFFFELL);
      v42 = v41 & 0xFFFFFFFFFFFFFFFELL;
LABEL_42:
      sub_16C6F10((__int64)a1, v42, *(double *)a7.m128_u64);
      a2 = v96;
      sub_18D51B0(a1, v96, v18, (unsigned __int64)v103, *(double *)a7.m128_u64);
      v43 = *(unsigned int *)(a6 + 8);
      v44 = v103;
      if ( v43 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
      {
        a2 = a6 + 16;
        ++v16;
        sub_2237220(a6, a6 + 16, v43 + 1, 8);
        *(_QWORD *)(*(_QWORD *)a6 + 8LL * (unsigned int)(*(_DWORD *)(a6 + 8))++) = v44;
        if ( v99 <= (unsigned int)v16 )
          goto LABEL_44;
      }
      else
      {
        ++v16;
        *(_QWORD *)(*(_QWORD *)a6 + 8 * v43) = v103;
        ++*(_DWORD *)(a6 + 8);
        if ( v99 <= (unsigned int)v16 )
          goto LABEL_44;
      }
    }
  }
  v17 = 0;
LABEL_44:
  if ( a11 == 4 )
    return 0;
  v45 = (unsigned __int64 *)(a9 + 8 * v17);
  v46 = (char **)(a9 + 8 * a10);
  if ( *(_QWORD *)(a4 + 24) != *(_QWORD *)(a1[31] + 19104LL) || !a3 || !(unsigned __int8)sub_B82220(a3) )
  {
    if ( v45 != (unsigned __int64 *)v46 )
    {
      v94 = 0;
      v47 = (char **)(a9 + 8 * v17);
      do
      {
        v48 = sub_192BE00((__int64)a1, *v47, a11, (__int64 *)a3, a5, a6, a7, a8);
        v49 = *(unsigned int *)(a6 + 8);
        v94 |= v48 == 1;
        v50 = v48 & 0xFFFFFFFFFFFFFFFELL;
        if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(a6 + 12) )
        {
          v97 = v50;
          sub_2237220(a6, a6 + 16, v49 + 1, 8);
          v49 = *(unsigned int *)(a6 + 8);
          v51 = *(_QWORD *)a6;
          v50 = v97;
        }
        else
        {
          v51 = *(_QWORD *)a6;
        }
        ++v47;
        *(_QWORD *)(v51 + 8 * v49) = v50;
        ++*(_DWORD *)(a6 + 8);
      }
      while ( v46 != v47 );
      goto LABEL_52;
    }
    return 0;
  }
  if ( v45 == (unsigned __int64 *)v46 )
    return 0;
  v88 = 0;
  v89 = (char **)(a9 + 8 * v17);
  do
  {
    v90 = *v89;
    v104 = nullptr;
    v91 = sub_1924920((__int64)a1, v96, v90, (__int64 *)&v104, a7, a8);
    ++v89;
    v88 |= v91 == 1;
    sub_14B7B40(a6, v91 & 0xFFFFFFFFFFFFFFFELL);
  }
  while ( v46 != v89 );
  v94 = v88;
  v45 = (unsigned __int64 *)(a9 + 8 * v17);
  do
  {
LABEL_52:
    v52 = *v45++;
    sub_16C6F10((__int64)a1, v52, *(double *)a7.m128_u64);
  }
  while ( v46 != (char **)v45 );
  return v94;
}
