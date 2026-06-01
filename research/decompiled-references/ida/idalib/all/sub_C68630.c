__int64 __fastcall sub_C68630(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int16 v8; // ax
  __int64 result; // rax
  int v10; // edx
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rsi
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  void *v20; // rsi
  int v21; // eax
  unsigned int v22; // edx
  int v23; // ebx
  bool v24; // bp
  void **v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbp
  _DWORD *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // r13
  char v33; // al
  __int64 v34; // r14
  __int64 v35; // rax
  int v36; // esi
  __int64 *v37; // rax
  __int64 v38; // rdi
  __int64 *v39; // r14
  __int64 *v40; // rax
  _WORD *v41; // rdx
  __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  unsigned __int8 v48; // al
  unsigned __int8 **v49; // rax
  __int64 v50; // rbp
  int v51; // esi
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rbp
  int v55; // esi
  __int64 v56; // r12
  __int64 v57; // rax
  _QWORD *v58; // rdx
  __int64 v59; // rax
  unsigned __int64 *v60; // r13
  __int64 v61; // rbp
  __int64 v62; // r11
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // rsi
  _WORD *v71; // rax
  __int64 v72; // r8
  unsigned __int16 v73; // dx
  __int64 v74; // rax
  char *v75; // rdx
  int v76; // eax
  __int64 v77; // rcx
  char v78; // dl
  unsigned __int8 v79; // al
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rax
  unsigned __int8 **v83; // rax
  __int64 v84; // rdx
  int v85; // eax
  __int64 v86; // rsi
  int v87; // ecx
  __int64 v88; // r12
  int v89; // [rsp+0h] [rbp-108h]
  unsigned __int8 v90; // [rsp+0h] [rbp-108h]
  unsigned __int8 v91; // [rsp+0h] [rbp-108h]
  unsigned __int8 v92; // [rsp+0h] [rbp-108h]
  unsigned __int8 v93; // [rsp+0h] [rbp-108h]
  unsigned __int8 v94; // [rsp+0h] [rbp-108h]
  unsigned __int64 v95; // [rsp+0h] [rbp-108h]
  unsigned __int8 v96; // [rsp+0h] [rbp-108h]
  __int64 v97; // [rsp+8h] [rbp-100h]
  char v98; // [rsp+8h] [rbp-100h]
  __int64 v99; // [rsp+8h] [rbp-100h]
  char v100; // [rsp+10h] [rbp-F8h]
  __int64 v101; // [rsp+10h] [rbp-F8h]
  void *v102; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v103; // [rsp+28h] [rbp-E0h]
  void **v104; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v105; // [rsp+38h] [rbp-D0h]
  void *v106; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v108; // [rsp+50h] [rbp-B8h]
  char v109; // [rsp+58h] [rbp-B0h]
  __int64 v110; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v112; // [rsp+78h] [rbp-90h]
  _BYTE v113[136]; // [rsp+80h] [rbp-88h] BYREF

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
              return sub_C65B10(a1, a2);
            case 2:
            case 3:
            case 4:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
              return sub_C75DD0(a1, a2);
            case 5:
              return sub_C75DD0(a1, a2);
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
            return sub_C6A610(a1, a2);
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
      case 0x3B:
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
        return sub_C14310(*a1, a2);
      case 1:
        return sub_C75DD0(a1, a2);
      case 5:
      case 0x62:
        goto LABEL_7;
      case 7:
        v32 = *a1;
        v33 = *(_BYTE *)(*a1 + 915);
        *(_BYTE *)(*a1 + 915) = 0;
        v34 = *(_QWORD *)(a2 + 16);
        v98 = v33;
        result = 1;
        if ( !*(_DWORD *)(v34 + 4) )
          goto LABEL_52;
        v102 = (void *)v32;
        v103 = *(_DWORD *)(v32 + 272);
        v35 = *(_QWORD *)(v32 + 32);
        v36 = *(_DWORD *)(v35 + 160) + 1;
        *(_DWORD *)(v35 + 160) = v36;
        sub_9B7040(v35 + 136, v36);
        v37 = (__int64 *)(v34 + 16);
        v38 = v34 + 8LL * *(unsigned int *)(v34 + 4) + 16;
        v39 = (__int64 *)(v34 + 24);
        if ( (__int64 *)v38 == v39 )
          goto LABEL_49;
        while ( 2 )
        {
          v41 = (_WORD *)*(v39 - 1);
          v42 = *a1;
          v104 = &v106;
          BYTE4(v106) &= ~1u;
          LODWORD(v106) = 0;
          v105 = 0;
          v43 = sub_C53060((__int64 *)&v104, v42, v41);
          if ( v43 != 2 )
          {
            if ( v43 )
            {
              v88 = *a1;
              v42 = (unsigned int)sub_EEB7E0(*(v39 - 1));
              sub_E33C80(v88, v42, 2485, 0);
            }
            if ( (unsigned int)v106 > 1 )
            {
              sub_A4F8E0((int *)&v106);
              v48 = 0;
              goto LABEL_51;
            }
LABEL_127:
            v48 = 0;
            goto LABEL_51;
          }
          if ( (unsigned int)v106 > 1 )
          {
            sub_A4F8E0((int *)&v106);
            v40 = v39 + 1;
            if ( (__int64 *)v38 == v39 + 1 )
              goto LABEL_48;
LABEL_44:
            v39 = v40;
            continue;
          }
          break;
        }
        v40 = v39 + 1;
        if ( (__int64 *)v38 != v39 + 1 )
          goto LABEL_44;
LABEL_48:
        v37 = v39;
LABEL_49:
        v42 = *v37;
        if ( ((*(_WORD *)*v37 + 509) & 0x1FFu) > 0x7E )
        {
          v47 = *a1;
          v42 = (unsigned int)sub_EEB7E0(v42);
          sub_E33C80(v47, v42, 2485, 0);
          v48 = 0;
          goto LABEL_51;
        }
        if ( !(unsigned __int8)sub_C68630(a1, v42) )
          goto LABEL_127;
        v42 = 1;
        v48 = sub_C54F60((__int64)v102, (__m128i *)((char *)&dword_0 + 1), v103, v45, v46);
        v103 = -1;
LABEL_51:
        v94 = v48;
        sub_C55380((__int64)&v102, v42, v44, v45, v46);
        result = v94;
LABEL_52:
        *(_BYTE *)(v32 + 915) = v98;
        return result;
      case 0xE:
        v60 = (unsigned __int64 *)(a2 + 24);
        v61 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 4) - 8;
        if ( a2 + 24 == v61 )
          return 1;
        while ( 2 )
        {
          v67 = (_QWORD *)*v60;
          v68 = *(unsigned __int16 *)(a2 + 6);
          v69 = *(unsigned __int16 *)*v60;
          LOWORD(v69) = v69 & 0x1FF;
          if ( (_WORD)v69 == 26 )
          {
            if ( (_WORD)v68 && v67 == *(_QWORD **)(a2 + 8 * v68 + 16) )
              return sub_C14310(*a1, a2);
            if ( (*v67 & 0x80000LL) == 0 )
            {
              v62 = *a1;
              v109 |= 1u;
              v106 = nullptr;
              v107 = 0;
              v108 = 0;
              v110 = 0;
              ptr = v113;
              v112 = 0x800000000LL;
              v113[65] = 0;
              v101 = v62;
              v99 = *(_QWORD *)(v62 + 32);
              v95 = v67[2];
              v63 = sub_C104A0(*(_QWORD *)(v62 + 16), (__int64)v67);
              v64 = sub_C2C1C0(v99, (unsigned __int64)v67, v63, (__int64)&v106);
              result = sub_C39A10(v64, v101, v95, v65, v66);
              if ( !(_BYTE)result )
              {
                if ( ptr != v113 )
                {
                  free(ptr);
                  return 0;
                }
                return result;
              }
              if ( ptr != v113 )
                free(ptr);
            }
          }
          else
          {
            v70 = *v60;
            if ( (_WORD)v68 && v67 == *(_QWORD **)(a2 + 8 * v68 + 16) )
            {
              if ( !(unsigned __int8)sub_C68630(a1, v70) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C3FAF0(*a1, v70, v69, a4, a5) )
            {
              return 0;
            }
          }
          if ( (unsigned __int64 *)v61 == ++v60 )
            return 1;
          continue;
        }
      case 0xF:
        v31 = 0;
        if ( *(char *)(a2 + 2) < 0 )
          v31 = *(_QWORD *)(a2 + 16);
        return sub_C68630(a1, v31);
      case 0x11:
      case 0x71:
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 0x12:
        v28 = sub_C1DE00(a2);
        return sub_C68630(a1, v28);
      case 0x17:
        v29 = *a1;
        v30 = (_DWORD *)sub_C110E0(*(_QWORD *)(*a1 + 32), a2);
        if ( v30 && *v30 )
          return sub_C103E0(a1 + 1, (__int64)(v30 + 2));
        v31 = *(_QWORD *)(a2 + 16);
        if ( !v31 || a2 == v31 )
          return sub_C14310(v29, a2);
        else
          return sub_C68630(a1, v31);
      case 0x2B:
        return sub_C427E0(a1, a2, a3, a4, a5);
      case 0x32:
        v58 = *(_QWORD **)(a2 + 16);
        v59 = (__int64)(*(_QWORD *)(a2 + 24) - (_QWORD)v58) >> 3;
        if ( !(_DWORD)v59 )
          return sub_C13170(a1, 0, a2, a4);
        if ( (_DWORD)v59 == 1 )
          return sub_C68630(a1, *v58);
        else
          return sub_C14310(*a1, a2);
      case 0x33:
      case 0x61:
      case 0x65:
        return sub_C13170(a1, 0, a2, a4);
      case 0x36:
        return sub_C68630(
                 a1,
                 *(_QWORD *)(a2
                           + 8LL
                           * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                           + 32));
      case 0x39:
        v10 = *(_DWORD *)(*a1 + 272);
        v106 = (void *)*a1;
        LODWORD(v107) = v10;
        v11 = *((_QWORD *)v106 + 4);
        v12 = *(_DWORD *)(v11 + 160) + 1;
        *(_DWORD *)(v11 + 160) = v12;
        sub_9B7040(v11 + 136, v12);
        v13 = *(_QWORD *)(a2 + 16);
        v14 = sub_C68630(a1, v13);
        if ( v14 )
        {
          v13 = 1;
          v14 = sub_C553F0((__int64)v106, 1, v107, v16, v17);
          LODWORD(v107) = -1;
        }
        v90 = v14;
        sub_C559A0((__int64)&v106, v13, v15, v16, v17);
        return v90;
      case 0x3A:
        if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) == 0 )
          return sub_C68630(a1, *(_QWORD *)(a2 + 16));
        sub_BF7B00((__int64)&v106, a2, a3, a4, a5, a6, v89, v97, v100);
        result = sub_C103E0(a1 + 1, (__int64)&v107);
        if ( (unsigned int)v106 > 1 )
        {
          v91 = result;
          sub_A4F8E0((int *)&v106);
          return v91;
        }
        return result;
      case 0x3C:
        v18 = *(unsigned int *)(a2 + 24);
        v19 = (unsigned __int64)(v18 + 63) >> 6;
        if ( v19 > 1 )
        {
          sub_2205610(&v102, (unsigned int)v18, v19, *(_QWORD *)(a2 + 16));
        }
        else
        {
          v20 = *(void **)(a2 + 16);
          v103 = *(_DWORD *)(a2 + 24);
          if ( (unsigned int)v18 > 0x40 )
            sub_2205470(&v102, v20, 0);
          else
            v102 = v20;
        }
        v21 = sub_AAE100(*(_QWORD *)(*a1 + 16), *(_QWORD *)(a2 + 8), v19, a4);
        v22 = v103;
        v23 = v21;
        v24 = (v21 & 0x20000000) == 0;
        LODWORD(v105) = v103;
        if ( v103 > 0x40 )
        {
          sub_2205510(&v104);
          v22 = v105;
          v25 = v104;
        }
        else
        {
          v25 = (void **)v102;
        }
        LODWORD(v107) = v22;
        v106 = v25;
        BYTE4(v107) = v24;
        LODWORD(v108) = v23;
        result = sub_C103E0(a1 + 1, (__int64)&v106);
        if ( (unsigned int)v107 > 0x40 && v106 )
        {
          v92 = result;
          operator delete[](v106);
          result = v92;
        }
        if ( v103 > 0x40 && v102 )
        {
          v93 = result;
          operator delete[](v102);
          return v93;
        }
        return result;
      case 0x3D:
        return sub_C42AC0(a1, a2, a3, a4, a5);
      case 0x3F:
        v26 = *(unsigned int *)(a2 + 48);
        v106 = (void *)a2;
        v107 = v26;
        v27 = (_QWORD *)sub_C29F30(&v106);
        return sub_C68630(a1, *v27);
      case 0x49:
        a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4A:
        if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
          v31 = *(_QWORD *)(a2 + 24);
        else
          v31 = *(_QWORD *)(a2 + 32);
        return sub_C68630(a1, v31);
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        return sub_C68140(a1, a2, a3, a4);
      case 0x4F:
        v49 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
        if ( v49 )
          sub_C11320(v49, 0);
        return sub_C68140(a1, a2, a3, a4);
      case 0x50:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2320LL) + 1LL) >= 0 )
        {
          v83 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
          if ( v83 )
            sub_C11320(v83, 1);
        }
        return sub_C68140(a1, a2, a3, a4);
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        return sub_C63290(a1, a2);
      case 0x6C:
        v50 = *(_QWORD *)(*a1 + 32);
        v51 = *(_DWORD *)(v50 + 160) + 1;
        *(_DWORD *)(v50 + 160) = v51;
        sub_9B7040(v50 + 136, v51);
        if ( sub_C94CC0(a2) )
        {
          v52 = *(_QWORD *)(*a1 + 32);
          if ( *(_QWORD *)(v52 + 64) )
          {
            v82 = sub_C94CC0(a2);
            result = sub_C68630(a1, v82);
          }
          else
          {
            *(_QWORD *)(v52 + 64) = a2;
            v53 = sub_C94CC0(a2);
            result = sub_C68630(a1, v53);
            *(_QWORD *)(v52 + 64) = 0;
          }
        }
        else
        {
          result = sub_C14310(*a1, a2);
        }
        --*(_DWORD *)(v50 + 144);
        return result;
      case 0x6D:
        v54 = *(_QWORD *)(*a1 + 32);
        v55 = *(_DWORD *)(v54 + 160) + 1;
        *(_DWORD *)(v54 + 160) = v55;
        sub_9B7040(v54 + 136, v55);
        v56 = *(_QWORD *)(*a1 + 32);
        if ( *(_QWORD *)(v56 + 64) )
        {
          v80 = sub_C94C80(a2);
          result = sub_C68630(a1, v80);
        }
        else
        {
          *(_QWORD *)(v56 + 64) = a2;
          v57 = sub_C94C80(a2);
          result = sub_C68630(a1, v57);
          *(_QWORD *)(v56 + 64) = 0;
        }
        --*(_DWORD *)(v54 + 144);
        return result;
      case 0x73:
      case 0x74:
        return sub_C6A610(a1, a2);
      case 0x7D:
        v71 = (_WORD *)sub_BFD550(*(_QWORD *)(a2 + 24));
        v73 = *v71 & 0x1FF;
        if ( v73 > 0x58u && v73 <= 0x5Du && (unsigned int)sub_BFBE70((__int64)v71) == 214 )
        {
          v84 = *a1;
          result = 0;
          if ( *(_BYTE *)(*a1 + 914) )
            return result;
          v106 = (void *)*a1;
          LOBYTE(v107) = 1;
          v77 = *(_QWORD *)(v84 + 24);
          v85 = *(_DWORD *)(v84 + 916);
          v86 = *(_QWORD *)(v77 + 8);
          if ( !v86 || *(_DWORD *)(v86 + 8) )
          {
            BYTE1(v107) = 0;
            HIDWORD(v107) = v85;
          }
          else
          {
            v87 = *(unsigned __int8 *)v77;
            HIDWORD(v107) = *(_DWORD *)(v84 + 916);
            v77 = v87 ^ 1u;
            BYTE1(v107) = v77;
          }
          *(_DWORD *)(v84 + 916) = 2;
        }
        else
        {
          v74 = *a1;
          LOBYTE(v107) = 0;
          v106 = (void *)v74;
          v75 = *(char **)(v74 + 24);
          v76 = *(_DWORD *)(v74 + 916);
          v77 = *((_QWORD *)v75 + 1);
          if ( !v77 || (v77 = *(unsigned int *)(v77 + 8), (_DWORD)v77) )
          {
            BYTE1(v107) = 0;
            HIDWORD(v107) = v76;
          }
          else
          {
            v78 = *v75;
            HIDWORD(v107) = v76;
            BYTE1(v107) = v78 ^ 1;
          }
        }
        if ( (unsigned __int8)sub_C3FB70(*(_QWORD *)(a2 + 24), &v104, *a1, v77, v72) )
        {
          if ( (_BYTE)v104 )
            v81 = *(_QWORD *)(a2 + 32);
          else
            v81 = *(_QWORD *)(a2 + 40);
          v79 = sub_C68630(a1, v81);
          if ( v79 )
            goto LABEL_103;
        }
        else if ( *(_BYTE *)(*a1 + 914) && (unsigned __int8)sub_C11850(*a1) )
        {
          sub_C75F20(a1, a2);
        }
        else if ( (unsigned __int8)sub_C11850(*a1) )
        {
          sub_C68630(a1, *(_QWORD *)(a2 + 32));
          sub_C68630(a1, *(_QWORD *)(a2 + 40));
        }
        LOBYTE(v107) = 0;
        v79 = 0;
LABEL_103:
        v96 = v79;
        sub_C23B30((__int64 *)&v106);
        return v96;
      case 0x7E:
        return sub_C76220(a1, a2);
    }
  }
}
