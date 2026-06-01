__int64 __fastcall sub_8A87B0(__int64 *a1, __int64 a2)
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
  __int64 v11; // rax
  __int64 v12; // r15
  char v13; // al
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // rdx
  _QWORD *v18; // r14
  __int64 v19; // rax
  __int64 v20; // r12
  _QWORD *v21; // rax
  __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // rbx
  unsigned int v25; // eax
  unsigned __int8 v26; // al
  __int64 v27; // rbp
  __int64 v28; // rax
  unsigned int v29; // r12d
  int v30; // ecx
  __int64 v31; // rdx
  unsigned __int8 v32; // al
  __int64 v33; // rbp
  _DWORD *v34; // rax
  __int64 v35; // rax
  unsigned __int64 *v36; // r15
  __int64 v37; // r12
  __int64 v38; // r11
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned __int64 v41; // rbp
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r12
  int v45; // esi
  __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // esi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 v54; // rdx
  _WORD *v55; // rdi
  unsigned __int16 v56; // ax
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  char v63; // al
  char v64; // r9
  _BYTE *v65; // r10
  char v66; // al
  __int64 v67; // rcx
  _BYTE *v68; // rdx
  __int64 v69; // rdx
  unsigned __int8 v70; // al
  unsigned __int8 **v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int32 v78; // eax
  char *v79; // rdx
  __int32 v80; // eax
  __int64 v81; // rsi
  __int64 v82; // rbp
  unsigned int v83; // eax
  char v84; // dl
  char v85; // [rsp+0h] [rbp-118h]
  unsigned __int8 v86; // [rsp+0h] [rbp-118h]
  __int64 v87; // [rsp+0h] [rbp-118h]
  unsigned __int8 v88; // [rsp+0h] [rbp-118h]
  __int64 v89; // [rsp+8h] [rbp-110h]
  unsigned __int8 v90; // [rsp+8h] [rbp-110h]
  unsigned __int64 v91; // [rsp+8h] [rbp-110h]
  __int64 v92; // [rsp+10h] [rbp-108h]
  __int64 v93; // [rsp+10h] [rbp-108h]
  unsigned int v94; // [rsp+1Ch] [rbp-FCh]
  __int64 v95; // [rsp+20h] [rbp-F8h] BYREF
  int v96; // [rsp+28h] [rbp-F0h]
  __int64 v97[2]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v98[2]; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v99; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v100; // [rsp+60h] [rbp-B8h]
  char v101; // [rsp+68h] [rbp-B0h]
  __int64 v102; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-98h]
  __int64 v104; // [rsp+88h] [rbp-90h]
  _BYTE v105[136]; // [rsp+90h] [rbp-88h] BYREF

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
                return sub_86BA90(v2, v3);
              case 2:
              case 3:
              case 4:
              case 5:
              case 7:
              case 8:
              case 9:
              case 13:
                return sub_8577E0(v2, v3);
              case 6:
              case 10:
              case 12:
LABEL_15:
                v3 = *(_QWORD *)(v3 + 16);
                continue;
              case 11:
                sub_857160(*v2, *(_QWORD *)(v3 + 16));
                sub_833A00(v2, *(_QWORD *)(v3 + 8));
                return 1;
            }
          }
          return sub_8577E0(v2, v3);
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
            return sub_8AA110(v8, v7);
          default:
            a2 = v6;
            a1 = v5;
            goto LABEL_8;
        }
      }
      break;
    }
LABEL_8:
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
      case 0x3D:
      case 0x3F:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
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
        return sub_8AA7A0(v2, v3);
      case 6:
      case 0x63:
        goto LABEL_15;
      case 8:
        v12 = *v2;
        v13 = *(_BYTE *)(*v2 + 963);
        *(_BYTE *)(*v2 + 963) = 0;
        v85 = v13;
        result = 1;
        v89 = *(_QWORD *)(v3 + 16);
        if ( !*(_DWORD *)(v89 + 4) )
          goto LABEL_42;
        v14 = *(_DWORD *)(*v2 + 320);
        v92 = *v2;
        v95 = v92;
        v15 = *(_QWORD *)(v92 + 32);
        v94 = v14;
        v96 = v14;
        v16 = *(_DWORD *)(v15 + 208) + 1;
        *(_DWORD *)(v15 + 208) = v16;
        sub_847EC0(v15 + 184, v16);
        v17 = v89;
        v18 = (_QWORD *)(v89 + 24);
        v19 = 8LL * *(unsigned int *)(v89 + 4);
        v20 = v89 + v19 + 16;
        if ( v19 == 8 )
        {
          v18 = (_QWORD *)(v89 + 16);
LABEL_38:
          if ( ((*(_WORD *)*v18 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_8A87B0(v2, *v18, v17) )
            {
              v26 = sub_8931F0(v92, 1, v94);
              v96 = -1;
LABEL_41:
              v90 = v26;
              sub_893480((__int64)&v95);
              result = v90;
LABEL_42:
              *(_BYTE *)(v12 + 963) = v85;
              return result;
            }
          }
          else
          {
            v24 = *v2;
            v25 = sub_AC6DA0(*v18);
            sub_A2E1A0(v24, v25, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v99.m128i_i8[4] &= ~1u;
            v22 = *v2;
            v99.m128i_i32[0] = 0;
            v97[1] = 0;
            v97[0] = (__int64)&v99;
            v23 = sub_88E980(v97, v22, (unsigned __int16 *)*(v18 - 1), nullptr);
            if ( v23 != 2 )
              break;
            if ( v99.m128i_i32[0] <= 1u )
            {
              v21 = v18 + 1;
              if ( (_QWORD *)v20 == v18 + 1 )
                goto LABEL_38;
            }
            else
            {
              sub_69F740((__int64)&v99);
              v21 = v18 + 1;
              if ( (_QWORD *)v20 == v18 + 1 )
                goto LABEL_38;
            }
            v18 = v21;
          }
          if ( v23 )
          {
            v82 = *v2;
            v83 = sub_AC6DA0(*(v18 - 1));
            sub_A2E1A0(v82, v83, 2283, 0);
          }
          if ( v99.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v99);
        }
        v26 = 0;
        goto LABEL_41;
      case 0xB:
        return sub_8655C0(v2, v3);
      case 0xF:
        v36 = (unsigned __int64 *)(v3 + 24);
        v87 = v3 + 8LL * *(unsigned __int16 *)(v3 + 4) + 16;
        if ( v3 + 24 == v87 )
          return 1;
        while ( 2 )
        {
          v41 = *v36;
          v42 = *(unsigned __int16 *)(v3 + 6);
          v43 = *(unsigned __int16 *)*v36;
          LOWORD(v43) = v43 & 0x1FF;
          if ( (_WORD)v43 != 27 )
          {
            if ( (_WORD)v42 && v41 == *(_QWORD *)(v3 + 8 * v42 + 16) )
            {
              if ( !(unsigned __int8)sub_8A87B0(v2, *v36, v43) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(*v2, *v36) )
            {
              return 0;
            }
LABEL_69:
            if ( (unsigned __int64 *)v87 == ++v36 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v42 || v41 != *(_QWORD *)(v3 + 8 * v42 + 16) )
        {
          if ( (*(_BYTE *)(v41 + 2) & 8) == 0 )
          {
            v101 |= 1u;
            v99 = 0u;
            v37 = *v2;
            v100 = 0;
            v102 = 0;
            ptr = v105;
            v104 = 0x800000000LL;
            v105[65] = 0;
            v38 = *(_QWORD *)(v37 + 32);
            v91 = *(_QWORD *)(v41 + 16);
            if ( (*(_BYTE *)(v41 + 1) & 6) != 0 )
            {
              v93 = *(_QWORD *)(v37 + 32);
              v72 = sub_6C4DA0(*(_QWORD *)(v37 + 16), *(_QWORD *)(v41 + 8), 1u);
              v38 = v93;
              v39 = v72;
            }
            else
            {
              v39 = *(_QWORD *)(v41 + 8);
            }
            v40 = sub_823B90(v38, v41, v39, &v99);
            if ( !(unsigned __int8)sub_856400(v40, v37, v91) )
            {
              if ( ptr != v105 )
                free(ptr);
              return 0;
            }
            if ( ptr != v105 )
              free(ptr);
          }
          goto LABEL_69;
        }
LABEL_12:
        sub_8272B0(*v2, v3, 110);
        return 0;
      case 0x10:
        if ( *(char *)(v3 + 2) < 0 )
          goto LABEL_15;
        v3 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_25;
      case 0x13:
        a1 = (__int64 *)v3;
        v3 = sub_83DE90(v3);
        continue;
      case 0x18:
        v33 = *v2;
        a2 = v3;
        a1 = *(__int64 **)(*v2 + 32);
        v34 = (_DWORD *)sub_821340((__int64)a1, v3);
        if ( !v34 || !*v34 )
        {
          v35 = *(_QWORD *)(v3 + 16);
          if ( !v35 || v3 == v35 )
          {
            sub_8272B0(v33, v3, 110);
            return 0;
          }
          v3 = *(_QWORD *)(v3 + 16);
          continue;
        }
        sub_6A63E0(v2[1], (__int64)v34);
        return 1;
      case 0x2C:
        return sub_8582B0(v2, v3);
      case 0x33:
        return sub_8AAAE0(v2, v3);
      case 0x34:
      case 0x62:
      case 0x66:
        sub_833A00(v2, *(_QWORD *)(v3 + 8));
        return 1;
      case 0x37:
        v3 = *(_QWORD *)(v3
                       + 8LL
                       * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v27 = *v2;
        v28 = *(_QWORD *)(*v2 + 32);
        v29 = *(_DWORD *)(*v2 + 320);
        v99.m128i_i64[0] = *v2;
        v30 = *(_DWORD *)(v28 + 208);
        v99.m128i_i32[2] = v29;
        *(_DWORD *)(v28 + 208) = v30 + 1;
        sub_847EC0(v28 + 184, v30 + 1);
        v32 = sub_8A87B0(v2, *(_QWORD *)(v3 + 16), v31);
        if ( v32 )
        {
          v32 = sub_8941C0(v27, 1, v29);
          v99.m128i_i32[2] = -1;
        }
        v86 = v32;
        sub_894600((__int64)&v99);
        return v86;
      case 0x3B:
        if ( (*(_WORD *)(v3 + 2) & 0x1E0) == 0 )
          goto LABEL_15;
        sub_805700((__int64)&v99, v3);
        sub_6A63E0(v2[1], (__int64)&v99);
        if ( v99.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v99);
        return 1;
      case 0x3E:
        return sub_8587C0(v2, v3);
      case 0x40:
        v11 = *(unsigned int *)(v3 + 48);
        a1 = v98;
        v98[0] = v3;
        v98[1] = v11;
        v3 = *(_QWORD *)sub_849A00(v98);
        continue;
      case 0x48:
        return sub_85FB80(v2, v3);
      case 0x4A:
        goto LABEL_26;
      case 0x4B:
        if ( *(_BYTE *)(v3 + 48) )
LABEL_25:
          v3 = *(_QWORD *)(v3 + 24);
        else
LABEL_26:
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
        return sub_8A9280(v2, v3);
      case 0x50:
        v10 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
        if ( v10 )
          sub_823450(v10, 0);
        return sub_8A9280(v2, v3);
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*v2 + 16) + 2160LL) + 1LL) >= 0 )
        {
          v71 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
          if ( v71 )
            sub_823450(v71, 1);
        }
        return sub_8A9280(v2, v3);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8A7950(v2, v3);
      case 0x6D:
        v44 = *(_QWORD *)(*v2 + 32);
        v49 = *(_DWORD *)(v44 + 208) + 1;
        *(_DWORD *)(v44 + 208) = v49;
        sub_847EC0(v44 + 184, v49);
        v50 = sub_8C4900(v3);
        v51 = *v2;
        if ( v50 )
        {
          v52 = *(_QWORD *)(v51 + 32);
          if ( *(_QWORD *)(v52 + 64) )
          {
            v53 = sub_8C4900(v3);
            result = sub_8A87B0(v2, v53, v54);
          }
          else
          {
            *(_QWORD *)(v52 + 64) = v3;
            v75 = sub_8C4900(v3);
            result = sub_8A87B0(v2, v75, v76);
            *(_QWORD *)(v52 + 64) = 0;
          }
        }
        else
        {
          sub_8272B0(v51, v3, 110);
          result = 0;
        }
        goto LABEL_78;
      case 0x6E:
        v44 = *(_QWORD *)(*v2 + 32);
        v45 = *(_DWORD *)(v44 + 208) + 1;
        *(_DWORD *)(v44 + 208) = v45;
        sub_847EC0(v44 + 184, v45);
        v46 = *(_QWORD *)(*v2 + 32);
        if ( *(_QWORD *)(v46 + 64) )
        {
          v47 = sub_8C4680(v3);
          result = sub_8A87B0(v2, v47, v48);
        }
        else
        {
          *(_QWORD *)(v46 + 64) = v3;
          v73 = sub_8C4680(v3);
          result = sub_8A87B0(v2, v73, v74);
          *(_QWORD *)(v46 + 64) = 0;
        }
LABEL_78:
        --*(_DWORD *)(v44 + 192);
        return result;
      case 0x74:
      case 0x75:
        v7 = v3;
        v8 = v2;
        return sub_8AA110(v8, v7);
      case 0x7E:
        v55 = (_WORD *)sub_8116F0(*(_QWORD *)(v3 + 24));
        v56 = *v55 & 0x1FF;
        if ( v56 <= 0x59u || v56 > 0x5Eu )
        {
          v58 = *v2;
        }
        else
        {
          v57 = sub_80FBD0((__int64)v55);
          v58 = *v2;
          if ( v57 == 212 )
          {
            result = 0;
            if ( *(_BYTE *)(v58 + 962) )
              return result;
            v79 = *(char **)(v58 + 24);
            v99.m128i_i64[0] = *v2;
            v99.m128i_i8[8] = 1;
            v80 = *(_DWORD *)(v58 + 964);
            v81 = *((_QWORD *)v79 + 1);
            if ( v81 && !*(_DWORD *)(v81 + 8) )
            {
              v84 = *v79;
              v99.m128i_i32[3] = *(_DWORD *)(v58 + 964);
              v99.m128i_i8[9] = v84 ^ 1;
            }
            else
            {
              v99.m128i_i8[9] = 0;
              v99.m128i_i32[3] = v80;
            }
            *(_DWORD *)(v58 + 964) = 2;
            v58 = *v2;
LABEL_90:
            if ( (unsigned __int8)sub_8571E0(*(_QWORD *)(v3 + 24), v97, v58) )
            {
              if ( LOBYTE(v97[0]) )
                v77 = *(_QWORD *)(v3 + 32);
              else
                v77 = *(_QWORD *)(v3 + 40);
              v70 = sub_8A87B0(v2, v77, v61);
              if ( v70 )
                goto LABEL_99;
              goto LABEL_98;
            }
            v62 = *v2;
            if ( !*(_BYTE *)(*v2 + 962) )
              goto LABEL_95;
            if ( *(_DWORD *)(v62 + 48) )
            {
              v63 = sub_820420(1u, *(unsigned __int8 *)(v62 + 963));
              *v65 = v63 | v64;
              if ( !v63 )
              {
                v62 = *v2;
LABEL_95:
                if ( *(_DWORD *)(v62 + 48) )
                {
                  v66 = sub_820420(*(unsigned __int8 *)(v62 + 962), *(unsigned __int8 *)(v62 + 963));
                  v68 = *(_BYTE **)(v67 + 24);
                  *v68 |= v66;
                  if ( v66 )
                  {
                    sub_8A87B0(v2, *(_QWORD *)(v3 + 32), v68);
                    sub_8A87B0(v2, *(_QWORD *)(v3 + 40), v69);
                  }
                }
                goto LABEL_98;
              }
              sub_8AA260(v2, v3);
            }
LABEL_98:
            v99.m128i_i8[8] = 0;
            v70 = 0;
LABEL_99:
            v88 = v70;
            sub_848320(v99.m128i_i64);
            return v88;
          }
        }
        v59 = *(_QWORD *)(v58 + 24);
        v99.m128i_i64[0] = v58;
        v99.m128i_i8[8] = 0;
        v60 = *(_QWORD *)(v59 + 8);
        if ( v60 )
        {
          if ( *(_DWORD *)(v60 + 8) )
            v99.m128i_i8[9] = 0;
          else
            v99.m128i_i8[9] = *(_BYTE *)v59 ^ 1;
          v99.m128i_i32[3] = *(_DWORD *)(v58 + 964);
        }
        else
        {
          v78 = *(_DWORD *)(v58 + 964);
          v99.m128i_i8[9] = 0;
          v99.m128i_i32[3] = v78;
        }
        goto LABEL_90;
    }
  }
}

