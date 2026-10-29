__int64 __fastcall sub_14B2450(
        __m128i *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int8 *a6,
        double a7,
        __m128 a8)
{
  size_t v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int8 *v15; // rbx
  __int64 v16; // rcx
  __m128i v17; // xmm0
  __int64 *v18; // rax
  int v19; // edx
  char v20; // bl
  bool v21; // zf
  __int64 v22; // r9
  __int64 v23; // rdx
  __int16 v24; // ax
  unsigned __int32 v25; // r14d
  __int64 v26; // r8
  __int64 *v27; // rsi
  char v28; // dl
  __int8 *v29; // rdx
  __int64 v30; // rdi
  int v31; // eax
  _BYTE *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int8 *v35; // rdx
  __int32 v36; // ebp
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 result; // rax
  __int64 m128i_i64; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // r12d
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // eax
  unsigned int v55; // r12d
  __int16 v56; // dx
  char v57; // bl
  size_t v58; // rax
  int v59; // eax
  bool v60; // al
  __int32 v61; // edx
  __int64 *v62; // rdi
  bool v63; // al
  __int64 v64; // rcx
  __int64 *v65; // rdi
  __int32 v66; // eax
  int v67; // eax
  __int32 v68; // eax
  __int32 v69; // eax
  __int64 v70; // rdx
  __m128i v71; // xmm2
  __int64 *v72; // rdi
  __int32 v73; // eax
  __int64 v74; // rax
  size_t v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rdi
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  __int8 *v81; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v82; // [rsp+8h] [rbp-1E0h]
  _QWORD *v83; // [rsp+10h] [rbp-1D8h]
  unsigned int v84; // [rsp+1Ch] [rbp-1CCh]
  __int64 v85; // [rsp+20h] [rbp-1C8h]
  bool v86; // [rsp+2Ah] [rbp-1BEh]
  bool v87; // [rsp+2Bh] [rbp-1BDh]
  int v88; // [rsp+2Ch] [rbp-1BCh]
  void **v89; // [rsp+30h] [rbp-1B8h]
  __int64 *v90; // [rsp+38h] [rbp-1B0h]
  int *v91; // [rsp+40h] [rbp-1A8h]
  int *v92; // [rsp+48h] [rbp-1A0h]
  unsigned __int32 v93; // [rsp+50h] [rbp-198h]
  bool v94; // [rsp+57h] [rbp-191h]
  __int8 *v95; // [rsp+58h] [rbp-190h] BYREF
  int v96; // [rsp+6Ch] [rbp-17Ch] BYREF
  int v97; // [rsp+70h] [rbp-178h] BYREF
  int v98; // [rsp+74h] [rbp-174h] BYREF
  __int64 v99[3]; // [rsp+78h] [rbp-170h] BYREF
  char *v100; // [rsp+90h] [rbp-158h]
  _QWORD v101[2]; // [rsp+A0h] [rbp-148h] BYREF
  __m128i v102; // [rsp+B0h] [rbp-138h]
  unsigned int v103; // [rsp+C0h] [rbp-128h]
  const char *v104; // [rsp+C8h] [rbp-120h]
  __m128i *v105; // [rsp+D0h] [rbp-118h] BYREF
  char v106; // [rsp+D8h] [rbp-110h]
  __m128i *v107; // [rsp+E0h] [rbp-108h]
  int v108; // [rsp+E8h] [rbp-100h]
  __int16 v109; // [rsp+ECh] [rbp-FCh]
  __int64 (__fastcall *v110)(__int64); // [rsp+F0h] [rbp-F8h]
  __int64 v111; // [rsp+F8h] [rbp-F0h]
  __int64 v112; // [rsp+100h] [rbp-E8h]
  void *v113[2]; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v114; // [rsp+120h] [rbp-C8h] BYREF
  void *v115; // [rsp+128h] [rbp-C0h] BYREF
  _QWORD v116[3]; // [rsp+138h] [rbp-B0h] BYREF
  _BYTE v117[16]; // [rsp+150h] [rbp-98h] BYREF
  unsigned __int8 *v118[3]; // [rsp+160h] [rbp-88h] BYREF
  _QWORD v119[5]; // [rsp+178h] [rbp-70h] BYREF
  __int64 v120; // [rsp+1A0h] [rbp-48h] BYREF

  v95 = a6;
  v84 = a2;
  v85 = a4;
  v118[0] = (unsigned __int8 *)&v95;
  v11 = j__strlen("ParseClass");
  v14 = sub_224AF30("ParseClass", v11, sub_149F1B0, v118, v12, v13);
  v15 = v95;
  v82 = v14;
  v83 = v101;
  sub_2233820(v101);
  v81 = v15;
  v103 = a2;
  v16 = a1[120].m128i_i64[0];
  v17 = (__m128i)_mm_loadh_ps((const double *)&v81);
  v101[0] = &off_2B4A628;
  v102 = v17;
  v104 = "parsing struct/union/class body";
  if ( a1[118].m128i_i64[0] != v16 && (v18 = *(__int64 **)(a1[6].m128i_i64[0] + 608)) != nullptr )
  {
    while ( 1 )
    {
      v19 = *((_DWORD *)v18 + 2);
      if ( (v19 & 0x20) != 0 )
        break;
      if ( (v19 & 1) == 0 )
      {
        v18 = (__int64 *)*v18;
        if ( v18 )
          continue;
      }
      goto LABEL_15;
    }
    if ( a1[120].m128i_i64[1] == v16 )
      v16 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
    v20 = 0;
    v21 = (**(_BYTE **)(v16 - 8) & 2) == 0;
    v87 = (**(_BYTE **)(v16 - 8) & 2) != 0;
    if ( !v21 )
    {
      sub_1564820(v118, a1, v84, 26);
      sub_AE9DF0(v118, 6, 2u);
      if ( (v95[28] & 0x7Fu) - 18 > 0x3F )
      {
        v113[0] = &v114;
        v75 = j__strlen("(anonymous)");
        sub_149EBB0(v113, "(anonymous)", (__int64)&aAnonymous_2[v75]);
      }
      else
      {
        sub_B76FC0((__int64)v113, v95);
      }
      sub_AEC220(v118, (_BYTE *)v113[0], (signed __int64)v113[1]);
      if ( v113[0] != &v114 )
        operator delete(v113[0]);
      v20 = 0;
      sub_AEA040((__int64)v118);
      v87 = 0;
    }
  }
  else
  {
LABEL_15:
    v87 = 1;
    v20 = 1;
  }
  sub_146B5E0(v99, (__int64)a1, 0x28u, 1, 0);
  v100 = (char *)sub_14A1670((__int64)a1, (__int64)v95, v20, a5 == 27);
  if ( v95 )
    sub_17A6350(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), v95);
  v23 = a1->m128i_i64[1];
  v96 = 0;
  v97 = 0;
  v24 = a1[2].m128i_i16[0];
  if ( (*(_BYTE *)(*(_QWORD *)(v23 + 56) + 1LL) & 8) == 0 || v24 != 5 )
  {
    LOBYTE(v81) = 0;
    v25 = 0;
    v86 = 0;
    goto LABEL_21;
  }
  LOBYTE(v81) = 0;
  v25 = 0;
  v92 = &v97;
  v89 = v113;
  v90 = (__int64 *)&v105;
  v93 = 0;
  v86 = 0;
  v91 = &v96;
  v88 = a3;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        m128i_i64 = (__int64)a1[1].m128i_i64;
        v49 = sub_14A7DC0(a1, (__int64)a1[1].m128i_i64);
        if ( !v49 )
          break;
        v59 = sub_14A7DC0(a1, (__int64)a1[1].m128i_i64);
        v60 = ((v59 - 2) & 0xFFFFFFFD) == 0 || v59 == 8;
        if ( v60 )
        {
          v61 = a1[1].m128i_i32[0];
          v62 = (__int64 *)a1->m128i_i64[1];
          if ( v25 )
          {
            a1[2].m128i_i32[2] = v61;
            goto LABEL_129;
          }
          a1[2].m128i_i32[2] = v61;
          v94 = v60;
          sub_14634E0(v62, a1[1].m128i_i32);
          v25 = a1[2].m128i_u32[2];
          v63 = v94;
          if ( v49 == 4 )
          {
            if ( a5 != 27 )
              goto LABEL_101;
            v86 = v94;
            goto LABEL_136;
          }
        }
        else
        {
          v68 = a1[1].m128i_i32[0];
          v62 = (__int64 *)a1->m128i_i64[1];
          if ( v93 )
          {
            a1[2].m128i_i32[2] = v68;
LABEL_129:
            sub_14634E0(v62, a1[1].m128i_i32);
            sub_1564820(v118, a1, a1[2].m128i_u32[2], 1592);
            v74 = sub_15AFC10(v49);
            sub_149E970(v118, v74);
            sub_AEA040((__int64)v118);
            goto LABEL_108;
          }
          a1[2].m128i_i32[2] = v68;
          sub_14634E0(v62, a1[1].m128i_i32);
          v69 = a1[2].m128i_i32[2];
          LOBYTE(v81) = 1;
          v93 = v69;
        }
LABEL_108:
        if ( a5 == 27 )
        {
LABEL_136:
          sub_1564820(v118, a1, v25, 1832);
          v76 = v49;
LABEL_134:
          v77 = sub_15AFC10(v76);
          sub_149E970(v118, v77);
          sub_AEA040((__int64)v118);
        }
        else
        {
          switch ( v49 )
          {
            case 2u:
              sub_1564820(
                v118,
                a1,
                v25,
                (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 1LL) & 0x10) == 0 ? 2014 : 2126);
              v76 = 2;
              goto LABEL_134;
            case 4u:
              v63 = v86;
LABEL_101:
              v86 = v63;
              v64 = 2007;
LABEL_114:
              v70 = v25;
              goto LABEL_115;
            case 0x10u:
              v64 = 2005;
              v70 = v93;
LABEL_115:
              sub_1564820(v118, a1, v70, v64);
              sub_AEA040((__int64)v118);
              break;
            case 8u:
              v64 = 2026;
              goto LABEL_114;
          }
        }
      }
      if ( !sub_14A8FA0(
              (__int64)a1,
              m128i_i64,
              v45,
              v46,
              v47,
              v48,
              a1[1].m128i_i64[0],
              a1[1].m128i_i64[1],
              a1[2].m128i_i64[0]) )
        break;
      if ( v96 )
      {
        a8 = (__m128)_mm_loadu_si128(a1 + 1);
        v65 = (__int64 *)a1->m128i_i64[1];
        v114 = a1[2].m128i_i64[0];
        v66 = a1[1].m128i_i32[0];
        *(__m128 *)v113 = a8;
        a1[2].m128i_i32[2] = v66;
        sub_14634E0(v65, a1[1].m128i_i32);
        sub_1564840(v118, a1, v89, 1591);
        sub_AE9DF0(v118, 0, 2u);
        v67 = v96;
        goto LABEL_105;
      }
      sub_14A0B50((__int64)a1, v91);
    }
    if ( !sub_14A9020(
            (__int64)a1,
            m128i_i64,
            v50,
            v51,
            v52,
            v53,
            a1[1].m128i_i64[0],
            a1[1].m128i_i64[1],
            a1[2].m128i_i64[0]) )
      break;
    if ( v97 )
    {
      v71 = _mm_loadu_si128(a1 + 1);
      v72 = (__int64 *)a1->m128i_i64[1];
      v114 = a1[2].m128i_i64[0];
      v73 = a1[1].m128i_i32[0];
      *(__m128i *)v113 = v71;
      a1[2].m128i_i32[2] = v73;
      sub_14634E0(v72, a1[1].m128i_i32);
      sub_1564840(v118, a1, v89, 1591);
      sub_AE9DF0(v118, 1, 2u);
      v67 = v97;
LABEL_105:
      LODWORD(v105) = v67;
      HIDWORD(v105) = v67;
      v106 = 1;
      sub_AEC610((__int64 *)v118, v90);
      sub_AEA040((__int64)v118);
    }
    else
    {
      sub_14A0BD0((__int64)a1, v92);
    }
  }
  sub_149F7A0((__int64)a1, v85, v88);
  v24 = a1[2].m128i_i16[0];
  if ( v24 == 62 || v24 == 24 )
  {
LABEL_21:
    if ( v24 != 62 )
      goto LABEL_22;
    sub_146B5E0(
      (__int64 *)&v105,
      (__int64)a1,
      *(_DWORD *)(*(_QWORD *)(a1[6].m128i_i64[0] + 608) + 8LL) | 0x800000,
      1,
      0);
    sub_14AD570((__int64)a1, (__int64)v95, v17, a8);
    if ( a1[2].m128i_i16[0] == 24 )
    {
LABEL_68:
      if ( v105 )
        sub_1564F70(v105);
      v24 = a1[2].m128i_i16[0];
LABEL_22:
      v26 = 63;
      v27 = (__int64 *)sub_1478A90;
      v107 = a1;
      v105 = a1 + 122;
      v28 = a1[122].m128i_i8[0];
      v108 = 1638424;
      v106 = v28;
      a1[122].m128i_i8[0] = 1;
      v109 = 63;
      v110 = sub_1478A90;
      v111 = 0;
      v112 = 0;
      if ( v24 == 24 )
      {
        if ( (unsigned int)a1[5].m128i_u16[6] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
        {
          sub_1568800(&v105);
          v29 = v95;
          if ( !v95 )
          {
LABEL_27:
            v31 = 0;
            if ( a5 == 26 )
              v31 = 2 * ((*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 89LL) & 1) == 0);
            v98 = v31;
            v81 = &a1[31].m128i_i8[8];
            v113[1] = &v115;
            v116[0] = (char *)a1 + 504;
            v32 = v117;
            v113[0] = nullptr;
            v114 = 0x200000000LL;
            v116[1] = v117;
            v116[2] = 0x200000000LL;
            if ( v29 )
            {
              v33 = a1[2].m128i_u16[0];
LABEL_31:
              v34 = (unsigned int)(v33 - 456);
              if ( (unsigned __int16)(v33 - 456) <= 2u )
              {
                while ( !(unsigned __int8)sub_15686D0(a1) )
                {
                  LOWORD(v33) = a1[2].m128i_i16[0];
                  if ( (_WORD)v33 == 25 )
                    break;
LABEL_33:
                  if ( (_WORD)v33 == 1 )
                    break;
                  v27 = (__int64 *)&v98;
                  sub_14B1D90((__int64)a1, (unsigned int *)&v98, (__int64)v113, a5, (__int64)v95, v17, a8);
                  v33 = a1[2].m128i_u16[0];
                  if ( a1[168].m128i_i8[8]
                    || !a1[160].m128i_i32[0]
                    || (_WORD)v33 != 1
                    && *(__int64 (__fastcall **)(__int64, __int64, __m128i, double))(a1->m128i_i64[1] + 1152) != sub_1436060 )
                  {
                    goto LABEL_31;
                  }
                  sub_15650B0(a1);
                  v33 = a1[2].m128i_u16[0];
                  v34 = (unsigned int)(v33 - 456);
                  if ( (unsigned __int16)(v33 - 456) > 2u )
                    goto LABEL_32;
                }
              }
              else
              {
LABEL_32:
                if ( (_WORD)v33 != 25 )
                  goto LABEL_33;
              }
              sub_14808E0((__int64)&v105, v27, v34, (__int64)v32, v26, v22);
            }
            else
            {
              LOWORD(v118[0]) = 25;
              sub_15680D0(a1, v118, 1, 0);
            }
            v21 = a1[2].m128i_i16[0] == 189;
            v118[1] = (unsigned __int8 *)v119;
            v118[0] = nullptr;
            v118[2] = (unsigned __int8 *)0x200000000LL;
            v119[2] = v81;
            v119[3] = &v120;
            v119[4] = 0x200000000LL;
            if ( v21 )
              sub_1490230(a1, (__int64)v118, 0, 0, v17, a8);
            if ( v95 )
            {
              sub_1893B00(
                a1[6].m128i_i64[0],
                *(_QWORD *)(a1[6].m128i_i64[0] + 608),
                v84,
                (_DWORD)v95,
                v112,
                HIDWORD(v112),
                (__int64)v118);
              v35 = v95;
              if ( v95 && v87 )
              {
                v36 = a1[2].m128i_i32[2];
                v37 = a1[120].m128i_i64[0];
                if ( v37 == a1[120].m128i_i64[1] )
                  v37 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
                sub_146DED0((__int64)a1, *(_QWORD *)(v37 - 8));
                v38 = a1[120].m128i_i64[0];
                if ( v38 == a1[120].m128i_i64[1] )
                  v38 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
                sub_146C9C0((__int64)a1, *(_QWORD *)(v38 - 8));
                v39 = a1[120].m128i_i64[0];
                if ( v39 == a1[120].m128i_i64[1] )
                  v39 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
                sub_146BA30((__int64)a1, *(_QWORD *)(v39 - 8));
                sub_185C6E0(a1[6].m128i_i64[0]);
                v40 = a1[120].m128i_i64[0];
                if ( v40 == a1[120].m128i_i64[1] )
                  v40 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
                sub_146C890((__int64)a1, *(_QWORD *)(v40 - 8));
                v41 = a1[120].m128i_i64[0];
                if ( v41 == a1[120].m128i_i64[1] )
                  v41 = *(_QWORD *)(a1[121].m128i_i64[1] - 8) + 512LL;
                sub_146BB00((__int64)a1, *(_QWORD *)(v41 - 8));
                a1[2].m128i_i32[2] = v36;
                sub_1885D40(a1[6].m128i_i64[0]);
                v35 = v95;
              }
              if ( v35 )
                sub_17AB6E0(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608), v35, v112);
            }
            sub_14A1970((__m128 *)a1, v100);
            if ( v99[0] )
            {
              sub_1564F70(v99[0]);
              v99[0] = 0;
            }
            sub_147A450(v118);
            sub_147A450(v113);
            v42 = v99[0];
            v105->m128i_i8[0] = v106;
            if ( !v42 )
              goto LABEL_64;
LABEL_63:
            sub_1564F70(v42);
            goto LABEL_64;
          }
LABEL_26:
          v30 = a1[6].m128i_i64[0];
          v27 = *(__int64 **)(v30 + 608);
          sub_17B7C00(v30, (_DWORD)v27, (_DWORD)v29, v25, v86, (unsigned __int8)v81 & 1, v96, v97);
          v29 = v95;
          goto LABEL_27;
        }
        LODWORD(v112) = sub_1478A90((__int64)a1);
      }
      v29 = v95;
      if ( !v95 )
        goto LABEL_27;
      goto LABEL_26;
    }
    v54 = sub_13DC060(
            a1[2].m128i_i32[2],
            0,
            *(__int64 **)(a1->m128i_i64[1] + 88),
            *(_QWORD *)(a1->m128i_i64[1] + 56),
            v17,
            *(double *)a8.m128_u64);
    v55 = v54;
    if ( (a1[2].m128i_i8[2] & 1) == 0 )
    {
      sub_1564820(v118, a1, v54, 1622);
      goto LABEL_119;
    }
    v56 = a1[2].m128i_i16[0];
    if ( (unsigned __int16)v56 > 0x8Fu )
    {
      v57 = 1;
      if ( v56 != 153 && v56 != 166 && v56 != 146 )
LABEL_96:
        v57 = sub_1562870(a1, 0);
    }
    else if ( (unsigned __int16)v56 >= 0x8Du )
    {
      v78 = a1->m128i_i64[1];
      v79 = *(_QWORD *)(v78 + 2944);
      if ( v79 >= *(unsigned int *)(v78 + 2912) )
        v80 = sub_14180A0(v78, 1u);
      else
        v80 = *(_QWORD *)(v78 + 2904) + 24 * v79;
      v57 = *(_WORD *)(v80 + 16) == 62;
    }
    else
    {
      if ( v56 == 5 )
      {
        v57 = sub_147F8B0((__int64)a1, 1u, 0, 0, 0);
        goto LABEL_88;
      }
      v57 = 1;
      if ( v56 != 25 )
        goto LABEL_96;
    }
LABEL_88:
    sub_1564820(v118, a1, v55, 1622);
    if ( v57 )
    {
      v58 = j__strlen(" {");
      sub_9EC740((__int64)v113, v55, " {", v58, 0);
      if ( LODWORD(v113[0]) && HIDWORD(v113[0]) )
        sub_14A2370((__int64 *)v118, (unsigned __int64)v113);
      if ( v115 != v116 )
        operator delete(v115);
      sub_1479990(a1->m128i_i64[1], a1 + 1, 1u);
      a1[2].m128i_i16[0] = 24;
      sub_AEA040((__int64)v118);
      goto LABEL_68;
    }
LABEL_119:
    if ( v95 )
      sub_17A64C0(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608));
    sub_AEA040((__int64)v118);
    if ( v105 )
      sub_1564F70(v105);
    goto LABEL_81;
  }
  if ( v95 )
    sub_17A64C0(a1[6].m128i_i64[0], *(_QWORD *)(a1[6].m128i_i64[0] + 608));
LABEL_81:
  sub_14A1970((__m128 *)a1, v100);
  v42 = v99[0];
  if ( v99[0] )
    goto LABEL_63;
LABEL_64:
  v101[0] = &off_2B4A628;
  sub_22338A0(v83);
  result = v82;
  if ( v82 )
    return sub_224D6D0(v82);
  return result;
}
