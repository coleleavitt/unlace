__int64 __fastcall sub_C48CF0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // r14d
  unsigned __int16 *v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int8 v15; // al
  _WORD *v16; // rax
  __int64 v17; // r8
  unsigned __int16 v18; // dx
  bool v19; // zf
  __int64 v20; // rax
  char *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rdi
  __int64 v26; // rbp
  const __m128i *v27; // r12
  __m128i *v28; // rbp
  char v29; // r13
  __int8 v30; // al
  __int8 v31; // al
  __int8 v32; // al
  __int8 v33; // al
  __int64 v34; // rdi
  __int64 v35; // rbp
  _QWORD *v36; // rax
  __int64 v37; // r12
  _QWORD *v38; // r13
  __m128i *v39; // r15
  char v40; // r14
  __int64 v41; // rbp
  int v42; // esi
  __int64 v43; // r12
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rbp
  int v47; // esi
  __int64 v48; // r12
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rbp
  __int64 v53; // rbp
  _DWORD *v54; // rax
  unsigned __int16 *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  char v62; // di
  __int64 v63; // rbp
  _QWORD *v64; // rbx
  __int64 v65; // rax
  int v66; // esi
  _QWORD *v67; // r13
  __int64 v68; // rdx
  __int64 v69; // rsi
  int v70; // eax
  _WORD *v71; // rdi
  __int64 v72; // rbx
  unsigned int v73; // eax
  _QWORD *v74; // r14
  __int64 v75; // r12
  char *v76; // r13
  __int64 v77; // rax
  __int64 v78; // r12
  unsigned __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int64 v81; // r13
  unsigned __int64 v82; // rax
  __int8 v83; // dl
  __int64 v84; // r12
  __int64 v85; // rax
  __int64 v86; // rbx
  int v87; // eax
  __int64 v88; // rdx
  _QWORD *v89; // rdx
  unsigned __int64 *v90; // r13
  __int64 v91; // rbp
  __int64 v92; // r11
  __int64 v93; // rsi
  unsigned __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // r8
  _QWORD *v98; // r14
  __int64 v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // rsi
  __int64 v102; // rax
  int v103; // edx
  __int64 v104; // rax
  int v105; // esi
  unsigned __int8 **v106; // rax
  __int64 v107; // rsi
  __int64 *v108; // rdi
  void *v109; // rdi
  __int64 v110; // rsi
  __int64 *v111; // rdi
  __int64 v112; // rax
  unsigned __int8 **v113; // rax
  __int64 v114; // rax
  __int64 v115; // rsi
  unsigned int v116; // eax
  __int64 v117; // rbp
  unsigned __int8 **v118; // rax
  __int64 v119; // rbx
  unsigned int v120; // eax
  int v121; // edx
  __int64 v122; // rsi
  unsigned __int8 **v123; // rax
  unsigned int v124; // eax
  _QWORD *v125; // rax
  _QWORD *v126; // r13
  _BOOL8 v127; // r12
  _BYTE *v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rdx
  int v131; // eax
  __int64 v132; // rbx
  __int64 v133; // rax
  __int64 v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rbp
  __int64 v137; // r15
  __int64 v138; // rbp
  void *v139; // rdi
  int v140; // ecx
  int v141; // [rsp+0h] [rbp-138h]
  __int64 v142; // [rsp+0h] [rbp-138h]
  unsigned __int64 v143; // [rsp+0h] [rbp-138h]
  __int64 v144; // [rsp+8h] [rbp-130h]
  __int64 v145; // [rsp+8h] [rbp-130h]
  __int64 v146; // [rsp+8h] [rbp-130h]
  char v147; // [rsp+10h] [rbp-128h]
  char v148; // [rsp+10h] [rbp-128h]
  __int64 v149; // [rsp+10h] [rbp-128h]
  void *v150; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v151; // [rsp+28h] [rbp-110h]
  __m128i v152; // [rsp+30h] [rbp-108h] BYREF
  __int8 v153; // [rsp+40h] [rbp-F8h]
  void *v154[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v155; // [rsp+80h] [rbp-B8h] BYREF
  char v156; // [rsp+88h] [rbp-B0h]
  __int64 v157; // [rsp+98h] [rbp-A0h]
  void *ptr; // [rsp+A0h] [rbp-98h]
  __int64 v159; // [rsp+A8h] [rbp-90h]
  _BYTE v160[65]; // [rsp+B0h] [rbp-88h] BYREF
  char v161; // [rsp+F1h] [rbp-47h]

  v8 = (unsigned __int16 *)a2;
  while ( 2 )
  {
    while ( 2 )
    {
      v9 = *v8;
      LOWORD(v9) = v9 & 0x1FF;
      if ( (unsigned __int16)v9 > 0x75u )
      {
        if ( (unsigned __int16)v9 <= 0x77u )
        {
          switch ( (v8[1] >> 3) & 0x3F )
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
              return (unsigned int)sub_C601F0(a1, v8);
            default:
              a3 = (v8[1] >> 3) & 0x3F;
              goto LABEL_7;
          }
        }
        goto LABEL_7;
      }
      if ( (_WORD)v9 != 4 )
      {
LABEL_7:
        LOWORD(v9) = (v9 + 509) & 0x1FF;
        switch ( v9 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
          case 3LL:
          case 4LL:
          case 6LL:
          case 9LL:
          case 10LL:
          case 12LL:
          case 13LL:
          case 16LL:
          case 19LL:
          case 20LL:
          case 21LL:
          case 22LL:
          case 24LL:
          case 25LL:
          case 27LL:
          case 28LL:
          case 29LL:
          case 30LL:
          case 31LL:
          case 32LL:
          case 33LL:
          case 34LL:
          case 35LL:
          case 37LL:
          case 38LL:
          case 39LL:
          case 40LL:
          case 41LL:
          case 42LL:
          case 44LL:
          case 45LL:
          case 46LL:
          case 47LL:
          case 48LL:
          case 49LL:
          case 52LL:
          case 53LL:
          case 55LL:
          case 56LL:
          case 59LL:
          case 60LL:
          case 62LL:
          case 64LL:
          case 65LL:
          case 66LL:
          case 67LL:
          case 68LL:
          case 69LL:
          case 70LL:
          case 71LL:
          case 72LL:
          case 75LL:
          case 91LL:
          case 92LL:
          case 93LL:
          case 94LL:
          case 96LL:
          case 99LL:
          case 100LL:
          case 102LL:
          case 104LL:
          case 105LL:
          case 106LL:
          case 107LL:
          case 110LL:
          case 111LL:
          case 112LL:
          case 117LL:
          case 118LL:
          case 119LL:
          case 120LL:
          case 121LL:
          case 122LL:
          case 123LL:
            return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)v8);
          case 5LL:
          case 98LL:
            goto LABEL_8;
          case 7LL:
            v61 = a1->m128i_i64[0];
            v6 = 1;
            v62 = *(_BYTE *)(a1->m128i_i64[0] + 915);
            *(_BYTE *)(v61 + 915) = 0;
            v63 = *((_QWORD *)v8 + 2);
            v145 = v61;
            v148 = v62;
            if ( !*(_DWORD *)(v63 + 4) )
              goto LABEL_85;
            v150 = (void *)v61;
            v64 = (_QWORD *)(v63 + 16);
            v151 = *(_DWORD *)(v61 + 272);
            v65 = *(_QWORD *)(v61 + 32);
            v66 = *(_DWORD *)(v65 + 160) + 1;
            *(_DWORD *)(v65 + 160) = v66;
            sub_9B7040(v65 + 136, v66);
            v67 = (_QWORD *)(v63 + 24);
            v142 = v63 + 8LL * *(unsigned int *)(v63 + 4) + 16;
            if ( v142 == v63 + 24 )
              goto LABEL_82;
            while ( 1 )
            {
              v68 = *(v67 - 1);
              v69 = a1->m128i_i64[0];
              v64 = v67;
              BYTE4(v154[0]) &= ~1u;
              LODWORD(v154[0]) = 0;
              v152 = (__m128i)(unsigned __int64)v154;
              v70 = sub_C53060(&v152, v69, v68);
              if ( v70 != 2 )
                break;
              if ( LODWORD(v154[0]) <= 1 )
              {
                if ( (_QWORD *)v142 == ++v67 )
                  goto LABEL_82;
                continue;
              }
              ++v67;
              sub_A4F8E0((int *)v154);
              if ( (_QWORD *)v142 == v67 )
              {
LABEL_82:
                if ( ((*(_WORD *)*v64 + 509) & 0x1FFu) > 0x7E )
                {
                  v71 = (_WORD *)*v64;
                  v72 = a1->m128i_i64[0];
                  v6 = 0;
                  v73 = sub_EEB7E0(v71);
                  sub_E33C80(v72, v73, 2485, 0);
                  goto LABEL_84;
                }
                if ( (unsigned __int8)sub_C48CF0(a1, *v64) )
                {
                  v124 = sub_C54F60(v150, 1, v151);
                  v151 = -1;
                  v6 = v124;
                  goto LABEL_84;
                }
LABEL_184:
                v6 = 0;
                goto LABEL_84;
              }
            }
            if ( v70 )
            {
              v119 = a1->m128i_i64[0];
              v120 = sub_EEB7E0(*(v67 - 1));
              sub_E33C80(v119, v120, 2485, 0);
            }
            if ( LODWORD(v154[0]) <= 1 )
              goto LABEL_184;
            v6 = 0;
            sub_A4F8E0((int *)v154);
LABEL_84:
            sub_C55380(&v150);
LABEL_85:
            *(_BYTE *)(v145 + 915) = v148;
            return v6;
          case 8LL:
            sub_C06BF0(
              (__int64)v154,
              (__int64)v8,
              *(_QWORD *)(a1->m128i_i64[0] + 16),
              *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 32) + 64LL));
            sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)v154);
            if ( LODWORD(v154[0]) > 1 )
              sub_A4F8E0((int *)v154);
            return 1;
          case 11LL:
            sub_C04330((__int64)v154, (__int64)v8, *(_QWORD *)(a1->m128i_i64[0] + 16));
            v74 = *(_QWORD **)(a1->m128i_i64[0] + 16);
            v75 = v74[2331];
            v76 = (char *)v154[1] + 1;
            v77 = sub_A63CE0(v74);
            v78 = v75 | 1;
            v151 = sub_A97D20((__int64)v74, *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL));
            if ( v151 > 0x40 )
              sub_2205470(&v150, v76, 0);
            else
              v150 = v76;
            v79 = sub_A70F70(*(_QWORD *)(a1->m128i_i64[0] + 16), v78, (__int64)&v150, nullptr, 0, 0);
            v80 = a1->m128i_i64[0];
            v81 = v79;
            v152.m128i_i32[0] = *((_DWORD *)v8 + 4);
            v82 = sub_C09810(*(_QWORD **)(v80 + 16), v154[0], (size_t)v154[1], 0, 0, v79, (__int64)&v152, 1);
            v83 = a1[1].m128i_i8[0];
            v152 = _mm_loadu_si128(a1);
            v153 = v83;
            sub_C5C820(&v152, v82);
            v84 = a1->m128i_i64[1];
            if ( (*(_BYTE *)(v84 + 24) & 1) == 0 )
            {
              if ( sub_C105C0(v84 + 24) )
              {
                v118 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], v8, 2466, 0);
                if ( v118 )
                  sub_C11320(v118, 3);
                *(_BYTE *)(v84 + 24) |= 1u;
                *(_DWORD *)(v84 + 56) = 0;
              }
              else
              {
                v85 = *(unsigned int *)(v84 + 56);
                v86 = *(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL);
                if ( v85 + 1 > (unsigned __int64)*(unsigned int *)(v84 + 60) )
                {
                  sub_2237220(v84 + 48, v84 + 64, v85 + 1, 8);
                  v85 = *(unsigned int *)(v84 + 56);
                }
                *(_QWORD *)(*(_QWORD *)(v84 + 48) + 8 * v85) = 0;
                v87 = *(_DWORD *)(v84 + 56) + 1;
                *(_DWORD *)(v84 + 56) = v87;
                v88 = *(_QWORD *)(v86 + 32);
                *(_BYTE *)(v84 + 24) |= 8u;
                *(_QWORD *)(v84 + 40) = v88;
                v89 = *(_QWORD **)(v86 + 40);
                if ( (*(_BYTE *)(v86 + 19) & 2) != 0 )
                {
                  if ( *((_DWORD *)v89 + 2) <= 0x40u )
                    v89 = (_QWORD *)*v89;
                  else
                    v89 = *(_QWORD **)*v89;
                }
                *(_QWORD *)(v84 + 32) = v89;
                *(_DWORD *)(v84 + 24) = *(_DWORD *)(v84 + 24) & 0xF | (16 * v87);
              }
            }
            if ( v151 > 0x40 && v150 )
              operator delete[](v150);
            if ( v154[0] != &v155 )
              operator delete(v154[0]);
            return 1;
          case 14LL:
            v90 = (unsigned __int64 *)(v8 + 12);
            v91 = (__int64)&v8[4 * v8[2] + 8];
            if ( v8 + 12 == (unsigned __int16 *)v91 )
              return 1;
            while ( 2 )
            {
              v98 = (_QWORD *)*v90;
              v99 = v8[3];
              v100 = *(unsigned __int16 *)*v90;
              LOWORD(v100) = v100 & 0x1FF;
              if ( (_WORD)v100 != 26 )
              {
                v101 = *v90;
                if ( (_WORD)v99 && v98 == *(_QWORD **)&v8[4 * v99 + 8] )
                {
                  if ( !(unsigned __int8)sub_C48CF0(a1, v101) )
                    return 0;
                }
                else if ( !(unsigned __int8)sub_C3FAF0(a1->m128i_i64[0], v101, v100, a4, a5) )
                {
                  return 0;
                }
LABEL_113:
                if ( (unsigned __int64 *)v91 == ++v90 )
                  return 1;
                continue;
              }
              break;
            }
            if ( (_WORD)v99 && v98 == *(_QWORD **)&v8[4 * v99 + 8] )
            {
              return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)v8);
            }
            else
            {
              if ( (*v98 & 0x80000LL) != 0 )
                goto LABEL_113;
              v92 = a1->m128i_i64[0];
              v93 = *v90;
              v154[0] = nullptr;
              v154[1] = nullptr;
              v155 = 0;
              v156 |= 1u;
              v157 = 0;
              ptr = v160;
              v159 = 0x800000000LL;
              v161 = 0;
              v149 = v92;
              v146 = *(_QWORD *)(v92 + 32);
              v143 = v98[2];
              v94 = sub_C104A0(*(_QWORD *)(v92 + 16), v93);
              v95 = sub_C2C1C0(v146, (unsigned __int64)v98, v94, (__int64)v154);
              v6 = sub_C39A10(v95, v149, v143, v96, v97);
              if ( (_BYTE)v6 )
              {
                if ( ptr != v160 )
                  free(ptr);
                goto LABEL_113;
              }
              if ( ptr != v160 )
                free(ptr);
            }
            return v6;
          case 15LL:
            v55 = nullptr;
            if ( *((char *)v8 + 2) < 0 )
              v55 = *((unsigned __int16 **)v8 + 2);
            return (unsigned int)sub_C48CF0(a1, v55);
          case 17LL:
          case 113LL:
            v8 = *((unsigned __int16 **)v8 + 3);
            continue;
          case 18LL:
            v102 = sub_C1DE00((__int64)v8);
            return (unsigned int)sub_C48CF0(a1, v102);
          case 23LL:
            v53 = a1->m128i_i64[0];
            v54 = (_DWORD *)sub_C110E0(*(_QWORD *)(a1->m128i_i64[0] + 32), (unsigned __int64)v8);
            if ( v54 && *v54 )
            {
              v6 = 1;
              sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(v53 + 16), (__int64)v54);
            }
            else
            {
              v55 = *((unsigned __int16 **)v8 + 2);
              if ( !v55 || v8 == v55 )
                return (unsigned int)sub_C14310(v53, (__int64)v8);
              else
                return (unsigned int)sub_C48CF0(a1, v55);
            }
            return v6;
          case 26LL:
          case 124LL:
            return (unsigned int)sub_C256E0(a1->m128i_i64[1], (__int64)v8);
          case 36LL:
            LOBYTE(v6) = *((_QWORD *)v8 + 2) != 0 && *((_QWORD *)v8 + 3) == 0;
            if ( (_BYTE)v6 )
            {
              v117 = a1->m128i_i64[1];
              sub_A4F2D0((__int64)v154, (__int64)v8, 0, 0);
              sub_C24210(v117, (__int64)v154[0], (__int64 *)v154[1], 0);
              return v6;
            }
            if ( (unsigned __int8)sub_C11850(a1->m128i_i64[0]) )
              sub_C3FAF0(a1->m128i_i64[0], *((_QWORD *)v8 + 2), v56, v57, v58);
            return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)v8);
          case 43LL:
            return (unsigned int)sub_C41280(a1->m128i_i64, (unsigned __int64)v8, a3, a4, a5);
          case 50LL:
            v59 = *((_QWORD **)v8 + 2);
            v60 = (__int64)(*((_QWORD *)v8 + 3) - (_QWORD)v59) >> 3;
            if ( (_DWORD)v60 )
            {
              if ( (_DWORD)v60 != 1 )
                return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)v8);
              return (unsigned int)sub_C48CF0(a1, *v59);
            }
            else
            {
              v6 = 1;
              sub_C243E0(a1->m128i_i64[1], *(_QWORD *)(a1->m128i_i64[0] + 16), *((_QWORD *)v8 + 1));
            }
            return v6;
          case 51LL:
          case 97LL:
          case 101LL:
            return (unsigned int)sub_C258B0(a1, (__int64)v8);
          case 54LL:
            return (unsigned int)sub_C48CF0(
                                   a1,
                                   *(_QWORD *)&v8[4 * ((*((_DWORD *)v8 + 4) >> 15) & 0x7FFF)
                                                + 16
                                                + 4 * ((*((_BYTE *)v8 + 19) & 0x40) != 0)]);
          case 57LL:
            v103 = *(_DWORD *)(a1->m128i_i64[0] + 272);
            v154[0] = (void *)a1->m128i_i64[0];
            LODWORD(v154[1]) = v103;
            v104 = *((_QWORD *)v154[0] + 4);
            v105 = *(_DWORD *)(v104 + 160) + 1;
            *(_DWORD *)(v104 + 160) = v105;
            sub_9B7040(v104 + 136, v105);
            v6 = sub_C48CF0(a1, *((_QWORD *)v8 + 2));
            if ( (_BYTE)v6 )
            {
              v116 = sub_C553F0(v154[0], 1, LODWORD(v154[1]));
              LODWORD(v154[1]) = -1;
              v6 = v116;
            }
            sub_C559A0(v154);
            return v6;
          case 58LL:
            if ( ((*(_QWORD *)v8 >> 16) & 0x1E0) != 0 )
            {
              sub_BF7B00((__int64)v154, (__int64)v8, a3, a4, a5, a6, v141, v144, v147);
              sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)v154);
              if ( LODWORD(v154[0]) > 1 )
                sub_A4F8E0((int *)v154);
              return 1;
            }
            else
            {
              return (unsigned int)sub_C48CF0(a1, *((_QWORD *)v8 + 2));
            }
          case 61LL:
            return (unsigned int)sub_C41560(a1->m128i_i64, (__int64)v8, a3, a4, a5);
          case 63LL:
            sub_2221C70("Not yet implemented for ExprConstant.cpp", 1);
          case 73LL:
            v8 = *((unsigned __int16 **)v8 + 4);
            continue;
          case 74LL:
            if ( (v8[1] & 8) != 0 )
              v55 = *((unsigned __int16 **)v8 + 3);
            else
              v55 = *((unsigned __int16 **)v8 + 4);
            return (unsigned int)sub_C48CF0(a1, v55);
          case 76LL:
          case 77LL:
          case 78LL:
          case 81LL:
          case 82LL:
          case 83LL:
          case 84LL:
          case 85LL:
            return (unsigned int)sub_C47E70(a1, (__int64)v8, a3, a4, a5);
          case 79LL:
            v106 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], v8, 2417, 0);
            if ( v106 )
              sub_C11320(v106, 0);
            return (unsigned int)sub_C47E70(a1, (__int64)v8, a3, a4, a5);
          case 80LL:
            if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 16) + 2320LL) + 1LL) >= 0 )
            {
              v113 = (unsigned __int8 **)sub_E33C90(a1->m128i_i64[0], v8, 2417, 0);
              if ( v113 )
                sub_C11320(v113, 1);
            }
            return (unsigned int)sub_C47E70(a1, (__int64)v8, a3, a4, a5);
          case 86LL:
          case 87LL:
          case 88LL:
          case 89LL:
          case 90LL:
            return (unsigned int)sub_C7E310(a1, v8);
          case 95LL:
            v25 = a1->m128i_i64[0];
            v6 = *(unsigned __int8 *)(a1->m128i_i64[0] + 914);
            if ( (_BYTE)v6 )
              return 0;
            v26 = *(_QWORD *)(*(_QWORD *)(v25 + 32) + 24LL);
            if ( !v26 || (*(_BYTE *)(v26 + 80) & 0x7Fu) - 35 > 3 )
              goto LABEL_42;
            if ( sub_C1DDA0(v26) )
            {
              v29 = sub_B981D0((_QWORD *)v26, a2);
              if ( v29 )
                goto LABEL_44;
            }
            v25 = a1->m128i_i64[0];
LABEL_42:
            v27 = *(const __m128i **)(*(_QWORD *)(v25 + 32) + 32LL);
            if ( v27 )
            {
              v28 = (__m128i *)a1->m128i_i64[1];
              v29 = 0;
              *v28 = _mm_loadu_si128(v27);
              v28[1].m128i_i64[0] = v27[1].m128i_i64[0];
              v30 = v27[1].m128i_i8[8] & 1 | v28[1].m128i_i8[8] & 0xFE;
              v28[1].m128i_i8[8] = v30;
              v31 = v27[1].m128i_i8[8] & 2 | v30 & 0xFD;
              v28[1].m128i_i8[8] = v31;
              v32 = v27[1].m128i_i8[8] & 4 | v31 & 0xFB;
              v28[1].m128i_i8[8] = v32;
              v28[1].m128i_i8[8] = v27[1].m128i_i8[8] & 8 | v32 & 0xF7;
              v28[1].m128i_i32[2] = v27[1].m128i_i32[2] & 0xFFFFFFF0 | v28[1].m128i_i32[2] & 0xF;
              v28[2].m128i_i64[0] = v27[2].m128i_i64[0];
              v28[2].m128i_i64[1] = v27[2].m128i_i64[1];
              sub_C25E10(v28[3].m128i_i64, v27[3].m128i_i64);
              v33 = v27[8].m128i_i8[0] & 1 | v28[8].m128i_i8[0] & 0xFE;
              v28[8].m128i_i8[0] = v33;
              v28[8].m128i_i8[0] = v27[8].m128i_i8[0] & 2 | v33 & 0xFD;
              v28[8].m128i_i8[1] = v27[8].m128i_i8[1];
LABEL_44:
              v34 = *(_QWORD *)(*(_QWORD *)(a1->m128i_i64[0] + 32) + 24LL);
              if ( !v34 || (*(_BYTE *)(v34 + 80) & 0x7Fu) - 35 > 3 || !sub_C1DDA0(v34) )
                return 1;
              v35 = a1->m128i_i64[0];
              v36 = *(_QWORD **)(a1->m128i_i64[0] + 32);
              v37 = v36[24];
              if ( v37 )
              {
                v38 = (_QWORD *)v36[3];
                v39 = (__m128i *)a1->m128i_i64[1];
                v40 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
                if ( sub_B979F0(v38) )
                  return 0;
                else
                  return (unsigned int)sub_C36A70(v35, v8, v39, v38, v37, v40 == 42);
              }
              if ( !v29 || v36[4] )
                return 1;
              if ( (*(_BYTE *)(sub_E32240(a1->m128i_i64[0]) + 1) & 0x10) != 0 )
              {
                v125 = (_QWORD *)sub_E33C10(a1->m128i_i64[0], v8, 2488, 0);
                v126 = v125;
                if ( v125 )
                {
                  v127 = (*(_QWORD *)v8 & 0x80000LL) != 0;
                  if ( !*v125 )
                  {
                    v130 = v125[1];
                    v131 = *(_DWORD *)(v130 + 14976);
                    if ( v131 )
                    {
                      v135 = (unsigned int)(v131 - 1);
                      *(_DWORD *)(v130 + 14976) = v135;
                      v132 = *(_QWORD *)(v130 + 8 * v135 + 14848);
                      v136 = *(unsigned int *)(v132 + 536);
                      *(_BYTE *)v132 = 0;
                      v137 = *(_QWORD *)(v132 + 528);
                      *(_DWORD *)(v132 + 424) = 0;
                      v138 = v137 + (v136 << 6);
                      while ( v137 != v138 )
                      {
                        v138 -= 64;
                        v139 = *(void **)(v138 + 24);
                        if ( v139 != (void *)(v138 + 40) )
                          operator delete(v139);
                      }
                      *(_DWORD *)(v132 + 536) = 0;
                    }
                    else
                    {
                      v132 = operator new(0x3A0u);
                      *(_BYTE *)v132 = 0;
                      v133 = v132 + 96;
                      do
                      {
                        v134 = v133 + 16;
                        *(_QWORD *)(v133 + 8) = 0;
                        v133 += 32;
                        *(_QWORD *)(v133 - 32) = v134;
                        *(_BYTE *)(v133 - 16) = 0;
                      }
                      while ( v133 != v132 + 416 );
                      *(_QWORD *)(v132 + 416) = v132 + 432;
                      *(_QWORD *)(v132 + 424) = 0x800000000LL;
                      *(_QWORD *)(v132 + 528) = v132 + 544;
                      *(_QWORD *)(v132 + 536) = 0x600000000LL;
                    }
                    *v126 = v132;
                  }
                  *(_BYTE *)(*v126 + *(unsigned __int8 *)*v126 + 1LL) = 2;
                  v128 = (_BYTE *)*v126;
                  v129 = *(unsigned __int8 *)*v126;
                  *v128 = v129 + 1;
                  *(_QWORD *)&v128[8 * v129 + 16] = v127;
                }
                return v6;
              }
            }
            else if ( (*(_BYTE *)(sub_E32240(v25) + 1) & 0x10) != 0 )
            {
              v123 = (unsigned __int8 **)sub_E33C10(a1->m128i_i64[0], v8, 2488, 0);
              if ( v123 )
                sub_C11320(v123, (*(_QWORD *)v8 & 0x80000LL) != 0);
              return v6;
            }
            sub_E33C10(a1->m128i_i64[0], v8, 108, 0);
            return v6;
          case 103LL:
            return (unsigned int)sub_C7AE40(a1, v8);
          case 108LL:
            v41 = *(_QWORD *)(a1->m128i_i64[0] + 32);
            v42 = *(_DWORD *)(v41 + 160) + 1;
            *(_DWORD *)(v41 + 160) = v42;
            sub_9B7040(v41 + 136, v42);
            if ( sub_C94CC0(v8) )
            {
              v43 = *(_QWORD *)(a1->m128i_i64[0] + 32);
              if ( *(_QWORD *)(v43 + 64) )
              {
                v114 = sub_C94CC0(v8);
                v6 = sub_C48CF0(a1, v114);
              }
              else
              {
                *(_QWORD *)(v43 + 64) = v8;
                v44 = sub_C94CC0(v8);
                v45 = sub_C48CF0(a1, v44);
                *(_QWORD *)(v43 + 64) = 0;
                v6 = v45;
              }
            }
            else
            {
              v6 = sub_C14310(a1->m128i_i64[0], (__int64)v8);
            }
            --*(_DWORD *)(v41 + 144);
            return v6;
          case 109LL:
            v46 = *(_QWORD *)(a1->m128i_i64[0] + 32);
            v47 = *(_DWORD *)(v46 + 160) + 1;
            *(_DWORD *)(v46 + 160) = v47;
            sub_9B7040(v46 + 136, v47);
            v48 = *(_QWORD *)(a1->m128i_i64[0] + 32);
            if ( *(_QWORD *)(v48 + 64) )
            {
              v112 = sub_C94C80(v8);
              v6 = sub_C48CF0(a1, v112);
            }
            else
            {
              *(_QWORD *)(v48 + 64) = v8;
              v49 = sub_C94C80(v8);
              v50 = sub_C48CF0(a1, v49);
              *(_QWORD *)(v48 + 64) = 0;
              v6 = v50;
            }
            --*(_DWORD *)(v46 + 144);
            return v6;
          case 114LL:
            v51 = *((_QWORD *)v8 + 2);
            if ( *(_DWORD *)(v51 + 112) || (*(_BYTE *)(v51 + 49) & 0x40) != 0 )
              return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)v8);
            v52 = a1->m128i_i64[1];
            v6 = 1;
            sub_A4F2D0((__int64)v154, (__int64)v8, 0, 0);
            sub_C24210(v52, (__int64)v154[0], (__int64 *)v154[1], 0);
            return v6;
          case 115LL:
          case 116LL:
            return (unsigned int)sub_C601F0(a1, v8);
          case 125LL:
            v16 = (_WORD *)sub_BFD550(*((_QWORD *)v8 + 3));
            v18 = *v16 & 0x1FF;
            if ( v18 <= 0x58u || v18 > 0x5Du )
            {
              v20 = a1->m128i_i64[0];
            }
            else
            {
              v19 = (unsigned int)sub_BFBE70((__int64)v16) == 214;
              v20 = a1->m128i_i64[0];
              if ( v19 )
              {
                v6 = 0;
                if ( *(_BYTE *)(v20 + 914) )
                  return v6;
                v154[0] = (void *)a1->m128i_i64[0];
                LOBYTE(v154[1]) = 1;
                v23 = *(_QWORD *)(v20 + 24);
                v121 = *(_DWORD *)(v20 + 916);
                v122 = *(_QWORD *)(v23 + 8);
                if ( v122 && !*(_DWORD *)(v122 + 8) )
                {
                  v140 = *(unsigned __int8 *)v23;
                  HIDWORD(v154[1]) = *(_DWORD *)(v20 + 916);
                  v23 = v140 ^ 1u;
                  BYTE1(v154[1]) = v23;
                }
                else
                {
                  BYTE1(v154[1]) = 0;
                  HIDWORD(v154[1]) = v121;
                }
                *(_DWORD *)(v20 + 916) = 2;
LABEL_30:
                if ( (unsigned __int8)sub_C3FB70(*((_QWORD *)v8 + 3), &v152, a1->m128i_i64[0], v23, v17) )
                {
                  if ( v152.m128i_i8[0] )
                    v115 = *((_QWORD *)v8 + 4);
                  else
                    v115 = *((_QWORD *)v8 + 5);
                  v6 = sub_C48CF0(a1, v115);
                  if ( (_BYTE)v6 )
                    goto LABEL_36;
                }
                else if ( *(_BYTE *)(a1->m128i_i64[0] + 914) && (unsigned __int8)sub_C11850(a1->m128i_i64[0]) )
                {
                  sub_C4CB40(a1, v8);
                }
                else if ( (unsigned __int8)sub_C11850(a1->m128i_i64[0]) )
                {
                  sub_C48CF0(a1, *((_QWORD *)v8 + 4));
                  sub_C48CF0(a1, *((_QWORD *)v8 + 5));
                }
                LOBYTE(v154[1]) = 0;
                v6 = 0;
LABEL_36:
                sub_C23B30((__int64 *)v154);
                return v6;
              }
            }
            v154[0] = (void *)v20;
            LOBYTE(v154[1]) = 0;
            v21 = *(char **)(v20 + 24);
            v22 = *(_DWORD *)(v20 + 916);
            v23 = *((_QWORD *)v21 + 1);
            if ( !v23 || (v23 = *(unsigned int *)(v23 + 8), (_DWORD)v23) )
            {
              BYTE1(v154[1]) = 0;
              HIDWORD(v154[1]) = v22;
            }
            else
            {
              v24 = *v21;
              HIDWORD(v154[1]) = v22;
              BYTE1(v154[1]) = v24 ^ 1;
            }
            goto LABEL_30;
          case 126LL:
            return (unsigned int)sub_C4CE40(a1, v8);
          default:
            BUG();
        }
      }
      break;
    }
    a3 = *((_BYTE *)v8 + 2) >> 3;
    switch ( (char)a3 )
    {
      case 0:
        v11 = sub_E32240(a1->m128i_i64[0]);
        v12 = a1->m128i_i64[0];
        if ( (*(_BYTE *)(v11 + 1) & 0x20) == 0
          && (!*(_DWORD *)(v12 + 48) || !*(_BYTE *)(v12 + 914) && !*(_BYTE *)(v12 + 915)) )
        {
          goto LABEL_15;
        }
        v154[0] = nullptr;
        v156 |= 1u;
        ptr = v160;
        v154[1] = nullptr;
        v155 = 0;
        v157 = 0;
        v159 = 0x800000000LL;
        v161 = 0;
        v110 = *((_QWORD *)v8 + 2);
        v152.m128i_i64[0] = v12;
        v152.m128i_i64[1] = (__int64)v154;
        v153 = 0;
        v6 = sub_C5C820(&v152, v110);
        if ( (_BYTE)v6 )
        {
          v152.m128i_i8[4] &= ~1u;
          v111 = (__int64 *)a1->m128i_i64[0];
          v152.m128i_i32[0] = 0;
          v6 = sub_C31D20(
                 v111,
                 (__int64 *)v8,
                 (__m128i *)v154,
                 *(_QWORD *)(*((_QWORD *)v8 + 2) + 8LL),
                 ((*((_BYTE *)v8 + 2) >> 3) & 0x1D) == 0,
                 (__int64)&v152);
          if ( (_BYTE)v6 )
            sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v152);
          if ( v152.m128i_i32[0] > 1u )
            sub_A4F8E0(v152.m128i_i32);
        }
        v109 = ptr;
        if ( ptr != v160 )
          goto LABEL_148;
        return v6;
      case 1:
        v13 = sub_E32240(a1->m128i_i64[0]);
        v12 = a1->m128i_i64[0];
        if ( (*(_BYTE *)(v13 + 1) & 0x20) != 0
          || *(_DWORD *)(v12 + 48) && (*(_BYTE *)(v12 + 914) || *(_BYTE *)(v12 + 915)) )
        {
          v154[0] = nullptr;
          v156 |= 1u;
          ptr = v160;
          v154[1] = nullptr;
          v155 = 0;
          v157 = 0;
          v159 = 0x800000000LL;
          v161 = 0;
          v107 = *((_QWORD *)v8 + 2);
          v152.m128i_i64[0] = v12;
          v152.m128i_i64[1] = (__int64)v154;
          v153 = 0;
          v6 = sub_C5C820(&v152, v107);
          if ( (_BYTE)v6 )
          {
            v152.m128i_i8[4] &= ~1u;
            v108 = (__int64 *)a1->m128i_i64[0];
            v152.m128i_i32[0] = 0;
            v6 = sub_C31D20(
                   v108,
                   (__int64 *)v8,
                   (__m128i *)v154,
                   *(_QWORD *)(*((_QWORD *)v8 + 2) + 8LL),
                   ((*((_BYTE *)v8 + 2) >> 3) & 0x1D) == 0,
                   (__int64)&v152);
            if ( (_BYTE)v6 )
              sub_C245D0(a1->m128i_i64[1], *(_QWORD **)(a1->m128i_i64[0] + 16), (__int64)&v152);
            if ( v152.m128i_i32[0] > 1u )
              sub_A4F8E0(v152.m128i_i32);
          }
          v109 = ptr;
          if ( ptr != v160 )
LABEL_148:
            free(v109);
        }
        else
        {
LABEL_15:
          v6 = sub_C14310(v12, (__int64)v8);
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
        return (unsigned int)sub_C14310(a1->m128i_i64[0], (__int64)v8);
      case 4:
        v14 = *((_QWORD *)v8 + 2);
        v15 = a1[1].m128i_i8[0];
        *(__m128i *)v154 = _mm_loadu_si128(a1);
        LOBYTE(v155) = v15;
        return (unsigned int)sub_C5C820(v154, v14);
      case 6:
      case 12:
LABEL_8:
        v8 = *((unsigned __int16 **)v8 + 2);
        continue;
      default:
        a3 = *((_BYTE *)v8 + 2) >> 3;
        goto LABEL_7;
    }
    return v6;
  }
}
