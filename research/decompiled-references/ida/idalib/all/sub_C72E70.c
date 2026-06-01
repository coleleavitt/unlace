__int64 __fastcall sub_C72E70(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v7; // ax
  unsigned int v8; // r14d
  int v10; // edx
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 *v20; // rbp
  _DWORD *v21; // rax
  __int64 v22; // rsi
  __int64 *v23; // r13
  char v24; // al
  __int64 v25; // rbx
  unsigned int v26; // eax
  __int64 *v27; // rbp
  __int64 v28; // rax
  int v29; // esi
  __int64 *v30; // r14
  _WORD *v31; // rdx
  __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 *v37; // rbx
  unsigned __int8 **v38; // rax
  __int64 v39; // rbp
  int v40; // esi
  __int64 v41; // r12
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rbp
  int v45; // esi
  __int64 v46; // r12
  __int64 v47; // rax
  unsigned int v48; // eax
  _QWORD *v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rbp
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _BYTE *v56; // r12
  __int64 *v57; // rax
  __int64 v58; // rdx
  unsigned __int64 *v59; // r13
  __int64 v60; // rbp
  __int64 *v61; // r11
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  _QWORD *v66; // r14
  __int64 v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rsi
  _WORD *v70; // rax
  __int64 v71; // r8
  unsigned __int16 v72; // dx
  bool v73; // zf
  __int64 *v74; // rax
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rcx
  char v78; // dl
  __int64 v79; // rbx
  __int64 *v80; // rdx
  char v81; // bp
  __int64 v82; // rbx
  void *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  unsigned __int8 **v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  _BYTE *v91; // rax
  __int64 *v92; // rcx
  __int64 *v93; // rdx
  __int64 v94; // rsi
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned __int64 v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // rax
  unsigned int v100; // eax
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rcx
  __int64 v104; // r8
  int v105; // r9d
  __int64 *v106; // rbp
  int v107; // edx
  __int64 v108; // rsi
  unsigned int v109; // eax
  int v110; // ecx
  int v111; // [rsp+0h] [rbp-108h]
  unsigned __int64 v112; // [rsp+0h] [rbp-108h]
  __int64 v113; // [rsp+8h] [rbp-100h]
  __int64 v114; // [rsp+8h] [rbp-100h]
  __int64 v115; // [rsp+8h] [rbp-100h]
  char v116; // [rsp+10h] [rbp-F8h]
  char v117; // [rsp+10h] [rbp-F8h]
  __int64 v118; // [rsp+10h] [rbp-F8h]
  __int64 *v119; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v120; // [rsp+28h] [rbp-E0h]
  __int64 v121[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v122; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE *v123; // [rsp+48h] [rbp-C0h]
  __int64 v124; // [rsp+50h] [rbp-B8h]
  char v125; // [rsp+58h] [rbp-B0h]
  __int64 v126; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v128; // [rsp+78h] [rbp-90h]
  _BYTE v129[136]; // [rsp+80h] [rbp-88h] BYREF

  while ( 2 )
  {
    while ( 2 )
    {
      v7 = *(_WORD *)a2 & 0x1FF;
      if ( v7 <= 0x75u )
      {
        if ( v7 == 4 )
        {
          a3 = *(_BYTE *)(a2 + 2) >> 3;
          switch ( (char)a3 )
          {
            case 0:
            case 1:
              return (unsigned int)sub_C658E0((__int64 **)a1, a2);
            case 2:
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
              return (unsigned int)sub_C744C0(a1, a2);
            case 6:
            case 12:
LABEL_7:
              a2 = *(_QWORD *)(a2 + 16);
              continue;
            default:
              a3 = *(_BYTE *)(a2 + 2) >> 3;
              goto LABEL_6;
          }
        }
      }
      else if ( v7 <= 0x77u )
      {
        a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
        switch ( (char)a3 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
          case 31:
          case 32:
            return (unsigned int)sub_C72C50(a1, a2, a3, a4, a5, a6);
          default:
            a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
            goto LABEL_6;
        }
      }
      break;
    }
LABEL_6:
    switch ( (v7 + 509) & 0x1FF )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 6:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0x10:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2C:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x35:
      case 0x37:
      case 0x38:
      case 0x3B:
      case 0x3C:
      case 0x3E:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x4B:
      case 0x5B:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
      case 0x60:
      case 0x63:
      case 0x64:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6E:
      case 0x6F:
      case 0x70:
      case 0x72:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7C:
        return (unsigned int)sub_C14310(*a1, a2);
      case 1:
        return (unsigned int)sub_C744C0(a1, a2);
      case 5:
      case 0x62:
        goto LABEL_7;
      case 7:
        v23 = (__int64 *)*a1;
        v8 = 1;
        v24 = *(_BYTE *)(*a1 + 915LL);
        *(_BYTE *)(*a1 + 915LL) = 0;
        v25 = *(_QWORD *)(a2 + 16);
        v117 = v24;
        if ( !*(_DWORD *)(v25 + 4) )
          goto LABEL_38;
        v26 = *((_DWORD *)v23 + 68);
        v119 = v23;
        v27 = (__int64 *)(v25 + 16);
        v120 = v26;
        v28 = v23[4];
        v29 = *(_DWORD *)(v28 + 160) + 1;
        *(_DWORD *)(v28 + 160) = v29;
        sub_9B7040(v28 + 136, v29);
        v114 = v25 + 8LL * *(unsigned int *)(v25 + 4) + 16;
        if ( v114 == v25 + 24 )
          goto LABEL_35;
        v30 = (__int64 *)(v25 + 24);
        while ( 1 )
        {
          v31 = (_WORD *)*(v30 - 1);
          v32 = *a1;
          v27 = v30;
          v121[0] = (__int64)&v122;
          BYTE4(v122) &= ~1u;
          LODWORD(v122) = 0;
          v121[1] = 0;
          v33 = sub_C53060(v121, v32, v31);
          if ( v33 != 2 )
            break;
          if ( (unsigned int)v122 <= 1 )
          {
            if ( (__int64 *)v114 == ++v30 )
              goto LABEL_35;
            continue;
          }
          ++v30;
          sub_A4F8E0((int *)&v122);
          if ( (__int64 *)v114 == v30 )
          {
LABEL_35:
            v32 = *v27;
            if ( ((*(_WORD *)*v27 + 509) & 0x1FFu) > 0x7E )
            {
              v37 = (__int64 *)*a1;
              v8 = 0;
              v32 = (unsigned int)sub_EEB7E0(*v27);
              sub_E33C80(v37, v32, 2485, 0);
              goto LABEL_37;
            }
            if ( (unsigned __int8)sub_C72E70(a1, v32) )
            {
              v32 = 1;
              v109 = sub_C54F60((__int64)v119, (__m128i *)((char *)&dword_0 + 1), v120, v35, v36);
              v120 = -1;
              v8 = v109;
              goto LABEL_37;
            }
LABEL_127:
            v8 = 0;
            goto LABEL_37;
          }
        }
        if ( v33 )
        {
          v106 = (__int64 *)*a1;
          v32 = (unsigned int)sub_EEB7E0(*(v30 - 1));
          sub_E33C80(v106, v32, 2485, 0);
        }
        if ( (unsigned int)v122 <= 1 )
          goto LABEL_127;
        v8 = 0;
        sub_A4F8E0((int *)&v122);
LABEL_37:
        sub_C55380((__int64)&v119, v32, v34, v35, v36);
LABEL_38:
        *((_BYTE *)v23 + 915) = v117;
        return v8;
      case 0xE:
        v59 = (unsigned __int64 *)(a2 + 24);
        v60 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 4) - 8;
        if ( a2 + 24 == v60 )
          return 1;
        while ( 2 )
        {
          v66 = (_QWORD *)*v59;
          v67 = *(unsigned __int16 *)(a2 + 6);
          v68 = *(unsigned __int16 *)*v59;
          LOWORD(v68) = v68 & 0x1FF;
          if ( (_WORD)v68 != 26 )
          {
            v69 = *v59;
            if ( (_WORD)v67 && v66 == *(_QWORD **)(a2 + 8 * v67 + 16) )
            {
              if ( !(unsigned __int8)sub_C72E70(a1, v69) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C3FAF0(*a1, v69, v68, a4, a5) )
            {
              return 0;
            }
LABEL_72:
            if ( (unsigned __int64 *)v60 == ++v59 )
              return 1;
            continue;
          }
          break;
        }
        if ( (_WORD)v67 && v66 == *(_QWORD **)(a2 + 8 * v67 + 16) )
        {
          return (unsigned int)sub_C14310(*a1, a2);
        }
        else
        {
          if ( (*v66 & 0x80000LL) != 0 )
            goto LABEL_72;
          v61 = (__int64 *)*a1;
          v125 |= 1u;
          v122 = nullptr;
          v123 = nullptr;
          v124 = 0;
          v126 = 0;
          ptr = v129;
          v128 = 0x800000000LL;
          v129[65] = 0;
          v118 = (__int64)v61;
          v115 = v61[4];
          v112 = v66[2];
          v62 = sub_C104A0(v61[2], (__int64)v66);
          v63 = sub_C2C1C0(v115, (unsigned __int64)v66, v62, (__int64)&v122);
          v8 = sub_C39A10(v63, v118, v112, v64, v65);
          if ( (_BYTE)v8 )
          {
            if ( ptr != v129 )
              free(ptr);
            goto LABEL_72;
          }
          if ( ptr != v129 )
            free(ptr);
        }
        return v8;
      case 0xF:
        v22 = 0;
        if ( *(char *)(a2 + 2) < 0 )
          v22 = *(_QWORD *)(a2 + 16);
        return (unsigned int)sub_C72E70(a1, v22);
      case 0x11:
      case 0x71:
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 0x12:
        v19 = sub_C1DE00(a2);
        return (unsigned int)sub_C72E70(a1, v19);
      case 0x17:
        v20 = (__int64 *)*a1;
        v21 = (_DWORD *)sub_C110E0(*(_QWORD *)(*a1 + 32LL), a2);
        if ( v21 && *v21 )
        {
          v8 = 1;
          sub_C172A0(a1[1], (__int64)v21);
        }
        else
        {
          v22 = *(_QWORD *)(a2 + 16);
          if ( !v22 || a2 == v22 )
            return (unsigned int)sub_C14310((__int64)v20, a2);
          else
            return (unsigned int)sub_C72E70(a1, v22);
        }
        return v8;
      case 0x2B:
        return (unsigned int)sub_C42290(a1, a2, a3, a4, a5);
      case 0x32:
        v49 = *(_QWORD **)(a2 + 16);
        v50 = (__int64)(*(_QWORD *)(a2 + 24) - (_QWORD)v49) >> 3;
        if ( (_DWORD)v50 == 2 )
        {
          v73 = (unsigned __int8)sub_F57BD0(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)) == 0;
          v91 = (_BYTE *)a1[1];
          if ( v73 )
          {
            *v91 = 1;
            if ( !(unsigned __int8)sub_C47260(**(_QWORD **)(a2 + 16), (__int64)(v91 + 8), *a1, v88, v89, v90) )
              return 0;
            return (unsigned int)sub_C47260(
                                   *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
                                   a1[1] + 24LL,
                                   *a1,
                                   v103,
                                   v104,
                                   v105);
          }
          else
          {
            *v91 = 0;
            v92 = *(__int64 **)(a2 + 16);
            v93 = (__int64 *)*a1;
            v94 = *v92;
            v123 = v91 + 40;
            v122 = v93;
            if ( !(unsigned __int8)sub_C6ACF0(&v122, v94, (__int64)v93, (unsigned __int64)v92, v89, v90) )
              return 0;
            v97 = *(_QWORD *)(a2 + 16);
            v98 = *(_QWORD *)(v97 + 8);
            v99 = a1[1] + 64LL;
            v122 = (__int64 *)*a1;
            v123 = (_BYTE *)v99;
            return (unsigned int)sub_C6ACF0(&v122, v98, (__int64)v122, v97, v95, v96);
          }
        }
        else if ( (_DWORD)v50 )
        {
          if ( (_DWORD)v50 == 1 )
            return (unsigned int)sub_C72E70(a1, *v49);
          else
            return (unsigned int)sub_C14310(*a1, a2);
        }
        else
        {
          return (unsigned int)sub_C17430((__int64)a1, (void ***)a1 + 1, a2, a4);
        }
      case 0x33:
      case 0x61:
      case 0x65:
        return (unsigned int)sub_C17430((__int64)a1, (void ***)a1 + 1, a2, a4);
      case 0x34:
        v51 = *(_QWORD *)(a2 + 16);
        if ( (unsigned __int8)sub_F58100(*(_QWORD *)(*(_QWORD *)(v51 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          v56 = (_BYTE *)a1[1];
          v57 = (__int64 *)*a1;
          *v56 = 0;
          v122 = v57;
          v123 = v56 + 64;
          v8 = sub_C6ACF0(&v122, v51, v52, v53, v54, v55);
          if ( !(_BYTE)v8 )
            return 0;
          v101 = sub_21F90D0(&v122, v51, v58);
          v102 = *((_QWORD *)v56 + 8);
          if ( v102 == v101 )
            sub_21FFBD0(&v122, v102);
          else
            sub_21FBA00(&v122, v102);
          sub_C177C0((__int64 *)(a1[1] + 40LL), (__int64 *)&v122);
          sub_9955A0(&v122);
        }
        else
        {
          v79 = a1[1];
          v80 = (__int64 *)*a1;
          *(_BYTE *)v79 = 1;
          v8 = sub_C47260(v51, v79 + 24, (__int64)v80, v53, v54, v55);
          if ( !(_BYTE)v8 )
            return 0;
          v81 = *(_BYTE *)(v79 + 36);
          LODWORD(v123) = *(_DWORD *)(v79 + 32);
          if ( (unsigned int)v123 > 0x40 )
            sub_2205470(&v122, 0, 0);
          else
            v122 = nullptr;
          v82 = a1[1];
          BYTE4(v123) = v81;
          if ( *(_DWORD *)(v82 + 16) > 0x40u )
          {
            v83 = *(void **)(v82 + 8);
            if ( v83 )
              operator delete[](v83);
          }
          *(_QWORD *)(v82 + 8) = v122;
          *(_DWORD *)(v82 + 16) = (_DWORD)v123;
          *(_BYTE *)(v82 + 20) = BYTE4(v123);
        }
        return v8;
      case 0x36:
        return (unsigned int)sub_C72E70(
                               a1,
                               *(_QWORD *)(a2
                                         + 8LL
                                         * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF)
                                          + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                                         + 32));
      case 0x39:
        v10 = *(_DWORD *)(*a1 + 272LL);
        v122 = (__int64 *)*a1;
        LODWORD(v123) = v10;
        v11 = v122[4];
        v12 = *(_DWORD *)(v11 + 160) + 1;
        *(_DWORD *)(v11 + 160) = v12;
        sub_9B7040(v11 + 136, v12);
        v13 = *(_QWORD *)(a2 + 16);
        v8 = sub_C72E70(a1, v13);
        if ( (_BYTE)v8 )
        {
          v13 = 1;
          v100 = sub_C553F0((__int64)v122, 1, (unsigned int)v123, v15, v16);
          LODWORD(v123) = -1;
          v8 = v100;
        }
        sub_C559A0((__int64)&v122, v13, v14, v15, v16);
        return v8;
      case 0x3A:
        if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) != 0 )
        {
          sub_BF7B00((__int64)&v122, a2, a3, a4, a5, a6, v111, v113, v116);
          sub_C172A0(a1[1], (__int64)&v122);
          if ( (unsigned int)v122 > 1 )
            sub_A4F8E0((int *)&v122);
          return 1;
        }
        else
        {
          return (unsigned int)sub_C72E70(a1, *(_QWORD *)(a2 + 16));
        }
      case 0x3D:
        return (unsigned int)sub_C42560(a1, a2, a3, a4, a5);
      case 0x3F:
        v17 = (_BYTE *)*(unsigned int *)(a2 + 48);
        v122 = (__int64 *)a2;
        v123 = v17;
        v18 = (_QWORD *)sub_C29F30(&v122);
        return (unsigned int)sub_C72E70(a1, *v18);
      case 0x49:
        a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4A:
        if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
          v22 = *(_QWORD *)(a2 + 24);
        else
          v22 = *(_QWORD *)(a2 + 32);
        return (unsigned int)sub_C72E70(a1, v22);
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        return (unsigned int)((__int64 (__fastcall *)(_QWORD *, unsigned __int64))sub_C74E80)(a1, a2);
      case 0x4F:
        v38 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
        if ( v38 )
          sub_C11320(v38, 0);
        return (unsigned int)((__int64 (__fastcall *)(_QWORD *, unsigned __int64))sub_C74E80)(a1, a2);
      case 0x50:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2320LL) + 1LL) >= 0 )
        {
          v86 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
          if ( v86 )
            sub_C11320(v86, 1);
        }
        return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))sub_C74E80)(a1, a2);
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        return (unsigned int)sub_C70F00(a1, a2);
      case 0x6C:
        v39 = *(_QWORD *)(*a1 + 32LL);
        v40 = *(_DWORD *)(v39 + 160) + 1;
        *(_DWORD *)(v39 + 160) = v40;
        sub_9B7040(v39 + 136, v40);
        if ( sub_C94CC0(a2) )
        {
          v41 = *(_QWORD *)(*a1 + 32LL);
          if ( *(_QWORD *)(v41 + 64) )
          {
            v85 = sub_C94CC0(a2);
            v8 = sub_C72E70(a1, v85);
          }
          else
          {
            *(_QWORD *)(v41 + 64) = a2;
            v42 = sub_C94CC0(a2);
            v43 = sub_C72E70(a1, v42);
            *(_QWORD *)(v41 + 64) = 0;
            v8 = v43;
          }
        }
        else
        {
          v8 = sub_C14310(*a1, a2);
        }
        --*(_DWORD *)(v39 + 144);
        return v8;
      case 0x6D:
        v44 = *(_QWORD *)(*a1 + 32LL);
        v45 = *(_DWORD *)(v44 + 160) + 1;
        *(_DWORD *)(v44 + 160) = v45;
        sub_9B7040(v44 + 136, v45);
        v46 = *(_QWORD *)(*a1 + 32LL);
        if ( *(_QWORD *)(v46 + 64) )
        {
          v84 = sub_C94C80(a2);
          v8 = sub_C72E70(a1, v84);
        }
        else
        {
          *(_QWORD *)(v46 + 64) = a2;
          v47 = sub_C94C80(a2);
          v48 = sub_C72E70(a1, v47);
          *(_QWORD *)(v46 + 64) = 0;
          v8 = v48;
        }
        --*(_DWORD *)(v44 + 144);
        return v8;
      case 0x73:
      case 0x74:
        return (unsigned int)sub_C72C50(a1, a2, a3, a4, a5, a6);
      case 0x7D:
        v70 = (_WORD *)sub_BFD550(*(_QWORD *)(a2 + 24));
        v72 = *v70 & 0x1FF;
        if ( v72 <= 0x58u || v72 > 0x5Du )
        {
          v74 = (__int64 *)*a1;
          goto LABEL_84;
        }
        v73 = (unsigned int)sub_BFBE70((__int64)v70) == 214;
        v74 = (__int64 *)*a1;
        if ( !v73 )
        {
LABEL_84:
          v122 = v74;
          LOBYTE(v123) = 0;
          v75 = v74[3];
          v76 = *((_DWORD *)v74 + 229);
          v77 = *(_QWORD *)(v75 + 8);
          if ( !v77 || (v77 = *(unsigned int *)(v77 + 8), (_DWORD)v77) )
          {
            BYTE1(v123) = 0;
            HIDWORD(v123) = v76;
          }
          else
          {
            v78 = *(_BYTE *)v75;
            HIDWORD(v123) = v76;
            BYTE1(v123) = v78 ^ 1;
          }
          goto LABEL_87;
        }
        v8 = 0;
        if ( !*((_BYTE *)v74 + 914) )
        {
          v122 = (__int64 *)*a1;
          LOBYTE(v123) = 1;
          v77 = v74[3];
          v107 = *((_DWORD *)v74 + 229);
          v108 = *(_QWORD *)(v77 + 8);
          if ( v108 && !*(_DWORD *)(v108 + 8) )
          {
            v110 = *(unsigned __int8 *)v77;
            HIDWORD(v123) = *((_DWORD *)v74 + 229);
            v77 = v110 ^ 1u;
            BYTE1(v123) = v77;
          }
          else
          {
            BYTE1(v123) = 0;
            HIDWORD(v123) = v107;
          }
          *((_DWORD *)v74 + 229) = 2;
LABEL_87:
          if ( (unsigned __int8)sub_C3FB70(*(_QWORD *)(a2 + 24), v121, *a1, v77, v71) )
          {
            if ( LOBYTE(v121[0]) )
              v87 = *(_QWORD *)(a2 + 32);
            else
              v87 = *(_QWORD *)(a2 + 40);
            v8 = sub_C72E70(a1, v87);
            if ( (_BYTE)v8 )
              goto LABEL_93;
          }
          else if ( *(_BYTE *)(*a1 + 914LL) && (unsigned __int8)sub_C11850(*a1) )
          {
            sub_C74820(a1, a2);
          }
          else if ( (unsigned __int8)sub_C11850(*a1) )
          {
            sub_C72E70(a1, *(_QWORD *)(a2 + 32));
            sub_C72E70(a1, *(_QWORD *)(a2 + 40));
          }
          LOBYTE(v123) = 0;
          v8 = 0;
LABEL_93:
          sub_C23B30((__int64 *)&v122);
        }
        return v8;
      case 0x7E:
        return (unsigned int)sub_C74B20(a1, a2);
    }
  }
}
