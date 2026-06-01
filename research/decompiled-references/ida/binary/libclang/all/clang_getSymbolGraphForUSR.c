// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall clang_getSymbolGraphForUSR(const char *a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  __int64 v13; // r13
  __int64 *v14; // r12
  __int64 v15; // r14
  char v16; // al
  size_t v17; // rcx
  size_t v18; // rdx
  __int64 *v19; // rbx
  size_t v20; // r15
  __int64 *v21; // rbp
  int v22; // eax
  size_t v23; // r8
  __int64 v24; // rbx
  char *v25; // rdi
  bool v26; // al
  size_t v27; // r13
  __int64 v28; // rbp
  __int64 *v29; // r14
  __int64 v30; // r15
  unsigned __int64 v31; // rbx
  __int64 v32; // r12
  unsigned __int64 v33; // r14
  char *v34; // rdi
  __int64 v35; // rbx
  bool v36; // al
  void *v37; // rbx
  char *v38; // rdi
  void *v39; // rbp
  size_t v40; // r13
  __int64 v41; // rbp
  char *v42; // rdi
  bool v43; // al
  bool v44; // al
  void *v45; // rcx
  bool v46; // al
  char v47; // al
  __int64 *v48; // rcx
  __int64 v49; // [rsp+0h] [rbp-148h]
  size_t n; // [rsp+18h] [rbp-130h]
  size_t na; // [rsp+18h] [rbp-130h]
  size_t nb; // [rsp+18h] [rbp-130h]
  size_t nc; // [rsp+18h] [rbp-130h]
  void *nd; // [rsp+18h] [rbp-130h]
  __int64 *v55; // [rsp+20h] [rbp-128h]
  __int64 *v56; // [rsp+20h] [rbp-128h]
  size_t v57; // [rsp+28h] [rbp-120h]
  __int64 *v58; // [rsp+28h] [rbp-120h]
  size_t v59; // [rsp+28h] [rbp-120h]
  __int64 *v60; // [rsp+30h] [rbp-118h]
  __int64 *v61; // [rsp+30h] [rbp-118h]
  void *v62; // [rsp+40h] [rbp-108h]
  __int64 v63[2]; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v64; // [rsp+60h] [rbp-E8h]
  __int64 v65; // [rsp+78h] [rbp-D0h]
  __int64 v66; // [rsp+80h] [rbp-C8h]
  __int64 v67; // [rsp+98h] [rbp-B0h]
  __int64 v68; // [rsp+A0h] [rbp-A8h]
  __int64 v69; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-90h]
  unsigned int v71; // [rsp+C0h] [rbp-88h]
  char v72; // [rsp+C8h] [rbp-80h]
  _BYTE v73[32]; // [rsp+D0h] [rbp-78h] BYREF
  _BYTE *v74[11]; // [rsp+F0h] [rbp-58h] BYREF

  v2 = 0;
  if ( a1 )
    v2 = strlen(a1);
  sub_FE7360(&v69, a1, v2, a2);
  if ( !v72 )
    return clang_CompileCommand_getMappedSourcePath_0(&v69, a1, v3, v4);
  v7 = v70;
  v8 = v69;
  v69 = 0;
  v70 = 0;
  v63[1] = v7;
  LODWORD(v7) = v71;
  v63[0] = v8;
  v71 = 0;
  v64 = v7;
  v9 = sub_63DA00(v63, (__int64)a1, v8, v4, v5, v6);
  v10 = v63[0];
  v49 = v9;
  v11 = (unsigned __int64)v64 << 6;
  if ( !v64 )
    goto LABEL_5;
  v65 = -1;
  v66 = 0;
  v13 = -1;
  v55 = nullptr;
  n = 0;
  if ( !(unsigned __int8)sub_25B5D80(-1, 0, 0) )
  {
    sub_25B62D0(v73, -1, 0);
    v55 = (__int64 *)operator new(0x20u);
    std::string::basic_string();
    if ( !(unsigned __int8)sub_25B5D80(*v55, v55[1], 0) )
    {
      sub_25B62D0(v74, *v55, v55[1]);
      sub_63DFC0(v55, v74);
      std::string::_M_dispose();
    }
    v13 = *v55;
    n = v55[1];
    std::string::_M_dispose();
  }
  v14 = (__int64 *)(v10 + v11);
  v67 = -2;
  v15 = -2;
  v68 = 0;
  v16 = sub_25B5D80(-2, 0, 0);
  v17 = 0;
  v18 = 0;
  if ( !v16 )
  {
    sub_25B62D0(v73, -2, 0);
    v58 = (__int64 *)operator new(0x20u);
    std::string::basic_string();
    v47 = sub_25B5D80(*v58, v58[1], 0);
    v48 = v58;
    if ( !v47 )
    {
      sub_25B62D0(v74, *v58, v58[1]);
      sub_63DFC0(v58, v74);
      std::string::_M_dispose();
      v48 = v58;
    }
    v15 = *v48;
    v61 = v48;
    v59 = v48[1];
    std::string::_M_dispose();
    v17 = (size_t)v61;
    v18 = v59;
  }
  v19 = (__int64 *)v10;
  if ( v13 != -1 )
  {
    v20 = n;
    v21 = v19;
    v62 = (void *)v17;
    v57 = v18;
    while ( 1 )
    {
      v25 = (char *)v21[1];
      v23 = v21[2];
      if ( v13 == -2 )
      {
        if ( v25 == (char *)-2LL )
          goto LABEL_15;
      }
      else if ( v23 == v20 )
      {
        na = v21[2];
        if ( !v20 )
          goto LABEL_15;
        v22 = memcmp(v25, (const void *)v13, v20);
        v23 = na;
        if ( !v22 )
          goto LABEL_15;
      }
      if ( v15 == -1 )
        break;
      if ( v15 == -2 )
      {
        v26 = v25 + 2 == nullptr;
LABEL_27:
        if ( !v26 )
        {
LABEL_28:
          sub_25B66C0(v21 + 3);
          goto LABEL_15;
        }
        goto LABEL_15;
      }
      if ( v23 != v57 )
        goto LABEL_28;
      if ( v57 )
      {
        v26 = memcmp(v25, (const void *)v15, v57) == 0;
        goto LABEL_27;
      }
LABEL_15:
      v24 = *v21;
      if ( *v21 )
      {
        if ( *(_QWORD *)v24 != v24 + 16 )
          operator delete(*(void **)v24, *(_QWORD *)(v24 + 16) + 1LL);
        operator delete((void *)v24, 0x20u);
      }
      *v21 = 0;
      v21 += 8;
      if ( v14 == v21 )
      {
        v45 = v62;
        goto LABEL_78;
      }
    }
    v26 = v25 + 1 == nullptr;
    goto LABEL_27;
  }
  nc = v17;
  v40 = v18;
  do
  {
    v42 = (char *)v19[1];
    if ( v42 == (char *)-1LL )
      goto LABEL_55;
    if ( v15 != -1 )
    {
      v43 = v42 + 2 == nullptr;
      if ( v15 == -2 )
        goto LABEL_66;
      if ( v19[2] == v40 )
      {
        if ( !v40 )
          goto LABEL_55;
        v43 = memcmp(v42, (const void *)v15, v40) == 0;
LABEL_66:
        if ( v43 )
          goto LABEL_55;
      }
    }
    sub_25B66C0(v19 + 3);
LABEL_55:
    v41 = *v19;
    if ( *v19 )
    {
      if ( *(_QWORD *)v41 != v41 + 16 )
        operator delete(*(void **)v41, *(_QWORD *)(v41 + 16) + 1LL);
      operator delete((void *)v41, 0x20u);
    }
    *v19 = 0;
    v19 += 8;
  }
  while ( v19 != v14 );
  v45 = (void *)nc;
LABEL_78:
  if ( v45 )
  {
    nd = v45;
    std::string::_M_dispose();
    operator delete(nd, 0x20u);
  }
  if ( v55 )
  {
    std::string::_M_dispose();
    operator delete(v55, 0x20u);
  }
LABEL_5:
  operator delete();
  if ( !v72 )
    return v49;
  v72 = 0;
  if ( !v71 )
    goto LABEL_48;
  v27 = 0;
  v65 = -1;
  v28 = -1;
  v29 = nullptr;
  v66 = 0;
  if ( !(unsigned __int8)sub_25B5D80(-1, 0, 0) )
  {
    sub_25B62D0(v73, -1, 0);
    v29 = (__int64 *)operator new(0x20u);
    std::string::basic_string();
    if ( !(unsigned __int8)sub_25B5D80(*v29, v29[1], 0) )
    {
      sub_25B62D0(v74, *v29, v29[1]);
      sub_63DFC0(v29, v74);
      std::string::_M_dispose();
    }
    v28 = *v29;
    v27 = v29[1];
    std::string::_M_dispose();
  }
  v67 = -2;
  v68 = 0;
  if ( (unsigned __int8)sub_25B5D80(-2, 0, 0) )
  {
    v30 = v69;
    v31 = v69 + ((unsigned __int64)v71 << 6);
    if ( v69 == v31 )
      goto LABEL_46;
    nb = 0;
    v32 = -2;
    v56 = nullptr;
  }
  else
  {
    sub_25B62D0(v73, -2, 0);
    v56 = (__int64 *)operator new(0x20u);
    std::string::basic_string();
    if ( !(unsigned __int8)sub_25B5D80(*v56, v56[1], 0) )
    {
      sub_25B62D0(v74, *v56, v56[1]);
      sub_63DFC0(v56, v74);
      std::string::_M_dispose();
    }
    v32 = *v56;
    nb = v56[1];
    std::string::_M_dispose();
    v30 = v69;
    v31 = v69 + ((unsigned __int64)v71 << 6);
    if ( v31 == v69 )
    {
LABEL_45:
      std::string::_M_dispose();
      operator delete(v56, 0x20u);
      goto LABEL_46;
    }
  }
  if ( v28 != -1 )
  {
    v60 = v29;
    v33 = v31;
    while ( 1 )
    {
      v34 = *(char **)(v30 + 8);
      v35 = *(_QWORD *)(v30 + 16);
      if ( v28 != -2 )
        break;
      while ( 1 )
      {
        v36 = v34 + 2 == nullptr;
LABEL_40:
        if ( !v36 )
          goto LABEL_68;
LABEL_41:
        v37 = *(void **)v30;
        if ( *(_QWORD *)v30 )
          break;
        v30 += 64;
        if ( v30 == v33 )
          goto LABEL_43;
        v34 = *(char **)(v30 + 8);
        v35 = *(_QWORD *)(v30 + 16);
        if ( v28 != -2 )
          goto LABEL_37;
      }
      v30 += 64;
      std::string::_M_dispose();
      operator delete(v37, 0x20u);
      *(_QWORD *)(v30 - 64) = 0;
      if ( v30 == v33 )
      {
LABEL_43:
        v29 = v60;
        goto LABEL_44;
      }
    }
LABEL_37:
    if ( v27 == v35 )
    {
      if ( v27 )
      {
        v36 = memcmp(v34, (const void *)v28, v27) == 0;
        goto LABEL_40;
      }
      goto LABEL_41;
    }
LABEL_68:
    if ( v32 == -1 )
    {
      v44 = v34 + 1 == nullptr;
    }
    else
    {
      if ( v32 != -2 )
      {
        if ( nb == v35 )
        {
          if ( !nb )
            goto LABEL_41;
          v44 = memcmp(v34, (const void *)v32, nb) == 0;
          goto LABEL_84;
        }
LABEL_85:
        sub_25B66C0(v30 + 24);
        goto LABEL_41;
      }
      v44 = v34 + 2 == nullptr;
    }
LABEL_84:
    if ( v44 )
      goto LABEL_41;
    goto LABEL_85;
  }
  while ( 2 )
  {
    while ( 2 )
    {
      v38 = *(char **)(v30 + 8);
      if ( v38 == (char *)-1LL )
        goto LABEL_51;
      if ( v32 == -1 )
        goto LABEL_92;
      v46 = v38 + 2 == nullptr;
      if ( v32 == -2 )
        goto LABEL_91;
      if ( nb != *(_QWORD *)(v30 + 16) )
        goto LABEL_92;
      if ( nb )
      {
        v46 = memcmp(v38, (const void *)v32, nb) == 0;
LABEL_91:
        if ( !v46 )
LABEL_92:
          sub_25B66C0(v30 + 24);
      }
LABEL_51:
      v39 = *(void **)v30;
      if ( !*(_QWORD *)v30 )
      {
        v30 += 64;
        if ( v30 == v31 )
          goto LABEL_44;
        continue;
      }
      break;
    }
    v30 += 64;
    std::string::_M_dispose();
    operator delete(v39, 0x20u);
    *(_QWORD *)(v30 - 64) = 0;
    if ( v31 != v30 )
      continue;
    break;
  }
LABEL_44:
  if ( v56 )
    goto LABEL_45;
LABEL_46:
  if ( v29 )
  {
    std::string::_M_dispose();
    operator delete(v29, 0x20u);
  }
LABEL_48:
  operator delete();
  return v49;
}

