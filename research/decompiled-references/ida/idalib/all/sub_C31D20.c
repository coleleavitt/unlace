__int64 __fastcall sub_C31D20(__int64 *a1, __int64 *a2, __m128i *a3, __int64 a4, char a5, __int64 a6)
{
  unsigned int v6; // r15d
  __m128 v13; // xmm0
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // r12
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 *v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r13
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // dl
  unsigned __int8 **v30; // rax
  bool v31; // al
  unsigned __int8 **v32; // rax
  int v33; // r15d
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // r14
  unsigned __int8 **v37; // rax
  unsigned __int8 **v38; // rbx
  void *v39; // rax
  unsigned int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r13
  unsigned __int8 **v45; // rax
  unsigned __int8 **v46; // rbp
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // r11
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 *v58; // r11
  __int64 v59; // r10
  __int64 v60; // rbx
  __int64 v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  int *v64; // rbx
  char v65; // dl
  unsigned __int64 v66; // rax
  __int64 v67; // r11
  __int64 v68; // rax
  __int64 *v69; // r9
  __int64 v70; // rdx
  unsigned __int64 v71; // rbx
  __int64 v72; // rcx
  unsigned __int64 v73; // rbp
  __int64 v74; // r8
  __int64 v75; // rax
  _QWORD *v76; // r12
  __int64 v77; // rax
  void *v78; // rbp
  __int64 v79; // r15
  __int64 v80; // rdx
  void *v81; // rax
  int v82; // eax
  char v83; // al
  char v84; // al
  __int64 v85; // rax
  unsigned __int64 v86; // rbx
  unsigned int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // r8
  unsigned int v96; // r13d
  int v97; // ebx
  unsigned __int8 **v98; // rax
  unsigned __int8 **v99; // r12
  unsigned __int8 **v100; // rax
  unsigned __int8 **v101; // rax
  __int64 *v102; // r11
  unsigned __int8 **v103; // rbx
  unsigned __int8 **v104; // rax
  unsigned __int8 **v105; // rbx
  _QWORD *v106; // rax
  _QWORD *v107; // r13
  _BYTE *v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rsi
  __int64 v111; // rdx
  int v112; // eax
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // r12
  __int64 v118; // r14
  __int64 v119; // r12
  void *v120; // rdi
  void **v121; // rbx
  __int64 *v122; // [rsp+8h] [rbp-150h] BYREF
  __int64 *v123; // [rsp+10h] [rbp-148h]
  __int64 *v124; // [rsp+18h] [rbp-140h]
  unsigned __int64 *v125; // [rsp+20h] [rbp-138h]
  __m128i *v126; // [rsp+28h] [rbp-130h]
  int v127; // [rsp+30h] [rbp-128h]
  unsigned __int8 v128; // [rsp+37h] [rbp-121h]
  __int64 *v129; // [rsp+38h] [rbp-120h]
  unsigned __int64 v130; // [rsp+40h] [rbp-118h]
  __m128i *v131; // [rsp+48h] [rbp-110h]
  __int64 *v132; // [rsp+50h] [rbp-108h]
  __int64 *v133; // [rsp+58h] [rbp-100h]
  _QWORD v134[4]; // [rsp+60h] [rbp-F8h] BYREF
  _QWORD v135[4]; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v136; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v137; // [rsp+B0h] [rbp-A8h]
  __int64 v138; // [rsp+B8h] [rbp-A0h]
  __m128 v139; // [rsp+C0h] [rbp-98h] BYREF
  int v140; // [rsp+D0h] [rbp-88h]
  __int64 v141; // [rsp+D8h] [rbp-80h]
  void *v142[2]; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v143; // [rsp+F0h] [rbp-68h]
  __int64 v144; // [rsp+F8h] [rbp-60h]

  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  v122 = a2;
  if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x20) == 0 )
  {
LABEL_29:
    v6 = 0;
    sub_E33C10(a1, v122, 108, 0);
    return v6;
  }
  sub_C1C470(&v136, (__int64)a1, v122, (a5 == 0) + 3, a3, a4);
  v123 = a1;
  v140 = (a5 == 0) + 3;
  v13 = _mm_loadh_ps((const double *)&v122);
  v141 = a6;
  v139 = v13;
  if ( (v138 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = a3[1].m128i_u8[8];
  v124 = (__int64 *)v138;
  if ( (v14 & 1) != 0 )
    return 0;
  if ( sub_C105C0((__int64)&a3[1].m128i_i64[1])
    || (v16 = (__int64)v124, LODWORD(v123) = a3[3].m128i_i32[2], (_DWORD)v123 == 1) && (v14 &= 4u, (_DWORD)v14) )
  {
    if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
    {
      v31 = sub_C105C0((__int64)&a3[1].m128i_i64[1]);
      v32 = (unsigned __int8 **)sub_E33C10(a1, v122, !v31 ? 2375 : 2370, 0);
      if ( v32 )
        sub_C11320(v32, v140);
      return 0;
    }
    goto LABEL_29;
  }
  v131 = &v136;
  v17 = 0;
  v18 = v137;
  v125 = (unsigned __int64 *)v142;
  v129 = a1 + 103;
  v130 = 0;
  v126 = a3;
  v124 = nullptr;
  v127 = (_DWORD)v123 - 1;
  v128 = 0;
  v19 = v16;
  while ( 1 )
  {
    if ( !*(_DWORD *)v18 )
    {
      v15 = (unsigned int)v140;
      if ( v140 != 8 || (_DWORD)v123 != (_DWORD)v17 )
        goto LABEL_44;
      goto LABEL_13;
    }
    if ( *(_DWORD *)v18 == 1 )
    {
      v15 = (unsigned int)v140;
      if ( ((1LL << v140) & 0x19) != 0 )
      {
LABEL_44:
        if ( !(_DWORD)v17 || (_DWORD)v15 != 10 )
        {
          v6 = *((unsigned __int8 *)a1 + 914);
          if ( !(_BYTE)v6 )
          {
            v36 = v122;
            v37 = (unsigned __int8 **)sub_E33C10(a1, v122, 2372, 0);
            v38 = v37;
            if ( v37 )
            {
              sub_C11320(v37, v140);
              sub_C11320(v38, *(_DWORD *)v18 == 1);
              v39 = (void *)sub_EEC8C0(v36);
              LOBYTE(v142[1]) = 1;
              v142[0] = v39;
              sub_AEC610((__int64 *)v38, (__int64 *)v142);
            }
            return v6;
          }
        }
        return 0;
      }
    }
LABEL_13:
    if ( (v19 & 1) != 0
      || (v20 = *(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 1LL,
          (v14 = (unsigned int)v20 | v19 & 4 | *(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v14 = (unsigned __int64)v125;
        v47 = v126[3].m128i_i64[0];
        *(__m128i *)v142 = _mm_load_si128(&v136);
        v143 = v47;
        v144 = (unsigned int)v17;
        v48 = sub_C2F440(v129, v125);
        if ( v48 )
        {
          if ( *((_DWORD *)v48 + 8) )
          {
            v15 = *(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
            v19 = *(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 2
                | v19 & 2;
          }
        }
      }
    }
    if ( (_DWORD)v123 != (_DWORD)v17 )
    {
      v21 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
      v22 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
      v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (_DWORD)v17 != v127 )
        goto LABEL_18;
      if ( (_BYTE)v23 != 14 )
      {
        v23 = (unsigned int)(v23 - 2);
        if ( (unsigned __int8)v23 > 4u )
          goto LABEL_65;
LABEL_19:
        v25 = sub_A72040((_QWORD *)a1[2], v19);
        v27 = v25;
        if ( !v25 || (unsigned int)*(unsigned __int8 *)(v25 + 16) - 2 > 1 )
          BUG();
        v14 = *(_QWORD *)(v25 + 40);
        v28 = *(_QWORD *)(v126[3].m128i_i64[0] + 8LL * (unsigned int)v17);
        v29 = *(_BYTE *)(v25 + 19);
        if ( (v29 & 2) != 0 )
        {
          LODWORD(v142[1]) = *(_DWORD *)(v14 + 8);
          if ( LODWORD(v142[1]) <= 0x40 )
          {
            v142[0] = *(void **)v14;
LABEL_24:
            if ( (void *)v28 >= v142[0] )
            {
              v6 = v128;
              goto LABEL_26;
            }
            goto LABEL_39;
          }
          sub_2205510(v125);
          v33 = (int)v142[1];
        }
        else
        {
          v33 = 8 * ((v29 >> 2) & 0x1F);
          LODWORD(v142[1]) = v33;
          if ( v33 > 64 )
          {
            sub_2205470(v125, v14, 0);
            v33 = (int)v142[1];
          }
          else
          {
            v142[0] = (void *)v14;
          }
        }
        if ( (unsigned int)v33 <= 0x40 )
          goto LABEL_24;
        if ( v33 - (unsigned int)sub_2206780(v125) <= 0x40 )
        {
          if ( v28 >= *(_QWORD *)v142[0] )
          {
            v6 = v128;
            if ( v142[0] )
              operator delete[](v142[0]);
            goto LABEL_26;
          }
        }
        else if ( !v142[0] )
        {
          goto LABEL_39;
        }
        operator delete[](v142[0]);
LABEL_39:
        v34 = *(unsigned int *)(v18 + 16);
        v19 = *(_QWORD *)(v27 + 32);
        if ( v28 >= v34 )
        {
          if ( (unsigned int)v140 <= 1 || v140 == 10 )
          {
            v124 = nullptr;
            v18 = *(_QWORD *)(v18 + 8) + 56 * v34;
          }
          else
          {
            v40 = sub_C00A40((unsigned __int64)v122, v14, (unsigned int)v140, v15, v26);
            if ( !(unsigned __int8)sub_C19980((__int64)a1, v27, v40) )
              return 0;
            v14 = (unsigned int)v28;
            sub_C0FCF0(v18, v28);
            v41 = *(_QWORD *)(v18 + 8);
            v124 = nullptr;
            v18 = v41 + 56LL * (unsigned int)v28;
          }
        }
        else
        {
          v35 = *(_QWORD *)(v18 + 8);
          v124 = nullptr;
          v18 = v35 + 56 * v28;
        }
        goto LABEL_41;
      }
    }
    if ( (v19 & 4) != 0
      || (v21 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL), (byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( !sub_C11880(v140) )
      {
        v21 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_59;
      }
      v6 = v128;
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) == 0 )
        goto LABEL_143;
      v96 = 0;
      if ( v130 )
      {
        v96 = *(_DWORD *)(v130 + 24);
        v97 = 2;
LABEL_147:
        v98 = (unsigned __int8 **)sub_E33C10(a1, v122, 2376, 1);
        v99 = v98;
        if ( v98 )
        {
          sub_C11320(v98, v140);
          sub_C11320(v99, v97);
          sub_AE9DF0(v99, v130, 0xAu);
        }
        v100 = (unsigned __int8 **)sub_E33DB0(a1, v96, 2506);
        if ( v100 )
          sub_C11320(v100, v97);
        return v6;
      }
      if ( v136.m128i_i64[0] )
      {
        if ( (v136.m128i_i8[0] & 3) != 0 )
        {
          if ( (v136.m128i_i8[0] & 3) == 1 && (v136.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v97 = 0;
            v96 = sub_C00A40(v136.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v14, 0, v94, v95);
            goto LABEL_147;
          }
        }
        else if ( (v136.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v130 = v136.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          v96 = *(_DWORD *)((v136.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 24);
          v97 = 1;
          goto LABEL_147;
        }
      }
      v97 = 0;
      goto LABEL_147;
    }
LABEL_59:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      v14 = (unsigned __int64)a1;
      v132 = v21;
      v83 = sub_C118B0(v131->m128i_i64, (__int64)a1, v140);
      v21 = v132;
      if ( !v83 )
      {
        v14 = (unsigned __int64)v122;
        v84 = sub_C287E0((__int64)a1, (__int64)v122, (unsigned int)v140, v19);
        v21 = v132;
        if ( v84 )
          return 0;
      }
    }
    if ( (_DWORD)v123 == (_DWORD)v17 )
      break;
    v22 = *v21;
    v23 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_18:
    v24 = (unsigned int)(v23 - 2);
    if ( (unsigned __int8)(v23 - 2) <= 4u )
      goto LABEL_19;
    if ( (_BYTE)v23 == 14 )
    {
      v69 = (__int64 *)v19;
      v6 = v128;
      v70 = v126[3].m128i_i64[0];
      v71 = *(_QWORD *)(v70 + 8 * v17);
      if ( v71 <= 1 )
      {
        if ( *(_BYTE *)(v22 + 16) != 14 )
        {
          v122 = v69;
          v22 = sub_F63050(v22, v14, v70, v24);
          v69 = v122;
        }
        v73 = sub_C0F760((__int64)v69, *(_QWORD *)(v22 + 32), 0);
        v75 = v18;
        if ( *(_DWORD *)v18 == 5 )
        {
          v110 = v18 + 8;
          if ( v71 )
            v110 = v18 + 24;
          return (unsigned int)sub_C1BFE0(&v139, v110, v73, v72, v74);
        }
        v76 = (_QWORD *)(v18 + 8);
        if ( v71 )
          v76 = (_QWORD *)(v75 + 32);
        if ( (v73 & 1) != 0 || (byte_8[v73 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        {
          v106 = (_QWORD *)sub_E33C10(v139.m128_u64[0], v139.m128_u64[1], 2442, 0);
          v107 = v106;
          if ( v106 )
          {
            if ( !*v106 )
            {
              v111 = v106[1];
              v112 = *(_DWORD *)(v111 + 14976);
              if ( v112 )
              {
                v116 = (unsigned int)(v112 - 1);
                *(_DWORD *)(v111 + 14976) = v116;
                v113 = *(_QWORD *)(v111 + 8 * v116 + 14848);
                v117 = *(unsigned int *)(v113 + 536);
                *(_BYTE *)v113 = 0;
                v118 = *(_QWORD *)(v113 + 528);
                *(_DWORD *)(v113 + 424) = 0;
                v119 = v118 + (v117 << 6);
                while ( v118 != v119 )
                {
                  v119 -= 64;
                  v120 = *(void **)(v119 + 24);
                  if ( v120 != (void *)(v119 + 40) )
                    operator delete(v120);
                }
                *(_DWORD *)(v113 + 536) = 0;
              }
              else
              {
                v113 = operator new(0x3A0u);
                *(_BYTE *)v113 = 0;
                v114 = v113 + 96;
                do
                {
                  v115 = v114 + 16;
                  *(_QWORD *)(v114 + 8) = 0;
                  v114 += 32;
                  *(_QWORD *)(v114 - 32) = v115;
                  *(_BYTE *)(v114 - 16) = 0;
                }
                while ( v114 != v113 + 416 );
                *(_QWORD *)(v113 + 416) = v113 + 432;
                *(_QWORD *)(v113 + 424) = 0x800000000LL;
                *(_QWORD *)(v113 + 528) = v113 + 544;
                *(_QWORD *)(v113 + 536) = 0x600000000LL;
              }
              *v107 = v113;
            }
            *(_BYTE *)(*v107 + *(unsigned __int8 *)*v107 + 1LL) = 8;
            v108 = (_BYTE *)*v107;
            v109 = *(unsigned __int8 *)*v107;
            *v108 = v109 + 1;
            *(_QWORD *)&v108[8 * v109 + 16] = v73;
          }
          return v6;
        }
        v77 = sub_21F90D0();
        v78 = (void *)v77;
        if ( v141 )
        {
          if ( *v76 == v77 )
            sub_21FFE60(v134, v76);
          else
            sub_21F97A0(v134, v76);
          BYTE4(v142[0]) &= ~1u;
          LODWORD(v142[0]) = 0;
          v79 = sub_21F90B0();
          sub_21FBFD0(v135, 0.0);
          sub_22023D0(&v142[1], v135, v79);
          sub_21F9830(v135);
          LODWORD(v142[0]) = 3;
          if ( (void *)v134[0] == v78 )
            sub_21FFED0(v135, v134);
          else
            sub_21F97D0(v135, v134);
          if ( v142[1] == v78 )
          {
            if ( (void *)v135[0] != v78 )
              goto LABEL_175;
            sub_A4F010((__int64)&v142[1]);
            sub_21FFED0(&v142[1], v135);
          }
          else
          {
            if ( (void *)v135[0] != v78 )
            {
              sub_21F9590(&v142[1], v135);
              goto LABEL_115;
            }
LABEL_175:
            sub_9955A0(&v142[1]);
            if ( (void *)v135[0] == v78 )
              sub_21FFED0(&v142[1], v135);
            else
              sub_21F97D0(&v142[1], v135);
          }
LABEL_115:
          sub_9955A0(v135);
          sub_A4FD20(v141, (__int64)v142);
          if ( LODWORD(v142[0]) > 1 )
            sub_A4F8E0((int *)v142);
          sub_9955A0(v134);
        }
        if ( (void *)*v76 == v78 )
          sub_21FFCB0(v142, v78, 1);
        else
          sub_21FAF40(v142, *v76, 1);
        v80 = ((unsigned int)sub_BFE5A0(v139.m128_i64[1], *(_QWORD *)(*(_QWORD *)(v139.m128_u64[0] + 16) + 2320LL)) >> 3)
            & 7;
        if ( (_BYTE)v80 == 7 )
          v80 = 1;
        v81 = (void *)*v76;
        if ( v140 == 3 )
        {
          if ( v81 == v78 )
            v82 = sub_2200B70(v76, v142, v80);
          else
            v82 = sub_21FD860(v76, v142, v80);
        }
        else if ( v81 == v78 )
        {
          v82 = sub_2200970(v76, v142, v80);
        }
        else
        {
          v82 = sub_21FD850(v76, v142, v80);
        }
        v6 = *(unsigned __int8 *)(v139.m128_u64[0] + 8);
        if ( !(_BYTE)v6 )
          v6 = sub_C104C0(v139.m128_i64[0], v139.m128_i64[1], v82);
        if ( v78 == v142[0] )
        {
          if ( v142[1] )
          {
            v121 = (void **)((char *)v142[1] + 24 * *((_QWORD *)v142[1] - 1));
            while ( v142[1] != v121 )
            {
              v121 -= 3;
              if ( v78 == *v121 )
                sub_A4F010((__int64)v121);
              else
                sub_21F9830(v121);
            }
            operator delete[](v121 - 1, 24LL * (_QWORD)*(v121 - 1) + 8);
          }
        }
        else
        {
          sub_21F9830(v142);
        }
        return v6;
      }
LABEL_26:
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
      {
        v30 = (unsigned __int8 **)sub_E33C10(a1, v122, 2370, 0);
        if ( v30 )
          sub_C11320(v30, v140);
        return v6;
      }
LABEL_143:
      sub_E33C10(a1, v122, 108, 0);
      return v6;
    }
LABEL_65:
    v124 = v21;
    v42 = (unsigned int)*(unsigned __int8 *)(v22 + 16) - 57;
    if ( (unsigned int)v42 <= 1 || (v22 = sub_C10A30(v22, v14, v23, v42), v21 = v124, v22) )
    {
      v6 = v128;
      v43 = *(unsigned int *)(v22 + 20);
      v44 = *(_QWORD *)(v126[3].m128i_i64[0] + 8LL * (unsigned int)v17);
      if ( v44 != v43 )
      {
        if ( v44 <= v43 )
        {
          return (unsigned int)sub_C248F0(
                                 &v139,
                                 *(_QWORD *)(v18 + 8) + 56LL * (unsigned int)v44,
                                 *(_QWORD *)(v22 + 32),
                                 v42,
                                 (__int64)v21);
        }
        else
        {
          v45 = (unsigned __int8 **)sub_E33C90(a1, v122, 2381, 0);
          v46 = v45;
          if ( !v45 )
            return 0;
          sub_AE9DF0(v45, v44, 3u);
          sub_C11320(v46, 0);
          sub_AE9DF0(v46, v43, 3u);
        }
        return v6;
      }
      goto LABEL_26;
    }
    v50 = *(_QWORD *)(v126[3].m128i_i64[0] + 8LL * (unsigned int)v17) & 0xFFFFFFFFFFFFFFF8LL;
    v124 = (__int64 *)v50;
    if ( v50 && (*(_BYTE *)(v50 + 28) & 0x7Fu) - 49 <= 2 )
    {
      if ( (*(_BYTE *)(v50 + 68) & 2) != 0 )
      {
        v14 = (unsigned __int64)a1;
        v133 = (__int64 *)v50;
        v132 = v21;
        v51 = sub_C118B0(v131->m128i_i64, (__int64)a1, v140);
        v21 = v132;
        v50 = (unsigned __int64)v133;
        if ( !v51 )
        {
          v123 = v133;
          v101 = (unsigned __int8 **)sub_E33C10(a1, v122, 2368, 1);
          v102 = v123;
          v103 = v101;
          if ( v101 )
          {
            v122 = v123;
            sub_C11320(v101, v140);
            sub_AE9DF0(v103, (__int64)v122, 0xAu);
            v102 = v122;
          }
          sub_E33DB0(a1, *((unsigned int *)v102 + 6), 103);
          return 0;
        }
      }
      v52 = *v21;
      v132 = (__int64 *)v50;
      v53 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL), v14, v49, v42, v21);
      v58 = v132;
      if ( *(_BYTE *)(v53 + 73) >> 5 == 2 )
      {
        v59 = *(_QWORD *)(v18 + 8);
        if ( !v59 )
          goto LABEL_90;
        v60 = *(_QWORD *)(v18 + 8);
        if ( *(char *)(v59 + 29) < 0 )
        {
          v61 = *(_QWORD *)(v18 + 8);
          v133 = v132;
          v132 = (__int64 *)v59;
          v62 = sub_B72720(v61);
          v58 = v133;
          v59 = (__int64)v132;
          v60 = v62;
        }
        v63 = (__int64)v58;
        if ( *((char *)v58 + 29) < 0 )
        {
          v133 = (__int64 *)v59;
          v132 = v58;
          v63 = sub_B72720((__int64)v58);
          v59 = (__int64)v133;
          v58 = v132;
        }
        if ( v63 != v60 )
        {
LABEL_90:
          if ( (_DWORD)v17 != v127 || v140 != 8 )
          {
            v6 = v128;
            v124 = (__int64 *)v59;
            v123 = v58;
            if ( v140 != 10 )
            {
              v104 = (unsigned __int8 **)sub_E33C10(a1, v122, 2367, 0);
              v105 = v104;
              if ( v104 )
              {
                sub_C11320(v104, v140);
                sub_AE9DF0(v105, (__int64)v123, 0xAu);
                v122 = v124;
                sub_C11320(v105, v124 == nullptr);
                sub_AE9DF0(v105, (__int64)v122, 0xAu);
                return v6;
              }
            }
            return 0;
          }
          v64 = (int *)v125;
          v132 = v58;
          BYTE4(v142[0]) &= ~1u;
          LODWORD(v142[0]) = 0;
          sub_A54D90(v18, (__int64)v58, (int *)v125);
          v58 = v132;
          if ( LODWORD(v142[0]) > 1 )
          {
            sub_A4F8E0(v64);
            v58 = v132;
          }
        }
        v18 = *(_QWORD *)(v18 + 16);
      }
      else
      {
        v93 = sub_C1D4D0((__int64)v132, v14, v54, v55, v56, v57);
        v58 = v132;
        v18 = *(_QWORD *)(v18 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v18 + 16) + v93);
      }
      v65 = *((_BYTE *)v58 + 68);
      v14 = v58[6];
      v132 = v58;
      v66 = sub_C0F760(v19, v14, (v65 & 2) != 0);
      v67 = (__int64)v132;
      v19 = v66;
      v68 = v132[6];
      if ( (v68 & 4) != 0 )
      {
        v130 = (unsigned __int64)v132;
      }
      else
      {
        if ( (byte_8[v68 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          v67 = v130;
        v130 = v67;
      }
    }
    else
    {
      v85 = sub_F63270(*v21);
      v86 = *(_QWORD *)(v126[3].m128i_i64[0] + 8LL * (unsigned int)v17) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v86
        && (*(_BYTE *)((*(_QWORD *)(v126[3].m128i_i64[0] + 8LL * (unsigned int)v17) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu)
         - 59 >= 3 )
      {
        v86 = 0;
      }
      v87 = sub_C30BC0(v85, v86);
      v88 = *(_QWORD *)(v18 + 8);
      v18 = v88 + 56LL * v87;
      v14 = sub_A7A9D0(a1[2], v86, v89, v88, v90, v91);
      v92 = sub_C0F760(v19, v14, 0);
      v124 = nullptr;
      v19 = v92;
    }
LABEL_41:
    v17 = (unsigned int)(v17 + 1);
  }
  v6 = sub_C248F0(&v139, v18, v19, v15, (__int64)v21);
  if ( !(_BYTE)v6 )
    return 0;
  if ( ((1LL << v140) & 0x4E3) == 0 && v124 && (*((_BYTE *)v124 + 68) & 1) != 0 )
    return (unsigned int)sub_C12D50((__int64)a1, (__int64)v122, v18, (__int64)v124);
  return v6;
}
