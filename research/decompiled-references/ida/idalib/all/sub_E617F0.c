__int64 __fastcall sub_E617F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r14
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r12
  __int64 v96; // rax
  __int64 v97; // rax
  size_t v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  size_t v103; // rax
  __int64 v104; // rbx
  __int64 v105; // r14
  __int64 v106; // r14
  __int64 v107; // r14
  __int64 v108; // rsi
  __int64 v109; // r14
  __int64 v110; // r14
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rsi
  __int64 v116; // r14
  __int64 v117; // r14
  __int64 v118; // r14
  __int64 v119; // r14
  __int64 v120; // r14
  __int64 v121; // r14
  __int64 v122; // r14
  __int64 v123; // r14
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // r14
  __int64 v129; // r14
  __int64 v130; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v131; // [rsp+8h] [rbp-D0h]
  __int64 v132; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v133; // [rsp+18h] [rbp-C0h]
  int v134; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v135; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v136; // [rsp+38h] [rbp-A0h]
  int v137; // [rsp+40h] [rbp-98h]
  void *v138[4]; // [rsp+50h] [rbp-88h] BYREF
  __m128 v139; // [rsp+70h] [rbp-68h] BYREF
  __int64 v140; // [rsp+80h] [rbp-58h]
  int v141; // [rsp+88h] [rbp-50h]

  sub_E5B250(a1, a2);
  result = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 60;
  if ( (unsigned int)result <= 1 && (*(_BYTE *)(a2 + 180) & 8) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    v4 = j__strlen("strict-pack-match");
    v138[0] = &v139;
    v138[1] = (void *)(a1 + 1048);
    sub_E585D0(a1 + 1048, (__int64)"strict-pack-match", v4, (__int64)sub_E58580, v138);
    result = sub_222B2A0(&v139);
    if ( (*(_BYTE *)(a2 + 74) & 1) == 0 )
      return result;
  }
  else if ( (*(_BYTE *)(a2 + 74) & 1) == 0 )
  {
    return result;
  }
  v132 = 0;
  v131 = a1 + 1048;
  v133 = 0;
  v134 = 0;
  if ( sub_B96EF0(a2) )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isGenericLambda");
    v128 = sub_222E220(&v132, v138);
    sub_222B2A0(v128);
    sub_2229580(v128, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  v9 = *(_QWORD *)(a2 + 128);
  if ( v9 && (*(_BYTE *)(v9 + 10) & 0x20) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isLambda");
    v105 = sub_222E220(&v132, v138);
    sub_222B2A0(v105);
    sub_2229580(v105, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v5, v6, v7, v8);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 2) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isEmpty");
    v109 = sub_222E220(&v132, v138);
    sub_222B2A0(v109);
    sub_2229580(v109, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v10, v11, v12, v13);
  if ( **(char **)(a2 + 128) < 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isAggregate");
    v129 = sub_222E220(&v132, v138);
    sub_222B2A0(v129);
    sub_2229580(v129, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  v18 = *(__m128 **)(a2 + 104);
  sub_7052B0((__int64 *)&v18[6], (__int64)v18, v14, v15, v16, v17);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 0x10) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isStandardLayout");
    v118 = sub_222E220(&v132, v138);
    sub_222B2A0(v118);
    v18 = &v139;
    sub_2229580(v118, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  if ( sub_B9E190(a2, (__int64)v18, v19, v20, v21, v22) )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isTriviallyCopyable");
    v117 = sub_222E220(&v132, v138);
    sub_222B2A0(v117);
    sub_2229580(v117, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  v27 = *(_QWORD *)(a2 + 104);
  sub_7052B0((__int64 *)(v27 + 96), v27, v23, v24, v25, v26);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 1) == 0 )
  {
    if ( !sub_B9E190(a2, v27, v28, v29, v30, v31) )
      goto LABEL_15;
    goto LABEL_62;
  }
  v139.m128_i8[8] = 1;
  v139.m128_i16[0] = 1;
  sub_E59B60((void ***)v138, "isPOD");
  v110 = sub_222E220(&v132, v138);
  sub_222B2A0(v110);
  sub_2229580(v110, &v139);
  if ( v138[0] )
    sub_E58590((void **)v138[0]);
  sub_222B2A0(&v139);
  if ( sub_B9E190(a2, (__int64)&v139, v111, v112, v113, v114) )
  {
LABEL_62:
    v115 = *(_QWORD *)(a2 + 104);
    sub_7052B0((__int64 *)(v115 + 96), v115, v32, v33, v34, v35);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 1) != 0 || (unsigned __int8)sub_B9BFC0(a2, v115, v32, v33, v34, v35) )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v32, v33, v34, v35);
      if ( *(char *)(*(_QWORD *)(a2 + 128) + 4LL) < 0 )
      {
        v139.m128_i8[8] = 1;
        v139.m128_i16[0] = 1;
        sub_E59B60((void ***)v138, "isTrivial");
        v116 = sub_222E220(&v132, v138);
        sub_222B2A0(v116);
        sub_2229580(v116, &v139);
        if ( v138[0] )
          sub_E58590((void **)v138[0]);
        sub_222B2A0(&v139);
      }
    }
  }
LABEL_15:
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v32, v33, v34, v35);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 4) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isPolymorphic");
    v122 = sub_222E220(&v132, v138);
    sub_222B2A0(v122);
    sub_2229580(v122, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v36, v37, v38, v39);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 8) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isAbstract");
    v121 = sub_222E220(&v132, v138);
    sub_222B2A0(v121);
    sub_2229580(v121, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  if ( (unsigned __int8)sub_BA4170(a2) )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "isLiteral");
    v119 = sub_222E220(&v132, v138);
    sub_222B2A0(v119);
    sub_2229580(v119, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
    if ( (*(_BYTE *)(a2 + 76) & 0x30) != 0 )
      goto LABEL_19;
    goto LABEL_76;
  }
  if ( (*(_BYTE *)(a2 + 76) & 0x30) == 0 )
  {
LABEL_76:
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "canPassInRegisters");
    v120 = sub_222E220(&v132, v138);
    sub_222B2A0(v120);
    sub_2229580(v120, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
LABEL_19:
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v40, v41, v42, v43);
  if ( (**(_BYTE **)(a2 + 128) & 1) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "hasUserDeclaredConstructor");
    v123 = sub_222E220(&v132, v138);
    sub_222B2A0(v123);
    sub_2229580(v123, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  v48 = *(_QWORD *)(a2 + 104);
  sub_7052B0((__int64 *)(v48 + 96), v48, v44, v45, v46, v47);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 1) != 0
    || (unsigned __int8)sub_B9BFC0(a2, v48, v49, v50, v51, v52)
    && (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v54, v55, v56, v57),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 4) != 0)
    && (*(_BYTE *)(a2 + 73) >> 5 != 2
     || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v54, v55, v56, v57),
         *(char *)(*(_QWORD *)(a2 + 128) + 2LL) < 0)
     || (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v124, v125, v126, v127),
         (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 2LL) & 0x10) == 0)
     || *(char *)(sub_B8C5D0(a2) + 1) < 0) )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "hasConstexprNonCopyMoveConstructor");
    v53 = sub_222E220(&v132, v138);
    sub_222B2A0(v53);
    sub_2229580(v53, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v54, v55, v56, v57);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 2LL) & 8) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "hasMutableFields");
    v107 = sub_222E220(&v132, v138);
    sub_222B2A0(v107);
    sub_2229580(v107, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v58, v59, v60, v61);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 2LL) & 0x10) != 0 )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "hasVariantMembers");
    v106 = sub_222E220(&v132, v138);
    sub_222B2A0(v106);
    sub_2229580(v106, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v62, v63, v64, v65);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 3LL) & 2) == 0
    || (v108 = *(_QWORD *)(a2 + 104),
        sub_7052B0((__int64 *)(v108 + 96), v108, v66, v67, v68, v69),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 2) == 0)
    && !(unsigned __int8)sub_B9BFC0(a2, v108, v71, v72, v73, v74) )
  {
    v139.m128_i8[8] = 1;
    v139.m128_i16[0] = 1;
    sub_E59B60((void ***)v138, "canConstDefaultInit");
    v70 = sub_222E220(&v132, v138);
    sub_222B2A0(v70);
    sub_2229580(v70, &v139);
    if ( v138[0] )
      sub_E58590((void **)v138[0]);
    sub_222B2A0(&v139);
  }
  sub_E607F0((__int64)&v135, a2, v71, v72, v73, v74);
  v139.m128_i16[0] = 7;
  v139.m128_u64[1] = v135;
  v135 = 0;
  v140 = v136;
  v136 = 0;
  v141 = v137;
  v137 = 0;
  sub_E59B60((void ***)v138, "defaultCtor");
  v130 = sub_222E220(&v132, v138);
  sub_222B2A0(v130);
  sub_2229580(v130, &v139);
  if ( v138[0] )
    sub_E58590((void **)v138[0]);
  sub_222B2A0(&v139);
  sub_E5D2E0((__int64 *)&v135);
  sub_E601C0((__int64)&v135, a2, v75, v76, v77, v78);
  v139.m128_i16[0] = 7;
  v139.m128_u64[1] = v135;
  v135 = 0;
  v140 = v136;
  v136 = 0;
  v141 = v137;
  v137 = 0;
  sub_E59B60((void ***)v138, "copyCtor");
  v130 = sub_222E220(&v132, v138);
  sub_222B2A0(v130);
  sub_2229580(v130, &v139);
  if ( v138[0] )
    sub_E58590((void **)v138[0]);
  sub_222B2A0(&v139);
  sub_E5D2E0((__int64 *)&v135);
  sub_E61230((__int64)&v135, a2, v79, v80, v81, v82);
  v139.m128_i16[0] = 7;
  v139.m128_u64[1] = v135;
  v135 = 0;
  v140 = v136;
  v136 = 0;
  v141 = v137;
  v137 = 0;
  sub_E59B60((void ***)v138, "moveCtor");
  v130 = sub_222E220(&v132, v138);
  sub_222B2A0(v130);
  sub_2229580(v130, &v139);
  if ( v138[0] )
    sub_E58590((void **)v138[0]);
  sub_222B2A0(&v139);
  sub_E5D2E0((__int64 *)&v135);
  sub_E5F800((__int64)&v135, a2, v83, v84, v85, v86);
  v139.m128_i16[0] = 7;
  v139.m128_u64[1] = v135;
  v135 = 0;
  v140 = v136;
  v136 = 0;
  v141 = v137;
  v137 = 0;
  sub_E59B60((void ***)v138, "copyAssign");
  v130 = sub_222E220(&v132, v138);
  sub_222B2A0(v130);
  sub_2229580(v130, &v139);
  if ( v138[0] )
    sub_E58590((void **)v138[0]);
  sub_222B2A0(&v139);
  sub_E5D2E0((__int64 *)&v135);
  sub_E60D10((__int64)&v135, a2, v87, v88, v89, v90);
  v139.m128_i16[0] = 7;
  v139.m128_u64[1] = v135;
  v135 = 0;
  v140 = v136;
  v136 = 0;
  v141 = v137;
  v137 = 0;
  sub_E59B60((void ***)v138, "moveAssign");
  v130 = sub_222E220(&v132, v138);
  sub_222B2A0(v130);
  sub_2229580(v130, &v139);
  if ( v138[0] )
    sub_E58590((void **)v138[0]);
  sub_222B2A0(&v139);
  sub_E5D2E0((__int64 *)&v135);
  sub_E5FD10((__int64)&v135, a2, v91, v92, v93, v94);
  v139.m128_i16[0] = 7;
  v139.m128_u64[1] = v135;
  v135 = 0;
  v140 = v136;
  v136 = 0;
  v141 = v137;
  v137 = 0;
  sub_E59B60((void ***)v138, (char *)"dtor");
  v95 = sub_222E220(&v132, v138);
  sub_222B2A0(v95);
  sub_2229580(v95, &v139);
  if ( v138[0] )
    sub_E58590((void **)v138[0]);
  sub_222B2A0(&v139);
  sub_E5D2E0((__int64 *)&v135);
  v139.m128_i16[0] = 7;
  v96 = v132;
  v132 = 0;
  v139.m128_u64[1] = v96;
  v97 = v133;
  v133 = 0;
  v140 = v97;
  LODWORD(v97) = v134;
  v134 = 0;
  v141 = v97;
  v98 = j__strlen("definitionData");
  sub_222AB70(a1 + 1048, "definitionData", v98);
  sub_222CAC0(a1 + 1048, &v139);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v139);
  sub_E5D2E0(&v132);
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v99, v100, v101, v102);
  result = *(_QWORD *)(a2 + 128);
  if ( *(_DWORD *)(result + 16) )
  {
    v130 = a2;
    v139 = _mm_loadh_ps((const double *)&v130);
    v103 = j__strlen("bases");
    v104 = v131;
    sub_222AB70(v131, "bases", v103);
    sub_22297F0(v104);
    sub_E65790(&v139);
    sub_2229960(v104);
    return sub_2229BF0(v104);
  }
  return result;
}
