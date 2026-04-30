__int64 __fastcall sub_32D3E0(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int64 v10; // r15
  __int64 func; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(int, void (__fastcall ***)(__int64, __int64, __int64 *)); // rsi
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  __int64 v30; // r9
  const char *v31; // r14
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // r15
  char *v34; // r13
  __int64 v35; // rax
  __int64 v36; // rbx
  const char *v37; // r15
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // r15
  unsigned __int64 *v40; // rax
  int v41; // eax
  int v42; // r15d
  __int64 v43; // rdx
  char *v45; // r8
  unsigned __int64 v46; // r12
  __int64 regvar; // rax
  char *v48; // rcx
  __int64 v49; // rax
  const void *v50; // r14
  size_t v51; // rax
  size_t v52; // rbx
  const void *v53; // rbx
  size_t v54; // rax
  size_t v55; // r14
  unsigned __int64 v56; // rax
  char *v57; // rdi
  int v58; // r12d
  char *v59; // r8
  char *v60; // rcx
  const void *v61; // r13
  size_t v62; // rax
  size_t v63; // r12
  __int64 not_tail; // rax
  char *v65; // rdi
  size_t v66; // r14
  void *v67; // rdi
  size_t v68; // r12
  void *v69; // rdi
  size_t v70; // r12
  __int64 v71; // [rsp-10h] [rbp-140h]
  char v72; // [rsp+0h] [rbp-130h]
  char v73; // [rsp+Fh] [rbp-121h]
  __int64 v74; // [rsp+38h] [rbp-F8h]
  const char *v75; // [rsp+40h] [rbp-F0h]
  unsigned __int64 v76; // [rsp+48h] [rbp-E8h]
  unsigned __int64 v77; // [rsp+50h] [rbp-E0h] BYREF
  unsigned __int64 v78; // [rsp+58h] [rbp-D8h] BYREF
  char *s1; // [rsp+60h] [rbp-D0h] BYREF
  __int128 v80; // [rsp+68h] [rbp-C8h]
  void *dest; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v82; // [rsp+88h] [rbp-A8h]
  __int64 *v83; // [rsp+A0h] [rbp-90h] BYREF
  __int128 v84; // [rsp+A8h] [rbp-88h]
  __int64 v85; // [rsp+B8h] [rbp-78h]
  int v86; // [rsp+C0h] [rbp-70h]
  void *v87; // [rsp+D0h] [rbp-60h] BYREF
  __int128 v88; // [rsp+D8h] [rbp-58h]
  __int64 v89; // [rsp+E8h] [rbp-48h]
  int v90; // [rsp+F0h] [rbp-40h]
  unsigned __int64 v91; // [rsp+F8h] [rbp-38h]

  v91 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(a1 + 88);
  func = get_func(v10);
  if ( !func )
  {
    sub_169630(
      (int)"AUTOHIDE NONE\nRenaming a register is possible only inside a function",
      a2,
      v12,
      v13,
      v14,
      v15,
      a3,
      a4,
      a5,
      a6,
      v16,
      v17,
      a9,
      a10,
      v72);
    return 1;
  }
  v18 = func;
  v73 = sub_1F09E0(0, (__int64 *)&v77, &v78);
  if ( v77 == v78 )
  {
    not_tail = next_not_tail(v77);
    if ( not_tail != -1 )
      v78 = not_tail;
  }
  v83 = nullptr;
  v85 = 0;
  v86 = -1;
  v84 = 0;
  get_func_ranges(&v83, v18);
  v19 = v78;
  v20 = v77;
  v87 = nullptr;
  v89 = 0;
  v90 = -1;
  v88 = 0;
  if ( v77 < v78 )
  {
    a4 = (__m128)v78;
    v87 = (void *)qvector_reserve(&v87, 0, 1, 16);
    *((__m128i *)v87 + v88) = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v19);
    *(_QWORD *)&v88 = v88 + 1;
  }
  rangeset_t_intersect(&v83, &v87);
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87, (const char *)&v87);
  }
  if ( (_QWORD)v84 )
  {
    v56 = v83[1];
    v77 = *v83;
    v78 = v56;
  }
  s1 = nullptr;
  v87 = nullptr;
  dest = nullptr;
  v80 = 0;
  v82 = 0;
  v88 = 0;
  if ( !(unsigned __int8)sub_32D290(qword_8CD7E8, 0, (__int64 *)&s1, v21, 0.0) )
  {
LABEL_10:
    v74 = 0;
    goto LABEL_11;
  }
  if ( !v73 )
  {
    v57 = (char *)&::s1;
    if ( (_QWORD)v80 )
      v57 = s1;
    v58 = str2reg(v57);
    while ( 1 )
    {
      if ( v58 == -1 )
      {
        v59 = (char *)&::s1;
        v60 = nullptr;
        if ( (_QWORD)v80 )
          v59 = s1;
      }
      else
      {
        v59 = nullptr;
        v60 = (char *)&::s1;
        if ( (_QWORD)v80 )
          v60 = s1;
      }
      regvar = find_regvar(v18, v77, v78, v60, v59);
      if ( !regvar )
        break;
      if ( v10 >= *(_QWORD *)(regvar + 8) )
      {
        v77 = *(_QWORD *)(regvar + 8);
      }
      else
      {
        if ( v10 >= *(_QWORD *)regvar )
          goto LABEL_78;
        v78 = *(_QWORD *)regvar;
      }
    }
LABEL_92:
    v46 = v10 + 1;
    goto LABEL_61;
  }
  v45 = (char *)&::s1;
  if ( (_QWORD)v80 )
    v45 = s1;
  v46 = v10 + 1;
  regvar = find_regvar(v18, v10, v10 + 1, 0, v45);
  if ( regvar )
  {
LABEL_78:
    v61 = *(const void **)(regvar + 16);
    if ( !v61 || (v62 = strlen(*(const char **)(regvar + 16)), (v63 = v62) == 0) )
    {
      *(_QWORD *)&v80 = 0;
      v46 = v10 + 1;
      goto LABEL_81;
    }
    v65 = s1;
    v66 = v62 + 1;
    if ( *((_QWORD *)&v80 + 1) < v62 + 1 )
    {
      s1 = (char *)qvector_reserve(&s1, s1, v62 + 1, 1);
      v65 = s1;
    }
    *(_QWORD *)&v80 = v66;
    memmove(v65, v61, v63);
    s1[v63] = 0;
    goto LABEL_92;
  }
LABEL_61:
  v48 = s1;
  if ( !(_QWORD)v80 )
LABEL_81:
    v48 = (char *)&::s1;
  v49 = find_regvar(v18, v10, v46, v48, 0);
  v74 = v49;
  if ( !v49 )
    goto LABEL_10;
  v77 = *(_QWORD *)v49;
  v78 = *(_QWORD *)(v49 + 8);
  v50 = *(const void **)(v49 + 24);
  if ( v50 && (v51 = strlen(*(const char **)(v49 + 24)), (v52 = v51) != 0) )
  {
    v67 = dest;
    v68 = v51 + 1;
    if ( *((_QWORD *)&v82 + 1) < v51 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v68, 1);
      v67 = dest;
    }
    *(_QWORD *)&v82 = v68;
    memmove(v67, v50, v52);
    *((_BYTE *)dest + v52) = 0;
  }
  else
  {
    *(_QWORD *)&v82 = 0;
  }
  v53 = *(const void **)(v74 + 32);
  if ( v53 )
  {
    v54 = strlen(*(const char **)(v74 + 32));
    v55 = v54;
    if ( v54 )
    {
      v69 = v87;
      v70 = v54 + 1;
      if ( *((_QWORD *)&v88 + 1) < v54 + 1 )
      {
        v87 = (void *)qvector_reserve(&v87, v87, v54 + 1, 1);
        v69 = v87;
      }
      *(_QWORD *)&v88 = v70;
      memmove(v69, v53, v55);
      *((_BYTE *)v87 + v55) = 0;
    }
    else
    {
      *(_QWORD *)&v88 = 0;
    }
  }
LABEL_11:
  while ( 1 )
  {
    v22 = sub_32B650;
    v23 = 1097;
    v24 = sub_507F10(
            1097,
            (unsigned int)sub_32B650,
            (unsigned int)&v77,
            (unsigned int)&v78,
            (unsigned int)&s1,
            (unsigned int)&dest,
            &v87);
    v30 = v71;
    if ( v24 <= 0 )
      break;
    if ( (unsigned __int64)v80 <= 1 )
      goto LABEL_38;
    v75 = &::s1;
    if ( (_QWORD)v88 )
      v75 = (const char *)v87;
    v31 = &::s1;
    if ( (_QWORD)v82 )
      v31 = (const char *)dest;
    v32 = v77;
    v33 = v78;
    v34 = s1;
    v76 = v78;
    v35 = get_func(v77);
    v36 = v35;
    if ( v32 >= v33
      || (v22 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v32,
          (int)get_func_chunknum(v35, v32) < 0)
      || (v22 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))(v33 - 1),
          (int)get_func_chunknum(v36, v33 - 1) < 0) )
    {
LABEL_35:
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\nIllegal address range",
        (__int64)v22,
        v25,
        v26,
        v27,
        v30,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v28,
        v29,
        a9,
        a10,
        v72);
    }
    else
    {
      if ( !v74 )
      {
        if ( !*v31 || (unsigned int)str2reg(v31) != -1 )
          goto LABEL_38;
LABEL_30:
        v22 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v32;
        v23 = v36;
        v41 = add_regvar(v36, v32, v76, v34, v31, v75);
LABEL_31:
        v42 = v41;
        goto LABEL_32;
      }
      v37 = *(const char **)(v74 + 16);
      if ( strcmp(v34, v37) )
        goto LABEL_30;
      if ( !*v31 )
      {
        v22 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v32;
        v23 = v36;
        v41 = del_regvar(v36, v32, v76, v34);
        goto LABEL_31;
      }
      v38 = *(_QWORD *)v74;
      if ( v32 != *(_QWORD *)v74 )
      {
        if ( v38 >= v32 )
        {
          v43 = *(_QWORD *)(v74 + 8);
LABEL_56:
          del_regvar(v36, v38, v43, v37);
        }
        else
        {
          *(_QWORD *)(v74 + 8) = v32;
        }
        v39 = v32;
        while ( 1 )
        {
          v40 = (unsigned __int64 *)find_regvar(v36, v39, v76, v34, 0);
          if ( !v40 )
            goto LABEL_30;
          v39 = v40[1];
          if ( v76 < v39 )
          {
            *v40 = v76;
            goto LABEL_30;
          }
          del_regvar(v36, *v40, v40[1], v40[2]);
        }
      }
      v43 = *(_QWORD *)(v74 + 8);
      if ( v76 != v43 )
        goto LABEL_56;
      if ( !strcmp(v31, *(const char **)(v74 + 24)) )
      {
        v22 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v74;
        v23 = v36;
        set_regvar_cmt(v36, v74, v75);
        break;
      }
      v22 = (__int64 (__fastcall *)(int, void (__fastcall ***)(__int64, __int64, __int64 *)))v74;
      v23 = v36;
      v42 = rename_regvar(v36, v74, v31);
      set_regvar_cmt(v36, v74, v75);
LABEL_32:
      if ( !v42 )
        break;
      if ( v42 != -3 )
      {
        if ( v42 != -2 )
        {
          if ( !under_debugger )
            interr(40179, v22, v25, v26, 0.0);
          BUG();
        }
        goto LABEL_35;
      }
LABEL_38:
      sub_169630(
        (int)"ICON ERROR\nAUTOHIDE NONE\nThe register name cannot be accepted",
        (__int64)v22,
        v25,
        v26,
        v27,
        v30,
        (__m128)0LL,
        a4,
        a5,
        a6,
        v28,
        v29,
        a9,
        a10,
        v72);
    }
  }
  if ( v73 )
    sub_1FDB10(0.0, a4, a5, a6, *(double *)v28.m128_u64, *(double *)v29.m128_u64, a9, a10, v23, (const char *)v22);
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree(v87, (const char *)v22);
  }
  if ( dest )
  {
    *(_QWORD *)&v82 = 0;
    qfree(dest, (const char *)v22);
  }
  if ( s1 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(s1, (const char *)v22);
  }
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83, (const char *)v22);
  }
  return 1;
}
