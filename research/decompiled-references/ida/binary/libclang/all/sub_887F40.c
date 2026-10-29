__int64 __fastcall sub_887F40(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  unsigned __int16 v6; // ax
  unsigned int v7; // r15d
  unsigned __int8 **v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // r13
  const __m128i *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int16 v25; // ax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  unsigned __int8 **v33; // rdi
  bool v34; // al
  _WORD *v35; // rdi
  unsigned __int16 v36; // ax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  char v42; // cl
  int v43; // edx
  char v44; // al
  char v45; // cl
  _BYTE *v46; // r8
  __int64 v47; // rbp
  int v48; // esi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rbp
  __int64 v55; // rdx
  char *v56; // rax
  __int64 v57; // r12
  unsigned int v58; // eax
  __int64 v59; // rbp
  char v60; // al
  __int64 v61; // rdx
  int v62; // ecx
  int v63; // eax
  _QWORD *v64; // r15
  __int64 v65; // rdx
  __int64 v66; // r13
  _QWORD *v67; // rax
  __int64 v68; // rsi
  int v69; // eax
  __int64 v70; // rbx
  unsigned int v71; // eax
  __int64 v72; // rbp
  __int64 v73; // rax
  unsigned __int32 v74; // r12d
  int v75; // ecx
  int v76; // esi
  __int64 v77; // rax
  __int64 v78; // rbp
  unsigned int *v79; // rax
  __int64 v80; // rax
  unsigned __int64 *v81; // r13
  __int64 v82; // r12
  __int64 v83; // r11
  __int64 v84; // rdx
  __int64 v85; // rax
  char v86; // al
  _BYTE *v87; // rdi
  unsigned __int64 v88; // r15
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  unsigned int v92; // eax
  __int64 v93; // rsi
  unsigned int v94; // eax
  __int32 v95; // eax
  char v96; // dl
  __int64 v97; // rbx
  unsigned int v98; // eax
  char *v99; // rcx
  __int32 v100; // eax
  __int64 v101; // rsi
  char v102; // cl
  __int64 v103; // [rsp+8h] [rbp-120h]
  char v104; // [rsp+8h] [rbp-120h]
  __int64 v105; // [rsp+8h] [rbp-120h]
  __int64 v106; // [rsp+10h] [rbp-118h]
  __int64 v107; // [rsp+10h] [rbp-118h]
  unsigned __int64 v108; // [rsp+10h] [rbp-118h]
  __int64 v109; // [rsp+18h] [rbp-110h]
  __int64 v110; // [rsp+18h] [rbp-110h]
  __int64 v111; // [rsp+18h] [rbp-110h]
  __int64 v112; // [rsp+20h] [rbp-108h]
  unsigned int v113; // [rsp+20h] [rbp-108h]
  const __m128i *v114; // [rsp+20h] [rbp-108h]
  __int64 v115; // [rsp+20h] [rbp-108h]
  __int64 v116; // [rsp+28h] [rbp-100h]
  __int64 v117; // [rsp+30h] [rbp-F8h] BYREF
  int v118; // [rsp+38h] [rbp-F0h]
  __int64 *v119[2]; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v120[2]; // [rsp+50h] [rbp-D8h] BYREF
  __m128i v121; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v122; // [rsp+70h] [rbp-B8h]
  __int32 v123; // [rsp+78h] [rbp-B0h]
  __int64 v124; // [rsp+80h] [rbp-A8h]
  __int64 v125; // [rsp+88h] [rbp-A0h]
  void *ptr; // [rsp+90h] [rbp-98h] BYREF
  __int64 v127; // [rsp+98h] [rbp-90h]
  _BYTE v128[64]; // [rsp+A0h] [rbp-88h] BYREF
  __int16 v129; // [rsp+E0h] [rbp-48h]

  while ( 2 )
  {
    while ( 2 )
    {
      v6 = *(_WORD *)a2 & 0x1FF;
      if ( v6 <= 0x76u )
      {
        if ( v6 == 4 )
        {
          a3 = (__int64 *)*(unsigned __int8 *)(a2 + 2);
          if ( (unsigned __int8)a3 <= 0x6Fu )
          {
            switch ( *(_BYTE *)(a2 + 2) >> 3 )
            {
              case 0:
              case 1:
                return sub_86BEB0(a1, a2);
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
LABEL_12:
                a2 = *(_QWORD *)(a2 + 16);
                continue;
            }
          }
LABEL_7:
          sub_827570(*a1, a2, 110);
          return 0;
        }
      }
      else if ( v6 <= 0x78u )
      {
        a3 = (__int64 *)((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
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
            return sub_89F0B0(a1, a2, a3, a4);
          case 9:
            v10 = *a1;
            v117 = a2;
            v7 = sub_835900(v10, a2, nullptr);
            if ( (_BYTE)v7 )
            {
              v13 = *a1;
              v119[0] = a1;
              v121.m128i_i64[0] = (__int64)&v117;
              v121.m128i_i64[1] = (__int64)a1;
              return (unsigned int)sub_886380(v13, v117, v119, &v121, v11, v12);
            }
            return v7;
          default:
            a3 = (__int64 *)((*(_WORD *)(a2 + 2) >> 3) & 0x3F);
            goto LABEL_10;
        }
      }
      break;
    }
LABEL_10:
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
      case 0x64:
      case 0x67:
      case 0x68:
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
      case 0x7B:
      case 0x7C:
      case 0x7D:
        goto LABEL_7;
      case 1:
      case 0x7F:
        return sub_889340(a1, a2);
      case 6:
      case 0x63:
        goto LABEL_12;
      case 8:
        v59 = *a1;
        v7 = 1;
        v60 = *(_BYTE *)(*a1 + 963);
        *(_BYTE *)(*a1 + 963) = 0;
        v104 = v60;
        v107 = *(_QWORD *)(a2 + 16);
        if ( !*(_DWORD *)(v107 + 4) )
          goto LABEL_104;
        v61 = *(_QWORD *)(*a1 + 32);
        v62 = *(_DWORD *)(*a1 + 320);
        v110 = *a1;
        v117 = *a1;
        v63 = *(_DWORD *)(v61 + 208);
        v113 = v62;
        v118 = v62;
        *(_DWORD *)(v61 + 208) = v63 + 1;
        sub_847EC0(v61 + 184, v63 + 1);
        v64 = (_QWORD *)(v107 + 24);
        v65 = 8LL * *(unsigned int *)(v107 + 4);
        v66 = v107 + v65 + 16;
        if ( v65 == 8 )
        {
          v64 = (_QWORD *)(v107 + 16);
LABEL_100:
          if ( ((*(_WORD *)*v64 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_887F40(a1, *v64) )
            {
              v118 = -1;
              v7 = sub_8931F0(v110, 1, v113);
LABEL_103:
              sub_893480(&v117);
LABEL_104:
              *(_BYTE *)(v59 + 963) = v104;
              return v7;
            }
          }
          else
          {
            v70 = *a1;
            v71 = sub_AC6DA0(*v64);
            sub_A2E1A0(v70, v71, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v121.m128i_i8[4] &= ~1u;
            v68 = *a1;
            v121.m128i_i32[0] = 0;
            v119[1] = nullptr;
            v119[0] = (__int64 *)&v121;
            v69 = sub_88E980(v119, v68, *(v64 - 1), 0);
            if ( v69 != 2 )
              break;
            if ( v121.m128i_i32[0] <= 1u )
            {
              v67 = v64 + 1;
              if ( (_QWORD *)v66 == v64 + 1 )
                goto LABEL_100;
            }
            else
            {
              sub_69F740((__int64)&v121);
              v67 = v64 + 1;
              if ( (_QWORD *)v66 == v64 + 1 )
                goto LABEL_100;
            }
            v64 = v67;
          }
          if ( v69 )
          {
            v97 = *a1;
            v98 = sub_AC6DA0(*(v64 - 1));
            sub_A2E1A0(v97, v98, 2283, 0);
          }
          if ( v121.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v121);
        }
        v7 = 0;
        goto LABEL_103;
      case 0xF:
        v81 = (unsigned __int64 *)(a2 + 24);
        v105 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 16;
        if ( a2 + 24 == v105 )
          return 1;
        while ( 2 )
        {
          v88 = *v81;
          v89 = *(unsigned __int16 *)(a2 + 6);
          if ( (*(_WORD *)*v81 & 0x1FF) != 0x1B )
          {
            if ( (_WORD)v89 && v88 == *(_QWORD *)(a2 + 8 * v89 + 16) )
            {
              if ( !(unsigned __int8)sub_887F40(a1, *v81) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_857160(*a1, *v81) )
            {
              return 0;
            }
LABEL_134:
            if ( (unsigned __int64 *)v105 == ++v81 )
              return 1;
            continue;
          }
          break;
        }
        if ( !(_WORD)v89 || v88 != *(_QWORD *)(a2 + 8 * v89 + 16) )
        {
          if ( (*(_BYTE *)(v88 + 2) & 8) == 0 )
          {
            v82 = *a1;
            v121 = 0u;
            LOBYTE(v123) = v123 | 1;
            v122 = 0;
            v125 = 0;
            ptr = v128;
            v127 = 0x800000000LL;
            HIBYTE(v129) = 0;
            v83 = *(_QWORD *)(v82 + 32);
            v108 = *(_QWORD *)(v88 + 16);
            if ( (*(_BYTE *)(v88 + 1) & 6) != 0 )
            {
              v111 = *(_QWORD *)(v82 + 32);
              v90 = sub_6C4DA0(*(_QWORD *)(v82 + 16), *(_QWORD *)(v88 + 8), 1u);
              v83 = v111;
              v84 = v90;
            }
            else
            {
              v84 = *(_QWORD *)(v88 + 8);
            }
            v85 = sub_823B90(v83, v88, v84, &v121);
            v86 = sub_856400(v85, v82, v108);
            v87 = ptr;
            if ( !v86 )
            {
LABEL_145:
              if ( v87 != v128 )
                free(v87);
              return 0;
            }
            if ( ptr != v128 )
              free(ptr);
          }
          goto LABEL_134;
        }
        goto LABEL_7;
      case 0x10:
        if ( *(char *)(a2 + 2) < 0 )
          goto LABEL_12;
        a2 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_22;
      case 0x13:
        a2 = sub_83DE90(a2);
        continue;
      case 0x18:
        v78 = *a1;
        v79 = (unsigned int *)sub_821340(*(_QWORD *)(*a1 + 32), a2);
        if ( !v79 || (a4 = *v79, !(_DWORD)a4) )
        {
          v80 = *(_QWORD *)(a2 + 16);
          if ( !v80 || a2 == v80 )
          {
            sub_827570(v78, a2, 110);
            return 0;
          }
          a2 = *(_QWORD *)(a2 + 16);
          continue;
        }
        sub_6A63E0(a1[2], (__int64)v79);
        return 1;
      case 0x2C:
        return sub_85A350(a1, a2);
      case 0x31:
        v14 = sub_8C58C0(a2);
        v15 = v14;
        if ( *(char *)(v14 + 28) < 0 )
          return 0;
        v16 = sub_7868A0(v14);
        v17 = 0;
        v18 = v16;
        if ( v16 )
        {
          while ( 1 )
          {
            v19 = *(_QWORD *)(v18 + 8);
            v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v19 <= 7 )
              break;
            if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 47 <= 2 )
              ++v17;
          }
          ++v17;
        }
        v121.m128i_i8[4] &= ~1u;
        v121.m128i_i32[0] = 0;
        sub_69F640((__int64)&v121.m128i_i64[1], 0, v17);
        v20 = a1[2];
        v121.m128i_i32[0] = 10;
        sub_6A01B0(v20, (__int64)&v121);
        if ( v121.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v121);
        v103 = a2 + 32;
        v109 = sub_AB4240(*(_QWORD *)(*a1 + 16), v15);
        v21 = sub_7868A0(v15);
        if ( !v21 )
          return 1;
        v7 = 1;
LABEL_37:
        v103 += 8;
        v106 = *(_QWORD *)(v103 - 8);
        if ( !v106 )
          goto LABEL_7;
        v22 = (const __m128i *)a1[1];
        v23 = _mm_loadu_si128(v22);
        v122 = v22[1].m128i_i64[0];
        v121 = v23;
        v123 = v22[1].m128i_i32[2];
        v124 = v22[2].m128i_i64[0];
        v24 = v22[2].m128i_i64[1];
        ptr = v128;
        v125 = v24;
        v127 = 0x800000000LL;
        if ( v22[3].m128i_i32[2] )
        {
          v114 = v22;
          sub_820650((__int64)&ptr, (__int64)v22[3].m128i_i64);
          v22 = v114;
        }
        v25 = v22[8].m128i_i16[0];
        v26 = *a1;
        LOBYTE(v25) = v25 & 3;
        v129 = v129 & 0xFC | v25;
        if ( !(unsigned __int8)sub_825EA0(v26, a2, (__int64)&v121, v21, v109) )
          goto LABEL_144;
        v27 = a1[2];
        v28 = v21;
        if ( *(char *)(v21 + 29) < 0 )
        {
          v112 = a1[2];
          v28 = sub_77A0C0(v21);
          v27 = v112;
        }
        if ( *(_DWORD *)(v28 + 68) <= 0xFu )
        {
          v116 = v27;
          v115 = v28;
          sub_78B660(v28);
          v27 = v116;
          v28 = v115;
        }
        if ( (unsigned __int8)sub_88A010(
                                *(_QWORD *)(v27 + 8)
                              + 56LL * (unsigned int)((*(_DWORD *)(v28 + 68) >> 4) + *(_DWORD *)(v27 + 16) - 1),
                                *a1,
                                &v121,
                                v106,
                                0) )
          goto LABEL_50;
        v29 = *a1;
        if ( !*(_DWORD *)(*a1 + 48) || !*(_BYTE *)(v29 + 962) && !*(_BYTE *)(v29 + 963) )
        {
LABEL_144:
          v87 = ptr;
          goto LABEL_145;
        }
        v7 = 0;
LABEL_50:
        if ( ptr != v128 )
          free(ptr);
        while ( 1 )
        {
          v30 = *(_QWORD *)(v21 + 8);
          v21 = v30 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v30 <= 7 )
            return v7;
          if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 47 <= 2 )
            goto LABEL_37;
        }
      case 0x33:
        v34 = sub_80E660(a2);
        a3 = *(__int64 **)(a2 + 16);
        if ( !v34 )
        {
          v53 = (unsigned int)((__int64)(*(_QWORD *)(a2 + 24) - (_QWORD)a3) >> 3);
          return sub_88B9C0(a1, a2, a3, v53);
        }
        a2 = *a3;
        continue;
      case 0x34:
      case 0x62:
      case 0x66:
        return sub_88DE20(a1, a2, *(_QWORD *)(a2 + 8));
      case 0x37:
        a3 = (__int64 *)((*(_DWORD *)(a2 + 16) >> 15) & 0x7FFF);
        a2 = *(_QWORD *)(a2 + 8LL * ((unsigned int)a3 + ((*(_BYTE *)(a2 + 19) & 0x40) != 0)) + 32);
        continue;
      case 0x3A:
        v72 = *a1;
        v73 = *(_QWORD *)(*a1 + 32);
        v74 = *(_DWORD *)(*a1 + 320);
        v121.m128i_i64[0] = *a1;
        v75 = *(_DWORD *)(v73 + 208);
        v121.m128i_i32[2] = v74;
        *(_DWORD *)(v73 + 208) = v75 + 1;
        sub_847EC0(v73 + 184, v75 + 1);
        v7 = sub_887F40(a1, *(_QWORD *)(a2 + 16));
        if ( (_BYTE)v7 )
        {
          v94 = sub_8941C0(v72, 1, v74);
          v121.m128i_i32[2] = -1;
          v7 = v94;
        }
        sub_894600(&v121);
        return v7;
      case 0x3B:
        if ( (*(_WORD *)(a2 + 2) & 0x1E0) == 0 )
          goto LABEL_12;
        sub_805700((__int64)&v121, a2);
        sub_6A63E0(a1[2], (__int64)&v121);
        if ( v121.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v121);
        return 1;
      case 0x3E:
        return sub_85A860(a1, a2);
      case 0x40:
        v31 = *(unsigned int *)(a2 + 48);
        v120[0] = a2;
        v120[1] = v31;
        a2 = *(_QWORD *)sub_849A00(v120);
        continue;
      case 0x4A:
        goto LABEL_24;
      case 0x4B:
        if ( *(_BYTE *)(a2 + 48) )
LABEL_22:
          a2 = *(_QWORD *)(a2 + 24);
        else
LABEL_24:
          a2 = *(_QWORD *)(a2 + 32);
        continue;
      case 0x4D:
      case 0x4E:
      case 0x4F:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
        return sub_889BE0(a1, a2);
      case 0x50:
        v9 = (unsigned __int8 **)sub_A2E240(*a1, a2, 2215, 0);
        if ( v9 )
          sub_823450(v9, 0);
        return sub_889BE0(a1, a2);
      case 0x51:
        v32 = *a1;
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 2160LL) + 1LL) >= 0 )
        {
          v33 = (unsigned __int8 **)sub_A2E240(v32, a2, 2215, 0);
          if ( v33 )
            sub_823450(v33, 1);
        }
        return sub_889BE0(a1, a2);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_89FEA0(a1, a2, a1[2], a1[1]);
      case 0x61:
        return sub_86C2E0(a1, a2);
      case 0x65:
        v53 = *(unsigned int *)(a2 + 16);
        a3 = (__int64 *)(a2 + 48);
        return sub_88B9C0(a1, a2, a3, v53);
      case 0x69:
        if ( !*(_QWORD *)(*a1 + 32) )
          return 0;
        v54 = *(_QWORD *)(a2 + 16);
        if ( *(char *)(v54 + 28) < 0 )
          return 0;
        v55 = *(_QWORD *)(sub_79A2E0(v54 + 72) + 16);
        v56 = (char *)(v55 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v55 & 4) != 0 )
          v56 = *(char **)v56;
        if ( !v56 )
          BUG();
        if ( *(v56 - 36) < 0 )
          return 0;
        v121.m128i_i64[0] = 0;
        v57 = sub_78BC30((_QWORD *)v54, (unsigned __int64 *)&v121);
        v58 = sub_8124E0(a2);
        if ( !(unsigned __int8)sub_837DA0(*a1, v58, (char *)v54, v121.m128i_i64[0], v57) )
          return 0;
        return (unsigned int)sub_896000(
                               a2,
                               a1[1],
                               *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 48LL),
                               *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 56LL),
                               v121.m128i_i32[0],
                               *a1,
                               a1[2]);
      case 0x6D:
        v47 = *(_QWORD *)(*a1 + 32);
        v48 = *(_DWORD *)(v47 + 208) + 1;
        *(_DWORD *)(v47 + 208) = v48;
        sub_847EC0(v47 + 184, v48);
        v49 = sub_8C4900(a2);
        v50 = *a1;
        if ( !v49 )
        {
          v7 = 0;
          sub_827570(v50, a2, 110);
          goto LABEL_80;
        }
        v51 = *(_QWORD *)(v50 + 32);
        if ( *(_QWORD *)(v51 + 64) )
        {
          v52 = sub_8C4900(a2);
          v7 = sub_887F40(a1, v52);
          goto LABEL_80;
        }
        *(_QWORD *)(v51 + 64) = a2;
        v91 = sub_8C4900(a2);
        goto LABEL_148;
      case 0x6E:
        v47 = *(_QWORD *)(*a1 + 32);
        v76 = *(_DWORD *)(v47 + 208) + 1;
        *(_DWORD *)(v47 + 208) = v76;
        sub_847EC0(v47 + 184, v76);
        v51 = *(_QWORD *)(*a1 + 32);
        if ( *(_QWORD *)(v51 + 64) )
        {
          v77 = sub_8C4680(a2);
          v7 = sub_887F40(a1, v77);
        }
        else
        {
          *(_QWORD *)(v51 + 64) = a2;
          v91 = sub_8C4680(a2);
LABEL_148:
          v92 = sub_887F40(a1, v91);
          *(_QWORD *)(v51 + 64) = 0;
          v7 = v92;
        }
LABEL_80:
        --*(_DWORD *)(v47 + 192);
        return v7;
      case 0x6F:
      case 0x70:
        return sub_899B30(a1, a2, *(_QWORD *)(a2 + 8));
      case 0x74:
      case 0x75:
        return sub_89F0B0(a1, a2, a3, a4);
      case 0x7E:
        v35 = (_WORD *)sub_8116F0(*(_QWORD *)(a2 + 24));
        v36 = *v35 & 0x1FF;
        if ( v36 <= 0x59u || v36 > 0x5Eu )
        {
          v38 = *a1;
        }
        else
        {
          v37 = sub_80FBD0((__int64)v35);
          v38 = *a1;
          if ( v37 == 212 )
          {
            v7 = 0;
            if ( *(_BYTE *)(v38 + 962) )
              return v7;
            v99 = *(char **)(v38 + 24);
            v121.m128i_i64[0] = *a1;
            v121.m128i_i8[8] = 1;
            v100 = *(_DWORD *)(v38 + 964);
            v101 = *((_QWORD *)v99 + 1);
            if ( !v101 || *(_DWORD *)(v101 + 8) )
            {
              v121.m128i_i8[9] = 0;
              v121.m128i_i32[3] = v100;
            }
            else
            {
              v102 = *v99;
              v121.m128i_i32[3] = *(_DWORD *)(v38 + 964);
              v121.m128i_i8[9] = v102 ^ 1;
            }
            *(_DWORD *)(v38 + 964) = 2;
            v38 = *a1;
LABEL_69:
            if ( (unsigned __int8)sub_8571E0(*(_QWORD *)(a2 + 24), v119, v38) )
            {
              if ( LOBYTE(v119[0]) )
                v93 = *(_QWORD *)(a2 + 32);
              else
                v93 = *(_QWORD *)(a2 + 40);
              v7 = sub_887F40(a1, v93);
              if ( (_BYTE)v7 )
                goto LABEL_75;
              goto LABEL_74;
            }
            v41 = *a1;
            v42 = *(_BYTE *)(*a1 + 962);
            v43 = *(_DWORD *)(*a1 + 48);
            if ( v42 )
            {
              if ( !v43 )
              {
LABEL_74:
                v121.m128i_i8[8] = 0;
                v7 = 0;
LABEL_75:
                sub_848320(v121.m128i_i64);
                return v7;
              }
              v44 = sub_820420(1u, *(unsigned __int8 *)(v41 + 963));
              *v46 = v44 | v45;
              if ( v44 )
              {
                sub_888E00(a1, a2);
                goto LABEL_74;
              }
              v41 = *a1;
              if ( !*(_DWORD *)(*a1 + 48) )
                goto LABEL_74;
              v42 = *(_BYTE *)(v41 + 962);
            }
            else if ( !v43 )
            {
              goto LABEL_74;
            }
            v96 = v42 | *(_BYTE *)(v41 + 963);
            **(_BYTE **)(v41 + 24) |= v96;
            if ( v96 )
            {
              sub_887F40(a1, *(_QWORD *)(a2 + 32));
              sub_887F40(a1, *(_QWORD *)(a2 + 40));
            }
            goto LABEL_74;
          }
        }
        v39 = *(_QWORD *)(v38 + 24);
        v121.m128i_i64[0] = v38;
        v121.m128i_i8[8] = 0;
        v40 = *(_QWORD *)(v39 + 8);
        if ( v40 )
        {
          if ( *(_DWORD *)(v40 + 8) )
            v121.m128i_i8[9] = 0;
          else
            v121.m128i_i8[9] = *(_BYTE *)v39 ^ 1;
          v121.m128i_i32[3] = *(_DWORD *)(v38 + 964);
        }
        else
        {
          v95 = *(_DWORD *)(v38 + 964);
          v121.m128i_i8[9] = 0;
          v121.m128i_i32[3] = v95;
        }
        goto LABEL_69;
    }
  }
}

