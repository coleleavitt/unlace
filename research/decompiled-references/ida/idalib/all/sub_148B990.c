__int64 __fastcall sub_148B990(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9,
        unsigned __int16 a10)
{
  __int64 *v10; // r15
  _WORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // r13
  _WORD *v15; // rax
  __int64 v16; // rdx
  unsigned __int8 **p_ptr; // rsi
  __int64 v18; // r9
  __int64 v19; // r8
  __int16 v20; // ax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int16 v23; // ax
  char v24; // al
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // r14
  unsigned __int64 v31; // r13
  _BOOL4 v32; // ebx
  size_t v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // ebx
  __int64 v38; // rax
  char v39; // dl
  int v40; // eax
  __int64 v41; // r9
  __int64 v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int16 v45; // ax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  char *v49; // r13
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  char *v52; // rsi
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rdi
  __m128i si128; // xmm1
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  char *v58; // r9
  unsigned __int64 *v59; // rcx
  char *v60; // r9
  _WORD *v61; // rax
  __int64 v62; // rdx
  char v63; // al
  unsigned int *v64; // rdi
  unsigned __int8 *v65; // rax
  __int64 v66; // rdx
  size_t v67; // rax
  _DWORD *v68; // rsi
  _BOOL4 v69; // ecx
  int v70; // eax
  int v71; // edx
  unsigned __int64 v72; // rcx
  unsigned int v73; // edx
  char *v74; // r10
  __int64 v75; // rbx
  unsigned __int64 v76; // r15
  unsigned __int8 *v77; // rax
  __int64 v78; // rdx
  _WORD *v79; // rax
  __int64 v80; // rdx
  int v81; // edx
  char v82; // cl
  bool v83; // r10
  int v84; // eax
  __int16 v85; // ax
  __int16 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rax
  size_t v91; // rax
  unsigned int *v92; // r9
  size_t v93; // r10
  const void *v94; // r11
  bool v95; // al
  size_t v96; // rax
  unsigned int *v97; // r10
  size_t v98; // r9
  int v99; // eax
  int v100; // eax
  int v101; // eax
  __int64 v102; // rdx
  size_t v103; // rax
  unsigned int *v104; // rcx
  size_t v105; // r9
  int v106; // eax
  void *v107; // r8
  const void *v108; // rdi
  int v109; // eax
  int v110; // ecx
  size_t v111; // rax
  unsigned int *v112; // r9
  size_t v113; // rdx
  size_t v114; // rax
  size_t v115; // r10
  const void *v116; // r8
  int v117; // eax
  int v118; // eax
  int v119; // ecx
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  size_t v125; // rdx
  int v126; // eax
  int v127; // eax
  size_t v128; // rax
  size_t v129; // rax
  _DWORD *v130; // rcx
  int v131; // [rsp+0h] [rbp-1D8h]
  bool v133; // [rsp+10h] [rbp-1C8h]
  __int64 v134; // [rsp+10h] [rbp-1C8h]
  void *v137; // [rsp+28h] [rbp-1B0h]
  unsigned __int8 v138; // [rsp+28h] [rbp-1B0h]
  unsigned __int8 v139; // [rsp+28h] [rbp-1B0h]
  unsigned __int8 v140; // [rsp+28h] [rbp-1B0h]
  unsigned __int8 v141; // [rsp+28h] [rbp-1B0h]
  unsigned __int8 v142; // [rsp+28h] [rbp-1B0h]
  void *v143; // [rsp+28h] [rbp-1B0h]
  void *v144; // [rsp+28h] [rbp-1B0h]
  int v145; // [rsp+28h] [rbp-1B0h]
  void *v146; // [rsp+28h] [rbp-1B0h]
  unsigned int *v147; // [rsp+28h] [rbp-1B0h]
  int v148; // [rsp+28h] [rbp-1B0h]
  size_t n; // [rsp+30h] [rbp-1A8h]
  size_t nc; // [rsp+30h] [rbp-1A8h]
  size_t na; // [rsp+30h] [rbp-1A8h]
  size_t nb; // [rsp+30h] [rbp-1A8h]
  __int64 v153; // [rsp+38h] [rbp-1A0h]
  __int64 v154; // [rsp+38h] [rbp-1A0h]
  char *v155; // [rsp+38h] [rbp-1A0h]
  size_t v156; // [rsp+40h] [rbp-198h]
  int v157; // [rsp+40h] [rbp-198h]
  size_t v158; // [rsp+40h] [rbp-198h]
  size_t v159; // [rsp+40h] [rbp-198h]
  size_t v160; // [rsp+40h] [rbp-198h]
  size_t v161; // [rsp+40h] [rbp-198h]
  size_t v162; // [rsp+40h] [rbp-198h]
  char v163; // [rsp+48h] [rbp-190h]
  size_t v164; // [rsp+48h] [rbp-190h]
  size_t v165; // [rsp+48h] [rbp-190h]
  size_t v166; // [rsp+48h] [rbp-190h]
  unsigned int *v167; // [rsp+48h] [rbp-190h]
  void *s1; // [rsp+58h] [rbp-180h]
  unsigned int *s1a; // [rsp+58h] [rbp-180h]
  int v171; // [rsp+6Ch] [rbp-16Ch] BYREF
  unsigned __int8 *v172; // [rsp+70h] [rbp-168h] BYREF
  __int64 v173; // [rsp+78h] [rbp-160h]
  unsigned int v174; // [rsp+80h] [rbp-158h]
  int v175; // [rsp+84h] [rbp-154h]
  void *ptr; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v177; // [rsp+C8h] [rbp-110h]
  _BYTE v178[96]; // [rsp+D0h] [rbp-108h] BYREF
  void *v179; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v180; // [rsp+138h] [rbp-A0h]
  unsigned __int8 v181; // [rsp+140h] [rbp-98h] BYREF
  unsigned __int8 v182; // [rsp+141h] [rbp-97h]

  v10 = (__int64 *)a2;
  sub_146A990(a1);
  v131 = a10 & 0xF;
  v12 = sub_1479360((_WORD *)(*(_QWORD *)(a2 + 16) + 16LL), **(unsigned int **)(a2 + 16));
  v180 = v13;
  v179 = v12;
  v182 = 0;
  LOBYTE(ptr) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&ptr, "callback", 8);
  LOBYTE(ptr) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&ptr, "lifetime_capture_by", 19);
  v14 = v182;
  if ( v182 )
    v14 = v181;
  v133 = sub_1479610(a2);
  v15 = sub_1479360((_WORD *)(*(_QWORD *)(a2 + 16) + 16LL), **(unsigned int **)(a2 + 16));
  v180 = v16;
  v179 = v15;
  v182 = 0;
  LOBYTE(ptr) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&ptr, "callback", 8);
  LOBYTE(ptr) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&ptr, "cpu_dispatch", 12);
  LOBYTE(ptr) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&ptr, "cpu_specific", 12);
  p_ptr = (unsigned __int8 **)&ptr;
  LOBYTE(ptr) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&ptr, "lifetime_capture_by", 19);
  v19 = v182;
  if ( v182 )
    v19 = v181;
  v20 = *(_WORD *)(a1 + 32);
  if ( v14 && v20 == 147 )
  {
    ptr = v178;
    *(_WORD *)(a1 + 32) = 5;
    v177 = 0xC00000000LL;
  }
  else
  {
    v21 = 0xC00000000LL;
    v22 = (__int64)v178;
    ptr = v178;
    v177 = 0xC00000000LL;
    if ( v20 != 5 )
      goto LABEL_8;
  }
  if ( (_BYTE)v19 )
    goto LABEL_35;
  v154 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
  v79 = sub_1479360((_WORD *)(v10[2] + 16), *(unsigned int *)v10[2]);
  v180 = v80;
  v179 = v79;
  v182 = 0;
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "RootSignature", 13);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "__clang_arm_builtin_alias", 25);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "argument_with_type_tag", 22);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "atomic", 6);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "availability", 12);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "blocks", 6);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "builtin_alias", 13);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "callable_when", 13);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "clang_builtin_alias", 19);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "consumable", 10);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "declare simd", 12);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "declare target", 14);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "enum_extensibility", 18);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "format", 6);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "format_matches", 14);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "function_return", 15);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "guard", 5);
  v141 = a6 == 0;
  if ( a6 == 0 && v131 == 1 )
  {
    v81 = *(_DWORD *)(v154 + 248);
    v82 = (unsigned int)(v81 - 1) > 1 && (unsigned int)(v81 - 35) > 1;
    if ( !v82 )
    {
      v82 = 1;
LABEL_87:
      LOBYTE(v172) = v82;
      sub_B7E0A0((__int64)&v179, (char *)&v172, "interrupt", 9);
      LOBYTE(v172) = 1;
      sub_B7E0A0((__int64)&v179, (char *)&v172, "interrupt_save_fp", 17);
      v141 &= v131 == 7;
      v83 = 0;
      goto LABEL_88;
    }
    if ( (unsigned int)(v81 - 16) <= 1 || (unsigned int)(v81 - 27) <= 1 )
      goto LABEL_87;
    goto LABEL_101;
  }
  if ( !(v141 | (v131 != 2)) )
  {
    v96 = j__strlen("gnu");
    v97 = *(unsigned int **)(a6 + 16);
    v98 = *v97;
    if ( v96 == v98 )
    {
      v82 = a6 != 0 || v131 != 1;
      if ( !*v97
        || (v156 = *(_QWORD *)(a6 + 16),
            nc = *v97,
            s1 = v97 + 4,
            v99 = memcmp(v97 + 4, "gnu", nc),
            v98 = nc,
            v97 = (unsigned int *)v156,
            v82 = a6 != 0 || v131 != 1,
            !v99) )
      {
        v123 = *(_DWORD *)(v154 + 248);
        if ( (unsigned int)(v123 - 35) <= 1 || (unsigned int)(v123 - 1) <= 1 )
          goto LABEL_87;
        s1 = v97 + 4;
      }
      if ( v98 )
      {
        v163 = v82;
        na = v98;
        v100 = memcmp(s1, "gnu", v98);
        v82 = v163;
        if ( v100 )
          goto LABEL_101;
        if ( (unsigned int)(*(_DWORD *)(v154 + 248) - 16) <= 1 )
          goto LABEL_87;
        v157 = *(_DWORD *)(v154 + 248);
        if ( memcmp(s1, "gnu", na) )
          goto LABEL_101;
        v82 = v163;
        v101 = v157;
      }
      else
      {
        v101 = *(_DWORD *)(v154 + 248);
        if ( (unsigned int)(v101 - 16) <= 1 )
          goto LABEL_87;
      }
      if ( (unsigned int)(v101 - 27) <= 1 )
        goto LABEL_87;
    }
LABEL_101:
    LOBYTE(v172) = 0;
    sub_B7E0A0((__int64)&v179, (char *)&v172, "interrupt", 9);
    LOBYTE(v172) = 1;
    sub_B7E0A0((__int64)&v179, (char *)&v172, "interrupt_save_fp", 17);
    v95 = v131 == 7;
LABEL_102:
    v141 &= v95;
    v83 = 0;
    goto LABEL_88;
  }
  if ( !(v141 | (v131 != 3)) )
  {
    v91 = j__strlen("gnu");
    v92 = *(unsigned int **)(a6 + 16);
    v82 = 0;
    v93 = *v92;
    v94 = v92 + 4;
    if ( v91 != v93 )
    {
      if ( a6 )
        goto LABEL_87;
      goto LABEL_101;
    }
    if ( *v92 )
    {
      s1a = *(unsigned int **)(a6 + 16);
      v166 = *v92;
      v161 = (size_t)(v92 + 4);
      v120 = memcmp(v92 + 4, "gnu", v166);
      v94 = (const void *)v161;
      v93 = v166;
      v92 = s1a;
      if ( v120 )
        goto LABEL_154;
    }
    v122 = *(_DWORD *)(v154 + 248);
    if ( (unsigned int)(v122 - 35) <= 1 || (unsigned int)(v122 - 1) <= 1 )
      goto LABEL_157;
    if ( v93 )
    {
LABEL_154:
      v167 = v92;
      v121 = memcmp(v94, "gnu", v93);
      v92 = v167;
      if ( v121 )
      {
        v125 = *v167;
LABEL_177:
        v126 = memcmp(v92 + 4, "gnu", v125);
        v82 = 0;
        if ( v126 )
          goto LABEL_87;
LABEL_178:
        v82 = (unsigned int)(*(_DWORD *)(v154 + 248) - 27) <= 1;
        goto LABEL_87;
      }
      v122 = *(_DWORD *)(v154 + 248);
    }
    if ( (unsigned int)(v122 - 16) <= 1 )
    {
LABEL_157:
      v82 = v141 | (v131 != 2);
      goto LABEL_87;
    }
    v125 = *v92;
LABEL_180:
    if ( !v125 )
      goto LABEL_178;
    goto LABEL_177;
  }
  if ( a6 != 0 && v131 == 3 )
  {
    v128 = j__strlen("gnu");
    v92 = *(unsigned int **)(a6 + 16);
    v125 = *v92;
    if ( v128 != v125 )
    {
      v82 = 0;
      goto LABEL_87;
    }
    goto LABEL_180;
  }
  LOBYTE(v172) = 0;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "interrupt", 9);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "interrupt_save_fp", 17);
  v95 = v131 == 7;
  if ( v131 != 7 || a6 == 0 )
    goto LABEL_102;
  v129 = j__strlen("clang");
  v83 = 0;
  v130 = *(_DWORD **)(a6 + 16);
  if ( v129 == *v130 )
  {
    v83 = v131 == 7 && a6 != 0;
    if ( v129 )
      v83 = memcmp(v130 + 4, "clang", v129) == 0;
  }
LABEL_88:
  LOBYTE(v172) = v83;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "loop", 4);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "mode", 4);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "model", 5);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "nounroll", 8);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "nounroll_and_jam", 16);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "ns_error_domain", 15);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "objc_bridge", 11);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "objc_bridge_mutable", 19);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "objc_bridge_related", 19);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "objc_gc", 7);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "objc_method_family", 18);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "objc_ownership", 14);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "ownership_holds", 15);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "ownership_returns", 17);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "ownership_takes", 15);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "param_typestate", 15);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "pcs", 3);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "pointer_with_type_tag", 21);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "ptrauth_vtable_pointer", 22);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "resource_class", 14);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "return_typestate", 16);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "set_typestate", 13);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "shader", 6);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "swift_async", 11);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "swift_async_error", 17);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "swift_error", 11);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "swift_newtype", 13);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "swift_wrapper", 13);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "test_typestate", 14);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "type_tag_for_datatype", 21);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "type_visibility", 15);
  LOBYTE(v172) = v141;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "unroll", 6);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "unroll_and_jam", 14);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "visibility", 10);
  LOBYTE(v172) = 1;
  sub_B7E0A0((__int64)&v179, (char *)&v172, "zero_call_used_regs", 19);
  LOBYTE(v19) = 0;
  if ( !v182 || !v181 )
  {
    p_ptr = (unsigned __int8 **)a6;
    v84 = sub_F963B0(v10, a6, a10 & 0xF);
    v19 = 0;
    if ( (unsigned int)(v84 - 419) > 1 )
      goto LABEL_40;
    goto LABEL_36;
  }
LABEL_35:
  p_ptr = (unsigned __int8 **)a6;
  v138 = v19;
  v40 = sub_F963B0(v10, a6, a10 & 0xF);
  v19 = v138;
  if ( (unsigned int)(v40 - 419) > 1 )
  {
LABEL_44:
    v140 = v19;
    p_ptr = (unsigned __int8 **)(sub_14803B0(a1, (__int64)p_ptr, v22, v21, v19, v41) | 2);
    sub_147FEB0((__int64)&ptr, (__int64)p_ptr);
    v19 = v140;
    goto LABEL_40;
  }
LABEL_36:
  v42 = *(_QWORD *)(a1 + 8);
  v43 = *(_QWORD *)(v42 + 2944);
  if ( *(unsigned int *)(v42 + 2912) <= v43 )
  {
    p_ptr = (unsigned __int8 **)(&dword_0 + 1);
    v142 = v19;
    v44 = sub_14180A0(v42, 1u);
    v19 = v142;
  }
  else
  {
    v22 = 3 * v43;
    v44 = *(_QWORD *)(v42 + 2904) + 24 * v43;
  }
  v45 = *(_WORD *)(v44 + 16);
  if ( v45 == 66 || v45 == 23 )
    goto LABEL_44;
LABEL_40:
  v18 = (unsigned int)v177;
  v20 = *(_WORD *)(a1 + 32);
  if ( (_DWORD)v177 )
  {
    v30 = *(unsigned int *)(a1 + 16);
    if ( v20 != 66 )
    {
LABEL_18:
      v137 = nullptr;
      v31 = 0;
      v32 = 0;
LABEL_19:
      v33 = j__strlen(&byte_22F0C30);
      if ( !(unsigned __int8)sub_1569A00(a1, 23, 14, &byte_22F0C30, v33) )
      {
        v34 = a3;
        if ( a9 )
          v34 = a9;
        if ( v133 && v31 )
        {
          v134 = sub_15D92D0(*(_QWORD *)(a4 + 40), 88);
          *(_WORD *)(v134 + 32) = sub_F963B0(v10, a6, a10 & 0xF);
          v85 = *(unsigned __int8 *)(v134 + 35);
          *(_QWORD *)(v134 + 8) = a6;
          *(_QWORD *)v134 = v10;
          *(_DWORD *)(v134 + 28) = v30;
          *(_DWORD *)(v134 + 16) = a9;
          v86 = HIBYTE(a10) & 1 | v85 & 0xFFFC | (2 * ((a10 >> 9) & 1));
          v87 = *(_QWORD *)(v134 + 56);
          *(_DWORD *)(v134 + 20) = 0;
          *(_DWORD *)(v134 + 24) = a3;
          *(_BYTE *)(v134 + 34) = a10 & 0xF | (16 * ((unsigned __int8)a10 >> 4));
          *(_BYTE *)(v134 + 35) = v86;
          *(_QWORD *)(v134 + 40) = 0;
          *(_QWORD *)(v134 + 48) = 0;
          *(_QWORD *)(v134 + 56) = v87 & 0x7F800000 | 0x200000;
          v88 = sub_15D7D80(v134);
          v89 = v134;
          *(_QWORD *)(v134 + 72) = v88;
          *(_QWORD *)(v134
                    + 16LL * ((*(_BYTE *)(v134 + 58) & 8) != 0)
                    + 8 * (*(unsigned __int16 *)(v134 + 56) + 13LL * ((*(_BYTE *)(v134 + 58) & 4) != 0))
                    + 80) = v137;
          v90 = *(unsigned int *)(a4 + 56);
          if ( v90 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 60) )
          {
            sub_2237220(a4 + 48, a4 + 64, v90 + 1, 8);
            v90 = *(unsigned int *)(a4 + 56);
            v89 = v134;
          }
          *(_QWORD *)(*(_QWORD *)(a4 + 48) + 8 * v90) = v89;
          ++*(_DWORD *)(a4 + 56);
          sub_147F4B0(a4 + 8, v89);
        }
        else
        {
          v35 = sub_147A2E0(a4 + 40, (__int64)v10, (v30 << 32) | v34, a6, a9, ptr, v177, a10, 0);
          sub_147F4B0(a4 + 8, v35);
        }
      }
      if ( a5 )
        *a5 = v30;
      v36 = v177 + v32;
      goto LABEL_28;
    }
    *(_DWORD *)(a1 + 40) = v30;
    p_ptr = (unsigned __int8 **)(a1 + 16);
    v139 = v19;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v19 = v139;
    if ( !v133 )
      goto LABEL_10;
LABEL_31:
    v38 = sub_148B630(a1, nullptr, a7, a8);
    if ( v39 )
    {
      v36 = 0;
      LOWORD(v179) = 23;
      sub_15680D0(a1, &v179, 1, 1);
      goto LABEL_28;
    }
    v137 = (void *)v38;
    v30 = *(unsigned int *)(a1 + 16);
    v31 = v38 & 0xFFFFFFFFFFFFFFF0LL;
    v32 = (v38 & 0xFFFFFFFFFFFFFFF0LL) != 0;
    goto LABEL_19;
  }
LABEL_8:
  if ( v20 == 23 )
  {
LABEL_60:
    v30 = *(unsigned int *)(a1 + 16);
    v31 = 0;
    v32 = 0;
    v137 = nullptr;
    goto LABEL_19;
  }
  if ( v133 )
    goto LABEL_31;
LABEL_10:
  if ( (_BYTE)v19
    || (v61 = sub_1479360((_WORD *)(v10[2] + 16), *(unsigned int *)v10[2]),
        v180 = v62,
        v179 = v61,
        v182 = 0,
        LOBYTE(v172) = 1,
        sub_B7E0A0((__int64)&v179, (char *)&v172, "atomic", 6),
        p_ptr = &v172,
        LOBYTE(v172) = 1,
        sub_B7E0A0((__int64)&v179, (char *)&v172, "ptrauth_vtable_pointer", 22),
        v182)
    && v181 )
  {
    while ( 1 )
    {
      v23 = *(_WORD *)(a1 + 32);
      if ( v14 )
      {
        if ( v23 == 147 )
          break;
      }
      if ( v23 == 5 )
        goto LABEL_46;
      v24 = sub_1480020((__int64)v10);
      v25 = *(_QWORD *)(a1 + 96);
      sub_18C74E0(v25, 4 * (unsigned int)(v24 == 0), 0, 2);
      v26 = sub_14BDAD0(a1, 0);
      if ( v26 == 1 )
      {
        LOWORD(v179) = 23;
        v36 = 0;
        sub_15680D0(a1, &v179, 1, 1);
        sub_190D5E0(v25);
        goto LABEL_28;
      }
      v27 = (unsigned int)v177;
      v28 = v26 & 0xFFFFFFFFFFFFFFFCLL;
      v29 = (unsigned int)v177 + 1LL;
      if ( v29 > HIDWORD(v177) )
      {
        nb = v28;
        sub_2237220(&ptr, v178, v29, 8);
        v27 = (unsigned int)v177;
        v28 = nb;
      }
      *((_QWORD *)ptr + v27) = v28;
      LODWORD(v177) = v177 + 1;
      sub_190D5E0(v25);
      v30 = *(unsigned int *)(a1 + 16);
      if ( *(_WORD *)(a1 + 32) != 66 )
        goto LABEL_18;
LABEL_47:
      *(_DWORD *)(a1 + 40) = v30;
      p_ptr = (unsigned __int8 **)(a1 + 16);
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    }
    p_ptr = (unsigned __int8 **)&byte_5;
    *(_WORD *)(a1 + 32) = 5;
LABEL_46:
    v46 = sub_14803B0(a1, (__int64)p_ptr, v22, v21, v19, v18);
    sub_147FEB0((__int64)&ptr, v46 | 2);
    v30 = *(unsigned int *)(a1 + 16);
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_18;
    goto LABEL_47;
  }
  v63 = sub_1480020((__int64)v10);
  n = *(_QWORD *)(a1 + 96);
  sub_18C74E0(n, 4 * (unsigned int)(v63 == 0), 0, 2);
  v64 = (unsigned int *)v10[2];
  v179 = &v181;
  v180 = 0xC00000000LL;
  v153 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
  v65 = (unsigned __int8 *)sub_1479360((_WORD *)v64 + 8, *v64);
  v173 = v66;
  v172 = v65;
  v175 = 0;
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "__arm_agnostic", 14);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "__arm_in", 8);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "__arm_inout", 11);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "__arm_new", 9);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "__arm_out", 9);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "__arm_preserves", 15);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "__asm__", 7);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "abi_tag", 7);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "acquire_handle", 14);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "alias", 5);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "allocate", 8);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "annotate", 8);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "annotate_type", 13);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "asm", 3);
  if ( v131 == 2 && a6 )
  {
    v67 = j__strlen("omp");
    v68 = *(_DWORD **)(a6 + 16);
    v69 = 0;
    if ( v67 == *v68 )
    {
      v69 = 1;
      if ( v67 )
        v69 = memcmp(v68 + 4, "omp", v67) == 0;
    }
  }
  else
  {
    v69 = 0;
  }
  v171 = v69;
  sub_FDFDB0((__int64)&v172, &v171, "assume", 6);
  v171 = 160;
  sub_FDFDB0((__int64)&v172, &v171, "availability", 12);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "blocks", 6);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "btf_decl_tag", 12);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "btf_type_tag", 12);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "callable_when", 13);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "capability", 10);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "code_seg", 8);
  v171 = 3;
  sub_FDFDB0((__int64)&v172, &v171, "deprecated", 10);
  v171 = 14;
  sub_FDFDB0((__int64)&v172, &v171, "diagnose_if", 11);
  v171 = 2;
  sub_FDFDB0((__int64)&v172, &v171, "enable_if", 9);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "enforce_tcb", 11);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "enforce_tcb_leaf", 16);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "error", 5);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "export_name", 11);
  v171 = 11;
  sub_FDFDB0((__int64)&v172, &v171, "external_source_symbol", 22);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "function_return", 15);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "ifunc", 5);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "import_module", 13);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "import_name", 11);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "init_seg", 8);
  if ( v131 == 1 && !a6 )
  {
    v70 = *(_DWORD *)(v153 + 248);
    if ( (unsigned int)(v70 - 1) > 1 && (unsigned int)(v70 - 35) > 1 && (unsigned int)(v70 - 16) > 1 )
      goto LABEL_149;
LABEL_71:
    v71 = 1;
    goto LABEL_72;
  }
  if ( v131 == 2 && a6 )
  {
    v103 = j__strlen("gnu");
    v71 = 0;
    v104 = *(unsigned int **)(a6 + 16);
    v105 = *v104;
    if ( v103 != v105 )
      goto LABEL_72;
    if ( !*v104
      || (v164 = *(_QWORD *)(a6 + 16),
          v158 = *v104,
          v143 = v104 + 4,
          v106 = memcmp(v104 + 4, "gnu", v158),
          v107 = v143,
          v105 = v158,
          v104 = (unsigned int *)v164,
          !v106) )
    {
      v124 = *(_DWORD *)(v153 + 248);
      if ( (unsigned int)(v124 - 35) <= 1 )
        goto LABEL_71;
      v107 = v104 + 4;
      if ( (unsigned int)(v124 - 1) <= 1 )
        goto LABEL_71;
    }
    if ( !v105 )
    {
      v110 = *(_DWORD *)(v153 + 248);
      if ( (unsigned int)(v110 - 16) <= 1 )
        goto LABEL_71;
      goto LABEL_132;
    }
    v159 = v105;
    v144 = v107;
    if ( !memcmp(v107, "gnu", v105) )
    {
      if ( (unsigned int)(*(_DWORD *)(v153 + 248) - 16) <= 1 )
        goto LABEL_71;
      v108 = v144;
      v145 = *(_DWORD *)(v153 + 248);
      v109 = memcmp(v108, "gnu", v159);
      v110 = v145;
      if ( !v109 )
      {
LABEL_132:
        v71 = -((unsigned int)(v110 - 27) <= 1);
        goto LABEL_72;
      }
    }
LABEL_136:
    v71 = 0;
    goto LABEL_72;
  }
  if ( v131 == 3 && a6 )
  {
    v114 = j__strlen("gnu");
    v71 = 0;
    v112 = *(unsigned int **)(a6 + 16);
    v115 = *v112;
    v116 = v112 + 4;
    if ( v114 != v115 )
      goto LABEL_72;
    if ( *v112 )
    {
      v165 = *(_QWORD *)(a6 + 16);
      v160 = *v112;
      v146 = v112 + 4;
      v117 = memcmp(v112 + 4, "gnu", v160);
      v116 = v146;
      v115 = v160;
      v112 = (unsigned int *)v165;
      if ( v117 )
        goto LABEL_143;
    }
    v119 = *(_DWORD *)(v153 + 248);
    if ( (unsigned int)(v119 - 35) <= 1 || (unsigned int)(v119 - 1) <= 1 )
      goto LABEL_71;
    if ( v115 )
    {
LABEL_143:
      v147 = v112;
      v118 = memcmp(v116, "gnu", v115);
      v112 = v147;
      if ( v118 )
      {
        v113 = *v147;
        goto LABEL_183;
      }
      v119 = *(_DWORD *)(v153 + 248);
    }
    if ( (unsigned int)(v119 - 16) <= 1 )
      goto LABEL_71;
    v113 = *v112;
  }
  else
  {
    if ( v131 != 3 )
      goto LABEL_136;
    if ( !a6 )
      goto LABEL_136;
    v111 = j__strlen("gnu");
    v112 = *(unsigned int **)(a6 + 16);
    v113 = *v112;
    if ( v111 != v113 )
      goto LABEL_136;
  }
  if ( !v113 )
  {
LABEL_148:
    v70 = *(_DWORD *)(v153 + 248);
LABEL_149:
    v71 = -((unsigned int)(v70 - 27) <= 1);
    goto LABEL_72;
  }
LABEL_183:
  v127 = memcmp(v112 + 4, "gnu", v113);
  v71 = 0;
  if ( !v127 )
    goto LABEL_148;
LABEL_72:
  v171 = v71;
  sub_FDFDB0((__int64)&v172, &v171, "interrupt", 9);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "interrupt_save_fp", 17);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "model", 5);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "no_builtin", 10);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "no_sanitize", 11);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "no_specializations", 18);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "nodiscard", 9);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "objc_runtime_name", 17);
  v171 = 4;
  sub_FDFDB0((__int64)&v172, &v171, "patchable_function_entry", 24);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "pcs", 3);
  v171 = 7;
  sub_FDFDB0((__int64)&v172, &v171, "ptrauth_vtable_pointer", 22);
  v171 = 3;
  sub_FDFDB0((__int64)&v172, &v171, "register", 8);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "release_handle", 14);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "resource_class", 14);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "section", 7);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "shader", 6);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "shared_capability", 17);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "suppress", 8);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "swift_async_name", 16);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "swift_attr", 10);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "swift_bridge", 12);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "swift_name", 10);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "target", 6);
  v171 = -1;
  sub_FDFDB0((__int64)&v172, &v171, "target_clones", 13);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "target_version", 14);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "tls_model", 9);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "type_visibility", 15);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "unavailable", 11);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "use_handle", 10);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "uuid", 4);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "visibility", 10);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "warn_unused_result", 18);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "warning", 7);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "weakref", 7);
  v171 = 1;
  sub_FDFDB0((__int64)&v172, &v171, "zero_call_used_regs", 19);
  v72 = 0;
  if ( (_BYTE)v175 )
    v72 = v174;
  if ( !(unsigned __int8)sub_1480B80(a1, v10, (__int64)&v179, v72) )
  {
    v60 = (char *)v179;
    v73 = v180;
    v74 = (char *)v179;
    if ( (_DWORD)v180 )
    {
      v75 = (__int64)v10;
      v76 = 0;
      do
      {
        if ( (**(_WORD **)&v60[8 * v76] & 0x1FF) == 0x16 )
        {
          v77 = (unsigned __int8 *)sub_1479360((_WORD *)(*(_QWORD *)(v75 + 16) + 16LL), **(unsigned int **)(v75 + 16));
          v173 = v78;
          v172 = v77;
          BYTE1(v174) = 0;
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "acquire_capability", 18);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "acquire_shared_capability", 25);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "acquired_after", 14);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "acquired_before", 15);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "annotate", 8);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "annotate_type", 13);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "assert_capability", 17);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "assert_exclusive_lock", 21);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "assert_shared_capability", 24);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "assert_shared_lock", 18);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "exclusive_lock_function", 23);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "exclusive_locks_required", 24);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "exclusive_trylock_function", 26);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "locks_excluded", 14);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "release_capability", 18);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "release_generic_capability", 26);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "release_shared_capability", 25);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "requires_capability", 19);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "requires_shared_capability", 26);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "shared_lock_function", 20);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "shared_locks_required", 21);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "shared_trylock_function", 23);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "try_acquire_capability", 22);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "try_acquire_shared_capability", 29);
          LOBYTE(v171) = 1;
          sub_B7E0A0((__int64)&v172, (char *)&v171, "unlock_function", 15);
          if ( !BYTE1(v174) || !(_BYTE)v174 )
          {
            sub_1564820(&v172, a1, *(unsigned int *)(a1 + 16), 1553);
            sub_1478560(&v172, v75);
            sub_AEA040((__int64)&v172);
            goto LABEL_81;
          }
          v60 = (char *)v179;
          v73 = v180;
          v74 = (char *)v179;
        }
        ++v76;
      }
      while ( v76 < v73 );
      v47 = 8LL * v73;
      v48 = (unsigned int)v177;
      v10 = (__int64 *)v75;
      v49 = &v60[v47];
      v50 = v47 >> 3;
      v51 = v50 + (unsigned int)v177;
      if ( v51 > HIDWORD(v177) )
        goto LABEL_175;
    }
    else
    {
      v51 = (unsigned int)v177;
      v49 = (char *)v179;
      LODWORD(v50) = 0;
      LODWORD(v48) = v177;
      if ( HIDWORD(v177) >= (unsigned int)v177 )
      {
LABEL_57:
        LODWORD(v177) = v48 + v50;
        if ( v60 != (char *)&v181 )
          free(v60);
        sub_190D5E0(n);
        goto LABEL_60;
      }
LABEL_175:
      v162 = (size_t)v60;
      v155 = v74;
      v148 = v50;
      sub_2237220(&ptr, v178, v51, 8);
      v60 = (char *)v162;
      v74 = v155;
      v48 = (unsigned int)v177;
      LODWORD(v50) = v148;
    }
    v52 = (char *)ptr + 8 * v48;
    if ( v60 == v49 )
    {
      v60 = (char *)v179;
    }
    else
    {
      v53 = (unsigned __int64)(v49 - 8 - v60) >> 3;
      if ( (v52 >= v60 + 16 || v60 >= (char *)ptr + 8 * v48 + 16) && (v53 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
      {
        v54 = v53 + 1;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA630);
        v56 = 0;
        do
        {
          *(__m128i *)&v52[v56] = _mm_and_si128(_mm_loadu_si128((const __m128i *)&v60[v56]), si128);
          v56 += 16;
        }
        while ( 16 * (v54 >> 1) != v56 );
        v57 = 8 * (v54 & 0xFFFFFFFFFFFFFFFELL);
        v58 = &v60[v57];
        v59 = (unsigned __int64 *)&v52[v57];
        if ( (v54 & 0xFFFFFFFFFFFFFFFELL) != v54 )
          *v59 = *(_QWORD *)v58 & 0xFFFFFFFFFFFFFFFDLL;
      }
      else
      {
        do
        {
          v102 = *(_QWORD *)v74;
          v74 += 8;
          v52 += 8;
          *((_QWORD *)v52 - 1) = v102 & 0xFFFFFFFFFFFFFFFDLL;
        }
        while ( v49 != v74 );
      }
      LODWORD(v48) = v177;
      v60 = (char *)v179;
    }
    goto LABEL_57;
  }
LABEL_81:
  LOWORD(v172) = 23;
  sub_15680D0(a1, &v172, 1, 1);
  if ( v179 != &v181 )
    free(v179);
  v36 = 0;
  sub_190D5E0(n);
LABEL_28:
  if ( ptr != v178 )
    free(ptr);
  return v36;
}
