__int64 __fastcall sub_C52EC0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  unsigned int v9; // r13d
  __int64 *v11; // rdi
  __int64 *v12; // rdi
  __int32 v13; // edx
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rbp
  int *v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // r12
  char v27; // al
  __int64 v28; // rbp
  unsigned int v29; // eax
  __int64 *v30; // rbx
  __int64 v31; // rax
  int v32; // esi
  __int64 *v33; // r14
  _WORD *v34; // rdx
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rdi
  __int64 *v41; // rbx
  unsigned __int8 **v42; // rax
  __int64 *v43; // rdi
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // eax
  __int64 v56; // r9
  __int64 v57; // rbp
  int v58; // esi
  __int64 v59; // r12
  __int64 v60; // rax
  unsigned int v61; // eax
  _WORD *v62; // rax
  __int64 v63; // r8
  unsigned __int16 v64; // dx
  bool v65; // zf
  __int64 *v66; // rax
  __int64 v67; // rdx
  __int32 v68; // eax
  __int64 v69; // rcx
  char v70; // dl
  __int64 *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r12
  unsigned __int64 v78; // rax
  int v79; // ecx
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rax
  int v82; // ecx
  __int64 v83; // rdi
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r9
  unsigned __int64 v89; // r14
  _DWORD *v90; // r12
  const __m128i *v91; // rdx
  __int64 *v92; // rdi
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 *v98; // rax
  void *v99; // rdi
  __int64 v100; // r8
  unsigned __int64 *v101; // r14
  __int64 v102; // rbp
  __int64 *v103; // r11
  unsigned __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r8
  unsigned int v108; // eax
  _QWORD *v109; // r13
  __int64 v110; // rax
  __int64 v111; // rdx
  unsigned __int64 v112; // rsi
  __int64 v113; // rbp
  int v114; // esi
  __int64 v115; // r12
  __int64 v116; // rax
  unsigned int v117; // eax
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rax
  unsigned __int8 **v122; // rax
  unsigned int v123; // eax
  unsigned int v124; // eax
  __int32 v125; // edx
  __int64 v126; // rsi
  int v127; // ecx
  __int64 *v128; // rbx
  int v129; // [rsp+0h] [rbp-108h]
  __int64 v130; // [rsp+0h] [rbp-108h]
  unsigned __int64 v131; // [rsp+0h] [rbp-108h]
  __int64 v132; // [rsp+8h] [rbp-100h]
  __int64 v133; // [rsp+8h] [rbp-100h]
  __int64 v134; // [rsp+8h] [rbp-100h]
  __int64 v135; // [rsp+8h] [rbp-100h]
  char v136; // [rsp+10h] [rbp-F8h]
  char v137; // [rsp+10h] [rbp-F8h]
  __int64 v138; // [rsp+10h] [rbp-F8h]
  __int64 v139; // [rsp+10h] [rbp-F8h]
  const __m128i *v140; // [rsp+10h] [rbp-F8h]
  __int64 v141; // [rsp+10h] [rbp-F8h]
  __int64 v142; // [rsp+18h] [rbp-F0h]
  __int64 v143; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v144; // [rsp+28h] [rbp-E0h]
  __int64 v145[2]; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v146; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v147; // [rsp+50h] [rbp-B8h]
  unsigned int v148; // [rsp+58h] [rbp-B0h]
  __int64 v149; // [rsp+60h] [rbp-A8h]
  __int64 v150; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h] BYREF
  __int64 v152; // [rsp+78h] [rbp-90h]
  _BYTE v153[64]; // [rsp+80h] [rbp-88h] BYREF
  char v154; // [rsp+C0h] [rbp-48h]
  __int8 v155; // [rsp+C1h] [rbp-47h]

  v7 = a2;
  while ( 2 )
  {
    while ( 2 )
    {
      v8 = *(_WORD *)v7 & 0x1FF;
      if ( v8 <= 0x75u )
      {
        if ( v8 == 4 )
        {
          a3 = *(_BYTE *)(v7 + 2) >> 3;
          switch ( (char)a3 )
          {
            case 0:
            case 1:
              return (unsigned int)sub_C41310((__int64 **)a1, v7);
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
              return (unsigned int)sub_BF05D0(*a1, v7);
            case 6:
            case 12:
LABEL_8:
              v7 = *(_QWORD *)(v7 + 16);
              continue;
            default:
              a3 = *(_BYTE *)(v7 + 2) >> 3;
              goto LABEL_7;
          }
        }
      }
      else if ( v8 <= 0x77u )
      {
        switch ( (*(_WORD *)(v7 + 2) >> 3) & 0x3F )
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
            return (unsigned int)sub_C55870(a1, v7);
          case 9:
            v11 = (__int64 *)*a1;
            v143 = v7;
            v9 = sub_BF5170((__int64)v11, v7, nullptr);
            if ( (_BYTE)v9 )
            {
              v12 = (__int64 *)*a1;
              v145[0] = (__int64)a1;
              v146.m128i_i64[0] = (__int64)&v143;
              v146.m128i_i64[1] = (__int64)a1;
              return (unsigned int)sub_C559F0(v12, v143, v145, &v146);
            }
            return v9;
          default:
            a3 = (*(_WORD *)(v7 + 2) >> 3) & 0x3F;
            goto LABEL_7;
        }
      }
      break;
    }
LABEL_7:
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
      case 0x63:
      case 0x66:
      case 0x67:
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
        return (unsigned int)sub_BF05D0(*a1, v7);
      case 5:
      case 0x62:
        goto LABEL_8;
      case 7:
        v26 = (__int64 *)*a1;
        v9 = 1;
        v27 = *(_BYTE *)(*a1 + 915LL);
        *(_BYTE *)(*a1 + 915LL) = 0;
        v28 = *(_QWORD *)(v7 + 16);
        v137 = v27;
        if ( !*(_DWORD *)(v28 + 4) )
          goto LABEL_40;
        v29 = *((_DWORD *)v26 + 68);
        v143 = (__int64)v26;
        v30 = (__int64 *)(v28 + 16);
        v144 = v29;
        v31 = v26[4];
        v32 = *(_DWORD *)(v31 + 160) + 1;
        *(_DWORD *)(v31 + 160) = v32;
        sub_993300(v31 + 136, v32);
        v133 = v28 + 8LL * *(unsigned int *)(v28 + 4) + 16;
        if ( v133 == v28 + 24 )
          goto LABEL_37;
        v33 = (__int64 *)(v28 + 24);
        while ( 1 )
        {
          v34 = (_WORD *)*(v33 - 1);
          v35 = *a1;
          v30 = v33;
          v145[0] = (__int64)&v146;
          v146.m128i_i8[4] &= ~1u;
          v146.m128i_i32[0] = 0;
          v145[1] = 0;
          v36 = sub_C2F320(v145, v35, v34);
          if ( v36 != 2 )
            break;
          if ( v146.m128i_i32[0] <= 1u )
          {
            if ( (__int64 *)v133 == ++v33 )
              goto LABEL_37;
            continue;
          }
          ++v33;
          sub_A2BBA0(v146.m128i_i32);
          if ( (__int64 *)v133 == v33 )
          {
LABEL_37:
            v35 = *v30;
            if ( ((*(_WORD *)*v30 + 509) & 0x1FFu) > 0x7E )
            {
              v40 = *v30;
              v41 = (__int64 *)*a1;
              v9 = 0;
              v35 = (unsigned int)sub_EC7AA0(v40);
              sub_E0FF40(v41, v35, 2485, 0);
              goto LABEL_39;
            }
            if ( (unsigned __int8)sub_C52EC0(a1, v35) )
            {
              v35 = 1;
              v124 = sub_C31220(v143, (__m128i *)((char *)&dword_0 + 1), v144, v38, v39);
              v144 = -1;
              v9 = v124;
              goto LABEL_39;
            }
LABEL_166:
            v9 = 0;
            goto LABEL_39;
          }
        }
        if ( v36 )
        {
          v128 = (__int64 *)*a1;
          v35 = (unsigned int)sub_EC7AA0(*(v33 - 1));
          sub_E0FF40(v128, v35, 2485, 0);
        }
        if ( v146.m128i_i32[0] <= 1u )
          goto LABEL_166;
        v9 = 0;
        sub_A2BBA0(v146.m128i_i32);
LABEL_39:
        sub_C31640((__int64)&v143, v35, v37, v38, v39);
LABEL_40:
        *((_BYTE *)v26 + 915) = v137;
        return v9;
      case 0xE:
        v101 = (unsigned __int64 *)(v7 + 24);
        v102 = v7 + 24 + 8LL * *(unsigned __int16 *)(v7 + 4) - 8;
        if ( v7 + 24 == v102 )
          return 1;
        while ( 2 )
        {
          v109 = (_QWORD *)*v101;
          v110 = *(unsigned __int16 *)(v7 + 6);
          v111 = *(unsigned __int16 *)*v101;
          LOWORD(v111) = v111 & 0x1FF;
          if ( (_WORD)v111 != 26 )
          {
            v112 = *v101;
            if ( (_WORD)v110 && v109 == *(_QWORD **)(v7 + 8 * v110 + 16) )
            {
              if ( !(unsigned __int8)sub_C52EC0(a1, v112) )
                return 0;
            }
            else if ( !(unsigned __int8)sub_C1BDB0(*a1, v112, v111, a4, a5) )
            {
              return 0;
            }
LABEL_119:
            if ( (unsigned __int64 *)v102 == ++v101 )
              return 1;
            continue;
          }
          break;
        }
        if ( (_WORD)v110 && v109 == *(_QWORD **)(v7 + 8 * v110 + 16) )
          return (unsigned int)sub_BF05D0(*a1, v7);
        if ( (*v109 & 0x80000LL) != 0 )
          goto LABEL_119;
        v103 = (__int64 *)*a1;
        LOBYTE(v148) = v148 | 1;
        v146 = 0u;
        v147 = 0;
        v150 = 0;
        ptr = v153;
        v152 = 0x800000000LL;
        v155 = 0;
        v139 = (__int64)v103;
        v135 = v103[4];
        v131 = v109[2];
        v104 = sub_BEC760(v103[2], (__int64)v109);
        v105 = sub_C08480(v135, (unsigned __int64)v109, v104, (__int64)&v146);
        v108 = sub_C15CD0(v105, v139, v131, v106, v107);
        v99 = ptr;
        v9 = v108;
        if ( (_BYTE)v108 )
        {
          if ( ptr != v153 )
            free(ptr);
          goto LABEL_119;
        }
        if ( ptr == v153 )
          return v9;
        goto LABEL_106;
      case 0xF:
        v25 = 0;
        if ( *(char *)(v7 + 2) < 0 )
          v25 = *(_QWORD *)(v7 + 16);
        return (unsigned int)sub_C52EC0(a1, v25);
      case 0x11:
      case 0x71:
        v7 = *(_QWORD *)(v7 + 24);
        continue;
      case 0x12:
        v22 = sub_BFA0C0(v7);
        return (unsigned int)sub_C52EC0(a1, v22);
      case 0x17:
        v23 = (__int64 *)*a1;
        v24 = (int *)sub_BED3A0(*(_QWORD *)(*a1 + 32LL), v7);
        if ( v24 && *v24 )
        {
          v9 = 1;
          sub_A30FE0(a1[2], v24);
        }
        else
        {
          v25 = *(_QWORD *)(v7 + 16);
          if ( !v25 || v7 == v25 )
            return (unsigned int)sub_BF05D0((__int64)v23, v7);
          else
            return (unsigned int)sub_C52EC0(a1, v25);
        }
        return v9;
      case 0x2B:
        return (unsigned int)sub_C1DAA0(a1, v7, a3, a4, a5);
      case 0x30:
        v72 = sub_C715F0(v7);
        v77 = v72;
        if ( *(char *)(v72 + 28) < 0 )
          return 0;
        v78 = sub_B5ABC0(v72, a2, v73, v74, v75, v76);
        if ( v78 )
        {
          v79 = 0;
          v80 = *(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v80 )
          {
            while ( (*(_BYTE *)(v80 + 28) & 0x7Fu) - 49 <= 2 )
            {
LABEL_133:
              ++v79;
              v80 = *(_QWORD *)(v80 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v80 )
                goto LABEL_87;
            }
            while ( 1 )
            {
              v81 = *(_QWORD *)(v80 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v80 = v81;
              if ( !v81 )
                break;
              if ( (*(_BYTE *)(v81 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_133;
            }
          }
LABEL_87:
          v82 = v79 + 1;
          goto LABEL_88;
        }
        v82 = 0;
LABEL_88:
        v146.m128i_i8[4] &= ~1u;
        v146.m128i_i32[0] = 0;
        sub_A2BAC0((__int64)&v146.m128i_i64[1], 0, v82);
        v83 = a1[2];
        v146.m128i_i32[0] = 10;
        sub_A2BFE0(v83, (__int64)&v146);
        if ( v146.m128i_i32[0] > 1u )
          sub_A2BBA0(v146.m128i_i32);
        v134 = sub_EBA840(*(_QWORD *)(*a1 + 16LL), v77);
        v89 = sub_B5ABC0(v77, v77, v84, v85, v86, v87);
        if ( !v89 )
          return 1;
        v90 = *(_DWORD **)(v7 + 32);
        v130 = v7 + 40;
        if ( !v90 || (*v90 & 0x40000) != 0 )
          return (unsigned int)sub_BF05D0(*a1, v7);
        v9 = 1;
        while ( 2 )
        {
          v91 = (const __m128i *)a1[1];
          v146 = _mm_loadu_si128(v91);
          v147 = v91[1].m128i_i64[0];
          LOBYTE(v148) = v91[1].m128i_i8[8] & 1 | v148 & 0xFE;
          LOBYTE(v148) = v91[1].m128i_i8[8] & 2 | v148 & 0xFD;
          LOBYTE(v148) = v91[1].m128i_i8[8] & 4 | v148 & 0xFB;
          LOBYTE(v148) = v91[1].m128i_i8[8] & 8 | v148 & 0xF7;
          v148 = v91[1].m128i_i32[2] & 0xFFFFFFF0 | v148 & 0xF;
          v149 = v91[2].m128i_i64[0];
          v150 = v91[2].m128i_i64[1];
          ptr = v153;
          v152 = 0x800000000LL;
          if ( v91[3].m128i_i32[2] )
          {
            v140 = v91;
            sub_C020D0((__int64 *)&ptr, v91[3].m128i_i64);
            v91 = v140;
          }
          v92 = (__int64 *)*a1;
          v154 = v91[8].m128i_i8[0] & 1 | v154 & 0xFE;
          v154 = v91[8].m128i_i8[0] & 2 | v154 & 0xFD;
          v155 = v91[8].m128i_i8[1];
          if ( !(unsigned __int8)sub_BF10D0((__int64)v92, v7, (__int64)&v146, v89, v134, v88) )
            goto LABEL_105;
          v95 = a1[2];
          v96 = v89;
          if ( *(char *)(v89 + 29) < 0 )
          {
            v138 = a1[2];
            v96 = sub_B4E9E0(v89);
            v95 = v138;
          }
          v97 = *(unsigned int *)(v96 + 68);
          if ( (v97 & 0xFFFFFFF0) == 0 )
          {
            v142 = v95;
            v141 = v96;
            sub_B5AD70(v96, v7, v97, v95, v93, v94);
            v95 = v142;
            LODWORD(v97) = *(_DWORD *)(v141 + 68);
          }
          if ( (unsigned __int8)sub_C2BC60(
                                  *(_QWORD *)(v95 + 8) + 56LL * (((unsigned int)v97 >> 4) + *(_DWORD *)(v95 + 16) - 1),
                                  *a1,
                                  &v146,
                                  (__int64)v90) )
            goto LABEL_138;
          v98 = (__int64 *)*a1;
          if ( !*(_DWORD *)(*a1 + 48LL) )
            goto LABEL_105;
          v9 = *((unsigned __int8 *)v98 + 914);
          if ( (_BYTE)v9 )
          {
            v9 = 0;
LABEL_138:
            if ( ptr != v153 )
              free(ptr);
            do
            {
              v118 = *(_QWORD *)(v89 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v89 = v118;
              if ( !v118 )
                return v9;
            }
            while ( (*(_BYTE *)(v118 + 28) & 0x7Fu) - 49 > 2 );
            v130 += 8;
            v90 = *(_DWORD **)(v130 - 8);
            if ( !v90 || (*v90 & 0x40000) != 0 )
              return (unsigned int)sub_BF05D0(*a1, v7);
            continue;
          }
          break;
        }
        if ( *((_BYTE *)v98 + 915) )
          goto LABEL_138;
LABEL_105:
        v99 = ptr;
        v9 = 0;
        if ( ptr == v153 )
          return v9;
LABEL_106:
        free(v99);
        return v9;
      case 0x32:
        if ( sub_BD7270(v7) )
          return (unsigned int)sub_C52EC0(a1, **(_QWORD **)(v7 + 16));
        else
          return (unsigned int)sub_C36BD0(
                                 a1,
                                 v7,
                                 *(__int64 ***)(v7 + 16),
                                 (unsigned int)((__int64)(*(_QWORD *)(v7 + 24) - *(_QWORD *)(v7 + 16)) >> 3),
                                 v100);
      case 0x33:
      case 0x61:
      case 0x65:
        return (unsigned int)sub_C36860(a1, v7, *(_QWORD *)(v7 + 8), a4, a5);
      case 0x36:
        return (unsigned int)sub_C52EC0(
                               a1,
                               *(_QWORD *)(v7
                                         + 8LL
                                         * (((*(_DWORD *)(v7 + 16) >> 15) & 0x7FFF)
                                          + (unsigned int)((*(_BYTE *)(v7 + 19) & 0x40) != 0))
                                         + 32));
      case 0x39:
        v13 = *(_DWORD *)(*a1 + 272LL);
        v146.m128i_i64[0] = *a1;
        v146.m128i_i32[2] = v13;
        v14 = *(_QWORD *)(v146.m128i_i64[0] + 32);
        v15 = *(_DWORD *)(v14 + 160) + 1;
        *(_DWORD *)(v14 + 160) = v15;
        sub_993300(v14 + 136, v15);
        v16 = *(_QWORD *)(v7 + 16);
        v9 = sub_C52EC0(a1, v16);
        if ( (_BYTE)v9 )
        {
          v16 = 1;
          v123 = sub_C316B0(v146.m128i_i64[0], 1, v146.m128i_u32[2], v18, v19);
          v146.m128i_i32[2] = -1;
          v9 = v123;
        }
        sub_C31C60((__int64)&v146, v16, v17, v18, v19);
        return v9;
      case 0x3A:
        if ( ((*(_QWORD *)v7 >> 16) & 0x1E0) != 0 )
        {
          sub_BD3DC0((__int64)&v146, v7, a3, a4, a5, a6, v129, v132, v136);
          sub_A30FE0(a1[2], v146.m128i_i32);
          if ( v146.m128i_i32[0] > 1u )
            sub_A2BBA0(v146.m128i_i32);
          return 1;
        }
        else
        {
          return (unsigned int)sub_C52EC0(a1, *(_QWORD *)(v7 + 16));
        }
      case 0x3D:
        return (unsigned int)sub_C1DD70(a1, v7, a3, a4, a5);
      case 0x3F:
        v20 = *(unsigned int *)(v7 + 48);
        v146.m128i_i64[0] = v7;
        v146.m128i_i64[1] = v20;
        v21 = (_QWORD *)sub_C061F0(&v146);
        return (unsigned int)sub_C52EC0(a1, *v21);
      case 0x49:
        v7 = *(_QWORD *)(v7 + 32);
        continue;
      case 0x4A:
        if ( (*(_BYTE *)(v7 + 2) & 8) != 0 )
          v25 = *(_QWORD *)(v7 + 24);
        else
          v25 = *(_QWORD *)(v7 + 32);
        return (unsigned int)sub_C52EC0(a1, v25);
      case 0x4C:
      case 0x4D:
      case 0x4E:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
        return (unsigned int)sub_C52D20(a1, v7, a3, a4, a5, a6);
      case 0x4F:
        v42 = (unsigned __int8 **)sub_E0FF50(*a1, v7, 2417, 0);
        if ( v42 )
          sub_BED5E0(v42, 0);
        return (unsigned int)sub_C52D20(a1, v7, a3, a4, a5, a6);
      case 0x50:
        v43 = (__int64 *)*a1;
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 2320LL) + 1LL) >= 0 )
        {
          v122 = (unsigned __int8 **)sub_E0FF50(v43, v7, 2417, 0);
          if ( v122 )
            sub_BED5E0(v122, 1);
        }
        return (unsigned int)sub_C52D20(a1, v7, a3, a4, a5, a6);
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5A:
        return (unsigned int)sub_C3C840(a1, v7, a1[2], a1[1]);
      case 0x60:
        return (unsigned int)sub_C414B0(a1, a1 + 2, v7);
      case 0x64:
        return (unsigned int)sub_C36BD0(a1, v7, (__int64 **)(v7 + 48), *(unsigned int *)(v7 + 16), a5);
      case 0x68:
        if ( !*(_QWORD *)(*a1 + 32LL) )
          return 0;
        v44 = *(_QWORD *)(v7 + 16);
        if ( *(char *)(v44 + 28) < 0 )
          return 0;
        v45 = *(_QWORD *)(sub_B68470(v44 + 72) + 16);
        if ( (v45 & 4) != 0 )
          v50 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v50 = v45 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v50 )
          BUG();
        if ( *(char *)(v50 - 36) >= 0
          && (v146.m128i_i64[0] = 0,
              v51 = sub_B5BA10((_QWORD *)v44, &v146, v46, v47, v48, v49),
              v55 = sub_BDCD00(v7, (__int64)&v146, v52, v53, v54),
              (unsigned __int8)sub_BF9920(*a1, v55, v44, (char *)v146.m128i_i64[0], v51, v56)) )
        {
          return (unsigned int)sub_C34010(
                                 v7,
                                 (const __m128i *)a1[1],
                                 *(_QWORD *)(*(_QWORD *)(*a1 + 32LL) + 48LL),
                                 *(_QWORD *)(*(_QWORD *)(*a1 + 32LL) + 56LL),
                                 v146.m128i_i64[0],
                                 (__m128i *)*a1,
                                 a1[2]);
        }
        else
        {
          return 0;
        }
      case 0x6C:
        v57 = *(_QWORD *)(*a1 + 32LL);
        v58 = *(_DWORD *)(v57 + 160) + 1;
        *(_DWORD *)(v57 + 160) = v58;
        sub_993300(v57 + 136, v58);
        if ( sub_C70F80(v7) )
        {
          v59 = *(_QWORD *)(*a1 + 32LL);
          if ( *(_QWORD *)(v59 + 64) )
          {
            v121 = sub_C70F80(v7);
            v9 = sub_C52EC0(a1, v121);
          }
          else
          {
            *(_QWORD *)(v59 + 64) = v7;
            v60 = sub_C70F80(v7);
            v61 = sub_C52EC0(a1, v60);
            *(_QWORD *)(v59 + 64) = 0;
            v9 = v61;
          }
        }
        else
        {
          v9 = sub_BF05D0(*a1, v7);
        }
        --*(_DWORD *)(v57 + 144);
        return v9;
      case 0x6D:
        v113 = *(_QWORD *)(*a1 + 32LL);
        v114 = *(_DWORD *)(v113 + 160) + 1;
        *(_DWORD *)(v113 + 160) = v114;
        sub_993300(v113 + 136, v114);
        v115 = *(_QWORD *)(*a1 + 32LL);
        if ( *(_QWORD *)(v115 + 64) )
        {
          v119 = sub_C70F40(v7);
          v9 = sub_C52EC0(a1, v119);
        }
        else
        {
          *(_QWORD *)(v115 + 64) = v7;
          v116 = sub_C70F40(v7);
          v117 = sub_C52EC0(a1, v116);
          *(_QWORD *)(v115 + 64) = 0;
          v9 = v117;
        }
        --*(_DWORD *)(v113 + 144);
        return v9;
      case 0x6E:
      case 0x6F:
        return (unsigned int)sub_C54890(a1, v7, *(_QWORD *)(v7 + 8));
      case 0x73:
      case 0x74:
        return (unsigned int)sub_C55870(a1, v7);
      case 0x7D:
        v62 = (_WORD *)sub_BD9810(*(_QWORD *)(v7 + 24));
        v64 = *v62 & 0x1FF;
        if ( v64 <= 0x58u || v64 > 0x5Du )
        {
          v66 = (__int64 *)*a1;
        }
        else
        {
          v65 = (unsigned int)sub_BD8130((__int64)v62) == 214;
          v66 = (__int64 *)*a1;
          if ( v65 )
          {
            v9 = 0;
            if ( *((_BYTE *)v66 + 914) )
              return v9;
            v146.m128i_i64[0] = *a1;
            v146.m128i_i8[8] = 1;
            v69 = v66[3];
            v125 = *((_DWORD *)v66 + 229);
            v126 = *(_QWORD *)(v69 + 8);
            if ( !v126 || *(_DWORD *)(v126 + 8) )
            {
              v146.m128i_i8[9] = 0;
              v146.m128i_i32[3] = v125;
            }
            else
            {
              v127 = *(unsigned __int8 *)v69;
              v146.m128i_i32[3] = *((_DWORD *)v66 + 229);
              v69 = v127 ^ 1u;
              v146.m128i_i8[9] = v69;
            }
            *((_DWORD *)v66 + 229) = 2;
LABEL_71:
            if ( (unsigned __int8)sub_C1BE30(*(_QWORD *)(v7 + 24), v145, *a1, v69, v63) )
            {
              if ( LOBYTE(v145[0]) )
                v120 = *(_QWORD *)(v7 + 32);
              else
                v120 = *(_QWORD *)(v7 + 40);
              v9 = sub_C52EC0(a1, v120);
              if ( (_BYTE)v9 )
                goto LABEL_77;
            }
            else
            {
              v71 = (__int64 *)*a1;
              if ( *(_BYTE *)(*a1 + 914LL) && (unsigned __int8)sub_BEDB10((__int64)v71) )
              {
                sub_C55210(a1, v7);
              }
              else if ( (unsigned __int8)sub_BEDB10(*a1) )
              {
                sub_C52EC0(a1, *(_QWORD *)(v7 + 32));
                sub_C52EC0(a1, *(_QWORD *)(v7 + 40));
              }
            }
            v146.m128i_i8[8] = 0;
            v9 = 0;
LABEL_77:
            sub_BFFDF0(v146.m128i_i64);
            return v9;
          }
        }
        v146.m128i_i64[0] = (__int64)v66;
        v146.m128i_i8[8] = 0;
        v67 = v66[3];
        v68 = *((_DWORD *)v66 + 229);
        v69 = *(_QWORD *)(v67 + 8);
        if ( !v69 || (v69 = *(unsigned int *)(v69 + 8), (_DWORD)v69) )
        {
          v146.m128i_i8[9] = 0;
          v146.m128i_i32[3] = v68;
        }
        else
        {
          v70 = *(_BYTE *)v67;
          v146.m128i_i32[3] = v68;
          v146.m128i_i8[9] = v70 ^ 1;
        }
        goto LABEL_71;
      case 0x7E:
        return (unsigned int)sub_C55510(a1, v7);
    }
  }
}

