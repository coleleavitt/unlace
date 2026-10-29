__int64 __fastcall sub_84C750(__int64 a1, _DWORD *a2, __m128i *a3, __int64 a4, __int64 a5)
{
  _DWORD *v8; // r12
  __int8 v11; // dl
  _DWORD *v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r11
  unsigned int v15; // r15d
  unsigned __int64 v16; // r12
  __int64 v17; // r13
  __int32 v18; // r14d
  __int64 *v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdi
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rcx
  void **v25; // rsi
  unsigned __int64 v26; // rbx
  unsigned __int8 v27; // al
  unsigned __int8 **v28; // rdi
  bool v29; // al
  unsigned __int8 **v30; // rax
  int v31; // r12d
  int v32; // eax
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // rbx
  void *v35; // rax
  unsigned int v36; // r13d
  __int64 v37; // r14
  unsigned __int8 **v38; // rax
  unsigned __int8 **v39; // rbx
  unsigned __int8 **v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r9
  int *v43; // r13
  __int64 v44; // rdx
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rbx
  unsigned __int8 **v47; // rax
  unsigned __int8 **v48; // rbp
  __int64 v49; // rax
  __m128i v50; // xmm0
  _QWORD *v51; // rax
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // rax
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  _DWORD *v60; // r9
  __int64 v61; // r14
  __int64 *v62; // rdi
  __int64 v63; // rax
  __int64 *v64; // r10
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  char v67; // al
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  __int64 v75; // r9
  unsigned __int64 v76; // rcx
  __int64 v77; // rdi
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rax
  char v80; // al
  char v81; // al
  int v82; // eax
  __int64 v83; // r14
  _DWORD *v84; // rsi
  __int64 v85; // rax
  _QWORD *v86; // r12
  unsigned __int8 *v87; // rbx
  unsigned __int64 v88; // r8
  _BYTE *v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // r12
  unsigned __int8 *v93; // rbx
  _BYTE *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rax
  __int64 v99; // rbp
  __int64 v100; // r13
  __int64 v101; // rbp
  void *v102; // rdi
  unsigned __int8 **v103; // rax
  unsigned __int8 **v104; // rbx
  unsigned __int8 *v105; // rax
  unsigned __int8 *v106; // rax
  _DWORD *v107; // r15
  __int64 v108; // r14
  unsigned __int8 **v109; // rax
  unsigned __int8 **v110; // rbx
  unsigned __int8 **v111; // rdi
  __int64 v112; // rdx
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rbp
  __int64 v116; // r13
  __int64 v117; // rbp
  void *v118; // rdi
  unsigned __int8 *v119; // rax
  _DWORD *v121; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v122; // [rsp+0h] [rbp-C8h]
  __m128i *v123; // [rsp+8h] [rbp-C0h]
  __int64 v124; // [rsp+8h] [rbp-C0h]
  __int64 v125; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v126; // [rsp+10h] [rbp-B8h]
  __int64 v127; // [rsp+18h] [rbp-B0h]
  __int64 v128; // [rsp+20h] [rbp-A8h]
  __int64 v129; // [rsp+20h] [rbp-A8h]
  __int64 v130; // [rsp+20h] [rbp-A8h]
  __int64 v131; // [rsp+20h] [rbp-A8h]
  __int64 v132; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v133; // [rsp+20h] [rbp-A8h]
  __int64 v134; // [rsp+20h] [rbp-A8h]
  __int64 v135; // [rsp+28h] [rbp-A0h]
  __int64 v136; // [rsp+38h] [rbp-90h]
  __int64 v137; // [rsp+38h] [rbp-90h]
  __int64 *v138; // [rsp+38h] [rbp-90h]
  unsigned __int64 v139; // [rsp+38h] [rbp-90h]
  __int64 v140; // [rsp+38h] [rbp-90h]
  __int64 v141; // [rsp+38h] [rbp-90h]
  __int64 *v142; // [rsp+38h] [rbp-90h]
  __int64 *v143; // [rsp+40h] [rbp-88h]
  __int64 v144; // [rsp+40h] [rbp-88h]
  __m128i v145; // [rsp+50h] [rbp-78h] BYREF
  __int64 v146; // [rsp+60h] [rbp-68h]
  unsigned __int64 v147; // [rsp+68h] [rbp-60h]
  void *v148[2]; // [rsp+70h] [rbp-58h] BYREF
  __int64 v149; // [rsp+80h] [rbp-48h]
  __int64 v150; // [rsp+88h] [rbp-40h]

  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  v8 = a2;
  if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x20) == 0 )
    goto LABEL_31;
  sub_83CB20(&v145, a1, a2, 2u, a3, a4);
  if ( (v147 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    return 0;
  v11 = a3[1].m128i_i8[8];
  if ( (v11 & 1) != 0 )
    return 0;
  if ( (v11 & 2) != 0 )
    goto LABEL_35;
  if ( a3[3].m128i_i32[2] == 1 )
  {
    if ( (v11 & 4) == 0
      && ((a3[1].m128i_i8[8] & 8) == 0
       || *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) != a3[2].m128i_i64[0]) )
    {
      goto LABEL_11;
    }
LABEL_35:
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
    {
      v29 = sub_820300((__int64)&a3[1].m128i_i64[1]);
      v30 = (unsigned __int8 **)sub_A2E130(a1, a2, !v29 ? 2173 : 2169, 0);
      if ( v30 )
        sub_823450(v30, 2);
      return 0;
    }
    goto LABEL_31;
  }
  if ( (a3[1].m128i_i8[8] & 8) != 0
    && a3[2].m128i_i64[0] == *(_QWORD *)(a3[3].m128i_i64[0] + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) )
  {
    goto LABEL_35;
  }
LABEL_11:
  v12 = (_DWORD *)v146;
  v13 = *(_DWORD *)v146;
  if ( (*(_BYTE *)(v146 + 4) & 1) != 0 )
  {
    if ( v13 <= 1 )
      return 0;
  }
  else if ( !v13 )
  {
LABEL_47:
    if ( !*(_BYTE *)(a1 + 962) )
    {
      v121 = v12;
      v33 = (unsigned __int8 **)sub_A2E130(a1, v8, 2171, 0);
      v34 = v33;
      if ( v33 )
      {
        sub_823450(v33, 2);
        sub_823450(v34, *v121 == 1);
        v35 = (void *)sub_AC7B80(v8);
        LOBYTE(v148[1]) = 1;
        v148[0] = v35;
        sub_839C90((__int64 *)v34, (__int64 *)v148);
      }
    }
    return 0;
  }
  v123 = a3;
  v14 = 0;
  v15 = 0;
  v126 = 0;
  v127 = v145.m128i_i64[0];
  v16 = v147;
  v135 = a5;
  v17 = v146;
  v18 = a3[3].m128i_i32[2];
  while ( 1 )
  {
    v19 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v16 & 1) != 0
      || (v20 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL], (v20 & 1) != 0)
      || (((unsigned __int8)v16 | (unsigned __int8)v20) & 4) != 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47
        && (v49 = v123[3].m128i_i64[0],
            v145.m128i_i64[0] = v127,
            v50 = _mm_load_si128(&v145),
            v129 = v14,
            v149 = v49,
            v150 = v15,
            *(__m128i *)v148 = v50,
            v51 = sub_84A740((__int64 *)(a1 + 872), (__int64 *)v148),
            v14 = v129,
            v19 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL),
            v51)
        && *((_DWORD *)v51 + 8) )
      {
        v52 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] | v16 & 7;
        v53 = v52 & 0xFFFFFFFFFFFFFFF0LL;
        v16 = v52 & 0xFFFFFFFFFFFFFFFALL;
        v19 = (__int64 *)v53;
        if ( v15 == v18 )
        {
LABEL_74:
          v20 = v19[1];
          goto LABEL_75;
        }
      }
      else if ( v15 == v18 )
      {
LABEL_50:
        if ( (v16 & 4) != 0 )
          goto LABEL_51;
        goto LABEL_74;
      }
LABEL_19:
      v21 = *v19;
      v22 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v15 != v18 - 1 )
        goto LABEL_20;
      if ( v22 != 14 )
      {
        if ( (unsigned __int8)(v22 - 2) > 4u )
        {
          v41 = 8LL * v15;
          goto LABEL_65;
        }
LABEL_21:
        v23 = sub_6D9A50(*(_QWORD **)(a1 + 16), v16);
        v24 = v23;
        if ( !v23 || (unsigned int)*(unsigned __int8 *)(v23 + 16) - 2 > 1 )
          BUG();
        v25 = *(void ***)(v23 + 40);
        v26 = *(_QWORD *)(v123[3].m128i_i64[0] + 8LL * v15);
        v27 = *(_BYTE *)(v23 + 19);
        if ( (v27 & 2) != 0 )
        {
          LODWORD(v148[1]) = *((_DWORD *)v25 + 2);
          if ( LODWORD(v148[1]) <= 0x40 )
          {
            v148[0] = *v25;
LABEL_26:
            if ( (void *)v26 >= v148[0] )
            {
              v8 = a2;
LABEL_28:
              if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
                goto LABEL_31;
              v28 = (unsigned __int8 **)sub_A2E130(a1, v8, 2169, 0);
              if ( v28 )
                sub_823450(v28, 2);
              return 0;
            }
            goto LABEL_43;
          }
          v136 = v24;
          sub_2585B30(v148);
          v24 = v136;
        }
        else
        {
          LODWORD(v148[1]) = 8 * ((v27 >> 2) & 0x1F);
          if ( SLODWORD(v148[1]) <= 64 )
          {
            v148[0] = v25;
            goto LABEL_26;
          }
          v137 = v24;
          sub_2585A50(v148, v25, 0);
          v24 = v137;
        }
        v31 = (int)v148[1];
        if ( LODWORD(v148[1]) <= 0x40 )
          goto LABEL_26;
        v128 = v24;
        v32 = sub_2587400(v148);
        v24 = v128;
        if ( (unsigned int)(v31 - v32) <= 0x40 )
        {
          if ( v26 >= *(_QWORD *)v148[0] )
          {
            v8 = a2;
            if ( v148[0] )
              operator delete[](v148[0]);
            goto LABEL_28;
          }
        }
        else if ( !v148[0] )
        {
          goto LABEL_43;
        }
        operator delete[](v148[0]);
        v24 = v128;
LABEL_43:
        v16 = *(_QWORD *)(v24 + 32);
        if ( v26 >= *(unsigned int *)(v17 + 16) )
        {
          v130 = v24;
          v54 = sub_8124E0((__int64)a2);
          if ( !(unsigned __int8)sub_838500(a1, v130, v54) )
            return 0;
          sub_81FAA0(v17, v26);
          v14 = 0;
          v17 = *(_QWORD *)(v17 + 8) + 56LL * (unsigned int)v26;
        }
        else
        {
          v14 = 0;
          v17 = *(_QWORD *)(v17 + 8) + 56 * v26;
        }
        goto LABEL_45;
      }
      goto LABEL_50;
    }
    if ( v15 != v18 )
      goto LABEL_19;
LABEL_75:
    if ( (v20 & 4) != 0 )
    {
LABEL_51:
      v8 = a2;
      if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) == 0 )
        goto LABEL_31;
      v36 = 0;
      if ( v126 )
      {
        v36 = *(_DWORD *)(v126 + 24);
        v37 = 2;
LABEL_54:
        v38 = (unsigned __int8 **)sub_A2E130(a1, a2, 2174, 1);
        v39 = v38;
        if ( v38 )
        {
          sub_823450(v38, 2);
          sub_823450(v39, v37);
          sub_8356A0(v39, v126, 0xAu);
        }
        v40 = (unsigned __int8 **)sub_A2DD70(a1, v36, 2304);
        if ( v40 )
          sub_823450(v40, v37);
        return 0;
      }
      if ( v127 )
      {
        if ( (v127 & 3) == 0 )
        {
          v37 = 1;
          v126 = v127 & 0xFFFFFFFFFFFFFFFCLL;
          v36 = *(_DWORD *)((v127 & 0xFFFFFFFFFFFFFFFCLL) + 24);
          goto LABEL_54;
        }
        if ( (v127 & 3) == 1 && (v127 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          v36 = sub_8124E0(v127 & 0xFFFFFFFFFFFFFFFCLL);
      }
      v37 = 0;
      goto LABEL_54;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
    {
      v142 = v19;
      v134 = v14;
      v145.m128i_i64[0] = v127;
      v80 = sub_82E820(&v145, a1, 2u);
      v14 = v134;
      v19 = v142;
      if ( !v80 )
      {
        v81 = sub_836740(a1, (__int64)a2, 2u, v16);
        v14 = v134;
        v19 = v142;
        if ( v81 )
          return 0;
      }
    }
    if ( v15 == v18 )
      break;
    v21 = *v19;
    v22 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_20:
    if ( (unsigned __int8)(v22 - 2) <= 4u )
      goto LABEL_21;
    v41 = 8LL * v15;
    if ( v22 == 14 )
    {
      v55 = v16;
      v8 = a2;
      v56 = *(_QWORD *)(v123[3].m128i_i64[0] + 8LL * v15);
      if ( v56 > 1 )
        goto LABEL_28;
      if ( *(_BYTE *)(v21 + 16) != 14 )
      {
        v124 = v55;
        v57 = sub_B0D320(v21);
        v55 = v124;
        v21 = v57;
      }
      v58 = sub_81F6C0(v55, *(_QWORD *)(v21 + 32), 0);
      v61 = v58;
      if ( *v60 != 5 )
      {
        v62 = (__int64 *)(v60 + 2);
        if ( v56 )
          v62 = (__int64 *)(v60 + 8);
        if ( (v58 & 1) == 0 && (byte_8[v58 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
        {
          sub_834130(v62, (__int64 *)(v135 + 8), v59);
          return 1;
        }
LABEL_172:
        v111 = (unsigned __int8 **)sub_A2E130(a1, a2, 2240, 0);
        if ( v111 )
          sub_8356A0(v111, v61, 8u);
        return 0;
      }
      v107 = v60 + 2;
      if ( v56 )
        v107 = v60 + 6;
      if ( (v58 & 1) != 0 || (byte_8[v58 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        goto LABEL_172;
      if ( *(_DWORD *)v135 == 2 )
      {
        if ( v107[2] <= 0x40u && *(_DWORD *)(v135 + 16) <= 0x40u )
        {
          *(_QWORD *)v107 = *(_QWORD *)(v135 + 8);
          v107[2] = *(_DWORD *)(v135 + 16);
        }
        else
        {
          sub_2585EA0(v107, v135 + 8);
        }
        *((_BYTE *)v107 + 12) = *(_BYTE *)(v135 + 20);
        return 1;
      }
LABEL_31:
      sub_A2E130(a1, v8, 110, 0);
      return 0;
    }
LABEL_65:
    if ( (unsigned int)*(unsigned __int8 *)(v21 + 16) - 56 <= 1 )
    {
      v42 = v17;
      v8 = a2;
      v43 = (int *)v135;
      v44 = v123[3].m128i_i64[0];
      goto LABEL_67;
    }
    v138 = v19;
    v131 = v41;
    v63 = sub_820370(v21);
    v64 = v138;
    v21 = v63;
    v44 = v123[3].m128i_i64[0];
    v65 = *(_QWORD *)(v44 + v41);
    if ( v21 )
    {
      v42 = v17;
      v8 = a2;
      v43 = (int *)v135;
LABEL_67:
      v45 = *(_QWORD *)(v44 + v41);
      v46 = *(unsigned int *)(v21 + 20);
      if ( v45 == v46 )
        goto LABEL_28;
      if ( v46 >= v45 )
      {
        v83 = *(_QWORD *)(v21 + 32);
        if ( (v83 & 1) == 0 && (byte_8[v83 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
        {
          sub_6A0310((int *)(*(_QWORD *)(v42 + 8) + 56 * v45), v43);
          return 1;
        }
        v91 = sub_A2E130(a1, v8, 2240, 0);
        v92 = (_QWORD *)v91;
        if ( v91 )
        {
          v93 = *(unsigned __int8 **)v91;
          if ( !*(_QWORD *)v91 )
          {
            v112 = *(_QWORD *)(v91 + 8);
            v113 = *(_DWORD *)(v112 + 14976);
            if ( v113 )
            {
              v114 = (unsigned int)(v113 - 1);
              *(_DWORD *)(v112 + 14976) = v114;
              v93 = *(unsigned __int8 **)(v112 + 8 * v114 + 14848);
              v115 = *((unsigned int *)v93 + 134);
              v116 = *((_QWORD *)v93 + 66);
              *v93 = 0;
              *((_DWORD *)v93 + 106) = 0;
              v117 = v116 + (v115 << 6);
              while ( v116 != v117 )
              {
                v117 -= 64;
                v118 = *(void **)(v117 + 24);
                if ( v118 != (void *)(v117 + 40) )
                  operator delete(v118, *(_QWORD *)(v117 + 40) + 1LL);
              }
              *((_DWORD *)v93 + 134) = 0;
            }
            else
            {
              v93 = (unsigned __int8 *)operator new(0x3A0u);
              *v93 = 0;
              v119 = v93 + 112;
              do
              {
                *((_QWORD *)v119 - 2) = v119;
                v119 += 32;
                *((_QWORD *)v119 - 5) = 0;
                *(v119 - 32) = 0;
              }
              while ( v119 != v93 + 432 );
              *((_QWORD *)v93 + 52) = v119;
              *((_QWORD *)v93 + 53) = 0x800000000LL;
              *((_QWORD *)v93 + 66) = v93 + 544;
              *((_QWORD *)v93 + 67) = 0x600000000LL;
            }
            *v92 = v93;
          }
          v93[*v93 + 1] = 8;
          v94 = (_BYTE *)*v92;
          v95 = *(unsigned __int8 *)*v92;
          *v94 = v95 + 1;
          *(_QWORD *)&v94[8 * v95 + 16] = v83;
        }
      }
      else
      {
        v47 = (unsigned __int8 **)sub_A2E240(a1, v8, 2179, 0);
        v48 = v47;
        if ( v47 )
        {
          sub_8356A0(v47, v45, 3u);
          sub_823450(v48, 0);
          sub_8356A0(v48, v46, 3u);
        }
      }
      return 0;
    }
    v66 = v65 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v65 <= 7 || (*(_BYTE *)(v66 + 28) & 0x7Fu) - 47 > 2 )
    {
      v77 = sub_B0E910(*v138);
      v78 = *(_QWORD *)(v123[3].m128i_i64[0] + v41) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v123[3].m128i_i64[0] + v131) <= 7u )
      {
        v78 = 0;
      }
      else if ( (*(_BYTE *)(v78 + 28) & 0x7Fu) - 57 >= 3 )
      {
        v78 = 0;
      }
      v17 = *(_QWORD *)(v17 + 8) + 56LL * (unsigned int)sub_84C340(v77, v78);
      v79 = sub_6E8B00(*(_QWORD *)(a1 + 16), v78);
      v16 = sub_81F6C0(v16, v79, 0);
    }
    else
    {
      if ( (*(_BYTE *)(v66 + 68) & 2) != 0 )
      {
        v143 = v138;
        v139 = v65 & 0xFFFFFFFFFFFFFFF8LL;
        v145.m128i_i64[0] = v127;
        v67 = sub_82E820(&v145, a1, 2u);
        v66 = v139;
        v64 = v143;
        if ( !v67 )
        {
          v103 = (unsigned __int8 **)sub_A2E130(a1, a2, 2167, 1);
          v104 = v103;
          if ( v103 )
          {
            sub_823450(v103, 2);
            sub_8356A0(v104, v139, 0xAu);
          }
          sub_A2DD70(a1, *(unsigned int *)(v139 + 24), 105);
          return 0;
        }
      }
      v140 = v66;
      v68 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v64 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v69 = v140;
      if ( *(_BYTE *)(v68 + 73) >> 5 == 2 )
      {
        v70 = *(_QWORD *)(v17 + 8);
        v132 = v70;
        if ( !v70 )
          goto LABEL_170;
        v71 = *(_QWORD *)(v17 + 8);
        if ( *(char *)(v70 + 29) < 0 )
        {
          v72 = sub_77A0C0(v70);
          v69 = v140;
          v71 = v72;
        }
        v73 = v69;
        if ( *(char *)(v69 + 29) < 0 )
        {
          v144 = v71;
          v141 = v69;
          v73 = sub_77A0C0(v69);
          v71 = v144;
          v69 = v141;
        }
        if ( v73 != v71 )
        {
LABEL_170:
          v108 = v69;
          v109 = (unsigned __int8 **)sub_A2E130(a1, a2, 2166, 0);
          v110 = v109;
          if ( v109 )
          {
            sub_823450(v109, 2);
            sub_8356A0(v110, v108, 0xAu);
            sub_823450(v110, v132 == 0);
            sub_8356A0(v110, v132, 0xAu);
          }
          return 0;
        }
        v17 = *(_QWORD *)(v17 + 16);
      }
      else
      {
        v82 = sub_83D880(v140);
        v69 = v140;
        v17 = *(_QWORD *)(v17 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v17 + 16) + v82);
      }
      v133 = v69;
      v74 = sub_81F6C0(v16, *(_QWORD *)(v69 + 48), (*(_BYTE *)(v69 + 68) & 2) != 0);
      v76 = v133;
      v16 = v74;
      if ( (v75 & 4) != 0 )
      {
        v126 = v133;
      }
      else
      {
        if ( (byte_8[v75 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          v76 = v126;
        v126 = v76;
      }
    }
LABEL_45:
    ++v15;
    if ( !*(_DWORD *)v17 )
    {
      v8 = a2;
      v12 = (_DWORD *)v17;
      goto LABEL_47;
    }
  }
  if ( (v16 & 1) != 0 || (v19[1] & 1) != 0 )
  {
    v84 = a2;
    v122 = v16;
    v85 = sub_A2E130(a1, v84, 2240, 0);
    v86 = (_QWORD *)v85;
    if ( v85 )
    {
      v87 = *(unsigned __int8 **)v85;
      v88 = v122;
      if ( !*(_QWORD *)v85 )
      {
        v96 = *(_QWORD *)(v85 + 8);
        v97 = *(_DWORD *)(v96 + 14976);
        if ( v97 )
        {
          v98 = (unsigned int)(v97 - 1);
          *(_DWORD *)(v96 + 14976) = v98;
          v87 = *(unsigned __int8 **)(v96 + 8 * v98 + 14848);
          v99 = *((unsigned int *)v87 + 134);
          v100 = *((_QWORD *)v87 + 66);
          *v87 = 0;
          *((_DWORD *)v87 + 106) = 0;
          v101 = v100 + (v99 << 6);
          while ( v100 != v101 )
          {
            v101 -= 64;
            v102 = *(void **)(v101 + 24);
            if ( v102 != (void *)(v101 + 40) )
              operator delete(v102, *(_QWORD *)(v101 + 40) + 1LL);
          }
          v88 = v122;
          *((_DWORD *)v87 + 134) = 0;
        }
        else
        {
          v105 = (unsigned __int8 *)operator new(0x3A0u);
          v88 = v122;
          v87 = v105;
          *v105 = 0;
          v106 = v105 + 112;
          do
          {
            *((_QWORD *)v106 - 2) = v106;
            v106 += 32;
            *((_QWORD *)v106 - 5) = 0;
            *(v106 - 32) = 0;
          }
          while ( v106 != v87 + 432 );
          *((_QWORD *)v87 + 52) = v106;
          *((_QWORD *)v87 + 53) = 0x800000000LL;
          *((_QWORD *)v87 + 66) = v87 + 544;
          *((_QWORD *)v87 + 67) = 0x600000000LL;
        }
        *v86 = v87;
      }
      v87[*v87 + 1] = 8;
      v89 = (_BYTE *)*v86;
      v90 = *(unsigned __int8 *)*v86;
      *v89 = v90 + 1;
      *(_QWORD *)&v89[8 * v90 + 16] = v88;
    }
    return 0;
  }
  v125 = v14;
  sub_6A0310((int *)v17, (int *)v135);
  if ( !v125 || (*(_BYTE *)(v125 + 68) & 1) == 0 )
    return 1;
  return sub_824FF0(a1, (__int64)a2, v17, v125);
}

