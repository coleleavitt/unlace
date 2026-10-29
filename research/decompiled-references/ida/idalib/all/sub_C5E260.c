char __fastcall sub_C5E260(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v8; // ax
  char result; // al
  __int32 v10; // edx
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // rbp
  _DWORD *v34; // rax
  __int64 v35; // rsi
  __int64 *v36; // r13
  char v37; // al
  __int64 v38; // r14
  __int64 v39; // rax
  int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 *v47; // r14
  __int64 *v48; // rax
  _WORD *v49; // rdx
  __int64 v50; // rsi
  int v51; // eax
  __int64 *v52; // rbx
  char v53; // al
  unsigned __int8 **v54; // rax
  __int64 v55; // rbp
  int v56; // esi
  __int64 v57; // r12
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rbp
  int v64; // esi
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  _WORD *v71; // rax
  __int64 v72; // r8
  unsigned __int16 v73; // dx
  __int64 *v74; // rax
  __int64 v75; // rdx
  __int32 v76; // eax
  __int64 v77; // rcx
  char v78; // dl
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  char v87; // al
  __int64 v88; // rsi
  __m128i v89; // xmm1
  char v90; // bp
  __int64 v91; // rdx
  __int64 v92; // r9
  unsigned __int64 *v93; // r13
  __int64 v94; // rbp
  __int64 *v95; // r11
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  _QWORD *v100; // r14
  __int64 v101; // rax
  __int64 v102; // rdx
  unsigned __int64 v103; // rsi
  __int64 v104; // rbp
  __int64 v105; // r14
  __int64 *v106; // r13
  unsigned __int8 v107; // al
  __int64 *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned __int8 **v114; // rax
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rsi
  char v121; // al
  __int64 v122; // rdx
  __int64 v123; // rcx
  _QWORD *v124; // rax
  __int64 *v125; // rbp
  __int64 *v126; // r12
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 *v131; // rdx
  __int32 v132; // eax
  __int64 v133; // rsi
  int v134; // ecx
  __int64 *v135; // r12
  int v136; // [rsp+0h] [rbp-108h]
  char v137; // [rsp+0h] [rbp-108h]
  char v138; // [rsp+0h] [rbp-108h]
  char v139; // [rsp+0h] [rbp-108h]
  unsigned __int64 v140; // [rsp+0h] [rbp-108h]
  char v141; // [rsp+0h] [rbp-108h]
  char v142; // [rsp+0h] [rbp-108h]
  char v143; // [rsp+0h] [rbp-108h]
  __int64 v144; // [rsp+0h] [rbp-108h]
  __int64 v145; // [rsp+8h] [rbp-100h]
  char v146; // [rsp+8h] [rbp-100h]
  __int64 v147; // [rsp+8h] [rbp-100h]
  char v148; // [rsp+10h] [rbp-F8h]
  __int64 v149; // [rsp+10h] [rbp-F8h]
  __int64 *v150; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v151; // [rsp+28h] [rbp-E0h]
  __int64 v152[2]; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v153; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v154; // [rsp+50h] [rbp-B8h]
  char v155; // [rsp+58h] [rbp-B0h]
  __int64 v156; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v158; // [rsp+78h] [rbp-90h]
  _BYTE v159[136]; // [rsp+80h] [rbp-88h] BYREF

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
              return sub_C5DDE0((__int64 **)a1, a2);
            case 2:
            case 3:
            case 4:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 13:
              return sub_C14310(*a1, a2);
            case 5:
              return sub_C14310(*a1, a2);
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
            return sub_C5E1C0(a1, a2, a3, a4, a5, a6);
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
      case 1:
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
      case 0x31:
      case 0x33:
      case 0x34:
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
      case 0x61:
      case 0x63:
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
      case 0x6B:
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
      case 5:
      case 0x62:
        goto LABEL_7;
      case 7:
        v36 = (__int64 *)*a1;
        v37 = *(_BYTE *)(*a1 + 915LL);
        *(_BYTE *)(*a1 + 915LL) = 0;
        v38 = *(_QWORD *)(a2 + 16);
        v146 = v37;
        result = 1;
        if ( !*(_DWORD *)(v38 + 4) )
          goto LABEL_41;
        v150 = v36;
        v151 = *((_DWORD *)v36 + 68);
        v39 = v36[4];
        v40 = *(_DWORD *)(v39 + 160) + 1;
        *(_DWORD *)(v39 + 160) = v40;
        sub_9B7040(v39 + 136, v40);
        v44 = *(unsigned int *)(v38 + 4);
        v45 = (__int64 *)(v38 + 16);
        v46 = v38 + 8 * v44 + 16;
        v47 = (__int64 *)(v38 + 24);
        if ( (__int64 *)v46 == v47 )
          goto LABEL_38;
        while ( 2 )
        {
          v49 = (_WORD *)*(v47 - 1);
          v50 = *a1;
          v152[0] = (__int64)&v153;
          v153.m128i_i8[4] &= ~1u;
          v153.m128i_i32[0] = 0;
          v152[1] = 0;
          v51 = sub_C53060(v152, v50, v49);
          if ( v51 != 2 )
          {
            if ( v51 )
            {
              v135 = (__int64 *)*a1;
              v50 = (unsigned int)sub_EEB7E0(*(v47 - 1));
              sub_E33C80(v135, v50, 2485, 0);
            }
            if ( v153.m128i_i32[0] > 1u )
            {
              sub_A4F8E0(v153.m128i_i32);
              v53 = 0;
              goto LABEL_40;
            }
LABEL_125:
            v53 = 0;
            goto LABEL_40;
          }
          if ( v153.m128i_i32[0] <= 1u )
          {
            v48 = v47 + 1;
            if ( (__int64 *)v46 == v47 + 1 )
            {
LABEL_37:
              v45 = v47;
LABEL_38:
              v50 = *v45;
              if ( ((*(_WORD *)*v45 + 509) & 0x1FFu) > 0x7E )
              {
                v52 = (__int64 *)*a1;
                v50 = (unsigned int)sub_EEB7E0(v50);
                sub_E33C80(v52, v50, 2485, 0);
                v53 = 0;
                goto LABEL_40;
              }
              if ( (unsigned __int8)sub_C5E260(a1, v50, v44, v41, v42, v43) )
              {
                v50 = 1;
                v53 = sub_C54F60((__int64)v150, (__m128i *)((char *)&dword_0 + 1), v151, v41, v42);
                v151 = -1;
LABEL_40:
                v138 = v53;
                sub_C55380((__int64)&v150, v50, v44, v41, v42);
                result = v138;
LABEL_41:
                *((_BYTE *)v36 + 915) = v146;
                return result;
              }
              goto LABEL_125;
            }
          }
          else
          {
            sub_A4F8E0(v153.m128i_i32);
            v48 = v47 + 1;
            if ( (__int64 *)v46 == v47 + 1 )
              goto LABEL_37;
          }
          v47 = v48;
          continue;
        }
      case 0xE:
        v92 = a2 + 24;
        v93 = (unsigned __int64 *)(a2 + 24);
        v94 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 4) - 8;
        if ( a2 + 24 == v94 )
          return 1;
        while ( 2 )
        {
          v100 = (_QWORD *)*v93;
          v101 = *(unsigned __int16 *)(a2 + 6);
          v102 = *(unsigned __int16 *)*v93;
          LOWORD(v102) = v102 & 0x1FF;
          if ( (_WORD)v102 != 26 )
          {
            v103 = *v93;
            if ( (_WORD)v101 && v100 == *(_QWORD **)(a2 + 8 * v101 + 16) )
            {
              if ( !(unsigned __int8)sub_C5E260(a1, v103, v102, a4, a5, v92) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C3FAF0(*a1, v103, v102, a4, a5) )
            {
              return 0;
            }
            goto LABEL_87;
          }
          if ( !(_WORD)v101 || v100 != *(_QWORD **)(a2 + 8 * v101 + 16) )
          {
            if ( (*v100 & 0x80000LL) == 0 )
            {
              v95 = (__int64 *)*a1;
              v155 |= 1u;
              v153 = 0u;
              v154 = 0;
              v156 = 0;
              ptr = v159;
              v158 = 0x800000000LL;
              v159[65] = 0;
              v149 = (__int64)v95;
              v147 = v95[4];
              v140 = v100[2];
              v96 = sub_C104A0(v95[2], (__int64)v100);
              v97 = sub_C2C1C0(v147, (unsigned __int64)v100, v96, (__int64)&v153);
              result = sub_C39A10(v97, v149, v140, v98, v99);
              if ( !result )
              {
                if ( ptr != v159 )
                {
                  free(ptr);
                  return 0;
                }
                return result;
              }
              if ( ptr != v159 )
                free(ptr);
            }
LABEL_87:
            if ( (unsigned __int64 *)v94 == ++v93 )
              return 1;
            continue;
          }
          return sub_C14310(*a1, a2);
        }
      case 0xF:
        v35 = 0;
        if ( *(char *)(a2 + 2) < 0 )
          v35 = *(_QWORD *)(a2 + 16);
        return sub_C5E260(a1, v35, a3, a4, a5, a6);
      case 0x11:
      case 0x71:
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 0x12:
        v28 = sub_C1DE00(a2);
        return sub_C5E260(a1, v28, v29, v30, v31, v32);
      case 0x17:
        v33 = (__int64 *)*a1;
        v34 = (_DWORD *)sub_C110E0(*(_QWORD *)(*a1 + 32LL), a2);
        if ( v34 && *v34 )
        {
          sub_C245D0(a1[1], (_QWORD *)v33[2], (__int64)v34);
          return 1;
        }
        else
        {
          v35 = *(_QWORD *)(a2 + 16);
          if ( !v35 || a2 == v35 )
            return sub_C14310((__int64)v33, a2);
          else
            return sub_C5E260(a1, v35, a3, a4, a5, a6);
        }
      case 0x2B:
        v88 = *(_QWORD *)(a2 + 16);
        if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
        {
          v121 = *((_BYTE *)a1 + 16);
          v153 = _mm_loadu_si128((const __m128i *)a1);
          LOBYTE(v154) = v121;
          v90 = sub_C48CF0(&v153, v88, a3, a4, a5, a6);
          v124 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(*v124 + 16LL) != 42 )
            sub_F63050(*v124, v88, v122, v123);
        }
        else if ( (*(_BYTE *)(v88 + 1) & 6) != 0 )
        {
          v90 = sub_C5E260(a1, v88, a3, a4, a5, a6);
        }
        else
        {
          v89 = _mm_loadu_si128((const __m128i *)a1);
          LOBYTE(v154) = 0;
          v153 = v89;
          v90 = sub_C5E260(&v153, v88, a3, a4, a5, a6);
        }
        if ( !v90 )
        {
          if ( *((_BYTE *)a1 + 16) )
          {
            v104 = a1[1];
            v141 = *((_BYTE *)a1 + 16);
            sub_A4F2D0((__int64)&v153, a2, 0, 0);
            sub_C24210(v104, v153.m128i_i64[0], (__int64 *)v153.m128i_i64[1], 1);
            return v141;
          }
          return 0;
        }
        v105 = *(_QWORD *)(a2 + 24);
        v106 = (__int64 *)*a1;
        v107 = *(_BYTE *)(v105 + 28) & 0x7F;
        if ( (unsigned int)v107 - 49 <= 2 )
        {
          if ( !(unsigned __int8)sub_C15060(*a1, a2, a1[1], *(_QWORD *)(a2 + 24)) )
            return 0;
          goto LABEL_102;
        }
        if ( v107 != 32 )
          return sub_C14310(*a1, a2);
        v125 = *(__int64 **)(v105 + 56);
        v144 = a1[1];
        v126 = &v125[*(unsigned int *)(v105 + 64)];
        if ( v125 == v126 )
        {
LABEL_102:
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 + 48)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 43 > 1 )
            return 1;
          v153.m128i_i8[4] &= ~1u;
          v108 = (__int64 *)*a1;
          v153.m128i_i32[0] = 0;
          result = sub_C36570((__int64)v108, (_DWORD *)a2, *(_QWORD *)(v105 + 48), a1[1], (__int64)&v153, 0);
          if ( result )
          {
            v142 = result;
            sub_C245D0(a1[1], *(_QWORD **)(*a1 + 16LL), (__int64)&v153);
            result = v142;
          }
          if ( v153.m128i_i32[0] > 1u )
          {
            v143 = result;
            sub_A4F8E0(v153.m128i_i32);
            return v143;
          }
          return result;
        }
        while ( (unsigned __int8)sub_C15060((__int64)v106, a2, v144, *v125) )
        {
          if ( v126 == ++v125 )
            goto LABEL_102;
        }
        return 0;
      case 0x30:
      case 0x32:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x60:
      case 0x6E:
      case 0x6F:
        return sub_C4FA10(a1, (const __m128i **)a1 + 1, a2);
      case 0x36:
        v91 = (*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF;
        return sub_C5E260(
                 a1,
                 *(_QWORD *)(a2 + 8LL * ((unsigned int)v91 + ((*(_BYTE *)(a2 + 19) & 0x40) != 0)) + 32),
                 v91,
                 a4,
                 a5,
                 a6);
      case 0x39:
        v10 = *(_DWORD *)(*a1 + 272LL);
        v153.m128i_i64[0] = *a1;
        v153.m128i_i32[2] = v10;
        v11 = *(_QWORD *)(v153.m128i_i64[0] + 32);
        v12 = *(_DWORD *)(v11 + 160) + 1;
        *(_DWORD *)(v11 + 160) = v12;
        sub_9B7040(v11 + 136, v12);
        v13 = *(_QWORD *)(a2 + 16);
        v18 = sub_C5E260(a1, v13, v14, v15, v16, v17);
        if ( v18 )
        {
          v13 = 1;
          v18 = sub_C553F0(v153.m128i_i64[0], 1, v153.m128i_u32[2], v20, v21);
          v153.m128i_i32[2] = -1;
        }
        v137 = v18;
        sub_C559A0((__int64)&v153, v13, v19, v20, v21);
        return v137;
      case 0x3A:
        if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) == 0 )
          return sub_C5E260(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6);
        sub_BF7B00((__int64)&v153, a2, a3, a4, a5, a6, v136, v145, v148);
        sub_C245D0(a1[1], *(_QWORD **)(*a1 + 16LL), (__int64)&v153);
        if ( v153.m128i_i32[0] > 1u )
          sub_A4F8E0(v153.m128i_i32);
        return 1;
      case 0x3D:
        return sub_C3FBD0(a1, a2, a3, a4, a5);
      case 0x3F:
        v22 = *(unsigned int *)(a2 + 48);
        v153.m128i_i64[0] = a2;
        v153.m128i_i64[1] = v22;
        v23 = (_QWORD *)sub_C29F30(&v153);
        return sub_C5E260(a1, *v23, v24, v25, v26, v27);
      case 0x49:
        a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4A:
        if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
          v35 = *(_QWORD *)(a2 + 24);
        else
          v35 = *(_QWORD *)(a2 + 32);
        return sub_C5E260(a1, v35, a3, a4, a5, a6);
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        return sub_C5FF90(a1, a2);
      case 0x4F:
        v54 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
        if ( v54 )
          sub_C11320(v54, 0);
        return sub_C5FF90(a1, a2);
      case 0x50:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2320LL) + 1LL) >= 0 )
        {
          v114 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
          if ( v114 )
            sub_C11320(v114, 1);
        }
        return sub_C5FF90(a1, a2);
      case 0x6C:
        v55 = *(_QWORD *)(*a1 + 32LL);
        v56 = *(_DWORD *)(v55 + 160) + 1;
        *(_DWORD *)(v55 + 160) = v56;
        sub_9B7040(v55 + 136, v56);
        if ( sub_C94CC0(a2) )
        {
          v57 = *(_QWORD *)(*a1 + 32LL);
          if ( *(_QWORD *)(v57 + 64) )
          {
            v115 = sub_C94CC0(a2);
            result = sub_C5E260(a1, v115, v116, v117, v118, v119);
          }
          else
          {
            *(_QWORD *)(v57 + 64) = a2;
            v58 = sub_C94CC0(a2);
            result = sub_C5E260(a1, v58, v59, v60, v61, v62);
            *(_QWORD *)(v57 + 64) = 0;
          }
        }
        else
        {
          result = sub_C14310(*a1, a2);
        }
        --*(_DWORD *)(v55 + 144);
        return result;
      case 0x6D:
        v63 = *(_QWORD *)(*a1 + 32LL);
        v64 = *(_DWORD *)(v63 + 160) + 1;
        *(_DWORD *)(v63 + 160) = v64;
        sub_9B7040(v63 + 136, v64);
        v65 = *(_QWORD *)(*a1 + 32LL);
        if ( *(_QWORD *)(v65 + 64) )
        {
          v109 = sub_C94C80(a2);
          result = sub_C5E260(a1, v109, v110, v111, v112, v113);
        }
        else
        {
          *(_QWORD *)(v65 + 64) = a2;
          v66 = sub_C94C80(a2);
          result = sub_C5E260(a1, v66, v67, v68, v69, v70);
          *(_QWORD *)(v65 + 64) = 0;
        }
        --*(_DWORD *)(v63 + 144);
        return result;
      case 0x73:
      case 0x74:
        return sub_C5E1C0(a1, a2, a3, a4, a5, a6);
      case 0x7D:
        v71 = (_WORD *)sub_BFD550(*(_QWORD *)(a2 + 24));
        v73 = *v71 & 0x1FF;
        if ( v73 > 0x58u && v73 <= 0x5Du && (unsigned int)sub_BFBE70((__int64)v71) == 214 )
        {
          v131 = (__int64 *)*a1;
          result = 0;
          if ( *(_BYTE *)(*a1 + 914LL) )
            return result;
          v153.m128i_i64[0] = *a1;
          v153.m128i_i8[8] = 1;
          v77 = v131[3];
          v132 = *((_DWORD *)v131 + 229);
          v133 = *(_QWORD *)(v77 + 8);
          if ( !v133 || *(_DWORD *)(v133 + 8) )
          {
            v153.m128i_i8[9] = 0;
            v153.m128i_i32[3] = v132;
          }
          else
          {
            v134 = *(unsigned __int8 *)v77;
            v153.m128i_i32[3] = *((_DWORD *)v131 + 229);
            v77 = v134 ^ 1u;
            v153.m128i_i8[9] = v77;
          }
          *((_DWORD *)v131 + 229) = 2;
        }
        else
        {
          v74 = (__int64 *)*a1;
          v153.m128i_i8[8] = 0;
          v153.m128i_i64[0] = (__int64)v74;
          v75 = v74[3];
          v76 = *((_DWORD *)v74 + 229);
          v77 = *(_QWORD *)(v75 + 8);
          if ( !v77 || (v77 = *(unsigned int *)(v77 + 8), (_DWORD)v77) )
          {
            v153.m128i_i8[9] = 0;
            v153.m128i_i32[3] = v76;
          }
          else
          {
            v78 = *(_BYTE *)v75;
            v153.m128i_i32[3] = v76;
            v153.m128i_i8[9] = v78 ^ 1;
          }
        }
        if ( (unsigned __int8)sub_C3FB70(*(_QWORD *)(a2 + 24), v152, *a1, v77, v72) )
        {
          if ( LOBYTE(v152[0]) )
            v120 = *(_QWORD *)(a2 + 32);
          else
            v120 = *(_QWORD *)(a2 + 40);
          v87 = sub_C5E260(a1, v120, v79, v80, v81, v82);
          if ( v87 )
            goto LABEL_70;
        }
        else if ( *(_BYTE *)(*a1 + 914LL) && (unsigned __int8)sub_C11850(*a1) )
        {
          sub_C5F930(a1, a2);
        }
        else if ( (unsigned __int8)sub_C11850(*a1) )
        {
          sub_C5E260(a1, *(_QWORD *)(a2 + 32), v83, v84, v85, v86);
          sub_C5E260(a1, *(_QWORD *)(a2 + 40), v127, v128, v129, v130);
        }
        v153.m128i_i8[8] = 0;
        v87 = 0;
LABEL_70:
        v139 = v87;
        sub_C23B30(v153.m128i_i64);
        return v139;
      case 0x7E:
        return sub_C5FC30(a1, a2);
    }
  }
}
