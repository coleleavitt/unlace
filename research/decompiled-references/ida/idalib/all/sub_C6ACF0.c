__int64 __fastcall sub_C6ACF0(__int64 **a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v8; // ax
  unsigned int v9; // r14d
  __int64 v11; // rsi
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 *v15; // rbx
  int v16; // edx
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  void *v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rbp
  __int64 v32; // rax
  __int64 *v33; // rax
  char v34; // di
  __int64 v35; // rbx
  __int64 *v36; // r12
  __int64 v37; // rax
  int v38; // esi
  __int64 *v39; // r13
  _WORD *v40; // rdx
  __int64 v41; // rsi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 *v46; // rbx
  unsigned __int8 **v47; // rax
  __int64 v48; // rbp
  int v49; // esi
  __int64 v50; // r12
  __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rbp
  int v54; // esi
  __int64 v55; // r12
  __int64 v56; // rax
  unsigned int v57; // eax
  _WORD *v58; // rax
  __int64 v59; // r8
  unsigned __int16 v60; // dx
  bool v61; // zf
  __int64 *v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  __int64 v65; // rcx
  char v66; // dl
  _QWORD *v67; // rdx
  __int64 v68; // rax
  unsigned __int64 *v69; // r13
  __int64 v70; // rbp
  __int64 *v71; // r11
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // r8
  _QWORD *v76; // r14
  __int64 v77; // rax
  __int64 v78; // rdx
  unsigned __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 *v81; // rax
  __int64 v82; // rsi
  __int64 *v83; // rax
  __int64 v84; // rax
  unsigned __int8 **v85; // rax
  __int64 v86; // rax
  __int64 v87; // rsi
  unsigned int v88; // eax
  __int64 v89; // r12
  __int64 v90; // rax
  __int64 *v91; // rbx
  __int64 *v92; // rbx
  int v93; // edx
  __int64 v94; // rsi
  int v95; // ecx
  unsigned int v96; // eax
  int v97; // [rsp+0h] [rbp-108h]
  __int64 v98; // [rsp+0h] [rbp-108h]
  unsigned __int64 v99; // [rsp+0h] [rbp-108h]
  __int64 v100; // [rsp+8h] [rbp-100h]
  __int64 *v101; // [rsp+8h] [rbp-100h]
  __int64 v102; // [rsp+8h] [rbp-100h]
  char v103; // [rsp+10h] [rbp-F8h]
  __int64 v104; // [rsp+10h] [rbp-F8h]
  __int64 *v105; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v106; // [rsp+28h] [rbp-E0h]
  void *v107; // [rsp+30h] [rbp-D8h] BYREF
  __int64 **v108; // [rsp+38h] [rbp-D0h]
  __int64 *v109; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v110[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v111; // [rsp+58h] [rbp-B0h]
  __int64 v112; // [rsp+68h] [rbp-A0h] BYREF
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v114; // [rsp+78h] [rbp-90h]
  __int64 v115[8]; // [rsp+80h] [rbp-88h] BYREF
  char v116; // [rsp+C1h] [rbp-47h]

  while ( 2 )
  {
    while ( 2 )
    {
      v8 = *(_WORD *)a2 & 0x1FF;
      if ( v8 <= 0x75u )
      {
        if ( v8 == 4 )
        {
          a3 = *(_BYTE *)(a2 + 2) >> 3;
          switch ( (char)a3 )
          {
            case 0:
            case 1:
              return (unsigned int)sub_C656D0(a1, a2);
            case 2:
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 9:
            case 13:
              return (unsigned int)sub_C6F5A0(a1, a2);
            case 6:
            case 12:
LABEL_7:
              a2 = *(_QWORD *)(a2 + 16);
              continue;
            case 10:
              v11 = *(_QWORD *)(a2 + 16);
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) != 14 )
                return (unsigned int)sub_C6ACF0(a1, v11);
              sub_C11C80((__int64)&v109);
              v80 = *(_QWORD *)(a2 + 16);
              v81 = *a1;
              v108 = &v109;
              v107 = v81;
              v9 = sub_C72E70(&v107, v80);
              if ( (_BYTE)v9 )
                sub_C17220(a1[1], &v112);
              goto LABEL_110;
            case 11:
              v12 = *(_QWORD *)(a2 + 16);
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 14 )
              {
                sub_C11C80((__int64)&v109);
                v82 = *(_QWORD *)(a2 + 16);
                v83 = *a1;
                v108 = &v109;
                v107 = v83;
                v9 = sub_C72E70(&v107, v82);
                if ( (_BYTE)v9 )
                  sub_C17220(a1[1], v115);
LABEL_110:
                sub_C17D80((__int64)&v109);
              }
              else
              {
                sub_C3FAF0((__int64)*a1, v12, a3, a4, a5);
                v13 = sub_A62D20((_QWORD *)(*a1)[2], *(_QWORD *)(a2 + 8));
                v14 = sub_21F90D0();
                v15 = (__int64 *)v14;
                if ( v13 == v14 )
                  sub_21FFC40(&v109, v14, 0);
                else
                  sub_21FD1F0(&v109, v13, 0);
                if ( v109 == v15 )
LABEL_116:
                  sub_2200250(&v109, 0);
                else
LABEL_16:
                  sub_21FB9A0(&v109, 0);
                v9 = 1;
                sub_C177C0(a1[1], (__int64 *)&v109);
                sub_9955A0(&v109);
              }
              break;
            default:
              a3 = *(_BYTE *)(a2 + 2) >> 3;
              goto LABEL_6;
          }
          return v9;
        }
      }
      else if ( v8 <= 0x77u )
      {
        switch ( (*(_WORD *)(a2 + 2) >> 3) & 0x3F )
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
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x20:
            return (unsigned int)sub_C75510(a1, a2);
          default:
            a3 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
            goto LABEL_6;
        }
      }
      break;
    }
LABEL_6:
    switch ( (v8 + 509) & 0x1FF )
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
      case 0x34:
      case 0x35:
      case 0x37:
      case 0x38:
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
        return (unsigned int)sub_C14310((__int64)*a1, a2);
      case 1:
        return (unsigned int)sub_C6F5A0(a1, a2);
      case 5:
      case 0x62:
        goto LABEL_7;
      case 7:
        v33 = *a1;
        v9 = 1;
        v34 = *((_BYTE *)*a1 + 915);
        *((_BYTE *)v33 + 915) = 0;
        v35 = *(_QWORD *)(a2 + 16);
        v101 = v33;
        if ( !*(_DWORD *)(v35 + 4) )
          goto LABEL_54;
        v105 = v33;
        v36 = (__int64 *)(v35 + 16);
        v106 = *((_DWORD *)v33 + 68);
        v37 = v33[4];
        v38 = *(_DWORD *)(v37 + 160) + 1;
        *(_DWORD *)(v37 + 160) = v38;
        sub_9B7040(v37 + 136, v38);
        v39 = (__int64 *)(v35 + 24);
        v98 = v35 + 8LL * *(unsigned int *)(v35 + 4) + 16;
        if ( v98 == v35 + 24 )
          goto LABEL_51;
        while ( 1 )
        {
          v40 = (_WORD *)*(v39 - 1);
          v41 = (__int64)*a1;
          v36 = v39;
          BYTE4(v109) &= ~1u;
          LODWORD(v109) = 0;
          v108 = nullptr;
          v107 = &v109;
          v42 = sub_C53060((__int64 *)&v107, v41, v40);
          if ( v42 != 2 )
            break;
          if ( (unsigned int)v109 <= 1 )
          {
            if ( (__int64 *)v98 == ++v39 )
              goto LABEL_51;
            continue;
          }
          ++v39;
          sub_A4F8E0((int *)&v109);
          if ( (__int64 *)v98 == v39 )
          {
LABEL_51:
            v41 = *v36;
            if ( ((*(_WORD *)*v36 + 509) & 0x1FFu) > 0x7E )
            {
              v46 = *a1;
              v9 = 0;
              v41 = (unsigned int)sub_EEB7E0(*v36);
              sub_E33C80(v46, v41, 2485, 0);
              goto LABEL_53;
            }
            if ( (unsigned __int8)sub_C6ACF0(a1, v41) )
            {
              v41 = 1;
              v96 = sub_C54F60((__int64)v105, (__m128i *)((char *)&dword_0 + 1), v106, v44, v45);
              v106 = -1;
              v9 = v96;
              goto LABEL_53;
            }
LABEL_145:
            v9 = 0;
            goto LABEL_53;
          }
        }
        if ( v42 )
        {
          v92 = *a1;
          v41 = (unsigned int)sub_EEB7E0(*(v39 - 1));
          sub_E33C80(v92, v41, 2485, 0);
        }
        if ( (unsigned int)v109 <= 1 )
          goto LABEL_145;
        v9 = 0;
        sub_A4F8E0((int *)&v109);
LABEL_53:
        sub_C55380((__int64)&v105, v41, v43, v44, v45);
LABEL_54:
        *((_BYTE *)v101 + 915) = v34;
        return v9;
      case 0xE:
        v69 = (unsigned __int64 *)(a2 + 24);
        v70 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 4) - 8;
        if ( a2 + 24 == v70 )
          return 1;
        while ( 2 )
        {
          v76 = (_QWORD *)*v69;
          v77 = *(unsigned __int16 *)(a2 + 6);
          v78 = *(unsigned __int16 *)*v69;
          LOWORD(v78) = v78 & 0x1FF;
          if ( (_WORD)v78 != 26 )
          {
            v79 = *v69;
            if ( (_WORD)v77 && v76 == *(_QWORD **)(a2 + 8 * v77 + 16) )
            {
              if ( !(unsigned __int8)sub_C6ACF0(a1, v79) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C3FAF0((__int64)*a1, v79, v78, a4, a5) )
            {
              return 0;
            }
LABEL_99:
            if ( (unsigned __int64 *)v70 == ++v69 )
              return 1;
            continue;
          }
          break;
        }
        if ( (_WORD)v77 && v76 == *(_QWORD **)(a2 + 8 * v77 + 16) )
        {
          return (unsigned int)sub_C14310((__int64)*a1, a2);
        }
        else
        {
          if ( (*v76 & 0x80000LL) != 0 )
            goto LABEL_99;
          v71 = *a1;
          v111 |= 1u;
          v109 = nullptr;
          v110[0] = 0;
          v110[1] = 0;
          v112 = 0;
          ptr = v115;
          v114 = 0x800000000LL;
          v116 = 0;
          v104 = (__int64)v71;
          v102 = v71[4];
          v99 = v76[2];
          v72 = sub_C104A0(v71[2], (__int64)v76);
          v73 = sub_C2C1C0(v102, (unsigned __int64)v76, v72, (__int64)&v109);
          v9 = sub_C39A10(v73, v104, v99, v74, v75);
          if ( (_BYTE)v9 )
          {
            if ( ptr != v115 )
              free(ptr);
            goto LABEL_99;
          }
          if ( ptr != v115 )
            free(ptr);
        }
        return v9;
      case 0xF:
        v11 = 0;
        if ( *(char *)(a2 + 2) < 0 )
          v11 = *(_QWORD *)(a2 + 16);
        return (unsigned int)sub_C6ACF0(a1, v11);
      case 0x11:
      case 0x71:
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 0x12:
        v30 = sub_C1DE00(a2);
        return (unsigned int)sub_C6ACF0(a1, v30);
      case 0x17:
        v31 = *a1;
        v32 = sub_C110E0((*a1)[4], a2);
        if ( v32 && *(_DWORD *)v32 )
        {
          v9 = 1;
          sub_C17220(a1[1], (__int64 *)(v32 + 8));
          return v9;
        }
        v11 = *(_QWORD *)(a2 + 16);
        if ( v11 && a2 != v11 )
          return (unsigned int)sub_C6ACF0(a1, v11);
        return (unsigned int)sub_C14310((__int64)v31, a2);
      case 0x2B:
        return (unsigned int)sub_C41D30((__int64)a1, a2, a3, a4, a5);
      case 0x32:
        v67 = *(_QWORD **)(a2 + 16);
        v68 = (__int64)(*(_QWORD *)(a2 + 24) - (_QWORD)v67) >> 3;
        if ( (_DWORD)v68 )
        {
          if ( (_DWORD)v68 == 1 )
            return (unsigned int)sub_C6ACF0(a1, *v67);
          else
            return (unsigned int)sub_C14310((__int64)*a1, a2);
        }
        v89 = sub_A62D20((_QWORD *)(*a1)[2], *(_QWORD *)(a2 + 8));
        v90 = sub_21F90D0();
        v91 = (__int64 *)v90;
        if ( v89 == v90 )
          sub_21FFC40(&v109, v90, 0);
        else
          sub_21FD1F0(&v109, v89, 0);
        if ( v109 == v91 )
          goto LABEL_116;
        goto LABEL_16;
      case 0x33:
      case 0x61:
      case 0x65:
        return (unsigned int)sub_C17B50((__int64)*a1, a1 + 1, a2);
      case 0x36:
        return (unsigned int)sub_C6ACF0(
                               a1,
                               *(_QWORD *)(a2
                                         + 8LL
                                         * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF)
                                          + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                                         + 32));
      case 0x39:
        v16 = *((_DWORD *)*a1 + 68);
        v109 = *a1;
        LODWORD(v110[0]) = v16;
        v17 = v109[4];
        v18 = *(_DWORD *)(v17 + 160) + 1;
        *(_DWORD *)(v17 + 160) = v18;
        sub_9B7040(v17 + 136, v18);
        v19 = *(_QWORD *)(a2 + 16);
        v9 = sub_C6ACF0(a1, v19);
        if ( (_BYTE)v9 )
        {
          v19 = 1;
          v88 = sub_C553F0((__int64)v109, 1, v110[0], v21, v22);
          LODWORD(v110[0]) = -1;
          v9 = v88;
        }
        sub_C559A0((__int64)&v109, v19, v20, v21, v22);
        return v9;
      case 0x3A:
        if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) != 0 )
        {
          sub_BF7B00((__int64)&v109, a2, a3, a4, a5, a6, v97, v100, v103);
          sub_C17220(a1[1], v110);
          if ( (unsigned int)v109 > 1 )
            sub_A4F8E0((int *)&v109);
          return 1;
        }
        else
        {
          return (unsigned int)sub_C6ACF0(a1, *(_QWORD *)(a2 + 16));
        }
      case 0x3B:
        v23 = sub_21F8CF0(*(_BYTE *)(a2 + 2) >> 3);
        v24 = *(void **)(a2 + 16);
        v25 = v23;
        v26 = *(unsigned int *)(a2 + 24);
        v27 = (unsigned __int64)(v26 + 63) >> 6;
        if ( v27 > 1 )
        {
          sub_2205610(&v107, v26, v27, v24);
        }
        else
        {
          LODWORD(v108) = *(_DWORD *)(a2 + 24);
          if ( (unsigned int)v26 > 0x40 )
            sub_2205470(&v107, v24, 0);
          else
            v107 = v24;
        }
        if ( v25 == sub_21F90D0() )
          sub_21FFDA0(&v109, v25, &v107);
        else
          sub_21FF7D0(&v109, v25, &v107);
        if ( (unsigned int)v108 > 0x40 && v107 )
          operator delete[](v107);
        v9 = 1;
        sub_C177C0(a1[1], (__int64 *)&v109);
        sub_9955A0(&v109);
        return v9;
      case 0x3D:
        return (unsigned int)sub_C42010((__int64)a1, a2, a3, a4, a5);
      case 0x3F:
        v28 = *(unsigned int *)(a2 + 48);
        v109 = (__int64 *)a2;
        v110[0] = v28;
        v29 = (_QWORD *)sub_C29F30(&v109);
        return (unsigned int)sub_C6ACF0(a1, *v29);
      case 0x49:
        a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4A:
        if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
          v11 = *(_QWORD *)(a2 + 24);
        else
          v11 = *(_QWORD *)(a2 + 32);
        return (unsigned int)sub_C6ACF0(a1, v11);
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        return (unsigned int)sub_C6A7D0((__int64)a1, a2, a3, a4, a5, a6);
      case 0x4F:
        v47 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
        if ( v47 )
          sub_C11320(v47, 0);
        return (unsigned int)sub_C6A7D0((__int64)a1, a2, a3, a4, a5, a6);
      case 0x50:
        if ( *(char *)(*(_QWORD *)((*a1)[2] + 2320) + 1LL) >= 0 )
        {
          v85 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
          if ( v85 )
            sub_C11320(v85, 1);
        }
        return (unsigned int)sub_C6A7D0((__int64)a1, a2, a3, a4, a5, a6);
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        return (unsigned int)sub_C6F680(a1, a2);
      case 0x6C:
        v48 = (*a1)[4];
        v49 = *(_DWORD *)(v48 + 160) + 1;
        *(_DWORD *)(v48 + 160) = v49;
        sub_9B7040(v48 + 136, v49);
        if ( sub_C94CC0(a2) )
        {
          v50 = (*a1)[4];
          if ( *(_QWORD *)(v50 + 64) )
          {
            v86 = sub_C94CC0(a2);
            v9 = sub_C6ACF0(a1, v86);
          }
          else
          {
            *(_QWORD *)(v50 + 64) = a2;
            v51 = sub_C94CC0(a2);
            v52 = sub_C6ACF0(a1, v51);
            *(_QWORD *)(v50 + 64) = 0;
            v9 = v52;
          }
        }
        else
        {
          v9 = sub_C14310((__int64)*a1, a2);
        }
        --*(_DWORD *)(v48 + 144);
        return v9;
      case 0x6D:
        v53 = (*a1)[4];
        v54 = *(_DWORD *)(v53 + 160) + 1;
        *(_DWORD *)(v53 + 160) = v54;
        sub_9B7040(v53 + 136, v54);
        v55 = (*a1)[4];
        if ( *(_QWORD *)(v55 + 64) )
        {
          v84 = sub_C94C80(a2);
          v9 = sub_C6ACF0(a1, v84);
        }
        else
        {
          *(_QWORD *)(v55 + 64) = a2;
          v56 = sub_C94C80(a2);
          v57 = sub_C6ACF0(a1, v56);
          *(_QWORD *)(v55 + 64) = 0;
          v9 = v57;
        }
        --*(_DWORD *)(v53 + 144);
        return v9;
      case 0x73:
      case 0x74:
        return (unsigned int)sub_C75510(a1, a2);
      case 0x7D:
        v58 = (_WORD *)sub_BFD550(*(_QWORD *)(a2 + 24));
        v60 = *v58 & 0x1FF;
        if ( v60 <= 0x58u || v60 > 0x5Du )
        {
          v62 = *a1;
          goto LABEL_74;
        }
        v61 = (unsigned int)sub_BFBE70((__int64)v58) == 214;
        v62 = *a1;
        if ( !v61 )
        {
LABEL_74:
          v109 = v62;
          LOBYTE(v110[0]) = 0;
          v63 = v62[3];
          v64 = *((_DWORD *)v62 + 229);
          v65 = *(_QWORD *)(v63 + 8);
          if ( !v65 || (v65 = *(unsigned int *)(v65 + 8), (_DWORD)v65) )
          {
            BYTE1(v110[0]) = 0;
            HIDWORD(v110[0]) = v64;
          }
          else
          {
            v66 = *(_BYTE *)v63;
            HIDWORD(v110[0]) = v64;
            BYTE1(v110[0]) = v66 ^ 1;
          }
          goto LABEL_77;
        }
        v9 = 0;
        if ( !*((_BYTE *)v62 + 914) )
        {
          v109 = *a1;
          LOBYTE(v110[0]) = 1;
          v65 = v62[3];
          v93 = *((_DWORD *)v62 + 229);
          v94 = *(_QWORD *)(v65 + 8);
          if ( !v94 || *(_DWORD *)(v94 + 8) )
          {
            BYTE1(v110[0]) = 0;
            HIDWORD(v110[0]) = v93;
          }
          else
          {
            v95 = *(unsigned __int8 *)v65;
            HIDWORD(v110[0]) = *((_DWORD *)v62 + 229);
            v65 = v95 ^ 1u;
            BYTE1(v110[0]) = v65;
          }
          *((_DWORD *)v62 + 229) = 2;
LABEL_77:
          if ( (unsigned __int8)sub_C3FB70(*(_QWORD *)(a2 + 24), &v107, (__int64)*a1, v65, v59) )
          {
            if ( (_BYTE)v107 )
              v87 = *(_QWORD *)(a2 + 32);
            else
              v87 = *(_QWORD *)(a2 + 40);
            v9 = sub_C6ACF0(a1, v87);
            if ( (_BYTE)v9 )
              goto LABEL_83;
          }
          else if ( *((_BYTE *)*a1 + 914) && (unsigned __int8)sub_C11850((__int64)*a1) )
          {
            sub_C75770(a1, a2);
          }
          else if ( (unsigned __int8)sub_C11850((__int64)*a1) )
          {
            sub_C6ACF0(a1, *(_QWORD *)(a2 + 32));
            sub_C6ACF0(a1, *(_QWORD *)(a2 + 40));
          }
          LOBYTE(v110[0]) = 0;
          v9 = 0;
LABEL_83:
          sub_C23B30((__int64 *)&v109);
          return v9;
        }
        break;
      case 0x7E:
        return (unsigned int)sub_C75A70(a1, a2);
    }
    return v9;
  }
}
