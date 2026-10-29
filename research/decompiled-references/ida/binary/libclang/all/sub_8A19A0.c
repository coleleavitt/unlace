__int64 __fastcall sub_8A19A0(__m128i *a1, __int64 a2)
{
  __m128i *v2; // r14
  __int64 v3; // rbp
  unsigned __int16 v4; // ax
  __m128i *v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // rsi
  __m128i *v8; // rdi
  unsigned int v9; // r12d
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int8 **v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // r12
  _WORD *v16; // rdi
  unsigned __int16 v17; // ax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // ebx
  char v24; // r15
  char v25; // r8
  __int64 v26; // rax
  char v27; // dl
  int v28; // ecx
  char v29; // al
  char v30; // cl
  _BYTE *v31; // r8
  unsigned __int8 **v32; // rdi
  __int64 v33; // rbx
  __int64 v34; // rax
  unsigned int v35; // r13d
  int v36; // ecx
  __int64 v37; // r13
  char v38; // al
  __int64 v39; // rdx
  unsigned int v40; // ebx
  int v41; // eax
  _QWORD *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // r12
  _QWORD *v45; // rax
  __int64 v46; // rsi
  int v47; // eax
  __int64 v48; // rbx
  unsigned int v49; // eax
  __int64 v50; // rax
  unsigned __int64 v51; // r8
  unsigned __int64 *v52; // r12
  __int64 v53; // rbx
  __int64 v54; // r11
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // r15
  __int64 v58; // rax
  __int64 v59; // rbx
  int v60; // esi
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65; // rbx
  _DWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // esi
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // eax
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // rbp
  unsigned int v77; // eax
  unsigned int v78; // eax
  char v79; // dl
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rbx
  unsigned int v83; // eax
  char v84; // [rsp+0h] [rbp-148h]
  char v85; // [rsp+0h] [rbp-148h]
  __int64 v86; // [rsp+0h] [rbp-148h]
  __int64 v87; // [rsp+8h] [rbp-140h]
  unsigned __int64 v88; // [rsp+8h] [rbp-140h]
  __int64 v89; // [rsp+10h] [rbp-138h]
  __int64 v90; // [rsp+10h] [rbp-138h]
  __int64 v91; // [rsp+20h] [rbp-128h] BYREF
  int v92; // [rsp+28h] [rbp-120h]
  _QWORD v93[2]; // [rsp+30h] [rbp-118h] BYREF
  __m128i v94; // [rsp+40h] [rbp-108h] BYREF
  char v95; // [rsp+50h] [rbp-F8h]
  __m128i v96; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v97; // [rsp+90h] [rbp-B8h]
  char v98; // [rsp+98h] [rbp-B0h]
  __int64 v99; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v101; // [rsp+B8h] [rbp-90h]
  _BYTE v102[65]; // [rsp+C0h] [rbp-88h] BYREF
  char v103; // [rsp+101h] [rbp-47h]

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
                v11 = sub_A2CB40(v2->m128i_i64[0]);
                v12 = v2->m128i_i64[0];
                if ( (*(_BYTE *)(v11 + 1) & 0x20) == 0
                  && (!*(_DWORD *)(v12 + 48)
                   || !(unsigned __int8)sub_820420(*(unsigned __int8 *)(v12 + 962), *(unsigned __int8 *)(v12 + 963))) )
                {
                  sub_826FF0(v12, v3, 110);
                  return 0;
                }
                v98 |= 1u;
                v96 = 0u;
                v97 = 0;
                v99 = 0;
                ptr = v102;
                v101 = 0x800000000LL;
                v103 = 0;
                v14 = *(_QWORD *)(v3 + 16);
                v94.m128i_i64[0] = v12;
                v94.m128i_i64[1] = (__int64)&v96;
                v95 = 0;
                v9 = sub_869D30(&v94, v14);
                if ( (_BYTE)v9 )
                {
                  v94.m128i_i8[4] &= ~1u;
                  v94.m128i_i32[0] = 0;
                  v9 = sub_84D690(
                         v2->m128i_i64[0],
                         (_DWORD *)v3,
                         &v96,
                         *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL),
                         ((*(_BYTE *)(v3 + 2) >> 3) & 0x1D) == 0,
                         (__int64)&v94);
                  if ( (_BYTE)v9 )
                    sub_6A63E0(v2[1].m128i_i64[0], (__int64)&v94);
                  if ( v94.m128i_i32[0] > 1u )
                    sub_69F740((__int64)&v94);
                }
                if ( ptr != v102 )
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
                goto LABEL_8;
              case 6:
              case 12:
LABEL_14:
                v3 = *(_QWORD *)(v3 + 16);
                continue;
            }
            return v9;
          }
LABEL_8:
          sub_826FF0(v2->m128i_i64[0], v3, 110);
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
            return sub_8A2660(v8, v7);
          default:
            a2 = v6;
            a1 = v5;
            goto LABEL_11;
        }
      }
      break;
    }
LABEL_11:
    switch ( (v4 + 509) & 0x1FF )
    {
      case 0:
      case 2:
      case 3:
      case 4:
      case 5:
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
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
      case 0x6C:
      case 0x71:
      case 0x73:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7A:
      case 0x7C:
      case 0x7D:
        goto LABEL_8;
      case 1:
      case 0x7F:
        return sub_8A3510(v2, v3);
      case 6:
      case 0x63:
        goto LABEL_14;
      case 7:
        sub_8247C0(v2->m128i_i64[0], v3, v2[1].m128i_i64[0], 0);
        return 1;
      case 8:
        v37 = v2->m128i_i64[0];
        v9 = 1;
        v38 = *(_BYTE *)(v2->m128i_i64[0] + 963);
        *(_BYTE *)(v2->m128i_i64[0] + 963) = 0;
        v85 = v38;
        v87 = *(_QWORD *)(v3 + 16);
        if ( !*(_DWORD *)(v87 + 4) )
          goto LABEL_77;
        v39 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        v40 = *(_DWORD *)(v2->m128i_i64[0] + 320);
        v89 = v2->m128i_i64[0];
        v91 = v2->m128i_i64[0];
        v41 = *(_DWORD *)(v39 + 208);
        v92 = v40;
        *(_DWORD *)(v39 + 208) = v41 + 1;
        sub_847EC0(v39 + 184, v41 + 1);
        v42 = (_QWORD *)(v87 + 24);
        v43 = 8LL * *(unsigned int *)(v87 + 4);
        v44 = v87 + v43 + 16;
        if ( v43 == 8 )
        {
          v42 = (_QWORD *)(v87 + 16);
LABEL_73:
          if ( ((*(_WORD *)*v42 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_8A19A0(v2, *v42) )
            {
              v92 = -1;
              v9 = sub_8931F0(v89, 1, v40);
LABEL_76:
              sub_893480((__int64)&v91);
LABEL_77:
              *(_BYTE *)(v37 + 963) = v85;
              return v9;
            }
          }
          else
          {
            v48 = v2->m128i_i64[0];
            v49 = sub_AC6DA0(*v42);
            sub_A2E1A0(v48, v49, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v96.m128i_i8[4] &= ~1u;
            v46 = v2->m128i_i64[0];
            v96.m128i_i32[0] = 0;
            v94.m128i_i64[1] = 0;
            v94.m128i_i64[0] = (__int64)&v96;
            v47 = sub_88E980(v94.m128i_i64, v46, (unsigned __int16 *)*(v42 - 1), nullptr);
            if ( v47 != 2 )
              break;
            if ( v96.m128i_i32[0] <= 1u )
            {
              v45 = v42 + 1;
              if ( (_QWORD *)v44 == v42 + 1 )
                goto LABEL_73;
            }
            else
            {
              sub_69F740((__int64)&v96);
              v45 = v42 + 1;
              if ( v42 + 1 == (_QWORD *)v44 )
                goto LABEL_73;
            }
            v42 = v45;
          }
          if ( v47 )
          {
            v82 = v2->m128i_i64[0];
            v83 = sub_AC6DA0(*(v42 - 1));
            sub_A2E1A0(v82, v83, 2283, 0);
          }
          if ( v96.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v96);
        }
        v9 = 0;
        goto LABEL_76;
      case 0xF:
        v52 = (unsigned __int64 *)(v3 + 24);
        v86 = v3 + 8LL * *(unsigned __int16 *)(v3 + 4) + 16;
        if ( v3 + 24 == v86 )
          return 1;
        while ( 2 )
        {
          v57 = *v52;
          v58 = *(unsigned __int16 *)(v3 + 6);
          if ( (*(_WORD *)*v52 & 0x1FF) != 0x1B )
          {
            if ( (_WORD)v58 && v57 == *(_QWORD *)(v3 + 8 * v58 + 16) )
            {
              if ( !(unsigned __int8)sub_8A19A0(v2, *v52) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(v2->m128i_i64[0], *v52) )
            {
              return 0;
            }
LABEL_92:
            if ( (unsigned __int64 *)v86 == ++v52 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v58 || v57 != *(_QWORD *)(v3 + 8 * v58 + 16) )
        {
          if ( (*(_BYTE *)(v57 + 2) & 8) == 0 )
          {
            v53 = v2->m128i_i64[0];
            v96 = 0u;
            v98 |= 1u;
            v97 = 0;
            v99 = 0;
            ptr = v102;
            v101 = 0x800000000LL;
            v103 = 0;
            v54 = *(_QWORD *)(v53 + 32);
            v88 = *(_QWORD *)(v57 + 16);
            if ( (*(_BYTE *)(v57 + 1) & 6) != 0 )
            {
              v90 = *(_QWORD *)(v53 + 32);
              v71 = sub_6C4DA0(*(_QWORD *)(v53 + 16), *(_QWORD *)(v57 + 8), 1u);
              v54 = v90;
              v55 = v71;
            }
            else
            {
              v55 = *(_QWORD *)(v57 + 8);
            }
            v56 = sub_823B90(v54, v57, v55, &v96);
            if ( !(unsigned __int8)sub_856400(v56, v53, v88) )
            {
              if ( ptr != v102 )
                free(ptr);
              return 0;
            }
            if ( ptr != v102 )
              free(ptr);
          }
          goto LABEL_92;
        }
        goto LABEL_8;
      case 0x10:
        if ( *(char *)(v3 + 2) < 0 )
          goto LABEL_14;
        v3 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_32;
      case 0x13:
        a1 = (__m128i *)v3;
        v3 = sub_83DE90(v3);
        continue;
      case 0x18:
        v65 = v2->m128i_i64[0];
        a2 = v3;
        a1 = *(__m128i **)(v2->m128i_i64[0] + 32);
        v66 = (_DWORD *)sub_821340((__int64)a1, v3);
        if ( !v66 || !*v66 )
        {
          v67 = *(_QWORD *)(v3 + 16);
          if ( !v67 || v3 == v67 )
          {
            sub_826FF0(v65, v3, 110);
            return 0;
          }
          v3 = *(_QWORD *)(v3 + 16);
          continue;
        }
        sub_6A63E0(v2[1].m128i_i64[0], (__int64)v66);
        return 1;
      case 0x2C:
        return sub_85DB20(v2->m128i_i64, v3);
      case 0x33:
        return sub_88B590(v2->m128i_i64, v3, 0);
      case 0x34:
      case 0x62:
      case 0x66:
        return sub_88E300(v2->m128i_i64, v3);
      case 0x37:
        v3 = *(_QWORD *)(v3
                       + 8LL
                       * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v33 = v2->m128i_i64[0];
        v34 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        v35 = *(_DWORD *)(v2->m128i_i64[0] + 320);
        v96.m128i_i64[0] = v2->m128i_i64[0];
        v36 = *(_DWORD *)(v34 + 208);
        v96.m128i_i32[2] = v35;
        *(_DWORD *)(v34 + 208) = v36 + 1;
        sub_847EC0(v34 + 184, v36 + 1);
        v9 = sub_8A19A0(v2, *(_QWORD *)(v3 + 16));
        if ( (_BYTE)v9 )
        {
          v78 = sub_8941C0(v33, 1, v35);
          v96.m128i_i32[2] = -1;
          v9 = v78;
        }
        sub_894600((__int64)&v96);
        return v9;
      case 0x3B:
        if ( (*(_WORD *)(v3 + 2) & 0x1E0) == 0 )
          goto LABEL_14;
        sub_805700((__int64)&v96, v3);
        sub_6A63E0(v2[1].m128i_i64[0], (__int64)&v96);
        if ( v96.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v96);
        return 1;
      case 0x3E:
        return sub_85E040(v2->m128i_i64, v3);
      case 0x40:
        v68 = *(unsigned int *)(v3 + 48);
        a1 = (__m128i *)v93;
        v93[0] = v3;
        v93[1] = v68;
        v3 = *(_QWORD *)sub_849A00(v93);
        continue;
      case 0x4A:
        goto LABEL_34;
      case 0x4B:
        if ( *(_BYTE *)(v3 + 48) )
LABEL_32:
          v3 = *(_QWORD *)(v3 + 24);
        else
LABEL_34:
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
        return sub_8A2A60(v2, v3);
      case 0x50:
        v13 = (unsigned __int8 **)sub_A2E240(v2->m128i_i64[0], v3, 2215, 0);
        if ( v13 )
          sub_823450(v13, 0);
        return sub_8A2A60(v2, v3);
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v2->m128i_i64[0] + 16) + 2160LL) + 1LL) >= 0 )
        {
          v32 = (unsigned __int8 **)sub_A2E240(v2->m128i_i64[0], v3, 2215, 0);
          if ( v32 )
            sub_823450(v32, 1);
        }
        return sub_8A2A60(v2, v3);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8A0C20(v2->m128i_i64, v3, v2[1].m128i_i64[0], v2->m128i_i64[1]);
      case 0x65:
        v50 = *(_QWORD *)(v3 + 40);
        v51 = 0;
        if ( v50 && (v50 & 2) == 0 )
          v51 = v50 & 0xFFFFFFFFFFFFFFFCLL;
        return sub_88A620(v2->m128i_i64, v3, (unsigned __int64 *)(v3 + 48), *(unsigned int *)(v3 + 16), v51, 0);
      case 0x6D:
        v59 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        v60 = *(_DWORD *)(v59 + 208) + 1;
        *(_DWORD *)(v59 + 208) = v60;
        sub_847EC0(v59 + 184, v60);
        v61 = sub_8C4900(v3);
        v62 = v2->m128i_i64[0];
        if ( !v61 )
        {
          v9 = 0;
          sub_826FF0(v62, v3, 110);
          goto LABEL_101;
        }
        v63 = *(_QWORD *)(v62 + 32);
        if ( *(_QWORD *)(v63 + 64) )
        {
          v64 = sub_8C4900(v3);
          v9 = sub_8A19A0(v2, v64);
          goto LABEL_101;
        }
        *(_QWORD *)(v63 + 64) = v3;
        v72 = sub_8C4900(v3);
        goto LABEL_120;
      case 0x6E:
        v59 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        v69 = *(_DWORD *)(v59 + 208) + 1;
        *(_DWORD *)(v59 + 208) = v69;
        sub_847EC0(v59 + 184, v69);
        v63 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        if ( *(_QWORD *)(v63 + 64) )
        {
          v70 = sub_8C4680(v3);
          v9 = sub_8A19A0(v2, v70);
        }
        else
        {
          *(_QWORD *)(v63 + 64) = v3;
          v72 = sub_8C4680(v3);
LABEL_120:
          v73 = sub_8A19A0(v2, v72);
          *(_QWORD *)(v63 + 64) = 0;
          v9 = v73;
        }
LABEL_101:
        --*(_DWORD *)(v59 + 192);
        return v9;
      case 0x6F:
      case 0x70:
        return sub_899D40(v2, v3, (const __m128i *)v2->m128i_i64[1], v2[1].m128i_i64[0], *(_QWORD *)(v3 + 8));
      case 0x74:
      case 0x75:
        v7 = v3;
        v8 = v2;
        return sub_8A2660(v8, v7);
      case 0x7B:
        return sub_8959A0(v2->m128i_i64, (_QWORD *)v3);
      case 0x7E:
        v15 = *(_QWORD *)(v3 + 24);
        v16 = (_WORD *)sub_8116F0(v15);
        v17 = *v16 & 0x1FF;
        if ( v17 > 0x59u && v17 <= 0x5Eu )
        {
          v18 = sub_80FBD0((__int64)v16);
          v19 = v2->m128i_i64[0];
          v20 = v2->m128i_i64[0];
          if ( v18 == 212 )
          {
            v25 = *(_BYTE *)(v19 + 962);
            v9 = 0;
            if ( v25 )
              return v9;
            v80 = *(_QWORD *)(v19 + 24);
            v23 = *(_DWORD *)(v19 + 964);
            v81 = *(_QWORD *)(v80 + 8);
            if ( v81 && !*(_DWORD *)(v81 + 8) )
              v25 = *(_BYTE *)v80 ^ 1;
            *(_DWORD *)(v19 + 964) = 2;
            v24 = 1;
            v19 = v2->m128i_i64[0];
            v15 = *(_QWORD *)(v3 + 24);
          }
          else
          {
            v21 = *(_QWORD *)(v19 + 24);
            v22 = *(_QWORD *)(v21 + 8);
            if ( v22 )
            {
              v15 = *(_QWORD *)(v3 + 24);
              goto LABEL_40;
            }
            v23 = *(_DWORD *)(v19 + 964);
            v15 = *(_QWORD *)(v3 + 24);
            v24 = 0;
            v25 = 0;
          }
LABEL_42:
          v84 = v25;
          if ( (unsigned __int8)sub_8571E0(v15, &v96, v19) )
          {
            if ( v96.m128i_i8[0] )
              v74 = *(_QWORD *)(v3 + 32);
            else
              v74 = *(_QWORD *)(v3 + 40);
            v9 = sub_8A19A0(v2, v74);
            if ( (_BYTE)v9 )
            {
              if ( v24 )
              {
                if ( v84 )
                {
                  v75 = *(_QWORD *)(v20 + 24);
                  v76 = *(_QWORD *)(v75 + 8);
                  v77 = *(_DWORD *)(v76 + 8);
                  if ( v77 )
                  {
                    if ( !*(_BYTE *)v75 )
                    {
                      sub_8481D0(*(_QWORD *)v76, *(_QWORD *)v76 + 32LL * v77);
                      *(_DWORD *)(v76 + 8) = 0;
                    }
                  }
                }
              }
              goto LABEL_48;
            }
          }
          else
          {
            v26 = v2->m128i_i64[0];
            v27 = *(_BYTE *)(v2->m128i_i64[0] + 962);
            v28 = *(_DWORD *)(v2->m128i_i64[0] + 48);
            if ( !v27 )
            {
              if ( !v28 )
                goto LABEL_47;
              goto LABEL_140;
            }
            if ( v28 )
            {
              v29 = sub_820420(1u, *(unsigned __int8 *)(v26 + 963));
              *v31 = v29 | v30;
              if ( v29 )
              {
                sub_8A2FD0(v2, v3);
                goto LABEL_47;
              }
              v26 = v2->m128i_i64[0];
              if ( !*(_DWORD *)(v2->m128i_i64[0] + 48) )
                goto LABEL_47;
              v27 = *(_BYTE *)(v26 + 962);
LABEL_140:
              v79 = *(_BYTE *)(v26 + 963) | v27;
              **(_BYTE **)(v26 + 24) |= v79;
              if ( v79 )
              {
                sub_8A19A0(v2, *(_QWORD *)(v3 + 32));
                sub_8A19A0(v2, *(_QWORD *)(v3 + 40));
              }
            }
          }
LABEL_47:
          v9 = 0;
LABEL_48:
          *(_DWORD *)(v20 + 964) = v23;
          return v9;
        }
        v19 = v2->m128i_i64[0];
        v21 = *(_QWORD *)(v2->m128i_i64[0] + 24);
        v20 = v2->m128i_i64[0];
        v22 = *(_QWORD *)(v21 + 8);
        if ( !v22 )
        {
LABEL_118:
          v23 = *(_DWORD *)(v19 + 964);
          v24 = 0;
          v25 = 0;
          goto LABEL_42;
        }
LABEL_40:
        if ( !*(_DWORD *)(v22 + 8) )
        {
          v23 = *(_DWORD *)(v19 + 964);
          v24 = 0;
          v25 = *(_BYTE *)v21 ^ 1;
          goto LABEL_42;
        }
        goto LABEL_118;
    }
  }
}

