__int64 __fastcall sub_8B6C50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r13
  __int64 v5; // rbx
  unsigned __int16 v6; // ax
  __int64 *v7; // kr00_8
  __int64 v8; // kr08_8
  __int64 v9; // rsi
  __int64 *v10; // rdi
  unsigned int v11; // r15d
  unsigned __int8 **v13; // rax
  unsigned __int8 **v14; // rdi
  __int64 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  int v19; // esi
  __int64 v20; // r12
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rax
  unsigned int v28; // r12d
  int v29; // ecx
  __int64 v30; // r14
  char v31; // al
  __int64 v32; // rdx
  __int32 v33; // ecx
  int v34; // eax
  _QWORD *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r12
  _QWORD *v38; // rax
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rbx
  unsigned int v42; // eax
  int v43; // r12d
  __int64 v44; // rbp
  __int64 *v45; // rdx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // r14
  __int64 v49; // rdi
  void *v50; // rax
  __int64 v51; // rdx
  char v52; // al
  unsigned int v53; // eax
  __int64 v54; // r11
  __m128i v55; // xmm0
  char v56; // bp
  _WORD *v57; // rdi
  unsigned __int16 v58; // ax
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  char v64; // al
  char v65; // r8
  _BYTE *v66; // r10
  char v67; // al
  __int64 v68; // rcx
  unsigned __int64 *v69; // r15
  __int64 v70; // r12
  __int64 v71; // r11
  __int64 v72; // rdx
  __int64 v73; // rax
  unsigned __int64 v74; // rbp
  __int64 v75; // rax
  __int64 v76; // rbp
  _DWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // eax
  __int64 v84; // rsi
  unsigned int v85; // eax
  __int32 v86; // eax
  unsigned __int8 **v87; // rax
  unsigned __int8 **v88; // rbx
  __int64 v89; // rbx
  unsigned int v90; // eax
  char *v91; // rdx
  __int32 v92; // eax
  __int64 v93; // rsi
  unsigned int v94; // eax
  __int64 v95; // rdi
  unsigned __int64 v96; // rax
  __int64 v97; // r14
  __int64 v98; // rdi
  __int64 (__fastcall *v99)(__int64); // rax
  __int64 v100; // rax
  __int64 (__fastcall *v101)(__int64); // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // r14
  unsigned __int8 **v105; // rax
  unsigned __int8 **v106; // rbx
  char v107; // dl
  __int64 v108; // rax
  __int64 v109; // rdi
  unsigned __int64 v110; // rax
  __int64 v111; // rdi
  __int64 (__fastcall *v112)(__int64); // rax
  __int64 v113; // rax
  __int64 v114; // rsi
  unsigned __int8 **v115; // rbx
  __int64 v116; // rsi
  char v117; // [rsp+0h] [rbp-218h]
  __int64 v118; // [rsp+0h] [rbp-218h]
  __int64 v119; // [rsp+0h] [rbp-218h]
  __int64 v120; // [rsp+8h] [rbp-210h]
  __int64 v121; // [rsp+8h] [rbp-210h]
  unsigned __int64 v122; // [rsp+8h] [rbp-210h]
  __m128i v123; // [rsp+10h] [rbp-208h] BYREF
  _BYTE *v124; // [rsp+20h] [rbp-1F8h]
  unsigned int v125; // [rsp+2Ch] [rbp-1ECh]
  _QWORD v126[2]; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v127; // [rsp+40h] [rbp-1D8h]
  __int64 v128; // [rsp+48h] [rbp-1D0h]
  __m128i v129; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v130; // [rsp+60h] [rbp-1B8h]
  __m128i v131; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-148h]
  char v133; // [rsp+D8h] [rbp-140h]
  __int64 v134; // [rsp+E8h] [rbp-130h]
  void *v135; // [rsp+F0h] [rbp-128h]
  __int64 v136; // [rsp+F8h] [rbp-120h]
  _BYTE v137[80]; // [rsp+100h] [rbp-118h] BYREF
  __m128i v138; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v139; // [rsp+160h] [rbp-B8h]
  int v140; // [rsp+168h] [rbp-B0h]
  __int64 v141; // [rsp+170h] [rbp-A8h]
  __int64 v142; // [rsp+178h] [rbp-A0h]
  void *ptr; // [rsp+180h] [rbp-98h]
  __int64 v144; // [rsp+188h] [rbp-90h]
  _BYTE v145[64]; // [rsp+190h] [rbp-88h] BYREF
  __int16 v146; // [rsp+1D0h] [rbp-48h]

  v4 = a1;
  v5 = a2;
  while ( 2 )
  {
    while ( 2 )
    {
      v6 = *(_WORD *)v5 & 0x1FF;
      if ( v6 <= 0x76u )
      {
        if ( v6 == 4 )
        {
          if ( *(_BYTE *)(v5 + 2) <= 0x6Fu )
          {
            switch ( *(_BYTE *)(v5 + 2) >> 3 )
            {
              case 0:
              case 1:
                return sub_86D9C0(v4, v5);
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
                break;
              case 6:
              case 12:
LABEL_14:
                v5 = *(_QWORD *)(v5 + 16);
                continue;
            }
          }
LABEL_8:
          sub_8264F0(*v4, v5, 110);
          return 0;
        }
      }
      else if ( v6 <= 0x78u )
      {
        v7 = a1;
        v8 = a2;
        v9 = v5;
        v10 = v4;
        switch ( (*(_WORD *)(v5 + 2) >> 3) & 0x3F )
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
            return sub_8B7C50(v10, v9);
          default:
            a2 = v8;
            a1 = v7;
            goto LABEL_11;
        }
      }
      break;
    }
LABEL_11:
    switch ( (v6 + 509) & 0x1FF )
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
        goto LABEL_8;
      case 1:
      case 0x7F:
        return sub_8B8A40(v4, v5);
      case 6:
      case 0x63:
        goto LABEL_14;
      case 8:
        v30 = *v4;
        v11 = 1;
        v31 = *(_BYTE *)(*v4 + 963);
        *(_BYTE *)(*v4 + 963) = 0;
        v117 = v31;
        v120 = *(_QWORD *)(v5 + 16);
        if ( !*(_DWORD *)(v120 + 4) )
          goto LABEL_55;
        v32 = *(_QWORD *)(*v4 + 32);
        v33 = *(_DWORD *)(*v4 + 320);
        v124 = (_BYTE *)*v4;
        v129.m128i_i64[0] = (__int64)v124;
        v34 = *(_DWORD *)(v32 + 208);
        v123.m128i_i32[0] = v33;
        v129.m128i_i32[2] = v33;
        *(_DWORD *)(v32 + 208) = v34 + 1;
        sub_847EC0(v32 + 184, v34 + 1);
        v35 = (_QWORD *)(v120 + 24);
        v36 = 8LL * *(unsigned int *)(v120 + 4);
        v37 = v120 + v36 + 16;
        if ( v36 != 8 )
        {
          while ( 1 )
          {
            v138.m128i_i8[4] &= ~1u;
            v39 = *v4;
            v138.m128i_i32[0] = 0;
            v131 = (__m128i)(unsigned __int64)&v138;
            v40 = sub_88E980(v131.m128i_i64, v39, (unsigned __int16 *)*(v35 - 1), nullptr);
            if ( v40 != 2 )
              break;
            if ( v138.m128i_i32[0] <= 1u )
            {
              v38 = v35 + 1;
              if ( (_QWORD *)v37 == v35 + 1 )
                goto LABEL_51;
            }
            else
            {
              sub_69F740((__int64)&v138);
              v38 = v35 + 1;
              if ( (_QWORD *)v37 == v35 + 1 )
                goto LABEL_51;
            }
            v35 = v38;
          }
          if ( v40 )
          {
            v89 = *v4;
            v90 = sub_AC6DA0(*(v35 - 1));
            sub_A2E1A0(v89, v90, 2283, 0);
          }
          if ( v138.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v138);
LABEL_53:
          v11 = 0;
          goto LABEL_54;
        }
        v35 = (_QWORD *)(v120 + 16);
LABEL_51:
        if ( ((*(_WORD *)*v35 + 509) & 0x1FFu) > 0x7F )
        {
          v41 = *v4;
          v42 = sub_AC6DA0(*v35);
          sub_A2E1A0(v41, v42, 2283, 0);
          goto LABEL_53;
        }
        if ( !(unsigned __int8)sub_8B6C50(v4, *v35) )
          goto LABEL_53;
        v94 = sub_8931F0((__int64)v124, 1, v123.m128i_u32[0]);
        v129.m128i_i32[2] = -1;
        v11 = v94;
LABEL_54:
        sub_893480((__int64)&v129);
LABEL_55:
        *(_BYTE *)(v30 + 963) = v117;
        return v11;
      case 0xF:
        v69 = (unsigned __int64 *)(v5 + 24);
        v119 = v5 + 8LL * *(unsigned __int16 *)(v5 + 4) + 16;
        if ( v5 + 24 == v119 )
          return 1;
        while ( 2 )
        {
          v74 = *v69;
          v75 = *(unsigned __int16 *)(v5 + 6);
          if ( (*(_WORD *)*v69 & 0x1FF) != 0x1B )
          {
            if ( (_WORD)v75 && v74 == *(_QWORD *)(v5 + 8 * v75 + 16) )
            {
              if ( !(unsigned __int8)sub_8B6C50(v4, *v69) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(*v4, *v69) )
            {
              return 0;
            }
            goto LABEL_105;
          }
          if ( (_WORD)v75 && v74 == *(_QWORD *)(v5 + 8 * v75 + 16) )
            goto LABEL_8;
          if ( (*(_BYTE *)(v74 + 2) & 8) != 0 )
          {
LABEL_105:
            if ( (unsigned __int64 *)v119 == ++v69 )
              return 1;
            continue;
          }
          break;
        }
        v70 = *v4;
        v138 = 0u;
        LOBYTE(v140) = v140 | 1;
        v139 = 0;
        v142 = 0;
        ptr = v145;
        v144 = 0x800000000LL;
        HIBYTE(v146) = 0;
        v71 = *(_QWORD *)(v70 + 32);
        v122 = *(_QWORD *)(v74 + 16);
        if ( (*(_BYTE *)(v74 + 1) & 6) != 0 )
        {
          v79 = *(_QWORD *)(v70 + 16);
          v80 = *(_QWORD *)(v74 + 8);
          v124 = *(_BYTE **)(v70 + 32);
          v81 = sub_6C4DA0(v79, v80, 1u);
          v71 = (__int64)v124;
          v72 = v81;
        }
        else
        {
          v72 = *(_QWORD *)(v74 + 8);
        }
        v73 = sub_823B90(v71, v74, v72, &v138);
        if ( (unsigned __int8)sub_856400(v73, v70, v122) )
        {
          if ( ptr != v145 )
            free(ptr);
          goto LABEL_105;
        }
        if ( ptr != v145 )
          free(ptr);
        return 0;
      case 0x10:
        if ( *(char *)(v5 + 2) < 0 )
          goto LABEL_14;
        v5 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_24;
      case 0x13:
        a1 = (__int64 *)v5;
        v5 = sub_83DE90(v5);
        continue;
      case 0x18:
        v76 = *v4;
        a2 = v5;
        a1 = *(__int64 **)(*v4 + 32);
        v77 = (_DWORD *)sub_821340((__int64)a1, v5);
        if ( v77 && *v77 )
          return 1;
        v78 = *(_QWORD *)(v5 + 16);
        if ( !v78 || v5 == v78 )
        {
          sub_8264F0(v76, v5, 110);
          return 0;
        }
        v5 = *(_QWORD *)(v5 + 16);
        continue;
      case 0x2C:
        return sub_85E540(v4, v5);
      case 0x33:
        v15 = *(__int64 **)(v5 + 16);
        v16 = (__int64)(*(_QWORD *)(v5 + 24) - (_QWORD)v15) >> 3;
        if ( !(_DWORD)v16 )
          return 1;
        if ( (_DWORD)v16 != 1 )
          goto LABEL_8;
        v5 = *v15;
        continue;
      case 0x34:
      case 0x62:
      case 0x66:
        return 1;
      case 0x37:
        v5 = *(_QWORD *)(v5
                       + 8LL
                       * (((*(_DWORD *)(v5 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v5 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v26 = *v4;
        v27 = *(_QWORD *)(*v4 + 32);
        v28 = *(_DWORD *)(*v4 + 320);
        v138.m128i_i64[0] = *v4;
        v29 = *(_DWORD *)(v27 + 208);
        v138.m128i_i32[2] = v28;
        *(_DWORD *)(v27 + 208) = v29 + 1;
        sub_847EC0(v27 + 184, v29 + 1);
        v11 = sub_8B6C50(v4, *(_QWORD *)(v5 + 16));
        if ( (_BYTE)v11 )
        {
          v85 = sub_8941C0(v26, 1, v28);
          v138.m128i_i32[2] = -1;
          v11 = v85;
        }
        sub_894600((__int64)&v138);
        return v11;
      case 0x3B:
        if ( (*(_WORD *)(v5 + 2) & 0x1E0) == 0 )
          goto LABEL_14;
        sub_805700((__int64)&v138, v5);
        if ( v138.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v138);
        return 1;
      case 0x3E:
        return sub_869260(*v4, v5);
      case 0x40:
        v17 = *(unsigned int *)(v5 + 48);
        a1 = v126;
        v126[0] = v5;
        v126[1] = v17;
        v5 = *(_QWORD *)sub_849A00(v126);
        continue;
      case 0x4A:
        goto LABEL_25;
      case 0x4B:
        if ( *(_BYTE *)(v5 + 48) )
LABEL_24:
          v5 = *(_QWORD *)(v5 + 24);
        else
LABEL_25:
          v5 = *(_QWORD *)(v5 + 32);
        continue;
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
        goto LABEL_18;
      case 0x50:
        v13 = (unsigned __int8 **)sub_A2E240(*v4, v5, 2215, 0);
        if ( v13 )
          sub_823450(v13, 0);
        goto LABEL_18;
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*v4 + 16) + 2160LL) + 1LL) >= 0 )
        {
          v14 = (unsigned __int8 **)sub_A2E240(*v4, v5, 2215, 0);
          if ( v14 )
            sub_823450(v14, 1);
        }
LABEL_18:
        if ( ((*(_WORD *)(v5 + 2) >> 3) & 0x7F) != 0x18 )
          return sub_8B8040(v4, v5);
        sub_857160(*v4, *(_QWORD *)(v5 + 16));
        return 1;
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8B5E30(v4, v5);
      case 0x6C:
        v43 = *(_DWORD *)(*v4 + 948);
        if ( v43 )
          return 0;
        v44 = *(_QWORD *)(v5 + 16);
        if ( sub_77DE60((_QWORD *)v44, 0, nullptr, a4) )
        {
          v48 = *(_QWORD *)(v5 + 24);
          v138.m128i_i64[0] = *v4;
          v124 = v137;
          v135 = v137;
          v133 |= 1u;
          v131 = 0u;
          v132 = 0;
          v134 = 0;
          v136 = 0x800000000LL;
          v137[65] = 0;
          v138.m128i_i64[1] = (__int64)&v131;
          LOBYTE(v139) = 0;
          v11 = sub_871080((__int64)&v138, v48, v45, 0x800000000LL, v46, v47);
          if ( !(_BYTE)v11 || (v133 & 1) != 0 )
            goto LABEL_142;
          v49 = *v4;
          if ( (v137[64] & 1) != 0 )
          {
            if ( *(char *)(sub_A2CB40(v49) + 1) >= 0 )
              sub_A2E240(*v4, v5, 2243, 0);
            goto LABEL_75;
          }
          v50 = sub_8395A0(v49, v5, (__int64)&v131, (*(_BYTE *)(v5 + 2) & 0x10) != 0);
          v128 = v51;
          v127 = (__int64)v50;
          if ( !(_BYTE)v51 )
            goto LABEL_142;
          v118 = sub_69F420((__int64)&v131);
          v52 = *(_BYTE *)(v5 + 2);
          if ( (v52 & 0x10) == 0 && (_DWORD)v136 )
          {
            v108 = sub_B167E0(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL), v5);
            v109 = sub_B0E910(*(_QWORD *)(v108 & 0xFFFFFFFFFFFFFFF0LL));
            if ( !v109
              || (v110 = sub_7A4880(v109), (v111 = v110) == 0)
              || ((v112 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v110 + 32LL), v112 != sub_7A0C70)
                ? (v113 = v112(v111))
                : (v113 = sub_777D70(v111)),
                  (*(_BYTE *)(v113 + 82) & 0xC) == 0 && !(unsigned int)sub_7A5910(v113)) )
            {
              v114 = v5;
              v115 = (unsigned __int8 **)sub_A2E130(*v4, v5, 2197, 0);
              v116 = sub_B167E0(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL), v114);
              if ( v115 )
              {
                sub_8356A0(v115, v116, 8u);
                sub_8356A0(v115, v118, 8u);
              }
              goto LABEL_142;
            }
            v52 = *(_BYTE *)(v5 + 2);
          }
          if ( (v52 & 0x18) == 0
            && (v95 = sub_B0E910(*(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFF0LL))) != 0
            && (v96 = sub_7A4880(v95), (v97 = v96) != 0)
            && ((v98 = v96, v99 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 32LL), v99 != sub_7A0C70)
              ? (v100 = v99(v98))
              : (v100 = sub_777D70(v98)),
                ((*(_BYTE *)(v100 + 82) & 0xC) != 0 || (unsigned int)sub_7A5910(v100))
             && ((v101 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v97 + 32LL), v101 != sub_7A0C70)
               ? (v102 = v101(v97))
               : (v102 = sub_777D70(v97)),
                 (v104 = *(_QWORD *)(v102 + 168)) != 0 && !sub_77DE60(*(_QWORD **)(v102 + 168), 0, nullptr, v103))) )
          {
            v105 = (unsigned __int8 **)sub_A2E130(*v4, v5, 2247, 0);
            v106 = v105;
            if ( v105 )
            {
              sub_823450(v105, (*(_BYTE *)(v104 + 28) & 0x7Fu) - 33 <= 3);
              sub_8356A0(v106, v104, 0xAu);
            }
          }
          else
          {
            v123 = _mm_load_si128(&v131);
            v121 = v127;
            v53 = sub_8124E0(v5);
            v54 = *v4;
            v55 = _mm_load_si128(&v123);
            if ( !**(_BYTE **)(*v4 + 24) )
            {
              v125 = v53;
              v123.m128i_i64[0] = v54;
              v139 = 0;
              v142 = 0;
              v138 = v55;
              v129 = v55;
              LOBYTE(v140) = v140 | 1;
              v146 &= 0xFDu;
              ptr = v145;
              v144 = 0x800000000LL;
              v130 = sub_69F240(v129.m128i_i64);
              v142 = v130;
              v140 = 0;
              v141 = 0;
              v146 &= 0xFEu;
              LODWORD(v144) = 0;
              v56 = sub_8912C0(v123.m128i_i64[0], ((unsigned __int64)v125 << 32) | v125, (__int64)&v138, v121, v118);
              if ( ptr != v145 )
                free(ptr);
              if ( v56 )
              {
                if ( v131.m128i_i64[0] && (~v131.m128i_i8[0] & 3) == 0 )
                  v43 = (unsigned __int64)v131.m128i_i64[0] >> 3;
                if ( sub_8224E0((_QWORD *)(*v4 + 896), v43) )
                  goto LABEL_75;
                sub_A2E130(*v4, v5, 2203, 0);
              }
            }
          }
LABEL_142:
          v11 = 0;
LABEL_75:
          if ( v135 != v124 )
            free(v135);
          return v11;
        }
        v87 = (unsigned __int8 **)sub_A2E130(*v4, v5, 2247, 0);
        v88 = v87;
        if ( v87 )
        {
          sub_823450(v87, (*(_BYTE *)(v44 + 28) & 0x7Fu) - 33 <= 3);
          sub_8356A0(v88, v44, 0xAu);
        }
        return 0;
      case 0x6D:
        v18 = *(_QWORD *)(*v4 + 32);
        v22 = *(_DWORD *)(v18 + 208) + 1;
        *(_DWORD *)(v18 + 208) = v22;
        sub_847EC0(v18 + 184, v22);
        v23 = sub_8C4900(v5);
        v24 = *v4;
        if ( !v23 )
        {
          v11 = 0;
          sub_8264F0(v24, v5, 110);
          goto LABEL_36;
        }
        v20 = *(_QWORD *)(v24 + 32);
        if ( *(_QWORD *)(v20 + 64) )
        {
          v25 = sub_8C4900(v5);
          v11 = sub_8B6C50(v4, v25);
          goto LABEL_36;
        }
        *(_QWORD *)(v20 + 64) = v5;
        v82 = sub_8C4900(v5);
        goto LABEL_127;
      case 0x6E:
        v18 = *(_QWORD *)(*v4 + 32);
        v19 = *(_DWORD *)(v18 + 208) + 1;
        *(_DWORD *)(v18 + 208) = v19;
        sub_847EC0(v18 + 184, v19);
        v20 = *(_QWORD *)(*v4 + 32);
        if ( *(_QWORD *)(v20 + 64) )
        {
          v21 = sub_8C4680(v5);
          v11 = sub_8B6C50(v4, v21);
        }
        else
        {
          *(_QWORD *)(v20 + 64) = v5;
          v82 = sub_8C4680(v5);
LABEL_127:
          v83 = sub_8B6C50(v4, v82);
          *(_QWORD *)(v20 + 64) = 0;
          v11 = v83;
        }
LABEL_36:
        --*(_DWORD *)(v18 + 192);
        return v11;
      case 0x74:
      case 0x75:
        v9 = v5;
        v10 = v4;
        return sub_8B7C50(v10, v9);
      case 0x7E:
        v57 = (_WORD *)sub_8116F0(*(_QWORD *)(v5 + 24));
        v58 = *v57 & 0x1FF;
        if ( v58 <= 0x59u || v58 > 0x5Eu )
        {
          v60 = *v4;
LABEL_81:
          v61 = *(_QWORD *)(v60 + 24);
          v138.m128i_i64[0] = v60;
          v138.m128i_i8[8] = 0;
          v62 = *(_QWORD *)(v61 + 8);
          if ( v62 )
          {
            if ( *(_DWORD *)(v62 + 8) )
              v138.m128i_i8[9] = 0;
            else
              v138.m128i_i8[9] = *(_BYTE *)v61 ^ 1;
            v138.m128i_i32[3] = *(_DWORD *)(v60 + 964);
          }
          else
          {
            v86 = *(_DWORD *)(v60 + 964);
            v138.m128i_i8[9] = 0;
            v138.m128i_i32[3] = v86;
          }
          goto LABEL_85;
        }
        v59 = sub_80FBD0((__int64)v57);
        v60 = *v4;
        if ( v59 != 212 )
          goto LABEL_81;
        v11 = 0;
        if ( !*(_BYTE *)(v60 + 962) )
        {
          v91 = *(char **)(v60 + 24);
          v138.m128i_i64[0] = *v4;
          v138.m128i_i8[8] = 1;
          v92 = *(_DWORD *)(v60 + 964);
          v93 = *((_QWORD *)v91 + 1);
          if ( v93 && !*(_DWORD *)(v93 + 8) )
          {
            v107 = *v91;
            v138.m128i_i32[3] = *(_DWORD *)(v60 + 964);
            v138.m128i_i8[9] = v107 ^ 1;
          }
          else
          {
            v138.m128i_i8[9] = 0;
            v138.m128i_i32[3] = v92;
          }
          *(_DWORD *)(v60 + 964) = 2;
          v60 = *v4;
LABEL_85:
          if ( (unsigned __int8)sub_8571E0(*(_QWORD *)(v5 + 24), &v131, v60) )
          {
            if ( v131.m128i_i8[0] )
              v84 = *(_QWORD *)(v5 + 32);
            else
              v84 = *(_QWORD *)(v5 + 40);
            v11 = sub_8B6C50(v4, v84);
            if ( (_BYTE)v11 )
              goto LABEL_94;
            goto LABEL_93;
          }
          v63 = *v4;
          if ( !*(_BYTE *)(*v4 + 962) )
            goto LABEL_90;
          if ( *(_DWORD *)(v63 + 48) )
          {
            v64 = sub_820420(1u, *(unsigned __int8 *)(v63 + 963));
            *v66 = v64 | v65;
            if ( !v64 )
            {
              v63 = *v4;
LABEL_90:
              if ( *(_DWORD *)(v63 + 48) )
              {
                v67 = sub_820420(*(unsigned __int8 *)(v63 + 962), *(unsigned __int8 *)(v63 + 963));
                **(_BYTE **)(v68 + 24) |= v67;
                if ( v67 )
                {
                  sub_8B6C50(v4, *(_QWORD *)(v5 + 32));
                  sub_8B6C50(v4, *(_QWORD *)(v5 + 40));
                }
              }
              goto LABEL_93;
            }
            sub_8B8500(v4, v5);
          }
LABEL_93:
          v138.m128i_i8[8] = 0;
          v11 = 0;
LABEL_94:
          sub_848320(v138.m128i_i64);
          return v11;
        }
        break;
    }
    return v11;
  }
}

