__int64 __fastcall sub_C846B0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned __int16 v8; // ax
  unsigned int v9; // r13d
  __int32 v11; // edx
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *v18; // rax
  char v19; // di
  __int64 v20; // rbp
  __int64 *v21; // r13
  __int64 v22; // rax
  int v23; // esi
  __int64 *v24; // rax
  __int64 v25; // rbx
  __int64 *v26; // rax
  _WORD *v27; // rdx
  __int64 v28; // rsi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 *v33; // rbx
  __int64 *v34; // r14
  __int64 v35; // rbp
  __int64 *v36; // r11
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  _QWORD *v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 *v48; // rbp
  _DWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  unsigned __int8 **v52; // rax
  __int64 v53; // rbp
  unsigned int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // r14
  __int64 *v60; // rax
  __int64 *v61; // rdi
  char v62; // dl
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned int v68; // eax
  __int64 *v69; // r14
  char v70; // r14
  __int64 *v71; // rdi
  __int64 v72; // rbp
  int v73; // esi
  __int64 v74; // r12
  __int64 v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rbp
  int v78; // esi
  __int64 v79; // r12
  __int64 v80; // rax
  unsigned int v81; // eax
  _QWORD *v82; // rdx
  __int64 v83; // rax
  _WORD *v84; // rax
  __int64 v85; // r8
  unsigned __int16 v86; // dx
  bool v87; // zf
  __int64 *v88; // rax
  __int64 v89; // rdx
  __int32 v90; // eax
  __int64 v91; // rcx
  char v92; // dl
  __int64 v93; // rax
  unsigned __int8 **v94; // rax
  __int64 v95; // rax
  __int64 v96; // rsi
  unsigned int v97; // eax
  unsigned __int8 **v98; // rax
  unsigned __int8 **v99; // rbx
  __int64 *v100; // rbx
  __int32 v101; // edx
  __int64 v102; // rsi
  int v103; // ecx
  unsigned int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rsi
  unsigned __int8 **v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // rax
  __int64 v115; // rax
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // r14
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // r14
  unsigned __int8 **v121; // rax
  unsigned __int8 **v122; // rbx
  int v123; // [rsp+0h] [rbp-1A8h]
  __int64 v124; // [rsp+8h] [rbp-1A0h]
  __int64 *v125; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v126; // [rsp+8h] [rbp-1A0h]
  __int32 v127; // [rsp+8h] [rbp-1A0h]
  char v128; // [rsp+10h] [rbp-198h]
  __int64 v129; // [rsp+10h] [rbp-198h]
  __int64 v130; // [rsp+10h] [rbp-198h]
  __int64 v131; // [rsp+18h] [rbp-190h]
  unsigned __int8 v132; // [rsp+18h] [rbp-190h]
  _DWORD *v133; // [rsp+20h] [rbp-188h]
  __int64 *v134; // [rsp+28h] [rbp-180h]
  unsigned int v135; // [rsp+34h] [rbp-174h]
  __int64 v136; // [rsp+38h] [rbp-170h]
  __int64 *v137; // [rsp+40h] [rbp-168h] BYREF
  unsigned int v138; // [rsp+48h] [rbp-160h]
  unsigned __int64 v139; // [rsp+50h] [rbp-158h] BYREF
  __int64 *v140; // [rsp+58h] [rbp-150h]
  __int64 v141; // [rsp+60h] [rbp-148h]
  char v142; // [rsp+68h] [rbp-140h]
  __int64 v143; // [rsp+78h] [rbp-130h]
  void *v144; // [rsp+80h] [rbp-128h]
  __int64 v145; // [rsp+88h] [rbp-120h]
  _BYTE v146[64]; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int8 v147; // [rsp+D0h] [rbp-D8h]
  char v148; // [rsp+D1h] [rbp-D7h]
  __m128i v149; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v150; // [rsp+F0h] [rbp-B8h]
  char v151; // [rsp+F8h] [rbp-B0h]
  __int64 v152; // [rsp+108h] [rbp-A0h]
  void *ptr; // [rsp+110h] [rbp-98h]
  __int64 v154; // [rsp+118h] [rbp-90h]
  _BYTE v155[65]; // [rsp+120h] [rbp-88h] BYREF
  char v156; // [rsp+161h] [rbp-47h]

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
              return (unsigned int)sub_C65CD0(a1, a2);
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
              return (unsigned int)sub_C14310((__int64)*a1, a2);
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
            return (unsigned int)sub_C862B0(a1, a2);
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
      case 0x30:
      case 0x31:
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
      case 0x60:
      case 0x63:
      case 0x64:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6A:
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
      case 5:
      case 0x62:
        goto LABEL_7;
      case 7:
        v18 = *a1;
        v9 = 1;
        v19 = *((_BYTE *)*a1 + 915);
        *((_BYTE *)v18 + 915) = 0;
        v20 = *(_QWORD *)(a2 + 16);
        v125 = v18;
        if ( !*(_DWORD *)(v20 + 4) )
          goto LABEL_28;
        v137 = v18;
        v21 = (__int64 *)(v20 + 24);
        v138 = *((_DWORD *)v18 + 68);
        v22 = v18[4];
        v23 = *(_DWORD *)(v22 + 160) + 1;
        *(_DWORD *)(v22 + 160) = v23;
        sub_9B7040(v22 + 136, v23);
        v24 = (__int64 *)(v20 + 16);
        v25 = v20 + 8LL * *(unsigned int *)(v20 + 4) + 16;
        if ( v25 == v20 + 24 )
          goto LABEL_25;
        while ( 2 )
        {
          v27 = (_WORD *)*(v21 - 1);
          v28 = (__int64)*a1;
          v139 = (unsigned __int64)&v149;
          v149.m128i_i8[4] &= ~1u;
          v149.m128i_i32[0] = 0;
          v140 = nullptr;
          v29 = sub_C53060((__int64 *)&v139, v28, v27);
          if ( v29 != 2 )
          {
            if ( v29 )
            {
              v100 = *a1;
              v28 = (unsigned int)sub_EEB7E0(*(v21 - 1));
              sub_E33C80(v100, v28, 2485, 0);
            }
            if ( v149.m128i_i32[0] > 1u )
            {
              v9 = 0;
              sub_A4F8E0(v149.m128i_i32);
              goto LABEL_27;
            }
LABEL_143:
            v9 = 0;
            goto LABEL_27;
          }
          if ( v149.m128i_i32[0] <= 1u )
          {
            v26 = v21 + 1;
            if ( (__int64 *)v25 == v21 + 1 )
            {
LABEL_24:
              v24 = v21;
LABEL_25:
              v28 = *v24;
              if ( ((*(_WORD *)*v24 + 509) & 0x1FFu) > 0x7E )
              {
                v33 = *a1;
                v9 = 0;
                v28 = (unsigned int)sub_EEB7E0(v28);
                sub_E33C80(v33, v28, 2485, 0);
                goto LABEL_27;
              }
              if ( (unsigned __int8)sub_C846B0(a1, v28) )
              {
                v28 = 1;
                v104 = sub_C54F60((__int64)v137, (__m128i *)((char *)&dword_0 + 1), v138, v31, v32);
                v138 = -1;
                v9 = v104;
LABEL_27:
                sub_C55380((__int64)&v137, v28, v30, v31, v32);
LABEL_28:
                *((_BYTE *)v125 + 915) = v19;
                return v9;
              }
              goto LABEL_143;
            }
          }
          else
          {
            sub_A4F8E0(v149.m128i_i32);
            v26 = v21 + 1;
            if ( (__int64 *)v25 == v21 + 1 )
              goto LABEL_24;
          }
          v21 = v26;
          continue;
        }
      case 0xE:
        v34 = (__int64 *)(a2 + 24);
        v35 = a2 + 24 + 8LL * *(unsigned __int16 *)(a2 + 4) - 8;
        if ( a2 + 24 == v35 )
          return 1;
        while ( 2 )
        {
          v42 = (_QWORD *)*v34;
          v43 = *(unsigned __int16 *)(a2 + 6);
          v44 = *(unsigned __int16 *)*v34;
          LOWORD(v44) = v44 & 0x1FF;
          if ( (_WORD)v44 == 26 )
          {
            if ( (_WORD)v43 && v42 == *(_QWORD **)(a2 + 8 * v43 + 16) )
              return (unsigned int)sub_C14310((__int64)*a1, a2);
            if ( (*v42 & 0x80000LL) == 0 )
            {
              v36 = *a1;
              v37 = *v34;
              v149 = 0u;
              v150 = 0;
              v151 |= 1u;
              v152 = 0;
              ptr = v155;
              v154 = 0x800000000LL;
              v156 = 0;
              v131 = (__int64)v36;
              v129 = v36[4];
              v126 = v42[2];
              v38 = sub_C104A0(v36[2], v37);
              v39 = sub_C2C1C0(v129, (unsigned __int64)v42, v38, (__int64)&v149);
              v9 = sub_C39A10(v39, v131, v126, v40, v41);
              if ( !(_BYTE)v9 )
              {
                if ( ptr != v155 )
                  free(ptr);
                return v9;
              }
              if ( ptr != v155 )
                free(ptr);
            }
          }
          else
          {
            v45 = *v34;
            if ( (_WORD)v43 && v42 == *(_QWORD **)(a2 + 8 * v43 + 16) )
            {
              if ( !(unsigned __int8)sub_C846B0(a1, v45) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C3FAF0((__int64)*a1, v45, v44, a4, a5) )
            {
              return 0;
            }
          }
          if ( (__int64 *)v35 == ++v34 )
            return 1;
          continue;
        }
      case 0xF:
        v46 = 0;
        if ( *(char *)(a2 + 2) < 0 )
          v46 = *(_QWORD *)(a2 + 16);
        return (unsigned int)sub_C846B0(a1, v46);
      case 0x11:
      case 0x71:
        a2 = *(_QWORD *)(a2 + 24);
        continue;
      case 0x12:
        v47 = sub_C1DE00(a2);
        return (unsigned int)sub_C846B0(a1, v47);
      case 0x17:
        v48 = *a1;
        v49 = (_DWORD *)sub_C110E0((*a1)[4], a2);
        if ( v49 && *v49 )
          return 1;
        v46 = *(_QWORD *)(a2 + 16);
        if ( !v46 || a2 == v46 )
          return (unsigned int)sub_C14310((__int64)v48, a2);
        else
          return (unsigned int)sub_C846B0(a1, v46);
      case 0x2B:
        return (unsigned int)sub_C43C00((__int64 *)a1, a2, a3, a4, a5);
      case 0x32:
        v82 = *(_QWORD **)(a2 + 16);
        v83 = (__int64)(*(_QWORD *)(a2 + 24) - (_QWORD)v82) >> 3;
        if ( !(_DWORD)v83 )
          return 1;
        if ( (_DWORD)v83 != 1 )
          return (unsigned int)sub_C14310((__int64)*a1, a2);
        return (unsigned int)sub_C846B0(a1, *v82);
      case 0x33:
      case 0x61:
      case 0x65:
        return 1;
      case 0x36:
        return (unsigned int)sub_C846B0(
                               a1,
                               *(_QWORD *)(a2
                                         + 8LL
                                         * (((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF)
                                          + (unsigned int)((*(_BYTE *)(a2 + 19) & 0x40) != 0))
                                         + 32));
      case 0x39:
        v11 = *((_DWORD *)*a1 + 68);
        v149.m128i_i64[0] = (__int64)*a1;
        v149.m128i_i32[2] = v11;
        v12 = *(_QWORD *)(v149.m128i_i64[0] + 32);
        v13 = *(_DWORD *)(v12 + 160) + 1;
        *(_DWORD *)(v12 + 160) = v13;
        sub_9B7040(v12 + 136, v13);
        v14 = *(_QWORD *)(a2 + 16);
        v9 = sub_C846B0(a1, v14);
        if ( (_BYTE)v9 )
        {
          v14 = 1;
          v97 = sub_C553F0(v149.m128i_i64[0], 1, v149.m128i_u32[2], v16, v17);
          v149.m128i_i32[2] = -1;
          v9 = v97;
        }
        sub_C559A0((__int64)&v149, v14, v15, v16, v17);
        return v9;
      case 0x3A:
        if ( ((*(_QWORD *)a2 >> 16) & 0x1E0) != 0 )
        {
          sub_BF7B00((__int64)&v149, a2, a3, a4, a5, a6, v123, v124, v128);
          if ( v149.m128i_i32[0] > 1u )
            sub_A4F8E0(v149.m128i_i32);
          return 1;
        }
        else
        {
          return (unsigned int)sub_C846B0(a1, *(_QWORD *)(a2 + 16));
        }
      case 0x3D:
        return (unsigned int)sub_C43ED0((__int64)*a1, a2, a3, a4, a5);
      case 0x3F:
        v50 = *(unsigned int *)(a2 + 48);
        v149.m128i_i64[0] = a2;
        v149.m128i_i64[1] = v50;
        v51 = (_QWORD *)sub_C29F30(&v149);
        return (unsigned int)sub_C846B0(a1, *v51);
      case 0x49:
        a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4A:
        if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
          v46 = *(_QWORD *)(a2 + 24);
        else
          v46 = *(_QWORD *)(a2 + 32);
        return (unsigned int)sub_C846B0(a1, v46);
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        return (unsigned int)sub_C86270(a1, a2);
      case 0x4F:
        v52 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
        if ( v52 )
          sub_C11320(v52, 0);
        if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) != 0x18 )
          return (unsigned int)sub_C86010(a1, a2);
        goto LABEL_134;
      case 0x50:
        if ( *(char *)(*(_QWORD *)((*a1)[2] + 2320) + 1LL) >= 0 )
        {
          v94 = (unsigned __int8 **)sub_E33C90(*a1, a2, 2417, 0);
          if ( v94 )
            sub_C11320(v94, 1);
        }
        if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x18 )
        {
LABEL_134:
          v9 = 1;
          sub_C3FAF0((__int64)*a1, *(_QWORD *)(a2 + 16), a3, a4, a5);
        }
        else
        {
          return (unsigned int)sub_C86010(a1, a2);
        }
        return v9;
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        return (unsigned int)sub_C838F0((__int64 *)a1, a2);
      case 0x6B:
        v127 = *((_DWORD *)*a1 + 225);
        if ( v127 )
          return 0;
        v53 = *(_QWORD *)(a2 + 16);
        LOBYTE(v54) = sub_B760E0(v53, nullptr, nullptr);
        v9 = v54;
        if ( (_BYTE)v54 )
        {
          v59 = *(_QWORD *)(a2 + 24);
          v139 = 0;
          v140 = nullptr;
          v144 = v146;
          v145 = 0x800000000LL;
          v60 = *a1;
          v141 = 0;
          v142 |= 1u;
          v143 = 0;
          v148 = 0;
          v149.m128i_i64[0] = (__int64)v60;
          v149.m128i_i64[1] = (__int64)&v139;
          LOBYTE(v150) = 0;
          v132 = sub_C48CF0(&v149, v59, v55, v56, v57, v58);
          if ( !v132 || (v142 & 1) != 0 )
            goto LABEL_137;
          v9 = v147;
          v61 = *a1;
          LOBYTE(v9) = v147 & 1;
          if ( (v147 & 1) != 0 )
          {
            if ( *(char *)(sub_E32240(v61) + 1) >= 0 )
            {
              sub_E33C90(*a1, a2, 2445, 0);
              goto LABEL_89;
            }
          }
          else
          {
            v133 = (_DWORD *)sub_C1ADD0((__int64)v61, a2, (__int64)&v139, (*(_QWORD *)a2 & 0x100000LL) != 0);
            if ( !v62 )
              goto LABEL_137;
            v130 = sub_A4F520((__int64)&v139);
            v66 = *(_QWORD *)a2;
            if ( (*(_QWORD *)a2 & 0x100000) == 0 && (_DWORD)v145 )
            {
              v105 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v63, v64, v65);
              v106 = sub_F63270(*(_QWORD *)(v105 & 0xFFFFFFFFFFFFFFF0LL));
              if ( !v106
                || (v107 = sub_B97300(v106)) == 0
                || (v108 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v107 + 32LL))(v107),
                    v63 = *(_QWORD *)(v108 + 80) >> 16,
                    (*(_QWORD *)(v108 + 80) & 0x40000LL) == 0)
                && (LOBYTE(v63) = WORD1(*(_QWORD *)(v108 + 80)) & 8, !(_BYTE)v63)
                && !(unsigned int)sub_B984E0(v108) )
              {
                v109 = a2;
                v110 = (unsigned __int8 **)sub_E33C10(*a1, a2, 2399, 0);
                v114 = sub_F68450(*(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL), v109, v111, v112, v113);
                if ( v110 )
                {
                  sub_AE9DF0(v110, v114, 8u);
                  sub_AE9DF0(v110, v130, 8u);
                }
                goto LABEL_89;
              }
              v66 = *(_QWORD *)a2;
            }
            v67 = v66 >> 16;
            if ( (v67 & 0x10) == 0 && (v67 & 8) == 0 )
            {
              v115 = sub_F63270(*(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFF0LL));
              if ( v115 )
              {
                v116 = sub_B97300(v115);
                v117 = v116;
                if ( v116 )
                {
                  v118 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v116 + 32LL))(v116);
                  if ( (*(_QWORD *)(v118 + 80) & 0x40000LL) != 0
                    || (*(_QWORD *)(v118 + 80) & 0x80000LL) != 0
                    || (unsigned int)sub_B984E0(v118) )
                  {
                    v119 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v117 + 32LL))(v117);
                    v120 = *(_QWORD *)(v119 + 168);
                    if ( v120 )
                    {
                      if ( !sub_B760E0(*(_QWORD *)(v119 + 168), nullptr, nullptr) )
                      {
                        v121 = (unsigned __int8 **)sub_E33C10(*a1, a2, 2449, 0);
                        v122 = v121;
                        if ( v121 )
                        {
                          v9 = 0;
                          sub_C11320(v121, (*(_BYTE *)(v120 + 28) & 0x7Fu) - 35 <= 3);
                          sub_AE9DF0(v122, v120, 0xAu);
LABEL_89:
                          if ( v144 != v146 )
                            free(v144);
                          return v9;
                        }
LABEL_137:
                        v9 = 0;
                        goto LABEL_89;
                      }
                    }
                  }
                }
              }
            }
            v136 = v139;
            v134 = v140;
            v68 = sub_C00A40(a2, v139, v63, v64, v65);
            v69 = *a1;
            v135 = v68;
            if ( *(_BYTE *)(*a1)[3] )
              goto LABEL_89;
            v149 = 0u;
            v154 = 0x800000000LL;
            v150 = 0;
            v151 |= 1u;
            v152 = 0;
            ptr = v155;
            v156 = 0;
            sub_C24210((__int64)&v149, v136, v134, 0);
            v70 = sub_C530A0((__int64)v69, v135 | ((unsigned __int64)v135 << 32), (__int64)&v149, v133, v130);
            if ( ptr != v155 )
              free(ptr);
            if ( !v70 )
              goto LABEL_137;
            v71 = *a1;
            if ( v139 && (v139 & 3) == 3 )
              v127 = v139 >> 3;
            v149.m128i_i32[0] = v127;
            if ( !sub_C11E40(v71 + 106, &v149) )
            {
              sub_E33C10(*a1, a2, 2405, 0);
              goto LABEL_137;
            }
          }
          v9 = v132;
          goto LABEL_89;
        }
        v98 = (unsigned __int8 **)sub_E33C10(*a1, a2, 2449, 0);
        v99 = v98;
        if ( v98 )
        {
          sub_C11320(v98, (*(_BYTE *)(v53 + 28) & 0x7Fu) - 35 <= 3);
          sub_AE9DF0(v99, v53, 0xAu);
        }
        else
        {
          return 0;
        }
        return v9;
      case 0x6C:
        v72 = (*a1)[4];
        v73 = *(_DWORD *)(v72 + 160) + 1;
        *(_DWORD *)(v72 + 160) = v73;
        sub_9B7040(v72 + 136, v73);
        if ( sub_C94CC0(a2) )
        {
          v74 = (*a1)[4];
          if ( *(_QWORD *)(v74 + 64) )
          {
            v95 = sub_C94CC0(a2);
            v9 = sub_C846B0(a1, v95);
          }
          else
          {
            *(_QWORD *)(v74 + 64) = a2;
            v75 = sub_C94CC0(a2);
            v76 = sub_C846B0(a1, v75);
            *(_QWORD *)(v74 + 64) = 0;
            v9 = v76;
          }
        }
        else
        {
          v9 = sub_C14310((__int64)*a1, a2);
        }
        --*(_DWORD *)(v72 + 144);
        return v9;
      case 0x6D:
        v77 = (*a1)[4];
        v78 = *(_DWORD *)(v77 + 160) + 1;
        *(_DWORD *)(v77 + 160) = v78;
        sub_9B7040(v77 + 136, v78);
        v79 = (*a1)[4];
        if ( *(_QWORD *)(v79 + 64) )
        {
          v93 = sub_C94C80(a2);
          v9 = sub_C846B0(a1, v93);
        }
        else
        {
          *(_QWORD *)(v79 + 64) = a2;
          v80 = sub_C94C80(a2);
          v81 = sub_C846B0(a1, v80);
          *(_QWORD *)(v79 + 64) = 0;
          v9 = v81;
        }
        --*(_DWORD *)(v77 + 144);
        return v9;
      case 0x73:
      case 0x74:
        return (unsigned int)sub_C862B0(a1, a2);
      case 0x7D:
        v84 = (_WORD *)sub_BFD550(*(_QWORD *)(a2 + 24));
        v86 = *v84 & 0x1FF;
        if ( v86 <= 0x58u || v86 > 0x5Du )
        {
          v88 = *a1;
        }
        else
        {
          v87 = (unsigned int)sub_BFBE70((__int64)v84) == 214;
          v88 = *a1;
          if ( v87 )
          {
            v9 = 0;
            if ( *((_BYTE *)v88 + 914) )
              return v9;
            v149.m128i_i64[0] = (__int64)*a1;
            v149.m128i_i8[8] = 1;
            v91 = v88[3];
            v101 = *((_DWORD *)v88 + 229);
            v102 = *(_QWORD *)(v91 + 8);
            if ( !v102 || *(_DWORD *)(v102 + 8) )
            {
              v149.m128i_i8[9] = 0;
              v149.m128i_i32[3] = v101;
            }
            else
            {
              v103 = *(unsigned __int8 *)v91;
              v149.m128i_i32[3] = *((_DWORD *)v88 + 229);
              v91 = v103 ^ 1u;
              v149.m128i_i8[9] = v91;
            }
            *((_DWORD *)v88 + 229) = 2;
LABEL_110:
            if ( (unsigned __int8)sub_C3FB70(*(_QWORD *)(a2 + 24), &v139, (__int64)*a1, v91, v85) )
            {
              if ( (_BYTE)v139 )
                v96 = *(_QWORD *)(a2 + 32);
              else
                v96 = *(_QWORD *)(a2 + 40);
              v9 = sub_C846B0(a1, v96);
              if ( (_BYTE)v9 )
                goto LABEL_116;
            }
            else if ( *((_BYTE *)*a1 + 914) && (unsigned __int8)sub_C11850((__int64)*a1) )
            {
              sub_C86410(a1, a2);
            }
            else if ( (unsigned __int8)sub_C11850((__int64)*a1) )
            {
              sub_C846B0(a1, *(_QWORD *)(a2 + 32));
              sub_C846B0(a1, *(_QWORD *)(a2 + 40));
            }
            v149.m128i_i8[8] = 0;
            v9 = 0;
LABEL_116:
            sub_C23B30(v149.m128i_i64);
            return v9;
          }
        }
        v149.m128i_i64[0] = (__int64)v88;
        v149.m128i_i8[8] = 0;
        v89 = v88[3];
        v90 = *((_DWORD *)v88 + 229);
        v91 = *(_QWORD *)(v89 + 8);
        if ( !v91 || (v91 = *(unsigned int *)(v91 + 8), (_DWORD)v91) )
        {
          v149.m128i_i8[9] = 0;
          v149.m128i_i32[3] = v90;
        }
        else
        {
          v92 = *(_BYTE *)v89;
          v149.m128i_i32[3] = v90;
          v149.m128i_i8[9] = v92 ^ 1;
        }
        goto LABEL_110;
      case 0x7E:
        return (unsigned int)sub_C86710(a1, a2);
    }
  }
}
