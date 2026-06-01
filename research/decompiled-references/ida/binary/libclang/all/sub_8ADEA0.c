__int64 __fastcall sub_8ADEA0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r13
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  __int64 *v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 result; // rax
  unsigned __int8 **v10; // rax
  __int64 v11; // r12
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  unsigned int v22; // r12d
  int v23; // ecx
  unsigned __int8 v24; // al
  __int64 v25; // rbp
  unsigned int *v26; // rax
  __int64 v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  _WORD *v31; // rdi
  unsigned __int16 v32; // ax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // cl
  int v39; // edx
  char v40; // al
  char v41; // cl
  _BYTE *v42; // r9
  unsigned __int8 v43; // al
  unsigned __int64 *v44; // r15
  __int64 v45; // r12
  __int64 v46; // r11
  __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rbp
  __int64 v50; // rax
  unsigned __int8 **v51; // rdi
  void *v52; // rcx
  __int64 v53; // rsi
  int v54; // ebp
  __int32 v55; // eax
  void *v56; // rdx
  __int64 v57; // r15
  char v58; // al
  unsigned int v59; // ecx
  __int64 v60; // rax
  int v61; // esi
  _QWORD *v62; // r14
  __int64 v63; // rax
  __int64 v64; // r12
  _QWORD *v65; // rax
  __int64 v66; // rsi
  int v67; // eax
  __int64 v68; // rbx
  unsigned int v69; // eax
  unsigned __int8 v70; // al
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rsi
  __int32 v75; // eax
  char v76; // dl
  char *v77; // rcx
  __int32 v78; // eax
  __int64 v79; // rsi
  __int64 v80; // rbp
  unsigned int v81; // eax
  char v82; // cl
  unsigned __int8 v83; // [rsp+0h] [rbp-118h]
  unsigned __int8 v84; // [rsp+0h] [rbp-118h]
  __int64 v85; // [rsp+0h] [rbp-118h]
  char v86; // [rsp+0h] [rbp-118h]
  unsigned __int64 v87; // [rsp+8h] [rbp-110h]
  __int64 v88; // [rsp+8h] [rbp-110h]
  unsigned __int8 v89; // [rsp+8h] [rbp-110h]
  _QWORD *v90; // [rsp+10h] [rbp-108h]
  __int64 v91; // [rsp+10h] [rbp-108h]
  unsigned int v92; // [rsp+1Ch] [rbp-FCh]
  void *v93; // [rsp+20h] [rbp-F8h] BYREF
  unsigned int v94; // [rsp+28h] [rbp-F0h]
  __m128i *v95; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v96; // [rsp+38h] [rbp-E0h]
  _QWORD v97[2]; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v98; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v99; // [rsp+60h] [rbp-B8h]
  char v100; // [rsp+68h] [rbp-B0h]
  __int64 v101; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-98h]
  __int64 v103; // [rsp+88h] [rbp-90h]
  _BYTE v104[136]; // [rsp+90h] [rbp-88h] BYREF

  v2 = a1;
  v3 = a2;
  while ( 2 )
  {
    while ( 2 )
    {
      v4 = *(_WORD *)v3 & 0x1FF;
      if ( v4 <= 0x76u )
      {
        if ( v4 == 4 )
        {
          if ( *(_BYTE *)(v3 + 2) <= 0x6Fu )
          {
            switch ( *(_BYTE *)(v3 + 2) >> 3 )
            {
              case 0:
              case 1:
                return sub_86D4B0(v2, v3);
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
                return sub_8B02F0(v2, v3);
              case 6:
              case 12:
LABEL_15:
                v3 = *(_QWORD *)(v3 + 16);
                continue;
            }
          }
          return sub_8B02F0(v2, v3);
        }
      }
      else if ( v4 <= 0x78u )
      {
        v5 = a1;
        v6 = a2;
        v7 = v3;
        v8 = v2;
        switch ( (*(_WORD *)(v3 + 2) >> 3) & 0x3F )
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
            return sub_8AFDE0(v8, v7);
          default:
            a2 = v6;
            a1 = v5;
            goto LABEL_9;
        }
      }
      break;
    }
LABEL_9:
    switch ( (v4 + 509) & 0x1FF )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0x11:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
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
      case 0x2B:
      case 0x2D:
      case 0x2E:
      case 0x2F:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x35:
      case 0x36:
      case 0x38:
      case 0x39:
      case 0x3C:
      case 0x3F:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4C:
      case 0x5C:
      case 0x5D:
      case 0x5E:
      case 0x5F:
      case 0x60:
      case 0x61:
      case 0x64:
      case 0x65:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
      case 0x6F:
      case 0x70:
      case 0x71:
      case 0x73:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7B:
      case 0x7C:
      case 0x7D:
        goto LABEL_12;
      case 1:
      case 0x7F:
        return sub_8B16C0(v2, v3);
      case 6:
      case 0x63:
        goto LABEL_15;
      case 8:
        v57 = *v2;
        v58 = *(_BYTE *)(*v2 + 963);
        *(_BYTE *)(*v2 + 963) = 0;
        v86 = v58;
        result = 1;
        v88 = *(_QWORD *)(v3 + 16);
        if ( !*(_DWORD *)(v88 + 4) )
          goto LABEL_109;
        v59 = *(_DWORD *)(*v2 + 320);
        v90 = (_QWORD *)*v2;
        v93 = v90;
        v60 = v90[4];
        v92 = v59;
        v94 = v59;
        v61 = *(_DWORD *)(v60 + 208) + 1;
        *(_DWORD *)(v60 + 208) = v61;
        sub_847EC0(v60 + 184, v61);
        v62 = (_QWORD *)(v88 + 24);
        v63 = 8LL * *(unsigned int *)(v88 + 4);
        v64 = v88 + v63 + 16;
        if ( v63 == 8 )
        {
          v62 = (_QWORD *)(v88 + 16);
LABEL_105:
          if ( ((*(_WORD *)*v62 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_8ADEA0(v2, *v62) )
            {
              v70 = sub_8931F0((__int64)v90, 1, v92);
              v94 = -1;
LABEL_108:
              v89 = v70;
              sub_893480((__int64)&v93);
              result = v89;
LABEL_109:
              *(_BYTE *)(v57 + 963) = v86;
              return result;
            }
          }
          else
          {
            v68 = *v2;
            v69 = sub_AC6DA0(*v62);
            sub_A2E1A0(v68, v69, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v98.m128i_i8[4] &= ~1u;
            v66 = *v2;
            v98.m128i_i32[0] = 0;
            v96 = 0;
            v95 = &v98;
            v67 = sub_88E980((__int64 *)&v95, v66, (unsigned __int16 *)*(v62 - 1), nullptr);
            if ( v67 != 2 )
              break;
            if ( v98.m128i_i32[0] <= 1u )
            {
              v65 = v62 + 1;
              if ( (_QWORD *)v64 == v62 + 1 )
                goto LABEL_105;
            }
            else
            {
              sub_69F740((__int64)&v98);
              v65 = v62 + 1;
              if ( (_QWORD *)v64 == v62 + 1 )
                goto LABEL_105;
            }
            v62 = v65;
          }
          if ( v67 )
          {
            v80 = *v2;
            v81 = sub_AC6DA0(*(v62 - 1));
            sub_A2E1A0(v80, v81, 2283, 0);
          }
          if ( v98.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v98);
        }
        v70 = 0;
        goto LABEL_108;
      case 0xF:
        v44 = (unsigned __int64 *)(v3 + 24);
        v85 = v3 + 8LL * *(unsigned __int16 *)(v3 + 4) + 16;
        if ( v3 + 24 == v85 )
          return 1;
        while ( 2 )
        {
          v49 = *v44;
          v50 = *(unsigned __int16 *)(v3 + 6);
          if ( (*(_WORD *)*v44 & 0x1FF) != 0x1B )
          {
            if ( (_WORD)v50 && v49 == *(_QWORD *)(v3 + 8 * v50 + 16) )
            {
              if ( !(unsigned __int8)sub_8ADEA0(v2, *v44) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(*v2, *v44) )
            {
              return 0;
            }
LABEL_78:
            if ( (unsigned __int64 *)v85 == ++v44 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v50 || v49 != *(_QWORD *)(v3 + 8 * v50 + 16) )
        {
          if ( (*(_BYTE *)(v49 + 2) & 8) == 0 )
          {
            v100 |= 1u;
            v98 = 0u;
            v45 = *v2;
            v99 = 0;
            v101 = 0;
            ptr = v104;
            v103 = 0x800000000LL;
            v104[65] = 0;
            v46 = *(_QWORD *)(v45 + 32);
            v87 = *(_QWORD *)(v49 + 16);
            if ( (*(_BYTE *)(v49 + 1) & 6) != 0 )
            {
              v91 = *(_QWORD *)(v45 + 32);
              v71 = sub_6C4DA0(*(_QWORD *)(v45 + 16), *(_QWORD *)(v49 + 8), 1u);
              v46 = v91;
              v47 = v71;
            }
            else
            {
              v47 = *(_QWORD *)(v49 + 8);
            }
            v48 = sub_823B90(v46, v49, v47, &v98);
            if ( !(unsigned __int8)sub_856400(v48, v45, v87) )
            {
              if ( ptr != v104 )
                free(ptr);
              return 0;
            }
            if ( ptr != v104 )
              free(ptr);
          }
          goto LABEL_78;
        }
LABEL_12:
        sub_826D30(*v2, v3, 110);
        return 0;
      case 0x10:
        if ( *(char *)(v3 + 2) < 0 )
          goto LABEL_15;
        v3 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_24;
      case 0x13:
        a1 = (__int64 *)v3;
        v3 = sub_83DE90(v3);
        continue;
      case 0x18:
        v25 = *v2;
        a2 = v3;
        a1 = *(__int64 **)(*v2 + 32);
        v26 = (unsigned int *)sub_821340((__int64)a1, v3);
        if ( !v26 || (a2 = *v26, !(_DWORD)a2) )
        {
          v27 = *(_QWORD *)(v3 + 16);
          if ( !v27 || v3 == v27 )
          {
            sub_826D30(v25, v3, 110);
            return 0;
          }
          v3 = *(_QWORD *)(v3 + 16);
          continue;
        }
        sub_821070((__int64)v2, (__int64)(v26 + 2));
        return 1;
      case 0x2C:
        return sub_85C530(v2, v3);
      case 0x33:
        v28 = *(__int64 **)(v3 + 16);
        v29 = (__int64)(*(_QWORD *)(v3 + 24) - (_QWORD)v28) >> 3;
        if ( !(_DWORD)v29 )
          goto LABEL_21;
        if ( (_DWORD)v29 != 1 )
          goto LABEL_12;
        v3 = *v28;
        continue;
      case 0x34:
      case 0x62:
      case 0x66:
LABEL_21:
        sub_824510(v2, 0, *(_QWORD *)(v3 + 8));
        return 1;
      case 0x37:
        v3 = *(_QWORD *)(v3
                       + 8LL
                       * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v20 = *v2;
        v21 = *(_QWORD *)(*v2 + 32);
        v22 = *(_DWORD *)(*v2 + 320);
        v98.m128i_i64[0] = *v2;
        v23 = *(_DWORD *)(v21 + 208);
        v98.m128i_i32[2] = v22;
        *(_DWORD *)(v21 + 208) = v23 + 1;
        sub_847EC0(v21 + 184, v23 + 1);
        v24 = sub_8ADEA0(v2, *(_QWORD *)(v3 + 16));
        if ( v24 )
        {
          v24 = sub_8941C0(v20, 1, v22);
          v98.m128i_i32[2] = -1;
        }
        v83 = v24;
        sub_894600((__int64)&v98);
        return v83;
      case 0x3B:
        if ( (*(_WORD *)(v3 + 2) & 0x1E0) == 0 )
          goto LABEL_15;
        sub_805700((__int64)&v98, v3);
        sub_821070((__int64)v2, (__int64)&v98.m128i_i64[1]);
        if ( v98.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v98);
        return 1;
      case 0x3D:
        v52 = *(void **)(v3 + 16);
        v53 = *(unsigned int *)(v3 + 24);
        if ( (unsigned __int64)(v53 + 63) > 0x7F )
        {
          sub_2585D40(&v93, v53, (unsigned __int64)(v53 + 63) >> 6, v52);
        }
        else
        {
          v94 = *(_DWORD *)(v3 + 24);
          v93 = v52;
        }
        v54 = sub_70B7E0(*(_QWORD *)(*v2 + 16), *(_QWORD *)(v3 + 8));
        v55 = v94;
        LODWORD(v96) = v94;
        if ( v94 > 0x40 )
        {
          sub_2585B30(&v95);
          v55 = v96;
          v56 = v95;
        }
        else
        {
          v56 = v93;
        }
        v98.m128i_i32[2] = v55;
        v98.m128i_i64[0] = (__int64)v56;
        v98.m128i_i8[12] = (v54 & 0x20000000) == 0;
        LODWORD(v99) = v54;
        sub_821070((__int64)v2, (__int64)&v98);
        if ( v98.m128i_i32[2] > 0x40u && v98.m128i_i64[0] )
          operator delete[]((void *)v98.m128i_i64[0]);
        if ( v94 > 0x40 && v93 )
          operator delete[](v93);
        return 1;
      case 0x3E:
        return sub_85CB20(v2, v3);
      case 0x40:
        v30 = *(unsigned int *)(v3 + 48);
        a1 = v97;
        v97[0] = v3;
        v97[1] = v30;
        v3 = *(_QWORD *)sub_849A00(v97);
        continue;
      case 0x4A:
        goto LABEL_25;
      case 0x4B:
        if ( *(_BYTE *)(v3 + 48) )
LABEL_24:
          v3 = *(_QWORD *)(v3 + 24);
        else
LABEL_25:
          v3 = *(_QWORD *)(v3 + 32);
        continue;
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
        return sub_8B06B0(v2, v3);
      case 0x50:
        v10 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
        if ( v10 )
          sub_823450(v10, 0);
        return sub_8B06B0(v2, v3);
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*v2 + 16) + 2160LL) + 1LL) >= 0 )
        {
          v51 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
          if ( v51 )
            sub_823450(v51, 1);
        }
        return sub_8B06B0(v2, v3);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8AD000(v2, v3);
      case 0x6D:
        v11 = *(_QWORD *)(*v2 + 32);
        v12 = *(_DWORD *)(v11 + 208) + 1;
        *(_DWORD *)(v11 + 208) = v12;
        sub_847EC0(v11 + 184, v12);
        v13 = sub_8C4900(v3);
        v14 = *v2;
        if ( v13 )
        {
          v15 = *(_QWORD *)(v14 + 32);
          if ( *(_QWORD *)(v15 + 64) )
          {
            v16 = sub_8C4900(v3);
            result = sub_8ADEA0(v2, v16);
          }
          else
          {
            *(_QWORD *)(v15 + 64) = v3;
            v73 = sub_8C4900(v3);
            result = sub_8ADEA0(v2, v73);
            *(_QWORD *)(v15 + 64) = 0;
          }
        }
        else
        {
          sub_826D30(v14, v3, 110);
          result = 0;
        }
        goto LABEL_29;
      case 0x6E:
        v11 = *(_QWORD *)(*v2 + 32);
        v17 = *(_DWORD *)(v11 + 208) + 1;
        *(_DWORD *)(v11 + 208) = v17;
        sub_847EC0(v11 + 184, v17);
        v18 = *(_QWORD *)(*v2 + 32);
        if ( *(_QWORD *)(v18 + 64) )
        {
          v19 = sub_8C4680(v3);
          result = sub_8ADEA0(v2, v19);
        }
        else
        {
          *(_QWORD *)(v18 + 64) = v3;
          v72 = sub_8C4680(v3);
          result = sub_8ADEA0(v2, v72);
          *(_QWORD *)(v18 + 64) = 0;
        }
LABEL_29:
        --*(_DWORD *)(v11 + 192);
        return result;
      case 0x74:
      case 0x75:
        v7 = v3;
        v8 = v2;
        return sub_8AFDE0(v8, v7);
      case 0x7E:
        v31 = (_WORD *)sub_8116F0(*(_QWORD *)(v3 + 24));
        v32 = *v31 & 0x1FF;
        if ( v32 <= 0x59u || v32 > 0x5Eu )
        {
          v34 = *v2;
        }
        else
        {
          v33 = sub_80FBD0((__int64)v31);
          v34 = *v2;
          if ( v33 == 212 )
          {
            result = 0;
            if ( *(_BYTE *)(v34 + 962) )
              return result;
            v77 = *(char **)(v34 + 24);
            v98.m128i_i64[0] = *v2;
            v98.m128i_i8[8] = 1;
            v78 = *(_DWORD *)(v34 + 964);
            v79 = *((_QWORD *)v77 + 1);
            if ( v79 && !*(_DWORD *)(v79 + 8) )
            {
              v82 = *v77;
              v98.m128i_i32[3] = *(_DWORD *)(v34 + 964);
              v98.m128i_i8[9] = v82 ^ 1;
            }
            else
            {
              v98.m128i_i8[9] = 0;
              v98.m128i_i32[3] = v78;
            }
            *(_DWORD *)(v34 + 964) = 2;
            v34 = *v2;
LABEL_56:
            if ( (unsigned __int8)sub_8571E0(*(_QWORD *)(v3 + 24), &v95, v34) )
            {
              if ( (_BYTE)v95 )
                v74 = *(_QWORD *)(v3 + 32);
              else
                v74 = *(_QWORD *)(v3 + 40);
              v43 = sub_8ADEA0(v2, v74);
              if ( v43 )
                goto LABEL_62;
              goto LABEL_61;
            }
            v37 = *v2;
            v38 = *(_BYTE *)(*v2 + 962);
            v39 = *(_DWORD *)(*v2 + 48);
            if ( v38 )
            {
              if ( !v39 )
              {
LABEL_61:
                v98.m128i_i8[8] = 0;
                v43 = 0;
LABEL_62:
                v84 = v43;
                sub_848320(v98.m128i_i64);
                return v84;
              }
              v40 = sub_820420(1u, *(unsigned __int8 *)(v37 + 963));
              *v42 = v40 | v41;
              if ( v40 )
              {
                sub_8B1180(v2, v3);
                goto LABEL_61;
              }
              v37 = *v2;
              if ( !*(_DWORD *)(*v2 + 48) )
                goto LABEL_61;
              v38 = *(_BYTE *)(v37 + 962);
            }
            else if ( !v39 )
            {
              goto LABEL_61;
            }
            v76 = v38 | *(_BYTE *)(v37 + 963);
            **(_BYTE **)(v37 + 24) |= v76;
            if ( v76 )
            {
              sub_8ADEA0(v2, *(_QWORD *)(v3 + 32));
              sub_8ADEA0(v2, *(_QWORD *)(v3 + 40));
            }
            goto LABEL_61;
          }
        }
        v35 = *(_QWORD *)(v34 + 24);
        v98.m128i_i64[0] = v34;
        v98.m128i_i8[8] = 0;
        v36 = *(_QWORD *)(v35 + 8);
        if ( v36 )
        {
          if ( *(_DWORD *)(v36 + 8) )
            v98.m128i_i8[9] = 0;
          else
            v98.m128i_i8[9] = *(_BYTE *)v35 ^ 1;
          v98.m128i_i32[3] = *(_DWORD *)(v34 + 964);
        }
        else
        {
          v75 = *(_DWORD *)(v34 + 964);
          v98.m128i_i8[9] = 0;
          v98.m128i_i32[3] = v75;
        }
        goto LABEL_56;
    }
  }
}

