__int64 __fastcall sub_8811F0(__m128i *a1, __int64 a2)
{
  __m128i *v2; // r13
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  __m128i *v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // rsi
  __m128i *v8; // rdi
  __int64 result; // rax
  unsigned __int8 **v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int32 v19; // r12d
  int v20; // ecx
  unsigned __int8 v21; // al
  __int64 v22; // rbp
  unsigned int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r12
  int v27; // esi
  __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rbp
  char v31; // dl
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _BYTE *v35; // rax
  __int64 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdx
  int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rbp
  __int64 v45; // rax
  _WORD *v46; // rdi
  unsigned __int16 v47; // ax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  char v53; // al
  char v54; // r9
  _BYTE *v55; // r10
  char v56; // al
  __int64 v57; // rcx
  unsigned __int8 v58; // al
  unsigned __int8 **v59; // rdi
  unsigned __int64 *v60; // r15
  __int64 v61; // r12
  __int64 v62; // r11
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rbp
  __int64 v66; // rax
  __int64 v67; // r15
  char v68; // al
  int v69; // ecx
  __int64 v70; // rax
  int v71; // esi
  _QWORD *v72; // r14
  __int64 v73; // rax
  __int64 v74; // r12
  _QWORD *v75; // rax
  __int64 v76; // rsi
  int v77; // eax
  __int64 v78; // rbx
  unsigned int v79; // eax
  unsigned __int8 v80; // al
  unsigned __int64 v81; // rax
  __int64 v82; // rbx
  __int8 v83; // bp
  __int64 v84; // rbx
  void *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rsi
  char v89; // dl
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  _BYTE *v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rsi
  __int32 v96; // eax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rbp
  unsigned int v103; // eax
  __int32 v104; // eax
  unsigned __int8 v105; // [rsp+0h] [rbp-118h]
  unsigned __int8 v106; // [rsp+0h] [rbp-118h]
  __int64 v107; // [rsp+0h] [rbp-118h]
  char v108; // [rsp+0h] [rbp-118h]
  unsigned __int64 v109; // [rsp+8h] [rbp-110h]
  __int64 v110; // [rsp+8h] [rbp-110h]
  unsigned __int8 v111; // [rsp+8h] [rbp-110h]
  __int64 v112; // [rsp+10h] [rbp-108h]
  __int64 v113; // [rsp+10h] [rbp-108h]
  unsigned int v114; // [rsp+1Ch] [rbp-FCh]
  __int64 v115; // [rsp+20h] [rbp-F8h] BYREF
  int v116; // [rsp+28h] [rbp-F0h]
  _QWORD v117[2]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v118[2]; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v119; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v120; // [rsp+60h] [rbp-B8h]
  char v121; // [rsp+68h] [rbp-B0h]
  __int64 v122; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-98h]
  __int64 v124; // [rsp+88h] [rbp-90h]
  _BYTE v125[136]; // [rsp+90h] [rbp-88h] BYREF

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
                return sub_86CFE0(v2->m128i_i64, v3);
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
                return sub_881EE0(v2, v3);
              case 6:
              case 12:
LABEL_15:
                v3 = *(_QWORD *)(v3 + 16);
                continue;
            }
          }
          return sub_881EE0(v2, v3);
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
            return sub_89E6E0(v8, v7);
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
        return sub_8826E0(v2, v3);
      case 6:
      case 0x63:
        goto LABEL_15;
      case 8:
        v67 = v2->m128i_i64[0];
        v68 = *(_BYTE *)(v2->m128i_i64[0] + 963);
        *(_BYTE *)(v2->m128i_i64[0] + 963) = 0;
        v108 = v68;
        result = 1;
        v110 = *(_QWORD *)(v3 + 16);
        if ( !*(_DWORD *)(v110 + 4) )
          goto LABEL_108;
        v69 = *(_DWORD *)(v2->m128i_i64[0] + 320);
        v112 = v2->m128i_i64[0];
        v115 = v112;
        v70 = *(_QWORD *)(v112 + 32);
        v114 = v69;
        v116 = v69;
        v71 = *(_DWORD *)(v70 + 208) + 1;
        *(_DWORD *)(v70 + 208) = v71;
        sub_847EC0(v70 + 184, v71);
        v72 = (_QWORD *)(v110 + 24);
        v73 = 8LL * *(unsigned int *)(v110 + 4);
        v74 = v110 + v73 + 16;
        if ( v73 == 8 )
        {
          v72 = (_QWORD *)(v110 + 16);
LABEL_104:
          if ( ((*(_WORD *)*v72 + 509) & 0x1FFu) <= 0x7F )
          {
            if ( (unsigned __int8)sub_8811F0(v2, *v72) )
            {
              v80 = sub_8931F0(v112, 1, v114);
              v116 = -1;
LABEL_107:
              v111 = v80;
              sub_893480(&v115);
              result = v111;
LABEL_108:
              *(_BYTE *)(v67 + 963) = v108;
              return result;
            }
          }
          else
          {
            v78 = v2->m128i_i64[0];
            v79 = sub_AC6DA0(*v72);
            sub_A2E1A0(v78, v79, 2283, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v119.m128i_i8[4] &= ~1u;
            v76 = v2->m128i_i64[0];
            v119.m128i_i32[0] = 0;
            v117[1] = 0;
            v117[0] = &v119;
            v77 = sub_88E980(v117, v76, *(v72 - 1), 0);
            if ( v77 != 2 )
              break;
            if ( v119.m128i_i32[0] <= 1u )
            {
              v75 = v72 + 1;
              if ( (_QWORD *)v74 == v72 + 1 )
                goto LABEL_104;
            }
            else
            {
              sub_69F740((__int64)&v119);
              v75 = v72 + 1;
              if ( (_QWORD *)v74 == v72 + 1 )
                goto LABEL_104;
            }
            v72 = v75;
          }
          if ( v77 )
          {
            v102 = v2->m128i_i64[0];
            v103 = sub_AC6DA0(*(v72 - 1));
            sub_A2E1A0(v102, v103, 2283, 0);
          }
          if ( v119.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v119);
        }
        v80 = 0;
        goto LABEL_107;
      case 0xF:
        v60 = (unsigned __int64 *)(v3 + 24);
        v107 = v3 + 8LL * *(unsigned __int16 *)(v3 + 4) + 16;
        if ( v3 + 24 == v107 )
          return 1;
        while ( 2 )
        {
          v65 = *v60;
          v66 = *(unsigned __int16 *)(v3 + 6);
          if ( (*(_WORD *)*v60 & 0x1FF) == 0x1B )
          {
            if ( (_WORD)v66 && v65 == *(_QWORD *)(v3 + 8 * v66 + 16) )
            {
LABEL_12:
              sub_828070(v2->m128i_i64[0], v3, 110);
              return 0;
            }
            if ( (*(_BYTE *)(v65 + 2) & 8) == 0 )
            {
              v121 |= 1u;
              v119 = 0u;
              v61 = v2->m128i_i64[0];
              v120 = 0;
              v122 = 0;
              ptr = v125;
              v124 = 0x800000000LL;
              v125[65] = 0;
              v62 = *(_QWORD *)(v61 + 32);
              v109 = *(_QWORD *)(v65 + 16);
              if ( (*(_BYTE *)(v65 + 1) & 6) != 0 )
              {
                v113 = *(_QWORD *)(v61 + 32);
                v81 = sub_6C4DA0(*(_QWORD *)(v61 + 16), *(_QWORD *)(v65 + 8), 1u);
                v62 = v113;
                v63 = v81;
              }
              else
              {
                v63 = *(_QWORD *)(v65 + 8);
              }
              v64 = sub_823B90(v62, v65, v63, &v119);
              if ( !(unsigned __int8)sub_856400(v64, v61, v109) )
              {
                if ( ptr != v125 )
                  free(ptr);
                return 0;
              }
              if ( ptr != v125 )
                free(ptr);
            }
          }
          else if ( (_WORD)v66 && v65 == *(_QWORD *)(v3 + 8 * v66 + 16) )
          {
            if ( !(unsigned __int8)sub_8811F0(v2, *v60) )
              return 0;
          }
          else if ( !(unsigned __int8)sub_857160(v2->m128i_i64[0], *v60) )
          {
            return 0;
          }
          if ( (unsigned __int64 *)v107 == ++v60 )
            return 1;
          continue;
        }
      case 0x10:
        if ( *(char *)(v3 + 2) < 0 )
          goto LABEL_15;
        v3 = 0;
        continue;
      case 0x12:
      case 0x72:
        goto LABEL_24;
      case 0x13:
        a1 = (__m128i *)v3;
        v3 = sub_83DE90(v3);
        continue;
      case 0x18:
        v22 = v2->m128i_i64[0];
        a2 = v3;
        a1 = *(__m128i **)(v2->m128i_i64[0] + 32);
        v23 = (unsigned int *)sub_821340((__int64)a1, v3);
        if ( v23 )
        {
          a2 = *v23;
          if ( (_DWORD)a2 )
          {
            sub_833810(v2->m128i_i64[1], (__int64)v23, v24);
            return 1;
          }
        }
        v25 = *(_QWORD *)(v3 + 16);
        if ( !v25 || v3 == v25 )
        {
          sub_828070(v22, v3, 110);
          return 0;
        }
        v3 = *(_QWORD *)(v3 + 16);
        continue;
      case 0x2C:
        return sub_85B9B0(v2->m128i_i64, v3);
      case 0x33:
        v12 = *(__int64 **)(v3 + 16);
        v13 = (__int64)(*(_QWORD *)(v3 + 24) - (_QWORD)v12) >> 3;
        switch ( (_DWORD)v13 )
        {
          case 2:
            v89 = sub_B077B0(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL));
            v93 = (_BYTE *)v2->m128i_i64[1];
            if ( v89 )
            {
              *v93 = 0;
              v94 = **(_QWORD **)(v3 + 16);
              v119 = _mm_unpacklo_epi64(_mm_loadl_epi64(v2), (__m128i)(unsigned __int64)(v2->m128i_i64[1] + 40));
              if ( !(unsigned __int8)sub_883160(&v119, v94) )
                return 0;
              v95 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL);
              v119 = _mm_unpacklo_epi64(_mm_loadl_epi64(v2), (__m128i)(unsigned __int64)(v2->m128i_i64[1] + 64));
              return sub_883160(&v119, v95);
            }
            else
            {
              *v93 = 1;
              if ( !(unsigned __int8)sub_87D880(
                                       **(_QWORD **)(v3 + 16),
                                       v2->m128i_i64[1] + 8,
                                       v2->m128i_i64[0],
                                       v90,
                                       v91,
                                       v92) )
                return 0;
              return sub_87D880(
                       *(_QWORD *)(*(_QWORD *)(v3 + 16) + 8LL),
                       v2->m128i_i64[1] + 24,
                       v2->m128i_i64[0],
                       v97,
                       v98,
                       v99);
            }
          case 0:
LABEL_21:
            sub_8346C0(v2, *(_QWORD *)(v3 + 8));
            return 1;
          case 1:
            v3 = *v12;
            continue;
        }
        v14 = (__int64 *)sub_A2E130(v2->m128i_i64[0], v3, 110, 0);
        v15 = sub_AC7B80(v3);
        if ( v14 )
        {
          v119.m128i_i64[0] = v15;
          v119.m128i_i8[8] = 1;
          sub_839C90(v14, v119.m128i_i64);
        }
        return 0;
      case 0x34:
      case 0x62:
      case 0x66:
        goto LABEL_21;
      case 0x35:
        v30 = *(_QWORD *)(v3 + 16);
        v31 = sub_B080B0(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        v35 = (_BYTE *)v2->m128i_i64[1];
        if ( v31 )
        {
          *v35 = 0;
          v36 = v2->m128i_i64[1];
          v119 = _mm_unpacklo_epi64(_mm_loadl_epi64(v2), (__m128i)(unsigned __int64)(v36 + 64));
          if ( !(unsigned __int8)sub_883160(&v119, v30) )
            return 0;
          v38 = sub_2575D20(&v119, v30, v37);
          v39 = *(_QWORD *)(v36 + 64);
          if ( v39 == v38 )
            sub_257CDE0(&v119, v39);
          else
            sub_2579610(&v119);
          sub_834250((__int64 *)(v2->m128i_i64[1] + 40), v119.m128i_i64, v40);
          sub_5FF3B0(v119.m128i_i64);
        }
        else
        {
          *v35 = 1;
          v82 = v2->m128i_i64[1];
          if ( !(unsigned __int8)sub_87D880(v30, v82 + 24, v2->m128i_i64[0], v32, v33, v34) )
            return 0;
          v83 = *(_BYTE *)(v82 + 36);
          v119.m128i_i32[2] = *(_DWORD *)(v82 + 32);
          if ( v119.m128i_i32[2] > 0x40u )
            sub_2585A50(&v119, 0, 0);
          else
            v119.m128i_i64[0] = 0;
          v84 = v2->m128i_i64[1];
          v119.m128i_i8[12] = v83;
          if ( *(_DWORD *)(v84 + 16) > 0x40u )
          {
            v85 = *(void **)(v84 + 8);
            if ( v85 )
              operator delete[](v85);
          }
          *(_QWORD *)(v84 + 8) = v119.m128i_i64[0];
          *(_DWORD *)(v84 + 16) = v119.m128i_i32[2];
          *(_BYTE *)(v84 + 20) = v119.m128i_i8[12];
        }
        return 1;
      case 0x37:
        v3 = *(_QWORD *)(v3
                       + 8LL
                       * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                       + 32);
        continue;
      case 0x3A:
        v17 = v2->m128i_i64[0];
        v18 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        v19 = *(_DWORD *)(v2->m128i_i64[0] + 320);
        v119.m128i_i64[0] = v2->m128i_i64[0];
        v20 = *(_DWORD *)(v18 + 208);
        v119.m128i_i32[2] = v19;
        *(_DWORD *)(v18 + 208) = v20 + 1;
        sub_847EC0(v18 + 184, v20 + 1);
        v21 = sub_8811F0(v2, *(_QWORD *)(v3 + 16));
        if ( v21 )
        {
          v21 = sub_8941C0(v17, 1, v19);
          v119.m128i_i32[2] = -1;
        }
        v105 = v21;
        sub_894600(&v119);
        return v105;
      case 0x3B:
        if ( (*(_WORD *)(v3 + 2) & 0x1E0) == 0 )
          goto LABEL_15;
        sub_805700((__int64)&v119, v3);
        sub_833810(v2->m128i_i64[1], (__int64)&v119, v16);
        if ( v119.m128i_i32[0] > 1u )
          sub_69F740((__int64)&v119);
        return 1;
      case 0x3E:
        return sub_85BF80(v2->m128i_i64, v3);
      case 0x40:
        v11 = *(unsigned int *)(v3 + 48);
        a1 = (__m128i *)v118;
        v118[0] = v3;
        v118[1] = v11;
        v3 = *(_QWORD *)sub_849A00(v118);
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
        return sub_883F30(v2, v3);
      case 0x50:
        v10 = (unsigned __int8 **)sub_A2E240(v2->m128i_i64[0], v3, 2215, 0);
        if ( v10 )
          sub_823450(v10, 0);
        return sub_883F30(v2, v3);
      case 0x51:
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v2->m128i_i64[0] + 16) + 2160LL) + 1LL) >= 0 )
        {
          v59 = (unsigned __int8 **)sub_A2E240(v2->m128i_i64[0], v3, 2215, 0);
          if ( v59 )
            sub_823450(v59, 1);
        }
        return sub_883F30(v2, v3);
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5B:
        return sub_8ABE30(v2, v3);
      case 0x6D:
        v26 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        v41 = *(_DWORD *)(v26 + 208) + 1;
        *(_DWORD *)(v26 + 208) = v41;
        sub_847EC0(v26 + 184, v41);
        v42 = sub_8C4900(v3);
        v43 = v2->m128i_i64[0];
        if ( v42 )
        {
          v44 = *(_QWORD *)(v43 + 32);
          if ( *(_QWORD *)(v44 + 64) )
          {
            v45 = sub_8C4900(v3);
            result = sub_8811F0(v2, v45);
          }
          else
          {
            *(_QWORD *)(v44 + 64) = v3;
            v87 = sub_8C4900(v3);
            result = sub_8811F0(v2, v87);
            *(_QWORD *)(v44 + 64) = 0;
          }
        }
        else
        {
          sub_828070(v43, v3, 110);
          result = 0;
        }
        goto LABEL_50;
      case 0x6E:
        v26 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        v27 = *(_DWORD *)(v26 + 208) + 1;
        *(_DWORD *)(v26 + 208) = v27;
        sub_847EC0(v26 + 184, v27);
        v28 = *(_QWORD *)(v2->m128i_i64[0] + 32);
        if ( *(_QWORD *)(v28 + 64) )
        {
          v29 = sub_8C4680(v3);
          result = sub_8811F0(v2, v29);
        }
        else
        {
          *(_QWORD *)(v28 + 64) = v3;
          v86 = sub_8C4680(v3);
          result = sub_8811F0(v2, v86);
          *(_QWORD *)(v28 + 64) = 0;
        }
LABEL_50:
        --*(_DWORD *)(v26 + 192);
        return result;
      case 0x74:
      case 0x75:
        v7 = v3;
        v8 = v2;
        return sub_89E6E0(v8, v7);
      case 0x7E:
        v46 = (_WORD *)sub_8116F0(*(_QWORD *)(v3 + 24));
        v47 = *v46 & 0x1FF;
        if ( v47 <= 0x59u || v47 > 0x5Eu )
        {
          v49 = v2->m128i_i64[0];
        }
        else
        {
          v48 = sub_80FBD0((__int64)v46);
          v49 = v2->m128i_i64[0];
          if ( v48 == 212 )
          {
            result = 0;
            if ( *(_BYTE *)(v49 + 962) )
              return result;
            v100 = *(_QWORD *)(v49 + 24);
            v119.m128i_i64[0] = v2->m128i_i64[0];
            v119.m128i_i8[8] = 1;
            v101 = *(_QWORD *)(v100 + 8);
            if ( v101 )
            {
              if ( *(_DWORD *)(v101 + 8) )
                v119.m128i_i8[9] = 0;
              else
                v119.m128i_i8[9] = *(_BYTE *)v100 ^ 1;
              v119.m128i_i32[3] = *(_DWORD *)(v49 + 964);
            }
            else
            {
              v104 = *(_DWORD *)(v49 + 964);
              v119.m128i_i8[9] = 0;
              v119.m128i_i32[3] = v104;
            }
            *(_DWORD *)(v49 + 964) = 2;
            v49 = v2->m128i_i64[0];
LABEL_66:
            if ( (unsigned __int8)sub_8571E0(*(_QWORD *)(v3 + 24), v117, v49) )
            {
              if ( LOBYTE(v117[0]) )
                v88 = *(_QWORD *)(v3 + 32);
              else
                v88 = *(_QWORD *)(v3 + 40);
              v58 = sub_8811F0(v2, v88);
              if ( v58 )
                goto LABEL_75;
              goto LABEL_74;
            }
            v52 = v2->m128i_i64[0];
            if ( !*(_BYTE *)(v2->m128i_i64[0] + 962) )
              goto LABEL_71;
            if ( *(_DWORD *)(v52 + 48) )
            {
              v53 = sub_820420(1u, *(unsigned __int8 *)(v52 + 963));
              *v55 = v53 | v54;
              if ( !v53 )
              {
                v52 = v2->m128i_i64[0];
LABEL_71:
                if ( *(_DWORD *)(v52 + 48) )
                {
                  v56 = sub_820420(*(unsigned __int8 *)(v52 + 962), *(unsigned __int8 *)(v52 + 963));
                  **(_BYTE **)(v57 + 24) |= v56;
                  if ( v56 )
                  {
                    sub_8811F0(v2, *(_QWORD *)(v3 + 32));
                    sub_8811F0(v2, *(_QWORD *)(v3 + 40));
                  }
                }
                goto LABEL_74;
              }
              sub_8821A0(v2, v3);
            }
LABEL_74:
            v119.m128i_i8[8] = 0;
            v58 = 0;
LABEL_75:
            v106 = v58;
            sub_848320(v119.m128i_i64);
            return v106;
          }
        }
        v50 = *(_QWORD *)(v49 + 24);
        v119.m128i_i64[0] = v49;
        v119.m128i_i8[8] = 0;
        v51 = *(_QWORD *)(v50 + 8);
        if ( v51 )
        {
          if ( *(_DWORD *)(v51 + 8) )
            v119.m128i_i8[9] = 0;
          else
            v119.m128i_i8[9] = *(_BYTE *)v50 ^ 1;
          v119.m128i_i32[3] = *(_DWORD *)(v49 + 964);
        }
        else
        {
          v96 = *(_DWORD *)(v49 + 964);
          v119.m128i_i8[9] = 0;
          v119.m128i_i32[3] = v96;
        }
        goto LABEL_66;
    }
  }
}

