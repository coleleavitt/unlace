__int64 __fastcall sub_883160(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  __int64 *v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // rsi
  __int64 *v8; // rdi
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rdx
  unsigned __int8 **v18; // rax
  __m128i *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r12
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rbp
  __int64 v27; // rax
  unsigned __int32 v28; // r12d
  int v29; // ecx
  unsigned __int8 v30; // al
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 *v35; // rdx
  __int64 v36; // rax
  unsigned __int8 **v37; // rdi
  __int64 v38; // rax
  _WORD *v39; // rax
  unsigned __int64 v40; // r8
  __int64 v41; // rdi
  unsigned __int16 v42; // ax
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // ebp
  char v49; // r15
  char v50; // r13
  __int64 v51; // rax
  char v52; // dl
  int v53; // ecx
  char v54; // al
  char v55; // cl
  _BYTE *v56; // r9
  unsigned __int64 *v57; // r13
  __int64 v58; // r12
  __int64 v59; // r11
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rbp
  int v65; // esi
  __int64 v66; // r12
  __int64 v67; // rax
  __int64 v68; // r13
  char v69; // al
  int v70; // ecx
  __int64 v71; // rax
  int v72; // esi
  _QWORD *v73; // r15
  __int64 v74; // rax
  __int64 v75; // r12
  _QWORD *v76; // rax
  __int64 v77; // rsi
  int v78; // eax
  __int64 v79; // rbx
  unsigned int v80; // eax
  unsigned __int8 v81; // al
  int v82; // esi
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // r12
  __int64 v86; // rax
  __int64 v87; // rbp
  __int64 v88; // rdx
  __int64 *v89; // rsi
  __int64 v90; // rax
  unsigned __int8 v91; // al
  __int64 v92; // rdx
  __int64 v93; // r12
  __int64 v94; // rdx
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // rcx
  __int64 v101; // rbx
  unsigned int v102; // edx
  char v103; // dl
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rbp
  unsigned int v107; // eax
  unsigned __int8 v108; // [rsp+0h] [rbp-118h]
  unsigned __int64 v109; // [rsp+0h] [rbp-118h]
  __int64 v110; // [rsp+0h] [rbp-118h]
  char v111; // [rsp+0h] [rbp-118h]
  unsigned __int8 v112; // [rsp+0h] [rbp-118h]
  unsigned __int8 v113; // [rsp+0h] [rbp-118h]
  unsigned __int8 v114; // [rsp+0h] [rbp-118h]
  unsigned __int8 v115; // [rsp+0h] [rbp-118h]
  unsigned __int64 v116; // [rsp+8h] [rbp-110h]
  __int64 v117; // [rsp+8h] [rbp-110h]
  unsigned __int8 v118; // [rsp+8h] [rbp-110h]
  __int64 v119; // [rsp+10h] [rbp-108h]
  __int64 v120; // [rsp+10h] [rbp-108h]
  unsigned int v121; // [rsp+1Ch] [rbp-FCh]
  __int64 v122; // [rsp+20h] [rbp-F8h] BYREF
  int v123; // [rsp+28h] [rbp-F0h]
  __m128i v124; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v125[2]; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v126; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+60h] [rbp-B8h]
  __int64 v128; // [rsp+68h] [rbp-B0h]
  int v129; // [rsp+70h] [rbp-A8h]
  char v130; // [rsp+74h] [rbp-A4h]
  __int64 v131; // [rsp+78h] [rbp-A0h] BYREF
  void *ptr; // [rsp+80h] [rbp-98h]
  __int64 v133; // [rsp+88h] [rbp-90h]
  __int64 v134[8]; // [rsp+90h] [rbp-88h] BYREF
  char v135; // [rsp+D1h] [rbp-47h]

  v2 = a1;
  v3 = a2;
  while ( 2 )
  {
    while ( 1 )
    {
      v4 = *(_WORD *)v3 & 0x1FF;
      if ( v4 > 0x76u )
        break;
      if ( v4 != 4 )
        goto LABEL_8;
      if ( *(_BYTE *)(v3 + 2) > 0x6Fu )
        return sub_8BA3A0(v2, v3);
      switch ( *(_BYTE *)(v3 + 2) >> 3 )
      {
        case 0:
        case 1:
          return sub_86CA80(v2, v3);
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 9:
        case 13:
          return sub_8BA3A0(v2, v3);
        case 6:
        case 12:
LABEL_15:
          v3 = *(_QWORD *)(v3 + 16);
          continue;
        case 10:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) == 14 )
          {
            LODWORD(v127) = 1;
            v126.m128i_i64[1] = 0;
            BYTE4(v127) = 0;
            v129 = 1;
            v128 = 0;
            v130 = 0;
            v87 = sub_2575D40();
            if ( v87 == sub_2575D20(a1, a2, v88) )
            {
              sub_257CDE0(&v131, v87);
              sub_257CDE0(v134, v87);
            }
            else
            {
              sub_2579610(&v131);
              sub_2579610(v134);
            }
            v89 = *(__int64 **)(v3 + 16);
            v90 = *v2;
            v124.m128i_i64[1] = (__int64)&v126;
            v124.m128i_i64[0] = v90;
            v91 = sub_8811F0(&v124, (__int64)v89);
            if ( v91 )
            {
              v89 = &v131;
              v114 = v91;
              sub_834130((__int64 *)v2[1], &v131, v92);
              v91 = v114;
            }
LABEL_119:
            v112 = v91;
            sub_8336C0((__int64)&v126, (__int64)v89, v92);
            return v112;
          }
          v3 = *(_QWORD *)(v3 + 16);
          break;
        case 11:
          v10 = *(_QWORD *)(v3 + 16);
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 14 )
          {
            sub_857160(*v2, v10);
            v11 = *(_QWORD *)(v3 + 8);
            v12 = *(_QWORD **)(*v2 + 16);
            v13 = sub_6BF060(v12, v11);
            v15 = sub_2575D20(v12, v11, v14);
            v16 = v15;
            if ( v13 == v15 )
              sub_257CE40(&v126, v15, 0);
            else
              sub_2579AA0(&v126, v13, 0);
            if ( v126.m128i_i64[0] == v16 )
              sub_257D590(&v126, 0);
            else
              sub_25795C0(&v126, 0);
LABEL_24:
            sub_834250((__int64 *)v2[1], v126.m128i_i64, v17);
            sub_5FF3B0(v126.m128i_i64);
            return 1;
          }
          LODWORD(v127) = 1;
          v126.m128i_i64[1] = 0;
          BYTE4(v127) = 0;
          v129 = 1;
          v128 = 0;
          v130 = 0;
          v93 = sub_2575D40();
          if ( v93 == sub_2575D20(a1, v10, v94) )
          {
            sub_257CDE0(&v131, v93);
            sub_257CDE0(v134, v93);
          }
          else
          {
            sub_2579610(&v131);
            sub_2579610(v134);
          }
          v89 = *(__int64 **)(v3 + 16);
          v95 = *v2;
          v124.m128i_i64[1] = (__int64)&v126;
          v124.m128i_i64[0] = v95;
          v91 = sub_8811F0(&v124, (__int64)v89);
          if ( v91 )
          {
            v89 = v134;
            v113 = v91;
            sub_834130((__int64 *)v2[1], v134, v92);
            v91 = v113;
          }
          goto LABEL_119;
      }
    }
    if ( v4 <= 0x78u )
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
          return sub_89EBC0(v8, v7);
        default:
          a2 = v6;
          a1 = v5;
          break;
      }
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
        return sub_886050(v2, v3);
      case 6:
      case 0x63:
        goto LABEL_15;
      case 8:
        v68 = *v2;
        v69 = *(_BYTE *)(*v2 + 963);
        *(_BYTE *)(*v2 + 963) = 0;
        v111 = v69;
        result = 1;
        v117 = *(_QWORD *)(v3 + 16);
        if ( !*(_DWORD *)(v117 + 4) )
          goto LABEL_111;
        v70 = *(_DWORD *)(*v2 + 320);
        v119 = *v2;
        v122 = v119;
        v71 = *(_QWORD *)(v119 + 32);
        v121 = v70;
        v123 = v70;
        v72 = *(_DWORD *)(v71 + 208) + 1;
        *(_DWORD *)(v71 + 208) = v72;
        sub_847EC0(v71 + 184, v72);
        v73 = (_QWORD *)(v117 + 24);
        v74 = 8LL * *(unsigned int *)(v117 + 4);
        v75 = v117 + v74 + 16;
        if ( v74 == 8 )
        {
          v73 = (_QWORD *)(v117 + 16);
LABEL_107:
          if ( ((*(_WORD *)*v73 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_883160(v2, *v73) )
            {
              v81 = sub_8931F0(v119, 1, v121);
              v123 = -1;
LABEL_110:
              v118 = v81;
              sub_893480(&v122);
              result = v118;
LABEL_111:
              *(_BYTE *)(v68 + 963) = v111;
              return result;
            }
          }
          else
          {
            v79 = *v2;
            v80 = sub_AC6DA0(*v73);
            sub_A2E1A0(v79, v80, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v126.m128i_i8[4] &= ~1u;
            v77 = *v2;
            v126.m128i_i32[0] = 0;
            v124.m128i_i64[1] = 0;
            v124.m128i_i64[0] = (__int64)&v126;
            v78 = sub_88E980(&v124, v77, *(v73 - 1), 0);
            if ( v78 != 2 )
              break;
            if ( v126.m128i_i32[0] <= 1u )
            {
              v76 = v73 + 1;
              if ( (_QWORD *)v75 == v73 + 1 )
                goto LABEL_107;
            }
            else
            {
              sub_69F740((__int64)&v126);
              v76 = v73 + 1;
              if ( v73 + 1 == (_QWORD *)v75 )
                goto LABEL_107;
            }
            v73 = v76;
          }
          if ( v78 )
          {
            v106 = *v2;
            v107 = sub_AC6DA0(*(v73 - 1));
            sub_A2E1A0(v106, v107, 2283, 0);
          }
          if ( v126.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v126);
        }
        v81 = 0;
        goto LABEL_110;
      case 0xF:
        v57 = (unsigned __int64 *)(v3 + 24);
        v110 = v3 + 8LL * *(unsigned __int16 *)(v3 + 4) + 16;
        if ( v3 + 24 == v110 )
          return 1;
        while ( 2 )
        {
          v62 = *v57;
          v63 = *(unsigned __int16 *)(v3 + 6);
          if ( (*(_WORD *)*v57 & 0x1FF) != 0x1B )
          {
            if ( (_WORD)v63 && v62 == *(_QWORD *)(v3 + 8 * v63 + 16) )
            {
              if ( !(unsigned __int8)sub_883160(v2, *v57) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(*v2, *v57) )
            {
              return 0;
            }
LABEL_87:
            if ( (unsigned __int64 *)v110 == ++v57 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v63 || v62 != *(_QWORD *)(v3 + 8 * v63 + 16) )
        {
          if ( (*(_BYTE *)(v62 + 2) & 8) == 0 )
          {
            v58 = *v2;
            v126 = 0u;
            LOBYTE(v128) = v128 | 1;
            v127 = 0;
            v131 = 0;
            ptr = v134;
            v133 = 0x800000000LL;
            v135 = 0;
            v59 = *(_QWORD *)(v58 + 32);
            v116 = *(_QWORD *)(v62 + 16);
            if ( (*(_BYTE *)(v62 + 1) & 6) != 0 )
            {
              v120 = *(_QWORD *)(v58 + 32);
              v96 = sub_6C4DA0(*(_QWORD *)(v58 + 16), *(_QWORD *)(v62 + 8), 1u);
              v59 = v120;
              v60 = v96;
            }
            else
            {
              v60 = *(_QWORD *)(v62 + 8);
            }
            v61 = sub_823B90(v59, v62, v60, &v126);
            if ( !(unsigned __int8)sub_856400(v61, v58, v116) )
            {
              if ( ptr != v134 )
                free(ptr);
              return 0;
            }
            if ( ptr != v134 )
              free(ptr);
          }
          goto LABEL_87;
        }
LABEL_12:
        sub_826A70(*v2, v3, 110);
        return 0;
      case 0x10:
        if ( *(char *)(v3 + 2) < 0 )
          goto LABEL_15;
        v3 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_32;
      case 0x13:
        a1 = (__int64 *)v3;
        v3 = sub_83DE90(v3);
        continue;
      case 0x18:
        v31 = *v2;
        a2 = v3;
        a1 = *(__int64 **)(*v2 + 32);
        v32 = sub_821340((__int64)a1, v3);
        if ( !v32 || !*(_DWORD *)v32 )
        {
          v34 = *(_QWORD *)(v3 + 16);
          if ( !v34 || v3 == v34 )
          {
            sub_826A70(v31, v3, 110);
            return 0;
          }
          v3 = *(_QWORD *)(v3 + 16);
          continue;
        }
        sub_834130((__int64 *)v2[1], (__int64 *)(v32 + 8), v33);
        return 1;
      case 0x2C:
        return sub_85AD60(v2, v3);
      case 0x33:
        v35 = *(__int64 **)(v3 + 16);
        v36 = (__int64)(*(_QWORD *)(v3 + 24) - (_QWORD)v35) >> 3;
        if ( !(_DWORD)v36 )
          goto LABEL_30;
        if ( (_DWORD)v36 != 1 )
          goto LABEL_12;
        v3 = *v35;
        continue;
      case 0x34:
      case 0x62:
      case 0x66:
LABEL_30:
        sub_834AF0(v2, *(_QWORD *)(v3 + 8));
        return 1;
      case 0x37:
        v3 = *(_QWORD *)(v3
                       + 8LL
                       * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v26 = *v2;
        v27 = *(_QWORD *)(*v2 + 32);
        v28 = *(_DWORD *)(*v2 + 320);
        v126.m128i_i64[0] = *v2;
        v29 = *(_DWORD *)(v27 + 208);
        v126.m128i_i32[2] = v28;
        *(_DWORD *)(v27 + 208) = v29 + 1;
        sub_847EC0(v27 + 184, v29 + 1);
        v30 = sub_883160(v2, *(_QWORD *)(v3 + 16));
        if ( v30 )
        {
          v30 = sub_8941C0(v26, 1, v28);
          v126.m128i_i32[2] = -1;
        }
        v108 = v30;
        sub_894600(&v126);
        return v108;
      case 0x3B:
        if ( (*(_WORD *)(v3 + 2) & 0x1E0) == 0 )
          goto LABEL_15;
        sub_805700((__int64)&v126, v3);
        sub_834130((__int64 *)v2[1], &v126.m128i_i64[1], v25);
        if ( v126.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v126);
        return 1;
      case 0x3C:
        v19 = (__m128i *)(*(_BYTE *)(v3 + 2) >> 3);
        v20 = sub_2575940(v19);
        v21 = *(_QWORD *)(v3 + 16);
        v22 = v20;
        v23 = *(unsigned int *)(v3 + 24);
        v24 = (unsigned __int64)(v23 + 63) >> 6;
        if ( (unsigned __int64)(v23 + 63) > 0x7F )
        {
          v19 = &v124;
          sub_2585D40(&v124, v23, v24, v21);
        }
        else
        {
          v124.m128i_i32[2] = *(_DWORD *)(v3 + 24);
          v124.m128i_i64[0] = v21;
        }
        if ( v22 == sub_2575D20(v19, v23, v24) )
          sub_2581430(&v126, v22, &v124);
        else
          sub_2583C60(&v126, v22, &v124);
        if ( v124.m128i_i32[2] > 0x40u && v124.m128i_i64[0] )
          operator delete[]((void *)v124.m128i_i64[0]);
        goto LABEL_24;
      case 0x3E:
        return sub_85B3A0((__int64)v2, v3);
      case 0x40:
        v38 = *(unsigned int *)(v3 + 48);
        a1 = v125;
        v125[0] = v3;
        v125[1] = v38;
        v3 = *(_QWORD *)sub_849A00(v125);
        continue;
      case 0x4A:
        goto LABEL_33;
      case 0x4B:
        if ( *(_BYTE *)(v3 + 48) )
LABEL_32:
          v3 = *(_QWORD *)(v3 + 24);
        else
LABEL_33:
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
        return sub_882A10(v2, v3);
      case 0x50:
        v18 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
        if ( v18 )
          sub_823450(v18, 0);
        return sub_882A10(v2, v3);
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*v2 + 16) + 2160LL) + 1LL) >= 0 )
        {
          v37 = (unsigned __int8 **)sub_A2E240(*v2, v3, 2215, 0);
          if ( v37 )
            sub_823450(v37, 1);
        }
        return sub_882A10(v2, v3);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8A6220(v2, v3);
      case 0x6D:
        v64 = *(_QWORD *)(*v2 + 32);
        v82 = *(_DWORD *)(v64 + 208) + 1;
        *(_DWORD *)(v64 + 208) = v82;
        sub_847EC0(v64 + 184, v82);
        v83 = sub_8C4900(v3);
        v84 = *v2;
        if ( v83 )
        {
          v85 = *(_QWORD *)(v84 + 32);
          if ( *(_QWORD *)(v85 + 64) )
          {
            v86 = sub_8C4900(v3);
            result = sub_883160(v2, v86);
          }
          else
          {
            *(_QWORD *)(v85 + 64) = v3;
            v98 = sub_8C4900(v3);
            result = sub_883160(v2, v98);
            *(_QWORD *)(v85 + 64) = 0;
          }
        }
        else
        {
          sub_826A70(v84, v3, 110);
          result = 0;
        }
        goto LABEL_98;
      case 0x6E:
        v64 = *(_QWORD *)(*v2 + 32);
        v65 = *(_DWORD *)(v64 + 208) + 1;
        *(_DWORD *)(v64 + 208) = v65;
        sub_847EC0(v64 + 184, v65);
        v66 = *(_QWORD *)(*v2 + 32);
        if ( *(_QWORD *)(v66 + 64) )
        {
          v67 = sub_8C4680(v3);
          result = sub_883160(v2, v67);
        }
        else
        {
          *(_QWORD *)(v66 + 64) = v3;
          v97 = sub_8C4680(v3);
          result = sub_883160(v2, v97);
          *(_QWORD *)(v66 + 64) = 0;
        }
LABEL_98:
        --*(_DWORD *)(v64 + 192);
        return result;
      case 0x74:
      case 0x75:
        v7 = v3;
        v8 = v2;
        return sub_89EBC0(v8, v7);
      case 0x7E:
        v109 = *(_QWORD *)(v3 + 24);
        v39 = (_WORD *)sub_8116F0(v109);
        v40 = v109;
        v41 = (__int64)v39;
        v42 = *v39 & 0x1FF;
        if ( v42 > 0x59u && v42 <= 0x5Eu )
        {
          v43 = sub_80FBD0(v41);
          v44 = *v2;
          v45 = *v2;
          if ( v43 == 212 )
          {
            v50 = *(_BYTE *)(v44 + 962);
            result = 0;
            if ( v50 )
              return result;
            v104 = *(_QWORD *)(v44 + 24);
            v48 = *(_DWORD *)(v44 + 964);
            v105 = *(_QWORD *)(v104 + 8);
            if ( v105 && !*(_DWORD *)(v105 + 8) )
              v50 = *(_BYTE *)v104 ^ 1;
            *(_DWORD *)(v44 + 964) = 2;
            v49 = 1;
            v44 = *v2;
            v40 = *(_QWORD *)(v3 + 24);
          }
          else
          {
            v46 = *(_QWORD *)(v44 + 24);
            v47 = *(_QWORD *)(v46 + 8);
            if ( v47 )
            {
              v40 = *(_QWORD *)(v3 + 24);
              goto LABEL_65;
            }
            v48 = *(_DWORD *)(v44 + 964);
            v40 = *(_QWORD *)(v3 + 24);
            v49 = 0;
            v50 = 0;
          }
LABEL_67:
          if ( (unsigned __int8)sub_8571E0(v40, &v126, v44) )
          {
            if ( v126.m128i_i8[0] )
              v99 = *(_QWORD *)(v3 + 32);
            else
              v99 = *(_QWORD *)(v3 + 40);
            result = sub_883160(v2, v99);
            if ( (_BYTE)result )
            {
              if ( v49 )
              {
                if ( v50 )
                {
                  v100 = *(_QWORD *)(v45 + 24);
                  v101 = *(_QWORD *)(v100 + 8);
                  v102 = *(_DWORD *)(v101 + 8);
                  if ( v102 )
                  {
                    if ( !*(_BYTE *)v100 )
                    {
                      v115 = result;
                      sub_8481D0(*(_QWORD *)v101, *(_QWORD *)v101 + 32LL * v102);
                      result = v115;
                      *(_DWORD *)(v101 + 8) = 0;
                    }
                  }
                }
              }
              goto LABEL_73;
            }
          }
          else
          {
            v51 = *v2;
            v52 = *(_BYTE *)(*v2 + 962);
            v53 = *(_DWORD *)(*v2 + 48);
            if ( !v52 )
            {
              if ( !v53 )
                goto LABEL_72;
              goto LABEL_155;
            }
            if ( v53 )
            {
              v54 = sub_820420(1u, *(unsigned __int8 *)(v51 + 963));
              *v56 = v54 | v55;
              if ( v54 )
              {
                sub_885B10(v2, v3);
                goto LABEL_72;
              }
              v51 = *v2;
              if ( !*(_DWORD *)(*v2 + 48) )
                goto LABEL_72;
              v52 = *(_BYTE *)(v51 + 962);
LABEL_155:
              v103 = *(_BYTE *)(v51 + 963) | v52;
              **(_BYTE **)(v51 + 24) |= v103;
              if ( v103 )
              {
                sub_883160(v2, *(_QWORD *)(v3 + 32));
                sub_883160(v2, *(_QWORD *)(v3 + 40));
              }
            }
          }
LABEL_72:
          result = 0;
LABEL_73:
          *(_DWORD *)(v45 + 964) = v48;
          return result;
        }
        v44 = *v2;
        v46 = *(_QWORD *)(*v2 + 24);
        v45 = *v2;
        v47 = *(_QWORD *)(v46 + 8);
        if ( !v47 )
        {
LABEL_132:
          v48 = *(_DWORD *)(v44 + 964);
          v49 = 0;
          v50 = 0;
          goto LABEL_67;
        }
LABEL_65:
        if ( !*(_DWORD *)(v47 + 8) )
        {
          v48 = *(_DWORD *)(v44 + 964);
          v49 = 0;
          v50 = *(_BYTE *)v46 ^ 1;
          goto LABEL_67;
        }
        goto LABEL_132;
    }
  }
}

