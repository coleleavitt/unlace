__int64 __fastcall sub_17AB090(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rsi
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned int v18; // edx
  __int64 v19; // r13
  size_t v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // r13
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  size_t v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // edx
  unsigned __int16 v35; // dx
  __int64 v36; // rbx
  size_t v37; // rax
  bool v38; // zf
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // r12
  __int64 v53; // rsi
  __int64 *v54; // rdi
  __int64 v55; // rdx
  char v56; // al
  unsigned __int64 v57; // rax
  __int64 v58; // [rsp+0h] [rbp-C8h]
  __int64 v59; // [rsp+18h] [rbp-B0h] BYREF
  unsigned __int64 v60; // [rsp+28h] [rbp-A0h] BYREF
  void *v61; // [rsp+30h] [rbp-98h] BYREF
  __int64 v62; // [rsp+38h] [rbp-90h]
  _QWORD v63[17]; // [rsp+40h] [rbp-88h] BYREF

  v59 = a2;
  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v5 + 17) & 4) != 0 )
    return 4;
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42) <= 2u )
  {
    v15 = sub_F68450(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v5, a4, a5);
    result = 3;
    v16 = v15 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v17 & 8) == 0 )
      return result;
    v18 = (*(_DWORD *)((char *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v17 & 7)) >> 9;
    if ( v18 - 4 <= 1 || !v18 )
      return 3;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      result = sub_17AB090(a1);
      if ( (unsigned int)(result - 3) > 1 )
        return (unsigned int)sub_FEAA90(*(_QWORD *)(a1 + 232)) <= 0x78;
      return result;
    }
    v19 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v19 + 52) & 1) == 0 )
    {
LABEL_29:
      if ( (unsigned int)sub_FEAA90(v19) <= 0x78 )
        return 2;
      return 0;
    }
    v20 = j__strlen("__cl_clang_non_portable_kernel_param_types");
    v25 = sub_FF8450(a1 + 200, (__int64)"__cl_clang_non_portable_kernel_param_types", v20, v19);
    if ( v25 )
    {
LABEL_37:
      v19 = *(_QWORD *)(a1 + 232);
      goto LABEL_29;
    }
    v47 = sub_F63270(
            *(_QWORD *)(*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
            (__int64)"__cl_clang_non_portable_kernel_param_types",
            v21,
            v22,
            v23,
            v24);
    v52 = (unsigned __int64)v47;
    if ( v47 )
    {
      v53 = v47[13];
      v54 = (__int64 *)(v53 + 96);
      if ( v47[16] )
      {
LABEL_67:
        sub_7052B0(v54, v53, v48, v49, v50, v51);
        v25 = (*(_BYTE *)(*(_QWORD *)(v52 + 128) + 1LL) & 0x10) != 0;
        goto LABEL_68;
      }
      sub_7052B0(v54, v53, v48, v49, v50, v51);
      if ( *(_QWORD *)(v52 + 128) )
        goto LABEL_75;
      v57 = sub_B9DFE0(v52, v53, v48, v49, v50, v51);
      v52 = v57;
      if ( v57 )
      {
        v53 = *(_QWORD *)(v57 + 104);
        v54 = (__int64 *)(v53 + 96);
        if ( *(_QWORD *)(v57 + 128) )
          goto LABEL_67;
        sub_7052B0(v54, v53, v48, v49, v50, v51);
        if ( *(_QWORD *)(v52 + 128) )
        {
LABEL_75:
          v53 = *(_QWORD *)(v52 + 104);
          v54 = (__int64 *)(v53 + 96);
          goto LABEL_67;
        }
      }
    }
    else
    {
      v25 = 1;
    }
LABEL_68:
    v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v56 = *(_BYTE *)(v55 + 16);
    if ( v56 == 7 || v56 == 13 && ((*(_WORD *)(v55 + 18) >> 3) & 0x1FF) == 0x1B3 || v25 )
      goto LABEL_37;
    return 4;
  }
  v7 = *(_QWORD *)(a1 + 248);
  v8 = a2;
  v63[3] = 6;
  v63[5] = 8;
  v58 = v7;
  v63[2] = "size_t";
  v63[4] = "intptr_t";
  v63[6] = "uintptr_t";
  v63[8] = "ptrdiff_t";
  v63[7] = 9;
  v63[9] = 9;
  while ( 1 )
  {
    v13 = (*(_BYTE *)(v5 + 8) & 0xF) != 0
        ? sub_F64F00(v8, a2, v5, a4, a5) & 0xFFFFFFFFFFFFFFF0LL
        : v5 & 0xFFFFFFFFFFFFFFF0LL;
    v60 = v13;
    sub_F78400((__int64)&v61, (__int64 *)&v60);
    if ( v62 == 6 )
    {
      if ( *(_DWORD *)v61 == 1702521203 && *((_WORD *)v61 + 2) == 29791 )
        goto LABEL_14;
    }
    else if ( v62 == 8 )
    {
      if ( *(_QWORD *)v61 == 0x745F727470746E69LL )
        goto LABEL_14;
    }
    else if ( v62 == 9
           && (*(_QWORD *)v61 == 0x5F727470746E6975LL && *((_BYTE *)v61 + 8) == 116
            || *(_QWORD *)v61 == 0x5F66666964727470LL && *((_BYTE *)v61 + 8) == 116) )
    {
LABEL_14:
      if ( v61 != v63 )
        operator delete(v61);
      return 4;
    }
    if ( v61 != v63 )
      operator delete(v61);
    a2 = v58;
    v12 = sub_F6B250(v8, v58, v9, v10, v11);
    if ( v12 == v8 )
      break;
    v8 = v12;
    v5 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v26 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_E3A850(v26) )
    return 2;
  v27 = *(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v27 + 16) == 13
    && (((*(_WORD *)(v27 + 18) >> 3) + 76) & 0x1FFu) <= 0x3C
    && ((0x1200000000000001uLL >> ((unsigned __int8)(*(_WORD *)(v27 + 18) >> 3) + 76)) & 1) != 0 )
  {
    return 4;
  }
  v28 = *(_QWORD *)(a1 + 232);
  v29 = j__strlen("cl_khr_fp16");
  if ( sub_FF8450(a1 + 200, (__int64)"cl_khr_fp16", v29, v28) )
  {
    v32 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
    v34 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  }
  else
  {
    v32 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
    v33 = *(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v34 = *(unsigned __int8 *)(v33 + 16);
    if ( (_BYTE)v34 == 13 )
    {
      v35 = *(_WORD *)(v33 + 18);
      result = 4;
      if ( ((v35 >> 3) & 0x1FF) == 0x1E0 )
        return result;
      v36 = *(_QWORD *)(a1 + 232);
      if ( (*(_BYTE *)(v36 + 52) & 1) != 0 )
      {
LABEL_46:
        v37 = j__strlen("__cl_clang_non_portable_kernel_param_types");
        v38 = sub_FF8450(a1 + 200, (__int64)"__cl_clang_non_portable_kernel_param_types", v37, v36) == 0;
        v39 = v59;
        if ( v38 )
        {
          v40 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
          if ( sub_179FC20(v40) )
          {
            LOBYTE(v34) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
            goto LABEL_49;
          }
          if ( !(unsigned __int8)sub_F65CA0(&v59, *(_QWORD *)(a1 + 248), v41, v42, v43, v44) )
            return 4;
          v39 = v59;
        }
        LOBYTE(v34) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
LABEL_49:
        result = 5;
        if ( (_BYTE)v34 != 48 )
          return 0;
        return result;
      }
      return 0;
    }
  }
  if ( (unsigned __int8)(v34 - 3) > 2u && (v34 & 0xFB) != 2 )
  {
    v36 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v36 + 52) & 1) == 0 )
      goto LABEL_49;
    goto LABEL_46;
  }
  v45 = v34 & 0xFFFFFFF7;
  if ( (_BYTE)v45 != 34 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(v32 + 16) - 2) > 4u )
      {
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          return sub_17AB090(a1);
        v46 = sub_F63050(v32, "cl_khr_fp16", v45, v30);
        if ( !v46 )
          return sub_17AB090(a1);
        v32 = v46;
      }
      v32 = *(_QWORD *)(*(_QWORD *)(v32 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  sub_F68450(v32, (__int64)"cl_khr_fp16", v45, v30, v31);
  return sub_17AB090(a1);
}
