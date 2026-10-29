__int64 __fastcall sub_8B3670(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 v3; // rbp
  unsigned __int16 v4; // ax
  __int64 *v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // rsi
  __int64 *v8; // rdi
  unsigned int v10; // r12d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int8 **v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned int v17; // r13d
  int v18; // ecx
  __int64 v19; // rdx
  unsigned __int64 *v20; // r12
  __int64 v21; // rbx
  __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rbx
  _DWORD *v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  _WORD *v32; // rdi
  unsigned __int16 v33; // ax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // ebx
  char v40; // r15
  char v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // edx
  int v45; // ecx
  char v46; // al
  char v47; // cl
  _BYTE *v48; // r8
  __int64 v49; // r13
  char v50; // al
  __int64 v51; // rdx
  unsigned int v52; // ebx
  int v53; // eax
  _QWORD *v54; // r15
  __int64 v55; // rdx
  __int64 v56; // r12
  _QWORD *v57; // rax
  __int64 v58; // rsi
  int v59; // eax
  __int64 v60; // rbx
  unsigned int v61; // eax
  __int64 *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rbx
  int v65; // esi
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // r13
  __int64 v69; // rax
  __int64 v70; // rdx
  int v71; // esi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int8 **v75; // rdi
  __int64 v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdx
  unsigned int v80; // eax
  __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // rbp
  unsigned int v84; // eax
  unsigned int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rbx
  unsigned int v89; // eax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // [rsp+0h] [rbp-148h]
  char v93; // [rsp+0h] [rbp-148h]
  char v94; // [rsp+0h] [rbp-148h]
  unsigned __int64 v95; // [rsp+8h] [rbp-140h]
  __int64 v96; // [rsp+8h] [rbp-140h]
  __int64 v97; // [rsp+10h] [rbp-138h]
  __int64 v98; // [rsp+10h] [rbp-138h]
  __int64 v99; // [rsp+20h] [rbp-128h] BYREF
  int v100; // [rsp+28h] [rbp-120h]
  _QWORD v101[2]; // [rsp+30h] [rbp-118h] BYREF
  __m128i v102; // [rsp+40h] [rbp-108h] BYREF
  char v103; // [rsp+50h] [rbp-F8h]
  __m128i v104; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v105; // [rsp+90h] [rbp-B8h]
  char v106; // [rsp+98h] [rbp-B0h]
  __int64 v107; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v109; // [rsp+B8h] [rbp-90h]
  _BYTE v110[65]; // [rsp+C0h] [rbp-88h] BYREF
  char v111; // [rsp+101h] [rbp-47h]

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
                v11 = sub_A2CB40(*v2);
                v12 = *v2;
                if ( (*(_BYTE *)(v11 + 1) & 0x20) == 0
                  && (!*(_DWORD *)(v12 + 48)
                   || !(unsigned __int8)sub_820420(*(unsigned __int8 *)(v12 + 962), *(unsigned __int8 *)(v12 + 963))) )
                {
                  goto LABEL_18;
                }
                goto LABEL_106;
              case 1:
                v13 = sub_A2CB40(*v2);
                v12 = *v2;
                if ( (*(_BYTE *)(v13 + 1) & 0x20) == 0
                  && (!*(_DWORD *)(v12 + 48)
                   || !(unsigned __int8)sub_820420(*(unsigned __int8 *)(v12 + 962), *(unsigned __int8 *)(v12 + 963))) )
                {
LABEL_18:
                  sub_8267B0(v12, v3, 110);
                  return 0;
                }
LABEL_106:
                v106 |= 1u;
                v104 = 0u;
                v105 = 0;
                v107 = 0;
                ptr = v110;
                v109 = 0x800000000LL;
                v111 = 0;
                v76 = *(_QWORD *)(v3 + 16);
                v102.m128i_i64[0] = v12;
                v102.m128i_i64[1] = (__int64)&v104;
                v103 = 0;
                v10 = sub_869D30(&v102, v76);
                if ( (_BYTE)v10 )
                {
                  v102.m128i_i8[4] &= ~1u;
                  v102.m128i_i32[0] = 0;
                  v10 = sub_84D690(
                          *v2,
                          (_DWORD *)v3,
                          &v104,
                          *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL),
                          ((*(_BYTE *)(v3 + 2) >> 3) & 0x1D) == 0,
                          (__int64)&v102);
                  if ( (_BYTE)v10 )
                    sub_6A63E0(v2[2], (__int64)&v102);
                  if ( v102.m128i_i32[0] > 1u )
                    sub_69F740((__int64)&v102);
                }
                if ( ptr != v110 )
                  free(ptr);
                break;
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
                goto LABEL_12;
              case 6:
              case 12:
LABEL_11:
                v3 = *(_QWORD *)(v3 + 16);
                continue;
            }
            return v10;
          }
LABEL_12:
          sub_8267B0(*v2, v3, 110);
          return 0;
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
            return sub_8B51C0(v8, v7);
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
      case 0x3D:
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
        return sub_8B5B00(v2, v3);
      case 6:
      case 0x63:
        goto LABEL_11;
      case 8:
        v49 = *v2;
        v10 = 1;
        v50 = *(_BYTE *)(*v2 + 963);
        *(_BYTE *)(*v2 + 963) = 0;
        v94 = v50;
        v96 = *(_QWORD *)(v3 + 16);
        if ( !*(_DWORD *)(v96 + 4) )
          goto LABEL_85;
        v51 = *(_QWORD *)(*v2 + 32);
        v52 = *(_DWORD *)(*v2 + 320);
        v97 = *v2;
        v99 = *v2;
        v53 = *(_DWORD *)(v51 + 208);
        v100 = v52;
        *(_DWORD *)(v51 + 208) = v53 + 1;
        sub_847EC0(v51 + 184, v53 + 1);
        v54 = (_QWORD *)(v96 + 24);
        v55 = 8LL * *(unsigned int *)(v96 + 4);
        v56 = v96 + v55 + 16;
        if ( v55 == 8 )
        {
          v54 = (_QWORD *)(v96 + 16);
LABEL_81:
          if ( ((*(_WORD *)*v54 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_8B3670(v2, *v54, v55) )
            {
              v100 = -1;
              v10 = sub_8931F0(v97, 1, v52);
LABEL_84:
              sub_893480((__int64)&v99);
LABEL_85:
              *(_BYTE *)(v49 + 963) = v94;
              return v10;
            }
          }
          else
          {
            v60 = *v2;
            v61 = sub_AC6DA0(*v54);
            sub_A2E1A0(v60, v61, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v104.m128i_i8[4] &= ~1u;
            v58 = *v2;
            v104.m128i_i32[0] = 0;
            v102.m128i_i64[1] = 0;
            v102.m128i_i64[0] = (__int64)&v104;
            v59 = sub_88E980(v102.m128i_i64, v58, (unsigned __int16 *)*(v54 - 1), nullptr);
            if ( v59 != 2 )
              break;
            if ( v104.m128i_i32[0] <= 1u )
            {
              v57 = v54 + 1;
              if ( (_QWORD *)v56 == v54 + 1 )
                goto LABEL_81;
            }
            else
            {
              sub_69F740((__int64)&v104);
              v57 = v54 + 1;
              if ( v54 + 1 == (_QWORD *)v56 )
                goto LABEL_81;
            }
            v54 = v57;
          }
          if ( v59 )
          {
            v88 = *v2;
            v89 = sub_AC6DA0(*(v54 - 1));
            sub_A2E1A0(v88, v89, 2283, 0);
          }
          if ( v104.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v104);
        }
        v10 = 0;
        goto LABEL_84;
      case 0xF:
        v20 = (unsigned __int64 *)(v3 + 24);
        v92 = v3 + 8LL * *(unsigned __int16 *)(v3 + 4) + 16;
        if ( v3 + 24 == v92 )
          return 1;
        while ( 2 )
        {
          v25 = *v20;
          v26 = *(unsigned __int16 *)(v3 + 6);
          v27 = *(unsigned __int16 *)*v20;
          LOWORD(v27) = v27 & 0x1FF;
          if ( (_WORD)v27 != 27 )
          {
            if ( (_WORD)v26 && v25 == *(_QWORD *)(v3 + 8 * v26 + 16) )
            {
              if ( !(unsigned __int8)sub_8B3670(v2, *v20, v27) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(*v2, *v20) )
            {
              return 0;
            }
LABEL_45:
            if ( (unsigned __int64 *)v92 == ++v20 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v26 || v25 != *(_QWORD *)(v3 + 8 * v26 + 16) )
        {
          if ( (*(_BYTE *)(v25 + 2) & 8) == 0 )
          {
            v21 = *v2;
            v104 = 0u;
            v106 |= 1u;
            v105 = 0;
            v107 = 0;
            ptr = v110;
            v109 = 0x800000000LL;
            v111 = 0;
            v22 = *(_QWORD *)(v21 + 32);
            v95 = *(_QWORD *)(v25 + 16);
            if ( (*(_BYTE *)(v25 + 1) & 6) != 0 )
            {
              v98 = *(_QWORD *)(v21 + 32);
              v77 = sub_6C4DA0(*(_QWORD *)(v21 + 16), *(_QWORD *)(v25 + 8), 1u);
              v22 = v98;
              v23 = v77;
            }
            else
            {
              v23 = *(_QWORD *)(v25 + 8);
            }
            v24 = sub_823B90(v22, v25, v23, &v104);
            if ( !(unsigned __int8)sub_856400(v24, v21, v95) )
            {
              if ( ptr != v110 )
                free(ptr);
              return 0;
            }
            if ( ptr != v110 )
              free(ptr);
          }
          goto LABEL_45;
        }
        goto LABEL_12;
      case 0x10:
        if ( *(char *)(v3 + 2) < 0 )
          goto LABEL_11;
        v3 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_29;
      case 0x13:
        a1 = (__int64 *)v3;
        v3 = sub_83DE90(v3);
        continue;
      case 0x18:
        v28 = *v2;
        a2 = v3;
        a1 = *(__int64 **)(*v2 + 32);
        v29 = (_DWORD *)sub_821340((__int64)a1, v3);
        if ( !v29 || !*v29 )
        {
          v30 = *(_QWORD *)(v3 + 16);
          if ( !v30 || v3 == v30 )
          {
            sub_8267B0(v28, v3, 110);
            return 0;
          }
          v3 = *(_QWORD *)(v3 + 16);
          continue;
        }
        sub_6A63E0(v2[2], (__int64)v29);
        return 1;
      case 0x2C:
        return sub_85EA30(v2, v3);
      case 0x33:
        v62 = *(__int64 **)(v3 + 16);
        v63 = (__int64)(*(_QWORD *)(v3 + 24) - (_QWORD)v62) >> 3;
        if ( !(_DWORD)v63 )
          return sub_898FF0(v2, *(_QWORD *)(v3 + 8));
        if ( (_DWORD)v63 != 1 )
          goto LABEL_12;
        v3 = *v62;
        continue;
      case 0x34:
      case 0x62:
      case 0x66:
        return sub_898FF0(v2, *(_QWORD *)(v3 + 8));
      case 0x37:
        v3 = *(_QWORD *)(v3
                       + 8LL
                       * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v15 = *v2;
        v16 = *(_QWORD *)(*v2 + 32);
        v17 = *(_DWORD *)(*v2 + 320);
        v104.m128i_i64[0] = *v2;
        v18 = *(_DWORD *)(v16 + 208);
        v104.m128i_i32[2] = v17;
        *(_DWORD *)(v16 + 208) = v18 + 1;
        sub_847EC0(v16 + 184, v18 + 1);
        v10 = sub_8B3670(v2, *(_QWORD *)(v3 + 16), v19);
        if ( (_BYTE)v10 )
        {
          v85 = sub_8941C0(v15, 1, v17);
          v104.m128i_i32[2] = -1;
          v10 = v85;
        }
        sub_894600((__int64)&v104);
        return v10;
      case 0x3B:
        if ( (*(_WORD *)(v3 + 2) & 0x1E0) == 0 )
          goto LABEL_11;
        sub_805700((__int64)&v104, v3);
        sub_6A63E0(v2[2], (__int64)&v104);
        if ( v104.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v104);
        return 1;
      case 0x3E:
        return sub_85EF40(v2, v3);
      case 0x40:
        v74 = *(unsigned int *)(v3 + 48);
        a1 = v101;
        v101[0] = v3;
        v101[1] = v74;
        v3 = *(_QWORD *)sub_849A00(v101);
        continue;
      case 0x4A:
        goto LABEL_30;
      case 0x4B:
        if ( *(_BYTE *)(v3 + 48) )
LABEL_29:
          v3 = *(_QWORD *)(v3 + 24);
        else
LABEL_30:
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
        return sub_8B5080(v2, v3);
      case 0x50:
        v14 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
        if ( v14 )
          sub_823450(v14, 0);
        return sub_8B5080(v2, v3);
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*v2 + 16) + 2160LL) + 1LL) >= 0 )
        {
          v75 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
          if ( v75 )
            sub_823450(v75, 1);
        }
        return sub_8B5080(v2, v3);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8B28C0(v2, v3);
      case 0x6D:
        v64 = *(_QWORD *)(*v2 + 32);
        v65 = *(_DWORD *)(v64 + 208) + 1;
        *(_DWORD *)(v64 + 208) = v65;
        sub_847EC0(v64 + 184, v65);
        v66 = sub_8C4900(v3);
        v67 = *v2;
        if ( !v66 )
        {
          v10 = 0;
          sub_8267B0(v67, v3, 110);
          goto LABEL_93;
        }
        v68 = *(_QWORD *)(v67 + 32);
        if ( *(_QWORD *)(v68 + 64) )
        {
          v69 = sub_8C4900(v3);
          v10 = sub_8B3670(v2, v69, v70);
          goto LABEL_93;
        }
        *(_QWORD *)(v68 + 64) = v3;
        v78 = sub_8C4900(v3);
        goto LABEL_120;
      case 0x6E:
        v64 = *(_QWORD *)(*v2 + 32);
        v71 = *(_DWORD *)(v64 + 208) + 1;
        *(_DWORD *)(v64 + 208) = v71;
        sub_847EC0(v64 + 184, v71);
        v68 = *(_QWORD *)(*v2 + 32);
        if ( *(_QWORD *)(v68 + 64) )
        {
          v72 = sub_8C4680(v3);
          v10 = sub_8B3670(v2, v72, v73);
        }
        else
        {
          *(_QWORD *)(v68 + 64) = v3;
          v78 = sub_8C4680(v3);
LABEL_120:
          v80 = sub_8B3670(v2, v78, v79);
          *(_QWORD *)(v68 + 64) = 0;
          v10 = v80;
        }
LABEL_93:
        --*(_DWORD *)(v64 + 192);
        return v10;
      case 0x74:
      case 0x75:
        v7 = v3;
        v8 = v2;
        return sub_8B51C0(v8, v7);
      case 0x7E:
        v31 = *(_QWORD *)(v3 + 24);
        v32 = (_WORD *)sub_8116F0(v31);
        v33 = *v32 & 0x1FF;
        if ( v33 > 0x59u && v33 <= 0x5Eu )
        {
          v34 = sub_80FBD0((__int64)v32);
          v35 = *v2;
          v36 = *v2;
          if ( v34 == 212 )
          {
            v41 = *(_BYTE *)(v35 + 962);
            v10 = 0;
            if ( v41 )
              return v10;
            v90 = *(_QWORD *)(v35 + 24);
            v39 = *(_DWORD *)(v35 + 964);
            v91 = *(_QWORD *)(v90 + 8);
            if ( v91 && !*(_DWORD *)(v91 + 8) )
              v41 = *(_BYTE *)v90 ^ 1;
            *(_DWORD *)(v35 + 964) = 2;
            v40 = 1;
            v35 = *v2;
            v31 = *(_QWORD *)(v3 + 24);
          }
          else
          {
            v37 = *(_QWORD *)(v35 + 24);
            v38 = *(_QWORD *)(v37 + 8);
            if ( v38 )
            {
              v31 = *(_QWORD *)(v3 + 24);
              goto LABEL_64;
            }
            v39 = *(_DWORD *)(v35 + 964);
            v31 = *(_QWORD *)(v3 + 24);
            v40 = 0;
            v41 = 0;
          }
LABEL_66:
          v93 = v41;
          if ( (unsigned __int8)sub_8571E0(v31, &v104, v35) )
          {
            if ( v104.m128i_i8[0] )
              v81 = *(_QWORD *)(v3 + 32);
            else
              v81 = *(_QWORD *)(v3 + 40);
            v10 = sub_8B3670(v2, v81, v42);
            if ( (_BYTE)v10 )
            {
              if ( v40 )
              {
                if ( v93 )
                {
                  v82 = *(_QWORD *)(v36 + 24);
                  v83 = *(_QWORD *)(v82 + 8);
                  v84 = *(_DWORD *)(v83 + 8);
                  if ( v84 )
                  {
                    if ( !*(_BYTE *)v82 )
                    {
                      sub_8481D0(*(_QWORD *)v83, *(_QWORD *)v83 + 32LL * v84);
                      *(_DWORD *)(v83 + 8) = 0;
                    }
                  }
                }
              }
              goto LABEL_72;
            }
          }
          else
          {
            v43 = *v2;
            v44 = *(unsigned __int8 *)(*v2 + 962);
            v45 = *(_DWORD *)(*v2 + 48);
            if ( !(_BYTE)v44 )
            {
              if ( !v45 )
                goto LABEL_71;
              goto LABEL_142;
            }
            if ( v45 )
            {
              v46 = sub_820420(1u, *(unsigned __int8 *)(v43 + 963));
              *v48 = v46 | v47;
              if ( v46 )
              {
                sub_8B55C0(v2, v3);
                goto LABEL_71;
              }
              v43 = *v2;
              if ( !*(_DWORD *)(*v2 + 48) )
                goto LABEL_71;
              v44 = *(unsigned __int8 *)(v43 + 962);
LABEL_142:
              v86 = *(unsigned __int8 *)(v43 + 963) | v44;
              **(_BYTE **)(v43 + 24) |= v86;
              if ( (_BYTE)v86 )
              {
                sub_8B3670(v2, *(_QWORD *)(v3 + 32), v86);
                sub_8B3670(v2, *(_QWORD *)(v3 + 40), v87);
              }
            }
          }
LABEL_71:
          v10 = 0;
LABEL_72:
          *(_DWORD *)(v36 + 964) = v39;
          return v10;
        }
        v35 = *v2;
        v37 = *(_QWORD *)(*v2 + 24);
        v36 = *v2;
        v38 = *(_QWORD *)(v37 + 8);
        if ( !v38 )
        {
LABEL_118:
          v39 = *(_DWORD *)(v35 + 964);
          v40 = 0;
          v41 = 0;
          goto LABEL_66;
        }
LABEL_64:
        if ( !*(_DWORD *)(v38 + 8) )
        {
          v39 = *(_DWORD *)(v35 + 964);
          v40 = 0;
          v41 = *(_BYTE *)v37 ^ 1;
          goto LABEL_66;
        }
        goto LABEL_118;
    }
  }
}

