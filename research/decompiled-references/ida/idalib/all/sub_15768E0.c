__int64 __fastcall sub_15768E0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __m128i a7,
        double a8)
{
  __int64 v9; // r14
  __int64 *v11; // rbp
  char v13; // al
  char v14; // al
  unsigned int v15; // r8d
  __int64 v16; // rbx
  __int64 *v18; // rsi
  char v19; // al
  unsigned int v20; // r8d
  char v21; // al
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  void *v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  void *v28; // rdi
  void **v29; // r8
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  __int128 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  void *v39; // rdi
  void **p_ptr; // r8
  void *v41; // rdi
  __m128i si128; // xmm4
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rdi
  __m128i v47; // xmm3
  int v48; // eax
  __int64 *v49; // rdi
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // r14
  bool v53; // zf
  void *v54; // rdi
  unsigned __int64 v55; // rax
  void *v56; // rax
  unsigned __int16 v57; // r14
  __int64 v58; // rax
  unsigned __int8 *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rax
  void **v62; // rbp
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // rbx
  void *v66; // rdi
  void **v67; // rdi
  void **v68; // rdi
  void **v69; // rbx
  void **v70; // r12
  char v71; // r14
  __int64 v72; // rax
  __int64 v73; // r15
  unsigned int v74; // eax
  unsigned __int64 v75; // r15
  char v76; // al
  void *v77; // r14
  __int64 *v78; // rdi
  __int64 *v79; // rdi
  void *v80; // rax
  char v81; // r14
  __int64 v82; // rdx
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rbp
  __int64 v87; // r12
  __int64 v88; // rbp
  void *v89; // rdi
  unsigned int v93; // [rsp+8h] [rbp-240h]
  _WORD *v94; // [rsp+8h] [rbp-240h]
  unsigned __int64 v95; // [rsp+8h] [rbp-240h]
  unsigned int v96; // [rsp+10h] [rbp-238h]
  unsigned int v97; // [rsp+10h] [rbp-238h]
  unsigned int v98; // [rsp+10h] [rbp-238h]
  char v99; // [rsp+10h] [rbp-238h]
  char v100; // [rsp+10h] [rbp-238h]
  _BYTE *v101; // [rsp+20h] [rbp-228h] BYREF
  char v102; // [rsp+28h] [rbp-220h]
  __int64 v103; // [rsp+30h] [rbp-218h]
  int v104; // [rsp+38h] [rbp-210h]
  __int16 v105; // [rsp+3Ch] [rbp-20Ch]
  __int64 (__fastcall *v106)(__int64); // [rsp+40h] [rbp-208h]
  __int64 v107; // [rsp+48h] [rbp-200h]
  __int64 v108; // [rsp+50h] [rbp-1F8h]
  _BYTE v109[24]; // [rsp+60h] [rbp-1E8h] BYREF
  _BYTE v110[40]; // [rsp+78h] [rbp-1D0h] BYREF
  void *v111[2]; // [rsp+A0h] [rbp-1A8h] BYREF
  void *v112; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v113; // [rsp+B8h] [rbp-190h]
  _BYTE v114[48]; // [rsp+C0h] [rbp-188h] BYREF
  _BYTE v115[24]; // [rsp+F0h] [rbp-158h] BYREF
  void *ptr; // [rsp+108h] [rbp-140h] BYREF
  void *v117; // [rsp+110h] [rbp-138h]
  __int64 v118; // [rsp+118h] [rbp-130h] BYREF
  __int64 v119; // [rsp+120h] [rbp-128h] BYREF
  void *v120; // [rsp+130h] [rbp-118h] BYREF
  __int64 v121; // [rsp+138h] [rbp-110h]
  _BYTE v122[48]; // [rsp+140h] [rbp-108h] BYREF
  _BYTE v123[4]; // [rsp+170h] [rbp-D8h] BYREF
  unsigned int v124; // [rsp+174h] [rbp-D4h]
  __int64 v125; // [rsp+178h] [rbp-D0h]
  _BYTE v126[24]; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v127; // [rsp+198h] [rbp-B0h] BYREF
  __int64 v128; // [rsp+1A0h] [rbp-A8h] BYREF
  char **v129[2]; // [rsp+1C0h] [rbp-88h] BYREF
  __int64 v130; // [rsp+1D0h] [rbp-78h] BYREF
  unsigned __int8 v131; // [rsp+200h] [rbp-48h]

  v9 = (unsigned __int8)a5;
  v11 = a2;
  v101 = (_BYTE *)(a1 + 1952);
  v13 = *(_BYTE *)(a1 + 1952);
  v103 = a1;
  v102 = v13;
  v106 = sub_146A990;
  *(_BYTE *)(a1 + 1952) = 1;
  v105 = 451;
  v104 = 1507350;
  v107 = 0;
  v108 = 0;
  v123[0] = a4;
  v123[1] = a5;
  v124 = a6;
  v125 = 0;
  v131 = 0;
  switch ( (char)a5 )
  {
    case 0:
    case 29:
    case 46:
    case 48:
    case 49:
      goto LABEL_4;
    case 1:
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
    case 28:
    case 30:
    case 31:
    case 34:
    case 35:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 44:
    case 45:
    case 47:
      v18 = (_QWORD *)(byte_9 + 5);
      v97 = a6;
      v19 = sub_156A040((__int64)&v101, 14, (char *)&byte_22F0C30, 0, a7, a8);
      v20 = a5;
      if ( v19 )
        goto LABEL_15;
      HIDWORD(v125) = v108;
      switch ( v9 )
      {
        case 1LL:
        case 19LL:
        case 20LL:
        case 21LL:
        case 23LL:
        case 24LL:
        case 28LL:
        case 30LL:
        case 34LL:
        case 35LL:
        case 39LL:
        case 40LL:
        case 42LL:
        case 45LL:
          goto LABEL_52;
        case 3LL:
          *(_QWORD *)&v35 = sub_1572560(a1);
          v36 = v131;
          *(_OWORD *)v109 = v35;
          *(_OWORD *)v111 = v35;
          *(_OWORD *)v115 = v35;
          if ( v131 == 0xFF )
            goto LABEL_77;
          if ( v131 == 10 )
          {
            *(_OWORD *)v126 = v35;
          }
          else
          {
            funcs_1576A39[v131]();
LABEL_77:
            si128 = _mm_load_si128((const __m128i *)v115);
            v131 = 10;
            *(__m128i *)v126 = si128;
          }
          *(__m128i *)v115 = _mm_load_si128((const __m128i *)v126);
          if ( !v115[8] )
            goto LABEL_44;
          goto LABEL_64;
        case 4LL:
          v71 = sub_1573670((const __m128i *)a1, 4, 4);
          v72 = sub_14C4CD0((const __m128i *)a1, a7);
          if ( v72 == 1 )
            goto LABEL_44;
          v95 = v72 & 0xFFFFFFFFFFFFFFFELL;
          v73 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL);
          v74 = sub_EEB7E0(v72 & 0xFFFFFFFFFFFFFFFELL, 4, *(double *)a7.m128i_i64);
          v18 = (_QWORD *)&dword_14;
          *(_QWORD *)&v35 = sub_1AA2500(v73, 20, 4, v74, v95);
          if ( (_QWORD)v35 == 1 )
            goto LABEL_44;
          v75 = v35 & 0xFFFFFFFFFFFFFFFELL;
          if ( v131 == 0xFF )
            goto LABEL_149;
          if ( v131 == 8 )
          {
            v126[0] = v71;
            *(_QWORD *)&v126[8] = v35 & 0xFFFFFFFFFFFFFFFELL;
          }
          else
          {
            funcs_1576A39[v131]();
LABEL_149:
            v126[0] = v71;
            *(_QWORD *)&v126[8] = v75;
            v131 = 8;
          }
          goto LABEL_64;
        case 5LL:
        case 6LL:
        case 7LL:
        case 8LL:
        case 9LL:
        case 10LL:
        case 11LL:
        case 12LL:
        case 13LL:
        case 14LL:
        case 15LL:
        case 16LL:
          v18 = (__int64 *)a1;
          v99 = sub_1573CE0((const __m128i *)a1, a5);
          sub_1572900((__int64)v111, a1, a4, a5, a7, a8);
          v36 = LODWORD(v111[1]);
          *(_QWORD *)v115 = &v115[16];
          *(_QWORD *)&v115[8] = 0x600000000LL;
          if ( LODWORD(v111[1]) )
          {
            v18 = (__int64 *)v111;
            sub_1576230((char ***)v115, (char ***)v111);
          }
          LOBYTE(v120) = v99;
          v38 = v131;
          if ( v131 == 0xFF )
            goto LABEL_57;
          goto LABEL_55;
        case 17LL:
          v56 = *(void **)(a1 + 32);
          v57 = *(_WORD *)(a1 + 32);
          *(__m128i *)v111 = _mm_loadu_si128((const __m128i *)(a1 + 16));
          v112 = v56;
          if ( v57 != 5 )
          {
            if ( (v94 = *(_WORD **)(a1 + 24), sub_10CCDE0(v57))
              || v57 <= 0x13u && (v58 = 982656, _bittest64(&v58, v57))
              || v57 == 1
              || ((v57 - 8) & 0xFFF7) == 0
              || !v94
              || !sub_FDE0B0(v94, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
            {
              sub_1564840((__int64)v115, a1, (int *)(a1 + 16), 14);
              v59 = *(unsigned __int8 **)v115;
              if ( !*(_QWORD *)v115 )
              {
                v83 = *(_QWORD *)&v115[8];
                v84 = *(_DWORD *)(*(_QWORD *)&v115[8] + 14976LL);
                if ( v84 )
                {
                  v85 = (unsigned int)(v84 - 1);
                  *(_DWORD *)(*(_QWORD *)&v115[8] + 14976LL) = v85;
                  v59 = *(unsigned __int8 **)(v83 + 8 * v85 + 14848);
                  v86 = *((unsigned int *)v59 + 134);
                  *v59 = 0;
                  v87 = *((_QWORD *)v59 + 66);
                  *((_DWORD *)v59 + 106) = 0;
                  v88 = v87 + (v86 << 6);
                  while ( v87 != v88 )
                  {
                    while ( 1 )
                    {
                      v88 -= 64;
                      v89 = *(void **)(v88 + 24);
                      if ( v89 == (void *)(v88 + 40) )
                        break;
                      operator delete(v89);
                      if ( v87 == v88 )
                        goto LABEL_265;
                    }
                  }
LABEL_265:
                  *((_DWORD *)v59 + 134) = 0;
                }
                else
                {
                  v59 = (unsigned __int8 *)operator new(0x3A0u);
                  *v59 = 0;
                  *((_QWORD *)v59 + 12) = v59 + 112;
                  *((_QWORD *)v59 + 16) = v59 + 144;
                  *((_QWORD *)v59 + 20) = v59 + 176;
                  *((_QWORD *)v59 + 24) = v59 + 208;
                  *((_QWORD *)v59 + 28) = v59 + 240;
                  *((_QWORD *)v59 + 32) = v59 + 272;
                  *((_QWORD *)v59 + 36) = v59 + 304;
                  *((_QWORD *)v59 + 40) = v59 + 336;
                  *((_QWORD *)v59 + 44) = v59 + 368;
                  *((_QWORD *)v59 + 48) = v59 + 400;
                  *((_QWORD *)v59 + 52) = v59 + 432;
                  v59[112] = 0;
                  *((_QWORD *)v59 + 13) = 0;
                  *((_QWORD *)v59 + 17) = 0;
                  v59[144] = 0;
                  *((_QWORD *)v59 + 21) = 0;
                  v59[176] = 0;
                  *((_QWORD *)v59 + 25) = 0;
                  v59[208] = 0;
                  *((_QWORD *)v59 + 29) = 0;
                  v59[240] = 0;
                  *((_QWORD *)v59 + 33) = 0;
                  v59[272] = 0;
                  *((_QWORD *)v59 + 37) = 0;
                  v59[304] = 0;
                  *((_QWORD *)v59 + 41) = 0;
                  v59[336] = 0;
                  *((_QWORD *)v59 + 45) = 0;
                  v59[368] = 0;
                  *((_QWORD *)v59 + 49) = 0;
                  v59[400] = 0;
                  *((_QWORD *)v59 + 53) = 0x800000000LL;
                  *((_QWORD *)v59 + 66) = v59 + 544;
                  *((_QWORD *)v59 + 67) = 0x600000000LL;
                }
                *(_QWORD *)v115 = v59;
              }
              v59[*v59 + 1] = 4;
              v60 = *(_QWORD *)v115;
              v61 = (unsigned __int8)**(_BYTE **)v115;
              **(_BYTE **)v115 = v61 + 1;
              *(_QWORD *)(v60 + 8 * v61 + 16) = 5;
              if ( (_BYTE)v120 )
              {
                sub_FC7790(*(__int64 *)&v115[16], (__int64 *)v115, SBYTE1(v120));
                *(_QWORD *)&v115[16] = 0;
                LOWORD(v120) = 0;
              }
              if ( v117 != &v119 )
                operator delete(v117);
              v62 = *(void ***)v115;
              if ( *(_QWORD *)v115 )
              {
                v63 = *(_QWORD *)&v115[8];
                if ( *(_QWORD *)&v115[8] )
                {
                  if ( *(_QWORD *)v115 < *(_QWORD *)&v115[8]
                    || *(_QWORD *)v115 > (unsigned __int64)(*(_QWORD *)&v115[8] + 14848LL) )
                  {
                    v64 = *(_QWORD *)(*(_QWORD *)v115 + 528LL);
                    v65 = v64 + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v115 + 536LL) << 6);
                    while ( v64 != v65 )
                    {
                      while ( 1 )
                      {
                        v65 -= 64;
                        v66 = *(void **)(v65 + 24);
                        if ( v66 == (void *)(v65 + 40) )
                          break;
                        operator delete(v66);
                        if ( v64 == v65 )
                          goto LABEL_132;
                      }
                    }
LABEL_132:
                    v67 = (void **)v62[66];
                    if ( v67 != v62 + 68 )
                      free(v67);
                    v68 = (void **)v62[52];
                    v69 = v62 + 52;
                    if ( v68 != v62 + 54 )
                      free(v68);
                    v70 = v62 + 12;
                    while ( 1 )
                    {
                      v69 -= 4;
                      if ( *v69 == v69 + 2 )
                      {
                        if ( v69 == v70 )
                        {
LABEL_139:
                          operator delete(v62, 0x3A0u);
                          goto LABEL_44;
                        }
                      }
                      else
                      {
                        operator delete(*v69);
                        if ( v69 == v70 )
                          goto LABEL_139;
                      }
                    }
                  }
                  v82 = *(unsigned int *)(*(_QWORD *)&v115[8] + 14976LL);
                  *(_DWORD *)(*(_QWORD *)&v115[8] + 14976LL) = v82 + 1;
                  *(_QWORD *)(v63 + 8 * v82 + 14848) = v62;
                }
              }
              goto LABEL_44;
            }
          }
          v78 = *(__int64 **)(a1 + 8);
          v18 = (__int64 *)(a1 + 16);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v78, (int *)(a1 + 16));
          if ( (_WORD)v112 != 5 )
          {
LABEL_213:
            sub_1564840((__int64)v115, a1, (int *)v111, 1526);
            sub_AEA040((__int64)v115);
            goto LABEL_44;
          }
          *(_QWORD *)&v35 = *((_QWORD *)v111[1] + 2);
          *((_QWORD *)&v35 + 1) = *(unsigned int *)v35;
          if ( *((_QWORD *)&v35 + 1) == 4 )
          {
            if ( *(_DWORD *)(v35 + 16) != 1701736302 )
              goto LABEL_213;
            v81 = 0;
          }
          else
          {
            if ( *((_QWORD *)&v35 + 1) != 7 )
              goto LABEL_213;
            v18 = (__int64 *)"present";
            v81 = 1;
            if ( memcmp((const void *)(v35 + 16), "present", 7u) )
              goto LABEL_213;
          }
          if ( v131 == 0xFF )
            goto LABEL_246;
          if ( v131 != 1 )
          {
            funcs_1576A39[v131]();
LABEL_246:
            v126[0] = v81;
            v131 = 1;
            goto LABEL_64;
          }
          v126[0] = v81;
          goto LABEL_64;
        case 18LL:
        case 22LL:
        case 38LL:
        case 47LL:
          v18 = (_QWORD *)&dword_14;
          v55 = sub_15708E0(a1, 0x14u, a5, v97, a7);
          if ( v55 == 1 )
            goto LABEL_44;
          *(_QWORD *)&v115[16] = v55 & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)&v115[8] = 0x600000001LL;
          *(_QWORD *)v115 = &v115[16];
          if ( v131 == 0xFF )
          {
            *(_QWORD *)v126 = &v126[16];
            *(_QWORD *)&v126[8] = 0x600000000LL;
            goto LABEL_239;
          }
          if ( v131 != 3 )
          {
            funcs_1576A39[v131]();
            *(_QWORD *)v126 = &v126[16];
            *(_QWORD *)&v126[8] = 0x600000000LL;
            if ( !*(_DWORD *)&v115[8] )
            {
LABEL_113:
              v131 = 3;
              goto LABEL_114;
            }
LABEL_239:
            v18 = (__int64 *)v115;
            sub_1576230((char ***)v126, (char ***)v115);
            goto LABEL_113;
          }
          v18 = (__int64 *)v115;
          sub_1576230((char ***)v126, (char ***)v115);
LABEL_114:
          v41 = *(void **)v115;
          p_ptr = (void **)&v115[16];
          if ( *(_BYTE **)v115 == &v115[16] )
            goto LABEL_64;
          goto LABEL_63;
        case 25LL:
        case 26LL:
          v53 = *(_WORD *)(a1 + 32) == 31;
          *(_QWORD *)v109 = &v109[16];
          *(_QWORD *)&v109[8] = 0x300000000LL;
          if ( v53 )
          {
            v79 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v79, (int *)(a1 + 16));
            v18 = (__int64 *)v111;
            *(_QWORD *)&v115[8] = 0x300000000LL;
            v111[0] = &v112;
            v80 = (void *)*(unsigned int *)(a1 + 40);
            v113 = 0;
            v112 = v80;
            v111[1] = (void *)0x300000001LL;
            *(_QWORD *)v115 = &v115[16];
            sub_1576790((char ***)v115, (char ***)v111);
            if ( v131 != 0xFF )
            {
              if ( v131 == 6 )
              {
                v18 = (__int64 *)v115;
                sub_1576790((char ***)v126, (char ***)v115);
                goto LABEL_225;
              }
              funcs_1576A39[v131]();
            }
            *(_QWORD *)v126 = &v126[16];
            *(_QWORD *)&v126[8] = 0x300000000LL;
            if ( *(_DWORD *)&v115[8] )
            {
              v18 = (__int64 *)v115;
              sub_1576790((char ***)v126, (char ***)v115);
            }
            v131 = 6;
LABEL_225:
            p_ptr = (void **)&v115[16];
            if ( *(_BYTE **)v115 != &v115[16] )
              free(*(void **)v115);
            v54 = v111[0];
            if ( v111[0] == &v112 )
            {
LABEL_107:
              v41 = *(void **)v109;
              if ( *(_BYTE **)v109 != &v109[16] )
                goto LABEL_63;
              goto LABEL_64;
            }
LABEL_106:
            free(v54);
            goto LABEL_107;
          }
          v18 = (__int64 *)v109;
          if ( !(unsigned __int8)sub_1570B00(a1, (__int64)v109, a7, a8) )
          {
            *(_QWORD *)&v115[8] = 0x300000000LL;
            *(_QWORD *)v115 = &v115[16];
            if ( *(_DWORD *)&v109[8] )
            {
              v18 = (__int64 *)v109;
              sub_1576790((char ***)v115, (char ***)v109);
            }
            if ( v131 != 0xFF )
            {
              if ( v131 == 6 )
              {
                v18 = (__int64 *)v115;
                sub_1576790((char ***)v126, (char ***)v115);
                goto LABEL_105;
              }
              funcs_1576A39[v131]();
            }
            *(_QWORD *)v126 = &v126[16];
            *(_QWORD *)&v126[8] = 0x300000000LL;
            if ( *(_DWORD *)&v115[8] )
            {
              v18 = (__int64 *)v115;
              sub_1576790((char ***)v126, (char ***)v115);
            }
            v131 = 6;
LABEL_105:
            v54 = *(void **)v115;
            p_ptr = (void **)&v115[16];
            if ( *(_BYTE **)v115 == &v115[16] )
              goto LABEL_107;
            goto LABEL_106;
          }
          v16 = 4;
          sub_156E210((__int64)&v101);
          v25 = *(void **)v109;
          if ( *(_BYTE **)v109 != &v109[16] )
            goto LABEL_20;
LABEL_9:
          if ( v131 != 0xFF )
            funcs_1576A39[v131]();
          *v101 = v102;
          return v16;
        case 31LL:
          v50 = 0;
          v51 = sub_1570860((const __m128i *)a1, a7);
          *((_QWORD *)&v35 + 1) = v131;
          v52 = v51;
          *(_QWORD *)&v35 = v51 & 0xFFFFFFFFFFFFFFFELL;
          if ( v52 > 1 )
            v50 = v35;
          if ( BYTE8(v35) == 0xFF )
            goto LABEL_92;
          if ( BYTE8(v35) == 2 )
          {
            *(_QWORD *)v126 = v50;
          }
          else
          {
            funcs_1576A39[v131]();
LABEL_92:
            *(_QWORD *)v126 = v50;
            v131 = 2;
          }
          if ( v52 == 1 )
            goto LABEL_44;
          goto LABEL_64;
        case 37LL:
          v18 = (_QWORD *)&dword_14;
          v111[1] = (void *)0x600000000LL;
          v111[0] = &v112;
          if ( (unsigned __int8)sub_1570940(a1, 0x14u, 0x25u, v97, (__int64)v111, a7, a8) )
            goto LABEL_171;
          *(_QWORD *)&v115[8] = 0x600000000LL;
          *(_QWORD *)v115 = &v115[16];
          if ( LODWORD(v111[1]) )
            goto LABEL_86;
          goto LABEL_68;
        case 41LL:
          v43 = *(_QWORD *)(a1 + 8);
          v44 = *(_QWORD *)(v43 + 2944);
          if ( v44 >= *(unsigned int *)(v43 + 2912) )
            v45 = sub_14180A0(v43, 1u);
          else
            v45 = *(_QWORD *)(v43 + 2904) + 24 * v44;
          if ( *(_WORD *)(v45 + 16) != 62 )
          {
            sub_1564840((__int64)v115, a1, (int *)(a1 + 16), 1523);
            sub_AEA040((__int64)v115);
            v76 = 9;
            goto LABEL_151;
          }
          break;
        case 44LL:
          v18 = &qword_28 + 4;
          v111[1] = (void *)0x600000000LL;
          v111[0] = &v112;
          LOBYTE(v35) = sub_1571690((const __m128i *)a1, 44, (__int64)v111, a7, a8);
          v36 = 0x600000000LL;
          if ( (_BYTE)v35 )
          {
LABEL_171:
            v16 = 4;
            sub_156E210((__int64)&v101);
            v25 = v111[0];
            if ( v111[0] != &v112 )
LABEL_20:
              free(v25);
            goto LABEL_9;
          }
          *(_QWORD *)&v115[8] = 0x600000000LL;
          *(_QWORD *)v115 = &v115[16];
          if ( LODWORD(v111[1]) )
          {
LABEL_86:
            v18 = (__int64 *)v111;
            sub_1576230((char ***)v115, (char ***)v111);
          }
LABEL_68:
          if ( v131 != 0xFF )
          {
            if ( v131 == 3 )
            {
              v18 = (__int64 *)v115;
              sub_1576230((char ***)v126, (char ***)v115);
              goto LABEL_60;
            }
            funcs_1576A39[v131]();
          }
          v37 = *(unsigned int *)&v115[8];
          *(_QWORD *)v126 = &v126[16];
          *(_QWORD *)&v126[8] = 0x600000000LL;
          if ( *(_DWORD *)&v115[8] )
          {
            v18 = (__int64 *)v115;
            sub_1576230((char ***)v126, (char ***)v115);
          }
          v131 = 3;
          goto LABEL_60;
        default:
LABEL_2:
          BUG();
      }
      v46 = *(__int64 **)(a1 + 8);
      v47 = _mm_loadu_si128((const __m128i *)(a1 + 16));
      v112 = *(void **)(a1 + 32);
      v48 = *(_DWORD *)(a1 + 16);
      *(__m128i *)v111 = v47;
      *(_DWORD *)(a1 + 40) = v48;
      sub_14634E0(v46, (int *)(a1 + 16));
      v49 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v49, (int *)(a1 + 16));
      switch ( (__int16)v112 )
      {
        case 5:
          if ( sub_141A630(5u) )
          {
            if ( !sub_1528280(0, (__int64)"max") )
            {
              v77 = nullptr;
              goto LABEL_167;
            }
          }
          else
          {
            v77 = v111[1];
            if ( !sub_1528280((__int64)v111[1], (__int64)"max") )
            {
LABEL_167:
              if ( !sub_1528280((__int64)v77, (__int64)"min") )
                goto LABEL_168;
              v76 = 3;
LABEL_151:
              v18 = (__int64 *)a1;
              v100 = v76;
              sub_1572900((__int64)v111, a1, a4, 0x29u, a7, a8);
              *((_QWORD *)&v35 + 1) = LODWORD(v111[1]);
              v115[0] = v100;
              *(_QWORD *)&v115[8] = &ptr;
              *(_QWORD *)&v115[16] = 0x600000000LL;
              if ( LODWORD(v111[1]) )
              {
                v18 = (__int64 *)v111;
                sub_1576230((char ***)&v115[8], (char ***)v111);
              }
              if ( v131 != 0xFF )
              {
                if ( v131 == 7 )
                {
                  v18 = (__int64 *)&v115[8];
                  v126[0] = v115[0];
                  sub_1576230((char ***)&v126[8], (char ***)&v115[8]);
                  goto LABEL_159;
                }
                funcs_1576A39[v131]();
              }
              v126[0] = v115[0];
              *(_QWORD *)&v126[8] = &v127;
              *(_QWORD *)&v126[16] = 0x600000000LL;
              if ( *(_DWORD *)&v115[16] )
              {
                v18 = (__int64 *)&v115[8];
                sub_1576230((char ***)&v126[8], (char ***)&v115[8]);
              }
              v131 = 7;
LABEL_159:
              v39 = *(void **)&v115[8];
              p_ptr = &ptr;
              if ( *(void ***)&v115[8] == &ptr )
              {
LABEL_62:
                v41 = v111[0];
                if ( v111[0] != &v112 )
LABEL_63:
                  free(v41);
LABEL_64:
                LODWORD(v125) = *(_DWORD *)(a1 + 16);
                if ( (unsigned __int8)sub_14808E0((__int64)&v101, v18, *((__int64 *)&v35 + 1), v36, (__int64)p_ptr, v37) )
                {
                  v16 = 0;
                  goto LABEL_9;
                }
LABEL_8:
                v16 = sub_1ACF130(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 744LL), v11, a3, v123) | 4;
                goto LABEL_9;
              }
LABEL_61:
              free(v39);
              goto LABEL_62;
            }
          }
          v76 = 2;
          goto LABEL_151;
        case 28:
          v76 = 4;
          goto LABEL_151;
        case 29:
          v76 = 7;
          goto LABEL_151;
        case 31:
          v76 = 1;
          goto LABEL_151;
        case 33:
          v76 = 0;
          goto LABEL_151;
        case 56:
          v76 = 6;
          goto LABEL_151;
        case 58:
          v76 = 5;
          goto LABEL_151;
        case 59:
          v76 = 8;
          goto LABEL_151;
        default:
LABEL_168:
          sub_1564840((__int64)v115, a1, (int *)v111, 1529);
          sub_AEA040((__int64)v115);
          v76 = 9;
          goto LABEL_151;
      }
    case 2:
    case 27:
    case 32:
    case 33:
    case 36:
    case 43:
    case 50:
    case 51:
      goto LABEL_7;
    case 42:
      if ( (_BYTE)a4 != 17 )
      {
LABEL_4:
        if ( *(_WORD *)(a1 + 32) != 22 )
        {
LABEL_7:
          LODWORD(v125) = a6;
          goto LABEL_8;
        }
        v96 = a6;
        if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
        {
          v22 = sub_146A990(a1);
          v15 = a5;
          a6 = v96;
          LODWORD(v108) = v22;
        }
        else
        {
          v14 = sub_1568800((__int64)&v101);
          v15 = a5;
          a6 = v96;
          if ( v14 )
            goto LABEL_7;
        }
        HIDWORD(v125) = v108;
        switch ( v9 )
        {
          case 0LL:
            a2 = (_QWORD *)&dword_14;
            v30 = sub_15708E0(a1, 0x14u, 0, a6, a7);
            v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
            if ( v30 <= 1 )
              v31 = 0;
            *(_QWORD *)v115 = &v115[16];
            *(_QWORD *)&v115[16] = v31;
            *(_QWORD *)&v115[8] = 0x600000001LL;
            if ( v131 == 0xFF )
            {
              *(_QWORD *)v126 = &v126[16];
              *(_QWORD *)&v126[8] = 0x600000000LL;
              goto LABEL_217;
            }
            if ( v131 != 3 )
            {
              funcs_1576A39[v131]();
              *(_QWORD *)v126 = &v126[16];
              *(_QWORD *)&v126[8] = 0x600000000LL;
              if ( !*(_DWORD *)&v115[8] )
              {
LABEL_40:
                v131 = 3;
                goto LABEL_41;
              }
LABEL_217:
              a2 = (__int64 *)v115;
              sub_1576230((char ***)v126, (char ***)v115);
              goto LABEL_40;
            }
            a2 = (__int64 *)v115;
            sub_1576230((char ***)v126, (char ***)v115);
LABEL_41:
            v29 = (void **)&v115[16];
            if ( *(_BYTE **)v115 != &v115[16] )
              free(*(void **)v115);
LABEL_43:
            if ( v30 == 1 )
            {
LABEL_44:
              v16 = 4;
              sub_156E210((__int64)&v101);
              goto LABEL_9;
            }
            goto LABEL_28;
          case 29LL:
            *(_QWORD *)v109 = v110;
            *(__m128i *)&v109[8] = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
            v111[0] = &v112;
            v111[1] = (void *)0x600000000LL;
            if ( (unsigned __int8)sub_1571A90((const __m128i *)a1, a6, v109, (__int64)v111, *(__m128i *)&v109[8], a8) )
            {
              v16 = 4;
              sub_156E210((__int64)&v101);
              if ( v111[0] != &v112 )
                free(v111[0]);
              v25 = *(void **)v109;
              if ( *(_BYTE **)v109 != v110 )
                goto LABEL_20;
              goto LABEL_9;
            }
            *(_QWORD *)v115 = &ptr;
            *(__m128i *)&v115[8] = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
            if ( *(_QWORD *)&v109[8] )
              sub_1576670((char **)v115, (char **)v109);
            a2 = (__int64 *)LODWORD(v111[1]);
            v120 = v122;
            v121 = 0x600000000LL;
            if ( LODWORD(v111[1]) )
            {
              a2 = (__int64 *)v111;
              sub_1576230((char ***)&v120, (char ***)v111);
            }
            if ( v131 == 0xFF )
              goto LABEL_192;
            if ( v131 == 9 )
            {
              sub_1576670((char **)v126, (char **)v115);
              a2 = (__int64 *)&v120;
              sub_1576230(v129, (char ***)&v120);
            }
            else
            {
              funcs_1576A39[v131]();
LABEL_192:
              *(_QWORD *)v126 = &v127;
              *(__m128i *)&v126[8] = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
              if ( *(_QWORD *)&v115[8] )
              {
                a2 = (__int64 *)v115;
                sub_1576670((char **)v126, (char **)v115);
              }
              v23 = (unsigned int)v121;
              v129[0] = (char **)&v130;
              v129[1] = (char **)0x600000000LL;
              if ( (_DWORD)v121 )
              {
                a2 = (__int64 *)&v120;
                sub_1576230(v129, (char ***)&v120);
              }
              v131 = 9;
            }
            if ( v120 != v122 )
              free(v120);
            v29 = &ptr;
            if ( *(void ***)v115 != &ptr )
              free(*(void **)v115);
            if ( v111[0] != &v112 )
              free(v111[0]);
            v28 = *(void **)v109;
            if ( *(_BYTE **)v109 != v110 )
              goto LABEL_27;
            goto LABEL_28;
          case 42LL:
            v32 = 0;
            v33 = sub_1570860((const __m128i *)a1, a7);
            v27 = v131;
            v30 = v33;
            v34 = v33 & 0xFFFFFFFFFFFFFFFELL;
            if ( v30 > 1 )
              v32 = v34;
            if ( v131 == 0xFF )
              goto LABEL_50;
            if ( v131 == 2 )
            {
              *(_QWORD *)v126 = v32;
            }
            else
            {
              funcs_1576A39[v131]();
LABEL_50:
              *(_QWORD *)v126 = v32;
              v131 = 2;
            }
            goto LABEL_43;
          case 46LL:
          case 49LL:
            v98 = a6;
            v93 = v15;
            sub_1573670((const __m128i *)a1, ((_BYTE)v15 == 46) + 5, v15);
            a2 = (_QWORD *)&dword_14;
            v26 = sub_15708E0(a1, 0x14u, v93, v98, a7);
            if ( v26 == 1 )
              goto LABEL_44;
            *(_QWORD *)&v115[16] = v26 & 0xFFFFFFFFFFFFFFFELL;
            *(_QWORD *)&v115[8] = 0x600000001LL;
            *(_QWORD *)v115 = &v115[16];
            if ( v131 == 0xFF )
            {
              *(_QWORD *)v126 = &v126[16];
              *(_QWORD *)&v126[8] = 0x600000000LL;
            }
            else
            {
              if ( v131 == 3 )
              {
                a2 = (__int64 *)v115;
                sub_1576230((char ***)v126, (char ***)v115);
LABEL_26:
                v28 = *(void **)v115;
                v29 = (void **)&v115[16];
                if ( *(_BYTE **)v115 != &v115[16] )
LABEL_27:
                  free(v28);
LABEL_28:
                LODWORD(v125) = *(_DWORD *)(a1 + 16);
                if ( (unsigned __int8)sub_14808E0((__int64)&v101, a2, v27, v23, (__int64)v29, v24) )
                {
                  v16 = 0;
                  goto LABEL_9;
                }
                goto LABEL_8;
              }
              funcs_1576A39[v131]();
              *(_QWORD *)v126 = &v126[16];
              *(_QWORD *)&v126[8] = 0x600000000LL;
              if ( !*(_DWORD *)&v115[8] )
              {
LABEL_25:
                v131 = 3;
                goto LABEL_26;
              }
            }
            a2 = (__int64 *)v115;
            sub_1576230((char ***)v126, (char ***)v115);
            goto LABEL_25;
          case 48LL:
            a2 = (__int64 *)a1;
            sub_1571CA0((__int64)v115, a1, a6, 0, a7, a8);
            if ( v115[0] )
            {
              v16 = 4;
              sub_156E210((__int64)&v101);
              v25 = ptr;
              if ( ptr == &v118 )
                goto LABEL_9;
              goto LABEL_20;
            }
            v27 = (unsigned int)v117;
            v111[0] = *(void **)&v115[8];
            LODWORD(v111[1]) = *(_DWORD *)&v115[16];
            v112 = v114;
            v113 = 0x600000000LL;
            if ( (_DWORD)v117 )
            {
              a2 = (__int64 *)&ptr;
              sub_1576230((char ***)&v112, (char ***)&ptr);
            }
            if ( v131 == 0xFF )
              goto LABEL_178;
            if ( v131 == 5 )
            {
              *(void **)v126 = v111[0];
              *(_DWORD *)&v126[8] = v111[1];
              a2 = (__int64 *)&v112;
              sub_1576230((char ***)&v126[16], (char ***)&v112);
            }
            else
            {
              funcs_1576A39[v131]();
LABEL_178:
              *(void **)v126 = v111[0];
              *(_DWORD *)&v126[8] = v111[1];
              *(_QWORD *)&v126[16] = &v128;
              v127 = 0x600000000LL;
              if ( (_DWORD)v113 )
              {
                a2 = (__int64 *)&v112;
                sub_1576230((char ***)&v126[16], (char ***)&v112);
              }
              v131 = 5;
            }
            if ( v112 != v114 )
              free(v112);
            v28 = ptr;
            v29 = (void **)&v118;
            if ( ptr != &v118 )
              goto LABEL_27;
            goto LABEL_28;
          default:
            goto LABEL_2;
        }
      }
      v21 = sub_156A040((__int64)&v101, 14, (char *)&byte_22F0C30, 0, a7, a8);
      v20 = a5;
      if ( v21 )
      {
LABEL_15:
        *(_DWORD *)v115 = 1507394;
        *(_WORD *)&v115[4] = 451;
        v16 = 4;
        sub_15680D0(a1, v115, (int *)((char *)&dword_0 + 3), 2);
        goto LABEL_9;
      }
      HIDWORD(v125) = v108;
LABEL_52:
      v18 = (__int64 *)a1;
      sub_1572900((__int64)v111, a1, a4, v20, a7, a8);
      *(_QWORD *)v115 = &v115[16];
      *(_QWORD *)&v115[8] = 0x600000000LL;
      if ( LODWORD(v111[1]) )
      {
        v18 = (__int64 *)v111;
        sub_1576230((char ***)v115, (char ***)v111);
      }
      v38 = v131;
      LOBYTE(v120) = 0;
      if ( v131 == 0xFF )
        goto LABEL_57;
LABEL_55:
      if ( (_BYTE)v38 == 4 )
      {
        v18 = (__int64 *)v115;
        sub_1576230((char ***)v126, (char ***)v115);
        LOBYTE(v129[0]) = (_BYTE)v120;
      }
      else
      {
        funcs_1576A39[v38]();
LABEL_57:
        *(_QWORD *)v126 = &v126[16];
        *(_QWORD *)&v126[8] = 0x600000000LL;
        if ( *(_DWORD *)&v115[8] )
        {
          v18 = (__int64 *)v115;
          sub_1576230((char ***)v126, (char ***)v115);
        }
        v131 = 4;
        LOBYTE(v129[0]) = (_BYTE)v120;
      }
LABEL_60:
      v39 = *(void **)v115;
      p_ptr = (void **)&v115[16];
      if ( *(_BYTE **)v115 == &v115[16] )
        goto LABEL_62;
      goto LABEL_61;
  }
}
