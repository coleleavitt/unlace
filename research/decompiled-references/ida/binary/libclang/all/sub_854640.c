__int64 __fastcall sub_854640(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 v3; // rbp
  unsigned __int16 v4; // ax
  __int64 *v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int8 **v13; // rax
  unsigned __int64 *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  _WORD *v21; // rax
  unsigned __int64 v22; // r8
  __int64 v23; // rdi
  unsigned __int16 v24; // ax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r12
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ebx
  char v31; // r15
  char v32; // r13
  __int64 v33; // rax
  char v34; // dl
  int v35; // ecx
  char v36; // al
  char v37; // cl
  _BYTE *v38; // r8
  __int64 v39; // r13
  char v40; // al
  unsigned int v41; // ebx
  __int64 v42; // rax
  int v43; // esi
  _QWORD *v44; // r15
  __int64 v45; // rax
  __int64 v46; // r12
  _QWORD *v47; // rax
  __int64 v48; // rsi
  int v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rsi
  unsigned __int8 v52; // al
  __int64 v53; // rbx
  _DWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // esi
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rax
  int v62; // esi
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 *v66; // rdx
  __int64 v67; // rax
  unsigned __int8 **v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  unsigned __int32 v71; // r12d
  int v72; // ecx
  unsigned __int8 v73; // al
  __int64 v74; // rsi
  unsigned __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rbp
  unsigned int v80; // edx
  __int64 v81; // rax
  char v82; // dl
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rsi
  __int64 v87; // [rsp+0h] [rbp-148h]
  unsigned __int64 v88; // [rsp+0h] [rbp-148h]
  char v89; // [rsp+0h] [rbp-148h]
  unsigned __int8 v90; // [rsp+0h] [rbp-148h]
  unsigned __int8 v91; // [rsp+0h] [rbp-148h]
  unsigned __int8 v92; // [rsp+0h] [rbp-148h]
  unsigned __int8 v93; // [rsp+0h] [rbp-148h]
  unsigned __int8 v94; // [rsp+0h] [rbp-148h]
  __int64 v95; // [rsp+8h] [rbp-140h]
  __int64 v96; // [rsp+8h] [rbp-140h]
  unsigned __int8 v97; // [rsp+8h] [rbp-140h]
  __int64 v98; // [rsp+10h] [rbp-138h]
  __int64 v99; // [rsp+10h] [rbp-138h]
  __int64 v100; // [rsp+20h] [rbp-128h] BYREF
  int v101; // [rsp+28h] [rbp-120h]
  _QWORD v102[2]; // [rsp+30h] [rbp-118h] BYREF
  __m128i *v103; // [rsp+40h] [rbp-108h] BYREF
  __m128i *v104; // [rsp+48h] [rbp-100h]
  char v105; // [rsp+50h] [rbp-F8h]
  __m128i v106; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+90h] [rbp-B8h]
  char v108; // [rsp+98h] [rbp-B0h]
  __int64 v109; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v111; // [rsp+B8h] [rbp-90h]
  _BYTE v112[65]; // [rsp+C0h] [rbp-88h] BYREF
  char v113; // [rsp+101h] [rbp-47h]

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
                v10 = sub_A2CB40(*v2);
                v11 = *v2;
                if ( (*(_BYTE *)(v10 + 1) & 0x20) == 0
                  && (!*(_DWORD *)(v11 + 48)
                   || !(unsigned __int8)sub_820420(*(unsigned __int8 *)(v11 + 962), *(unsigned __int8 *)(v11 + 963))) )
                {
                  goto LABEL_18;
                }
                goto LABEL_107;
              case 1:
                v12 = sub_A2CB40(*v2);
                v11 = *v2;
                if ( (*(_BYTE *)(v12 + 1) & 0x20) == 0
                  && (!*(_DWORD *)(v11 + 48)
                   || !(unsigned __int8)sub_820420(*(unsigned __int8 *)(v11 + 962), *(unsigned __int8 *)(v11 + 963))) )
                {
LABEL_18:
                  sub_827830(v11, v3, 110);
                  return 0;
                }
LABEL_107:
                v108 |= 1u;
                v106 = 0u;
                v107 = 0;
                v109 = 0;
                ptr = v112;
                v111 = 0x800000000LL;
                v113 = 0;
                v74 = *(_QWORD *)(v3 + 16);
                v103 = (__m128i *)v11;
                v104 = &v106;
                v105 = 0;
                result = sub_869D30(&v103, v74);
                if ( (_BYTE)result )
                {
                  BYTE4(v103) &= ~1u;
                  LODWORD(v103) = 0;
                  result = sub_84D690(
                             *v2,
                             (_DWORD *)v3,
                             &v106,
                             *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL),
                             ((*(_BYTE *)(v3 + 2) >> 3) & 0x1D) == 0,
                             (__int64)&v103);
                  if ( (_BYTE)result )
                  {
                    v91 = result;
                    sub_820FB0((unsigned __int64 *)v2[1], (__int64)&v103);
                    result = v91;
                  }
                  if ( (unsigned int)v103 > 1 )
                  {
                    v92 = result;
                    sub_69F740((__int64)&v103);
                    result = v92;
                  }
                }
                if ( ptr != v112 )
                {
                  v93 = result;
                  free(ptr);
                  result = v93;
                }
                break;
              case 2:
              case 3:
              case 5:
              case 7:
              case 8:
              case 9:
              case 10:
              case 11:
              case 13:
                goto LABEL_12;
              case 4:
                sub_821120(v2[1], *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL));
                return 1;
              case 6:
              case 12:
LABEL_11:
                v3 = *(_QWORD *)(v3 + 16);
                continue;
            }
            return result;
          }
LABEL_12:
          sub_827830(*v2, v3, 110);
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
            return sub_89E2E0(v8, v7);
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
        return sub_868860(v2, v3);
      case 6:
      case 0x63:
        goto LABEL_11;
      case 8:
        v39 = *v2;
        v40 = *(_BYTE *)(*v2 + 963);
        *(_BYTE *)(*v2 + 963) = 0;
        v89 = v40;
        result = 1;
        v96 = *(_QWORD *)(v3 + 16);
        if ( !*(_DWORD *)(v96 + 4) )
          goto LABEL_80;
        v41 = *(_DWORD *)(*v2 + 320);
        v98 = *v2;
        v100 = v98;
        v42 = *(_QWORD *)(v98 + 32);
        v101 = v41;
        v43 = *(_DWORD *)(v42 + 208) + 1;
        *(_DWORD *)(v42 + 208) = v43;
        sub_847EC0(v42 + 184, v43);
        v44 = (_QWORD *)(v96 + 24);
        v45 = 8LL * *(unsigned int *)(v96 + 4);
        v46 = v96 + v45 + 16;
        if ( v45 == 8 )
        {
          v44 = (_QWORD *)(v96 + 16);
LABEL_76:
          if ( ((*(_WORD *)*v44 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_854640(v2, *v44) )
            {
              v52 = sub_8931F0(v98, 1, v41);
              v101 = -1;
LABEL_79:
              v97 = v52;
              sub_893480(&v100);
              result = v97;
LABEL_80:
              *(_BYTE *)(v39 + 963) = v89;
              return result;
            }
          }
          else
          {
            v50 = *v2;
            v51 = (unsigned int)sub_AC6DA0(*v44);
            sub_A2E1A0(v50, v51, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v106.m128i_i8[4] &= ~1u;
            v48 = *v2;
            v106.m128i_i32[0] = 0;
            v104 = nullptr;
            v103 = &v106;
            v49 = sub_88E980(&v103, v48, *(v44 - 1), 0);
            if ( v49 != 2 )
              break;
            if ( v106.m128i_i32[0] <= 1u )
            {
              v47 = v44 + 1;
              if ( (_QWORD *)v46 == v44 + 1 )
                goto LABEL_76;
            }
            else
            {
              sub_69F740((__int64)&v106);
              v47 = v44 + 1;
              if ( v44 + 1 == (_QWORD *)v46 )
                goto LABEL_76;
            }
            v44 = v47;
          }
          if ( v49 )
          {
            v85 = *v2;
            v86 = (unsigned int)sub_AC6DA0(*(v44 - 1));
            sub_A2E1A0(v85, v86, 2283, 0);
          }
          if ( v106.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v106);
        }
        v52 = 0;
        goto LABEL_79;
      case 0xF:
        v14 = (unsigned __int64 *)(v3 + 24);
        v87 = v3 + 8LL * *(unsigned __int16 *)(v3 + 4) + 16;
        if ( v3 + 24 == v87 )
          return 1;
        while ( 2 )
        {
          v19 = *v14;
          v20 = *(unsigned __int16 *)(v3 + 6);
          if ( (*(_WORD *)*v14 & 0x1FF) != 0x1B )
          {
            if ( (_WORD)v20 && v19 == *(_QWORD *)(v3 + 8 * v20 + 16) )
            {
              if ( !(unsigned __int8)sub_854640(v2, *v14) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(*v2, *v14) )
            {
              return 0;
            }
LABEL_43:
            if ( (unsigned __int64 *)v87 == ++v14 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v20 || v19 != *(_QWORD *)(v3 + 8 * v20 + 16) )
        {
          if ( (*(_BYTE *)(v19 + 2) & 8) == 0 )
          {
            v15 = *v2;
            v106 = 0u;
            v108 |= 1u;
            v107 = 0;
            v109 = 0;
            ptr = v112;
            v111 = 0x800000000LL;
            v113 = 0;
            v16 = *(_QWORD *)(v15 + 32);
            v95 = *(_QWORD *)(v19 + 16);
            if ( (*(_BYTE *)(v19 + 1) & 6) != 0 )
            {
              v99 = *(_QWORD *)(v15 + 32);
              v75 = sub_6C4DA0(*(_QWORD *)(v15 + 16), *(_QWORD *)(v19 + 8), 1u);
              v16 = v99;
              v17 = v75;
            }
            else
            {
              v17 = *(_QWORD *)(v19 + 8);
            }
            v18 = sub_823B90(v16, v19, v17, &v106);
            if ( !(unsigned __int8)sub_856400(v18, v15, v95) )
            {
              if ( ptr != v112 )
                free(ptr);
              return 0;
            }
            if ( ptr != v112 )
              free(ptr);
          }
          goto LABEL_43;
        }
        goto LABEL_12;
      case 0x10:
        if ( *(char *)(v3 + 2) < 0 )
          goto LABEL_11;
        v3 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_31;
      case 0x13:
        a1 = (__int64 *)v3;
        v3 = sub_83DE90(v3);
        continue;
      case 0x18:
        v53 = *v2;
        a2 = v3;
        a1 = *(__int64 **)(*v2 + 32);
        v54 = (_DWORD *)sub_821340((__int64)a1, v3);
        if ( !v54 || !*v54 )
        {
          v55 = *(_QWORD *)(v3 + 16);
          if ( !v55 || v3 == v55 )
          {
            sub_827830(v53, v3, 110);
            return 0;
          }
          v3 = *(_QWORD *)(v3 + 16);
          continue;
        }
        sub_820FB0((unsigned __int64 *)v2[1], (__int64)v54);
        return 1;
      case 0x2C:
        return sub_85D110(v2, v3);
      case 0x33:
        v66 = *(__int64 **)(v3 + 16);
        v67 = (__int64)(*(_QWORD *)(v3 + 24) - (_QWORD)v66) >> 3;
        if ( !(_DWORD)v67 )
          goto LABEL_29;
        if ( (_DWORD)v67 != 1 )
          goto LABEL_12;
        v3 = *v66;
        continue;
      case 0x34:
      case 0x62:
      case 0x66:
LABEL_29:
        sub_821120(v2[1], 0);
        return 1;
      case 0x37:
        v3 = *(_QWORD *)(v3
                       + 8LL
                       * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v69 = *v2;
        v70 = *(_QWORD *)(*v2 + 32);
        v71 = *(_DWORD *)(*v2 + 320);
        v106.m128i_i64[0] = *v2;
        v72 = *(_DWORD *)(v70 + 208);
        v106.m128i_i32[2] = v71;
        *(_DWORD *)(v70 + 208) = v72 + 1;
        sub_847EC0(v70 + 184, v72 + 1);
        v73 = sub_854640(v2, *(_QWORD *)(v3 + 16));
        if ( v73 )
        {
          v73 = sub_8941C0(v69, 1, v71);
          v106.m128i_i32[2] = -1;
        }
        v90 = v73;
        sub_894600(&v106);
        return v90;
      case 0x3B:
        if ( (*(_WORD *)(v3 + 2) & 0x1E0) == 0 )
          goto LABEL_11;
        sub_805700((__int64)&v106, v3);
        sub_820FB0((unsigned __int64 *)v2[1], (__int64)&v106);
        if ( v106.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v106);
        return 1;
      case 0x3E:
        return sub_85D620(v2, v3);
      case 0x40:
        v65 = *(unsigned int *)(v3 + 48);
        a1 = v102;
        v102[0] = v3;
        v102[1] = v65;
        v3 = *(_QWORD *)sub_849A00(v102);
        continue;
      case 0x4A:
        goto LABEL_32;
      case 0x4B:
        if ( *(_BYTE *)(v3 + 48) )
LABEL_31:
          v3 = *(_QWORD *)(v3 + 24);
        else
LABEL_32:
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
        return sub_853F60(v2, v3);
      case 0x50:
        v13 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
        if ( v13 )
          sub_823450(v13, 0);
        return sub_853F60(v2, v3);
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*v2 + 16) + 2160LL) + 1LL) >= 0 )
        {
          v68 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
          if ( v68 )
            sub_823450(v68, 1);
        }
        return sub_853F60(v2, v3);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8A4330(v2, v3);
      case 0x6D:
        v56 = *(_QWORD *)(*v2 + 32);
        v57 = *(_DWORD *)(v56 + 208) + 1;
        *(_DWORD *)(v56 + 208) = v57;
        sub_847EC0(v56 + 184, v57);
        v58 = sub_8C4900(v3);
        v59 = *v2;
        if ( v58 )
        {
          v60 = *(_QWORD *)(v59 + 32);
          if ( *(_QWORD *)(v60 + 64) )
          {
            v61 = sub_8C4900(v3);
            result = sub_854640(v2, v61);
          }
          else
          {
            *(_QWORD *)(v60 + 64) = v3;
            v81 = sub_8C4900(v3);
            result = sub_854640(v2, v81);
            *(_QWORD *)(v60 + 64) = 0;
          }
        }
        else
        {
          sub_827830(v59, v3, 110);
          result = 0;
        }
        goto LABEL_90;
      case 0x6E:
        v56 = *(_QWORD *)(*v2 + 32);
        v62 = *(_DWORD *)(v56 + 208) + 1;
        *(_DWORD *)(v56 + 208) = v62;
        sub_847EC0(v56 + 184, v62);
        v63 = *(_QWORD *)(*v2 + 32);
        if ( *(_QWORD *)(v63 + 64) )
        {
          v64 = sub_8C4680(v3);
          result = sub_854640(v2, v64);
        }
        else
        {
          *(_QWORD *)(v63 + 64) = v3;
          v76 = sub_8C4680(v3);
          result = sub_854640(v2, v76);
          *(_QWORD *)(v63 + 64) = 0;
        }
LABEL_90:
        --*(_DWORD *)(v56 + 192);
        return result;
      case 0x74:
      case 0x75:
        v7 = v3;
        v8 = v2;
        return sub_89E2E0(v8, v7);
      case 0x7E:
        v88 = *(_QWORD *)(v3 + 24);
        v21 = (_WORD *)sub_8116F0(v88);
        v22 = v88;
        v23 = (__int64)v21;
        v24 = *v21 & 0x1FF;
        if ( v24 > 0x59u && v24 <= 0x5Eu )
        {
          v25 = sub_80FBD0(v23);
          v26 = *v2;
          v27 = *v2;
          if ( v25 == 212 )
          {
            v32 = *(_BYTE *)(v26 + 962);
            result = 0;
            if ( v32 )
              return result;
            v83 = *(_QWORD *)(v26 + 24);
            v30 = *(_DWORD *)(v26 + 964);
            v84 = *(_QWORD *)(v83 + 8);
            if ( v84 && !*(_DWORD *)(v84 + 8) )
              v32 = *(_BYTE *)v83 ^ 1;
            *(_DWORD *)(v26 + 964) = 2;
            v31 = 1;
            v22 = *(_QWORD *)(v3 + 24);
          }
          else
          {
            v28 = *(_QWORD *)(v26 + 24);
            v29 = *(_QWORD *)(v28 + 8);
            if ( v29 )
            {
              v22 = *(_QWORD *)(v3 + 24);
              goto LABEL_59;
            }
            v30 = *(_DWORD *)(v26 + 964);
            v22 = *(_QWORD *)(v3 + 24);
            v32 = 0;
            v31 = 0;
          }
LABEL_61:
          if ( (unsigned __int8)sub_8571E0(v22, &v106) )
          {
            if ( v106.m128i_i8[0] )
              v77 = *(_QWORD *)(v3 + 32);
            else
              v77 = *(_QWORD *)(v3 + 40);
            result = sub_854640(v2, v77);
            if ( (_BYTE)result )
            {
              if ( v31 )
              {
                if ( v32 )
                {
                  v78 = *(_QWORD *)(v27 + 24);
                  v79 = *(_QWORD *)(v78 + 8);
                  v80 = *(_DWORD *)(v79 + 8);
                  if ( v80 )
                  {
                    if ( !*(_BYTE *)v78 )
                    {
                      v94 = result;
                      sub_8481D0(*(_QWORD *)v79, *(_QWORD *)v79 + 32LL * v80);
                      result = v94;
                      *(_DWORD *)(v79 + 8) = 0;
                    }
                  }
                }
              }
              goto LABEL_67;
            }
          }
          else
          {
            v33 = *v2;
            v34 = *(_BYTE *)(*v2 + 962);
            v35 = *(_DWORD *)(*v2 + 48);
            if ( !v34 )
            {
              if ( !v35 )
                goto LABEL_66;
              goto LABEL_144;
            }
            if ( v35 )
            {
              v36 = sub_820420(1u, *(unsigned __int8 *)(v33 + 963));
              *v38 = v36 | v37;
              if ( v36 )
              {
                sub_855EC0(v2, v3);
                goto LABEL_66;
              }
              v33 = *v2;
              if ( !*(_DWORD *)(*v2 + 48) )
                goto LABEL_66;
              v34 = *(_BYTE *)(v33 + 962);
LABEL_144:
              v82 = *(_BYTE *)(v33 + 963) | v34;
              **(_BYTE **)(v33 + 24) |= v82;
              if ( v82 )
              {
                sub_854640(v2, *(_QWORD *)(v3 + 32));
                sub_854640(v2, *(_QWORD *)(v3 + 40));
              }
            }
          }
LABEL_66:
          result = 0;
LABEL_67:
          *(_DWORD *)(v27 + 964) = v30;
          return result;
        }
        v26 = *v2;
        v28 = *(_QWORD *)(*v2 + 24);
        v27 = *v2;
        v29 = *(_QWORD *)(v28 + 8);
        if ( !v29 )
        {
LABEL_119:
          v30 = *(_DWORD *)(v26 + 964);
          v32 = 0;
          v31 = 0;
          goto LABEL_61;
        }
LABEL_59:
        if ( !*(_DWORD *)(v29 + 8) )
        {
          v30 = *(_DWORD *)(v26 + 964);
          v31 = 0;
          v32 = *(_BYTE *)v28 ^ 1;
          goto LABEL_61;
        }
        goto LABEL_119;
    }
  }
}

