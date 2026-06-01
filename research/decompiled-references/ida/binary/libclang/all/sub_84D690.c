__int64 __fastcall sub_84D690(__int64 a1, _DWORD *a2, __m128i *a3, __int64 a4, unsigned __int8 a5, __int64 a6)
{
  __int64 result; // rax
  _DWORD *v11; // rbp
  __int8 v13; // cl
  __int32 v14; // eax
  _DWORD *v15; // r8
  unsigned int v16; // ecx
  unsigned __int64 v17; // r13
  unsigned int v18; // r12d
  __int64 v19; // r14
  __int64 *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // r15
  void **v26; // rsi
  unsigned __int64 v27; // rbp
  unsigned __int8 v28; // al
  unsigned __int8 **v29; // rdi
  bool v30; // al
  unsigned __int8 **v31; // rax
  int v32; // r13d
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // rbx
  void *v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // r13d
  int v38; // r12d
  unsigned __int8 **v39; // rax
  unsigned __int8 **v40; // rbp
  unsigned __int8 **v41; // rdi
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rcx
  unsigned __int64 v45; // r12
  unsigned __int64 v46; // r13
  unsigned __int8 **v47; // rax
  unsigned __int8 **v48; // rbx
  _QWORD *v49; // rax
  __m128i v50; // xmm0
  _QWORD *v51; // rax
  unsigned __int64 v52; // r13
  __int64 v53; // r15
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rsi
  __int64 v56; // rdi
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  _DWORD *v59; // r8
  __int64 v60; // r14
  _QWORD *v61; // r15
  __int64 v62; // rax
  void *v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rdx
  void *v69; // rax
  int v70; // eax
  char v71; // al
  char v72; // al
  __int64 v73; // rax
  __int64 *v74; // r8
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // r10
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // r10
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r14
  unsigned __int8 **v85; // rax
  unsigned __int8 **v86; // rbx
  __int64 v87; // rdi
  unsigned __int64 v88; // rsi
  unsigned __int64 v89; // rax
  __int64 v90; // r8
  unsigned __int64 v91; // r10
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rsi
  unsigned __int8 **v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  unsigned __int8 **v99; // rax
  unsigned __int64 v100; // r10
  unsigned __int8 **v101; // rbp
  unsigned int v102; // [rsp+0h] [rbp-158h]
  unsigned __int8 v103; // [rsp+0h] [rbp-158h]
  __int32 v104; // [rsp+8h] [rbp-150h]
  _DWORD *v105; // [rsp+8h] [rbp-150h]
  __int64 v106; // [rsp+8h] [rbp-150h]
  __int64 v107; // [rsp+10h] [rbp-148h]
  __m128i *v108; // [rsp+18h] [rbp-140h]
  __int64 v109; // [rsp+18h] [rbp-140h]
  unsigned __int64 v110; // [rsp+20h] [rbp-138h]
  __int64 *v111; // [rsp+20h] [rbp-138h]
  __int64 v112; // [rsp+28h] [rbp-130h]
  __int64 *v113; // [rsp+30h] [rbp-128h]
  __int64 v114; // [rsp+30h] [rbp-128h]
  __int64 *v115; // [rsp+30h] [rbp-128h]
  __int64 v116; // [rsp+30h] [rbp-128h]
  __int64 v117; // [rsp+30h] [rbp-128h]
  __int64 v118; // [rsp+30h] [rbp-128h]
  unsigned __int64 v119; // [rsp+40h] [rbp-118h]
  __int64 v120; // [rsp+48h] [rbp-110h]
  unsigned __int64 v121; // [rsp+50h] [rbp-108h]
  __int64 v122; // [rsp+50h] [rbp-108h]
  __int64 v123; // [rsp+50h] [rbp-108h]
  __int64 v124; // [rsp+58h] [rbp-100h]
  __int64 v125[4]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v126[4]; // [rsp+80h] [rbp-D8h] BYREF
  __m128i v127; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v128; // [rsp+B0h] [rbp-A8h]
  unsigned __int64 v129; // [rsp+B8h] [rbp-A0h]
  _QWORD v130[2]; // [rsp+C0h] [rbp-98h] BYREF
  unsigned int v131; // [rsp+D0h] [rbp-88h]
  __int64 v132; // [rsp+D8h] [rbp-80h]
  void *v133[2]; // [rsp+E0h] [rbp-78h] BYREF
  _QWORD *v134; // [rsp+F0h] [rbp-68h]
  __int64 v135; // [rsp+F8h] [rbp-60h]

  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  v11 = a2;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x20) == 0 )
  {
LABEL_32:
    sub_A2E130(a1, v11, 110, 0);
    return 0;
  }
  v102 = 4 - a5;
  sub_83CB20(&v127, a1, a2, v102, a3, a4);
  v130[0] = a1;
  v130[1] = a2;
  v132 = a6;
  if ( (v129 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  v13 = a3[1].m128i_i8[8];
  if ( (v13 & 1) != 0 )
    return 0;
  if ( (v13 & 2) != 0 )
    goto LABEL_36;
  v14 = a3[3].m128i_i32[2];
  if ( v14 == 1 )
  {
    if ( (v13 & 4) == 0
      && ((a3[1].m128i_i8[8] & 8) == 0
       || *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) != a3[2].m128i_i64[0]) )
    {
      goto LABEL_12;
    }
    goto LABEL_36;
  }
  if ( (a3[1].m128i_i8[8] & 8) != 0
    && a3[2].m128i_i64[0] == *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) )
  {
LABEL_36:
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
    {
      v30 = sub_820300((__int64)&a3[1].m128i_i64[1]);
      v31 = (unsigned __int8 **)sub_A2E130(a1, a2, !v30 ? 2173 : 2169, 0);
      if ( v31 )
        sub_823450(v31, v102);
      return 0;
    }
    goto LABEL_32;
  }
LABEL_12:
  v15 = (_DWORD *)v128;
  v16 = *(_DWORD *)v128;
  if ( (*(_BYTE *)(v128 + 4) & 1) == 0 )
  {
    if ( v16 > 1 )
    {
      v108 = a3;
      v17 = v129;
      v120 = a6;
      v18 = 0;
      v19 = v128;
      v110 = 0;
      v119 = 0;
      v104 = v14;
      v112 = v127.m128i_i64[0];
      v107 = (__int64)a2;
      goto LABEL_15;
    }
LABEL_48:
    if ( !*(_BYTE *)(a1 + 962) )
    {
      v105 = v15;
      v33 = (unsigned __int8 **)sub_A2E130(a1, v11, 2171, 0);
      v34 = v33;
      if ( v33 )
      {
        sub_823450(v33, v102);
        sub_823450(v34, *v105 == 1);
        v35 = (void *)sub_AC7B80(v11);
        LOBYTE(v133[1]) = 1;
        v133[0] = v35;
        sub_839C90((__int64 *)v34, (__int64 *)v133);
      }
    }
    return 0;
  }
  if ( v16 <= 1 )
    return 0;
  v110 = 0;
  v119 = 0;
  v104 = a3[3].m128i_i32[2];
  v112 = v127.m128i_i64[0];
  v107 = (__int64)a2;
  v108 = a3;
  v17 = v129;
  v120 = a6;
  v18 = 0;
  v19 = v128;
  while ( 1 )
  {
LABEL_15:
    v20 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v17 & 1) != 0
      || (v21 = *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL], (v21 & 1) != 0)
      || (((unsigned __int8)v17 | (unsigned __int8)v21) & 4) != 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47
        && (v49 = (_QWORD *)v108[3].m128i_i64[0],
            v127.m128i_i64[0] = v112,
            v50 = _mm_load_si128(&v127),
            v134 = v49,
            v135 = v18,
            *(__m128i *)v133 = v50,
            v51 = sub_84A740((__int64 *)(a1 + 872), (__int64 *)v133),
            v20 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF0LL),
            v51)
        && *((_DWORD *)v51 + 8) )
      {
        v52 = *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] | v17 & 7;
        v20 = (__int64 *)(v52 & 0xFFFFFFFFFFFFFFF0LL);
        v17 = v52 & 0xFFFFFFFFFFFFFFFALL;
        if ( v18 == v104 )
        {
LABEL_75:
          v21 = v20[1];
          goto LABEL_76;
        }
      }
      else if ( v18 == v104 )
      {
LABEL_55:
        if ( (v17 & 4) != 0 )
          goto LABEL_56;
        goto LABEL_75;
      }
LABEL_20:
      v22 = *v20;
      v23 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v104 - 1 != v18 )
        goto LABEL_21;
      if ( v23 != 14 )
      {
        if ( (unsigned __int8)(v23 - 2) > 4u )
        {
          v42 = 8LL * v18;
          goto LABEL_66;
        }
LABEL_22:
        v24 = sub_6D9A50(*(_QWORD **)(a1 + 16), v17);
        v25 = v24;
        if ( !v24 || (unsigned int)*(unsigned __int8 *)(v24 + 16) - 2 > 1 )
          BUG();
        v26 = *(void ***)(v24 + 40);
        v27 = *(_QWORD *)(v108[3].m128i_i64[0] + 8LL * v18);
        v28 = *(_BYTE *)(v24 + 19);
        if ( (v28 & 2) != 0 )
        {
          LODWORD(v133[1]) = *((_DWORD *)v26 + 2);
          if ( LODWORD(v133[1]) <= 0x40 )
          {
            v133[0] = *v26;
LABEL_27:
            if ( (void *)v27 >= v133[0] )
            {
              v11 = (_DWORD *)v107;
LABEL_29:
              if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
                goto LABEL_32;
              v29 = (unsigned __int8 **)sub_A2E130(a1, v11, 2169, 0);
              if ( v29 )
                sub_823450(v29, v102);
              return 0;
            }
            goto LABEL_44;
          }
          sub_2585B30(v133);
        }
        else
        {
          LODWORD(v133[1]) = 8 * ((v28 >> 2) & 0x1F);
          if ( SLODWORD(v133[1]) <= 64 )
          {
            v133[0] = v26;
            goto LABEL_27;
          }
          sub_2585A50(v133, v26, 0);
        }
        v32 = (int)v133[1];
        if ( LODWORD(v133[1]) <= 0x40 )
          goto LABEL_27;
        if ( v32 - (unsigned int)sub_2587400(v133) <= 0x40 )
        {
          if ( v27 >= *(_QWORD *)v133[0] )
          {
            v11 = (_DWORD *)v107;
            if ( v133[0] )
              operator delete[](v133[0]);
            goto LABEL_29;
          }
        }
        else if ( !v133[0] )
        {
          goto LABEL_44;
        }
        operator delete[](v133[0]);
LABEL_44:
        v17 = *(_QWORD *)(v25 + 32);
        if ( v27 >= *(unsigned int *)(v19 + 16) )
        {
          v36 = sub_8124E0(v107);
          if ( !(unsigned __int8)sub_838500(a1, v25, v36) )
            return 0;
          sub_81FAA0(v19, v27);
          v110 = 0;
          v19 = *(_QWORD *)(v19 + 8) + 56LL * (unsigned int)v27;
        }
        else
        {
          v110 = 0;
          v19 = *(_QWORD *)(v19 + 8) + 56 * v27;
        }
        goto LABEL_46;
      }
      goto LABEL_55;
    }
    if ( v18 != v104 )
      goto LABEL_20;
LABEL_76:
    if ( (v21 & 4) != 0 )
    {
LABEL_56:
      v11 = (_DWORD *)v107;
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
        goto LABEL_32;
      v37 = 0;
      if ( v119 )
      {
        v37 = *(_DWORD *)(v119 + 24);
        v38 = 2;
LABEL_59:
        v39 = (unsigned __int8 **)sub_A2E130(a1, v107, 2174, 1);
        v40 = v39;
        if ( v39 )
        {
          sub_823450(v39, v102);
          sub_823450(v40, v38);
          sub_8356A0(v40, v119, 0xAu);
        }
        v41 = (unsigned __int8 **)sub_A2DD70(a1, v37, 2304);
        if ( v41 )
          sub_823450(v41, v38);
        return 0;
      }
      if ( v112 )
      {
        if ( (v112 & 3) == 0 )
        {
          v38 = 1;
          v119 = v112 & 0xFFFFFFFFFFFFFFFCLL;
          v37 = *(_DWORD *)((v112 & 0xFFFFFFFFFFFFFFFCLL) + 24);
          goto LABEL_59;
        }
        if ( (v112 & 3) == 1 && (v112 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          v37 = sub_8124E0(v112 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v38 = 0;
      goto LABEL_59;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
    {
      v113 = v20;
      v127.m128i_i64[0] = v112;
      v71 = sub_82E820(&v127, a1, v102);
      v20 = v113;
      if ( !v71 )
      {
        v72 = sub_836740(a1, v107, v102, v17);
        v20 = v113;
        if ( v72 )
          return 0;
      }
    }
    if ( v18 == v104 )
      break;
    v22 = *v20;
    v23 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_21:
    if ( (unsigned __int8)(v23 - 2) <= 4u )
      goto LABEL_22;
    v42 = 8LL * v18;
    if ( v23 == 14 )
    {
      v53 = v17;
      v11 = (_DWORD *)v107;
      v54 = *(_QWORD *)(v108[3].m128i_i64[0] + 8LL * v18);
      if ( v54 > 1 )
        goto LABEL_29;
      if ( *(_BYTE *)(v22 + 16) != 14 )
        v22 = sub_B0D320(v22);
      v55 = *(_QWORD *)(v22 + 32);
      v56 = v53;
      v57 = sub_81F6C0(v53, v55, 0);
      v60 = v57;
      if ( *v59 == 5 )
      {
        v96 = (__int64)(v59 + 2);
        if ( v54 )
          v96 = (__int64)(v59 + 6);
        v131 = v102;
        return sub_82D190((__int64)v130, v96, v57);
      }
      v61 = v59 + 2;
      if ( v54 )
        v61 = v59 + 8;
      if ( (v57 & 1) == 0 && (byte_8[v57 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
      {
        v62 = sub_2575D20(v56, v55, v58);
        v63 = (void *)v62;
        if ( v120 )
        {
          if ( *v61 == v62 )
            sub_257CF50(v125, v61);
          else
            sub_25768A0(v125, v61);
          BYTE4(v133[0]) &= ~1u;
          LODWORD(v133[0]) = 0;
          v109 = sub_2575D00(v125, v61, 0);
          sub_2580BE0(v126, 0.0);
          sub_257EDC0(&v133[1], v126, v109);
          sub_25769A0(v126);
          LODWORD(v133[0]) = 3;
          if ( (void *)v125[0] == v63 )
            sub_257D000(v126, v125, v64, v65);
          else
            sub_2576960(v126, v125);
          if ( v133[1] == v63 )
          {
            if ( (void *)v126[0] != v63 )
              goto LABEL_165;
            if ( v134 )
              sub_832F90(v134, (__int64)v125, v66);
            v134 = nullptr;
            sub_257D000(&v133[1], v126, v66, v67);
          }
          else
          {
            if ( (void *)v126[0] != v63 )
            {
              sub_2576350(&v133[1], v126, v66, v67);
              goto LABEL_103;
            }
LABEL_165:
            sub_5FF3B0((__int64 *)&v133[1]);
            if ( (void *)v126[0] == v63 )
              sub_257D000(&v133[1], v126, v97, v98);
            else
              sub_2576960(&v133[1], v126);
          }
LABEL_103:
          sub_5FF3B0(v126);
          sub_6A01B0(v120, (__int64)v133);
          if ( LODWORD(v133[0]) > 1 )
            sub_69F740((__int64)v133);
          sub_5FF3B0(v125);
        }
        if ( (void *)*v61 == v63 )
          sub_257CEA0(v133, v63, 1);
        else
          sub_25785E0(v133, *v61, 1);
        v68 = ((unsigned int)sub_8175F0(v107, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2160LL)) >> 3) & 7;
        if ( (_BYTE)v68 == 7 )
          v68 = 1;
        v69 = (void *)*v61;
        if ( v102 == 3 )
        {
          if ( v69 == v63 )
            v70 = sub_257DC20(v61, v133, v68);
          else
            v70 = sub_257BF20(v61, v133, v68);
        }
        else if ( v69 == v63 )
        {
          v70 = sub_257DC40(v61, v133, v68);
        }
        else
        {
          v70 = sub_257BF10(v61, v133, v68);
        }
        v103 = sub_81FBE0(a1, v107, v70);
        sub_5FF3B0((__int64 *)v133);
        return v103;
      }
      v95 = (unsigned __int8 **)sub_A2E130(a1, v107, 2240, 0);
      if ( v95 )
        sub_8356A0(v95, v60, 8u);
      return 0;
    }
LABEL_66:
    if ( (unsigned int)*(unsigned __int8 *)(v22 + 16) - 56 <= 1 )
    {
      v11 = (_DWORD *)v107;
      v43 = v19;
      v44 = v108[3].m128i_i64[0];
      goto LABEL_68;
    }
    v114 = v42;
    v111 = v20;
    v73 = sub_820370(v22);
    v42 = v114;
    v74 = v111;
    v22 = v73;
    v44 = v108[3].m128i_i64[0];
    v75 = *(_QWORD *)(v44 + v114);
    if ( v22 )
    {
      v11 = (_DWORD *)v107;
      v43 = v19;
LABEL_68:
      v45 = *(_QWORD *)(v44 + v42);
      v46 = *(unsigned int *)(v22 + 20);
      if ( v45 != v46 )
      {
        if ( v46 >= v45 )
        {
          v93 = *(_QWORD *)(v22 + 32);
          v94 = *(_QWORD *)(v43 + 8) + 56 * v45;
          v131 = v102;
          return sub_838840(v130, v94, v93);
        }
        v47 = (unsigned __int8 **)sub_A2E240(a1, v11, 2179, 0);
        v48 = v47;
        if ( v47 )
        {
          sub_8356A0(v47, v45, 3u);
          sub_823450(v48, 0);
          sub_8356A0(v48, v46, 3u);
        }
        return 0;
      }
      goto LABEL_29;
    }
    v76 = v75 & 0xFFFFFFFFFFFFFFF8LL;
    v110 = v75 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v75 <= 7 || (*(_BYTE *)(v76 + 28) & 0x7Fu) - 47 > 2 )
    {
      v87 = sub_B0E910(*v74);
      v88 = *(_QWORD *)(v108[3].m128i_i64[0] + v114) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v108[3].m128i_i64[0] + v114) <= 7u )
      {
        v88 = 0;
      }
      else if ( (*(_BYTE *)(v88 + 28) & 0x7Fu) - 57 >= 3 )
      {
        v88 = 0;
      }
      v19 = *(_QWORD *)(v19 + 8) + 56LL * (unsigned int)sub_84C340(v87, v88);
      v89 = sub_6E8B00(*(_QWORD *)(a1 + 16), v88);
      v110 = 0;
      v17 = sub_81F6C0(v17, v89, 0);
    }
    else
    {
      if ( (*(_BYTE *)(v76 + 68) & 2) != 0 )
      {
        v121 = v75 & 0xFFFFFFFFFFFFFFF8LL;
        v115 = v74;
        v127.m128i_i64[0] = v112;
        v77 = sub_82E820(&v127, a1, v102);
        v74 = v115;
        v76 = v121;
        if ( !v77 )
        {
          v99 = (unsigned __int8 **)sub_A2E130(a1, v107, 2167, 1);
          v100 = v121;
          v101 = v99;
          if ( v99 )
          {
            sub_823450(v99, v102);
            sub_8356A0(v101, v121, 0xAu);
            v100 = v121;
          }
          sub_A2DD70(a1, *(unsigned int *)(v100 + 24), 105);
          return 0;
        }
      }
      v116 = v76;
      v78 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v74 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v79 = v116;
      if ( *(_BYTE *)(v78 + 73) >> 5 == 2 )
      {
        v80 = *(_QWORD *)(v19 + 8);
        if ( !v80 )
          goto LABEL_131;
        v81 = *(_QWORD *)(v19 + 8);
        if ( *(char *)(v80 + 29) < 0 )
        {
          v122 = v116;
          v117 = *(_QWORD *)(v19 + 8);
          v82 = sub_77A0C0(v117);
          v79 = v122;
          v80 = v117;
          v81 = v82;
        }
        v83 = v79;
        if ( *(char *)(v79 + 29) < 0 )
        {
          v124 = v80;
          v123 = v81;
          v118 = v79;
          v83 = sub_77A0C0(v79);
          v80 = v124;
          v81 = v123;
          v79 = v118;
        }
        if ( v83 != v81 )
        {
LABEL_131:
          v84 = v80;
          v106 = v79;
          v85 = (unsigned __int8 **)sub_A2E130(a1, v107, 2166, 0);
          v86 = v85;
          if ( v85 )
          {
            sub_823450(v85, v102);
            sub_8356A0(v86, v106, 0xAu);
            sub_823450(v86, v84 == 0);
            sub_8356A0(v86, v84, 0xAu);
          }
          return 0;
        }
        v19 = *(_QWORD *)(v19 + 16);
      }
      else
      {
        v92 = sub_83D880(v116);
        v79 = v116;
        v19 = *(_QWORD *)(v19 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v19 + 16) + v92);
      }
      v17 = sub_81F6C0(v17, *(_QWORD *)(v79 + 48), (*(_BYTE *)(v79 + 68) & 2) != 0);
      if ( (v90 & 4) != 0 )
      {
        v119 = v91;
      }
      else
      {
        if ( (byte_8[v90 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          v91 = v119;
        v119 = v91;
      }
    }
LABEL_46:
    ++v18;
    if ( *(_DWORD *)v19 <= 1u )
    {
      v11 = (_DWORD *)v107;
      v15 = (_DWORD *)v19;
      goto LABEL_48;
    }
  }
  v131 = v102;
  result = sub_838840(v130, v19, v17);
  if ( !(_BYTE)result )
    return 0;
  if ( ((1LL << v131) & 0x4E3) == 0 && v110 && (*(_BYTE *)(v110 + 68) & 1) != 0 )
    return sub_824FF0(a1, v107, v19, v110);
  return result;
}

