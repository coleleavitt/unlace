__int64 __fastcall dwarf_construct_linkedto_path(
        const char **a1,
        int a2,
        unsigned __int8 *a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  char *v12; // rsi
  unsigned __int8 *v13; // rax
  unsigned __int8 v14; // dl
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  const char *v18; // rsi
  _BYTE *v19; // r14
  const char **v20; // r13
  const char **v21; // r15
  _QWORD *v22; // rax
  _QWORD *v23; // r12
  const char *v24; // rsi
  const char *v25; // rbp
  const char *v26; // rax
  const char *v27; // rsi
  const char *v28; // rbp
  const char *v29; // rax
  const char *v30; // rsi
  const char **v31; // r13
  const char **v32; // rbp
  const char *v33; // r15
  const char *v34; // r15
  const char *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // r15
  _BYTE *v38; // r12
  __int64 v39; // r14
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rax
  const char *v43; // rsi
  char *v44; // rax
  _BYTE *v45; // r12
  __int64 v46; // rbp
  char *v47; // r13
  char *v48; // r14
  __int64 v49; // r15
  __int64 v50; // rbx
  void *v51; // rbx
  void *v52; // rbp
  char *v54; // r14
  char v55; // al
  char *v56; // rbx
  _QWORD *v57; // rax
  _QWORD *v58; // rbp
  __int64 v59; // rsi
  const char *v60; // rbp
  const char *v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rbp
  void *v64; // rbx
  void *v65; // rbp
  void *v66; // rbx
  void *v67; // rbp
  void *v68; // rbx
  void *v69; // rbp
  void *v70; // rbx
  void *v71; // rbp
  char *v72; // [rsp+10h] [rbp-A48h]
  size_t v73; // [rsp+18h] [rbp-A40h]
  int v74; // [rsp+28h] [rbp-A30h]
  char *v75; // [rsp+28h] [rbp-A30h]
  unsigned __int64 v78; // [rsp+60h] [rbp-9F8h]
  _BYTE v79[32]; // [rsp+90h] [rbp-9C8h] BYREF
  _BYTE v80[32]; // [rsp+B0h] [rbp-9A8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-988h]
  char v82[352]; // [rsp+E0h] [rbp-978h] BYREF
  char buf[2008]; // [rsp+240h] [rbp-818h] BYREF
  unsigned __int64 v84; // [rsp+A18h] [rbp-40h]

  v84 = __readfsqword(0x28u);
  dwarfstring_constructor(v80);
  ptr = nullptr;
  memset(v82, 0, sizeof(v82));
  dwarfstring_constructor(v82);
  dwarfstring_constructor(&v82[32]);
  dwarfstring_constructor(&v82[64]);
  dwarfstring_constructor(&v82[128]);
  dwarfstring_constructor(&v82[160]);
  dwarfstring_constructor(&v82[192]);
  dwarfstring_constructor(&v82[224]);
  dwarfstring_constructor(&v82[256]);
  dwarfstring_constructor(&v82[288]);
  dwarfstring_constructor(&v82[320]);
  v12 = (char *)*a3;
  if ( !(_BYTE)v12 )
  {
    v78 = 0;
    goto LABEL_11;
  }
  v13 = a3;
  v14 = *a3;
  v15 = 0;
  do
  {
    if ( v14 == 47 )
      v15 = (unsigned __int64)v13;
    v14 = *++v13;
  }
  while ( v14 );
  if ( !v15 || v15 < (unsigned __int64)a3 || (v16 = v15 - (_QWORD)a3, v78 = v16, v16 == 0xFFFFFFFF) || !v16 )
  {
    v78 = 0;
    goto LABEL_44;
  }
  dwarfstring_append_length();
  v12 = (char *)*a3;
  if ( (_BYTE)v12 )
  {
LABEL_44:
    if ( (_BYTE)v12 == 47 )
      goto LABEL_13;
    v12 = (char *)(((unsigned int)v12 & 0xFFFFFFDF) - 67);
    if ( (unsigned __int8)v12 <= 0x17u && a3[1] == 58 )
      goto LABEL_13;
  }
LABEL_11:
  buf[0] = 0;
  if ( !getcwd(buf, 0x7D0u) )
  {
    v68 = ptr;
    dwarfstring_destructor(v80);
    ptr = nullptr;
    while ( v68 )
    {
      v69 = v68;
      v68 = *((void **)v68 + 4);
      dwarfstring_destructor(v69);
      free(v69);
    }
    goto LABEL_84;
  }
  v12 = buf;
  dwarfstring_append();
LABEL_13:
  if ( !dwarfstring_strlen(&v82[224]) )
    goto LABEL_14;
  v54 = (char *)dwarfstring_string(&v82[224], v12);
  if ( !v54 )
    goto LABEL_14;
  v55 = *v54;
  if ( (unsigned __int8)(*v54 - 67) <= 0x17u )
  {
    if ( v54[1] != 58 )
      goto LABEL_51;
    v55 += 32;
    v75 = v54 + 2;
    goto LABEL_66;
  }
  if ( (unsigned __int8)(v55 - 99) > 0x17u )
    goto LABEL_67;
  if ( v54[1] == 58 )
  {
    v75 = v54 + 2;
LABEL_66:
    v12 = buf;
    buf[0] = 47;
    buf[1] = v55;
    buf[2] = 0;
    dwarfstring_append();
    v55 = v54[2];
    v54 = v75;
LABEL_67:
    if ( !v55 )
      goto LABEL_14;
  }
LABEL_51:
  v56 = v54;
  do
  {
    while ( *v56 != 92 )
    {
      v12 = v56++;
      dwarfstring_append_length();
      if ( !*v56 )
        goto LABEL_14;
    }
    v12 = "/";
    ++v56;
    dwarfstring_append_length();
  }
  while ( *v56 );
LABEL_14:
  dwarfstring_reset(&v82[224], v12);
  dwarfstring_append();
  dwarfstring_string(&v82[32], (const char *)&a3[v78]);
  dwarfstring_append();
  dwarfstring_append();
  dwarfstring_string(v82, ".debug");
  dwarfstring_append();
  _dwarf_pathjoinl(&v82[160], &v82[32]);
  dwarfstring_constructor(v79);
  dwarfstring_append();
  dwarfstring_append();
  if ( a7 )
  {
    v17 = 0;
    do
    {
      while ( 1 )
      {
        dwarfstring_append_printf_u(v79, "%02x", *(unsigned __int8 *)(a6 + v17));
        if ( !v17 )
          break;
        if ( ++v17 == a7 )
          goto LABEL_19;
      }
      v17 = 1;
      dwarfstring_append();
    }
    while ( a7 != 1 );
LABEL_19:
    _dwarf_pathjoinl(&v82[320], v79);
    v18 = ".debug";
    dwarfstring_append();
    dwarfstring_destructor(v79);
    if ( a2 )
    {
      v19 = nullptr;
      v20 = a1;
      v21 = &a1[a2];
      while ( 1 )
      {
        while ( 1 )
        {
          dwarfstring_reset(&v82[288], v18);
          dwarfstring_append();
          _dwarf_pathjoinl(&v82[288], &v82[320]);
          if ( v19 )
            break;
          ++v20;
          v19 = v80;
          v18 = (const char *)dwarfstring_string(&v82[288], &v82[320]);
          dwarfstring_append();
          if ( v20 == v21 )
            goto LABEL_25;
        }
        v22 = malloc(0x28u);
        v23 = v22;
        if ( !v22 )
          break;
        ++v20;
        dwarfstring_constructor(v22);
        v23[4] = 0;
        v18 = (const char *)dwarfstring_string(&v82[288], &v82[320]);
        dwarfstring_append();
        *((_QWORD *)v19 + 4) = v23;
        v19 = v23;
        if ( v20 == v21 )
          goto LABEL_25;
      }
      v64 = ptr;
      *a10 = 62;
      dwarfstring_destructor(v80);
      ptr = nullptr;
      while ( v64 )
      {
        v65 = v64;
        v64 = *((void **)v64 + 4);
        dwarfstring_destructor(v65);
        free(v65);
      }
      goto LABEL_74;
    }
  }
  else
  {
    _dwarf_pathjoinl(&v82[320], v79);
    dwarfstring_append();
    dwarfstring_destructor(v79);
  }
  v19 = nullptr;
LABEL_25:
  if ( !a4 )
    goto LABEL_35;
  dwarfstring_append();
  dwarfstring_reset(&v82[256], a4);
  dwarfstring_reset(&v82[224], a4);
  dwarfstring_string(v82, a4);
  dwarfstring_append();
  _dwarf_pathjoinl(&v82[256], &v82[192]);
  v24 = (const char *)dwarfstring_string(&v82[256], &v82[192]);
  dwarfstring_append();
  v25 = (const char *)dwarfstring_string(&v82[256], v24);
  v26 = (const char *)dwarfstring_string(&v82[160], v24);
  v27 = v25;
  if ( strcmp(v26, v25) )
  {
    if ( v19 )
    {
      v57 = malloc(0x28u);
      v58 = v57;
      if ( !v57 )
        goto LABEL_76;
      dwarfstring_constructor(v57);
      v58[4] = 0;
      v59 = dwarfstring_string(&v82[256], v27);
      dwarfstring_append();
      *((_QWORD *)v19 + 4) = v58;
      v19 = v58;
    }
    else
    {
      v19 = v80;
      v59 = dwarfstring_string(&v82[256], v25);
      dwarfstring_append();
    }
    dwarfstring_reset(&v82[224], v59);
    dwarfstring_reset(&v82[256], v59);
    dwarfstring_append();
    dwarfstring_string(v82, ".debug");
    dwarfstring_append();
    _dwarf_pathjoinl(&v82[224], &v82[256]);
    _dwarf_pathjoinl(&v82[224], &v82[192]);
    v60 = (const char *)dwarfstring_string(&v82[224], &v82[192]);
    v61 = (const char *)dwarfstring_string(&v82[160], &v82[192]);
    v30 = v60;
    if ( !strcmp(v61, v60) )
      goto LABEL_28;
LABEL_61:
    v62 = malloc(0x28u);
    v63 = v62;
    if ( v62 )
    {
      dwarfstring_constructor(v62);
      v63[4] = 0;
      v30 = (const char *)dwarfstring_string(&v82[224], v30);
      dwarfstring_append();
      *((_QWORD *)v19 + 4) = v63;
      v19 = v63;
      goto LABEL_28;
    }
LABEL_76:
    v66 = ptr;
    *a10 = 62;
    dwarfstring_destructor(v80);
    ptr = nullptr;
    while ( v66 )
    {
      v67 = v66;
      v66 = *((void **)v66 + 4);
      dwarfstring_destructor(v67);
      free(v67);
    }
LABEL_74:
    sub_11580((__int64)v82);
    return 1;
  }
  dwarfstring_reset(&v82[224], v25);
  dwarfstring_reset(&v82[256], v25);
  dwarfstring_append();
  dwarfstring_string(v82, ".debug");
  dwarfstring_append();
  _dwarf_pathjoinl(&v82[224], &v82[256]);
  _dwarf_pathjoinl(&v82[224], &v82[192]);
  v28 = (const char *)dwarfstring_string(&v82[224], &v82[192]);
  v29 = (const char *)dwarfstring_string(&v82[160], &v82[192]);
  v30 = v28;
  if ( !strcmp(v29, v28) )
    goto LABEL_28;
  if ( v19 )
    goto LABEL_61;
  v19 = v80;
  v30 = (const char *)dwarfstring_string(&v82[224], v28);
  dwarfstring_append();
LABEL_28:
  if ( a2 )
  {
    v31 = &a1[a2];
    v32 = a1;
    do
    {
      while ( 1 )
      {
        v33 = *v32;
        dwarfstring_reset(&v82[224], v30);
        dwarfstring_reset(&v82[256], v30);
        dwarfstring_append();
        dwarfstring_string(&v82[224], v33);
        dwarfstring_append();
        _dwarf_pathjoinl(&v82[256], v82);
        _dwarf_pathjoinl(&v82[256], &v82[192]);
        v34 = (const char *)dwarfstring_string(&v82[256], &v82[192]);
        v35 = (const char *)dwarfstring_string(&v82[160], &v82[192]);
        v30 = v34;
        if ( strcmp(v35, v34) )
          break;
LABEL_30:
        if ( v31 == ++v32 )
          goto LABEL_35;
      }
      if ( !v19 )
      {
        v19 = v80;
        v30 = (const char *)dwarfstring_string(&v82[256], v34);
        dwarfstring_append();
        goto LABEL_30;
      }
      v36 = malloc(0x28u);
      v37 = v36;
      if ( !v36 )
        goto LABEL_76;
      ++v32;
      dwarfstring_constructor(v36);
      v37[4] = 0;
      v30 = (const char *)dwarfstring_string(&v82[256], v30);
      dwarfstring_append();
      *((_QWORD *)v19 + 4) = v37;
      v19 = v37;
    }
    while ( v31 != v32 );
  }
LABEL_35:
  v38 = v80;
  v39 = 0;
  v40 = 0;
  do
  {
    v41 = v40++;
    v42 = dwarfstring_strlen(v38);
    v38 = *((_BYTE **)v38 + 4);
    v39 += v42 + 1;
  }
  while ( v38 );
  v43 = (_BYTE *)(&dword_0 + 1);
  v73 = 8 * v41 + 16 + v39 + 8;
  v44 = (char *)calloc(v73, 1u);
  if ( !v44 )
  {
    v70 = ptr;
    dwarfstring_destructor(v80);
    ptr = nullptr;
    while ( v70 )
    {
      v71 = v70;
      v70 = *((void **)v70 + 4);
      dwarfstring_destructor(v71);
      free(v71);
    }
LABEL_84:
    sub_11580((__int64)v82);
    *a10 = 62;
    return 1;
  }
  v72 = v44;
  v45 = v80;
  v74 = v40;
  v46 = 8 * v41 + 16;
  v47 = v44;
  do
  {
    v47 += 8;
    v48 = &v72[v46];
    v49 = dwarfstring_string(v45, v43);
    v50 = dwarfstring_strlen(v45);
    v43 = (const char *)(v73 - v46);
    v46 += v50 + 1;
    _dwarf_safe_strcpy(v48, v43, v49, v50);
    *((_QWORD *)v47 - 1) = v48;
    v45 = *((_BYTE **)v45 + 4);
  }
  while ( v45 );
  v51 = ptr;
  *a8 = v72;
  *a9 = v74;
  dwarfstring_destructor(v80);
  ptr = nullptr;
  while ( v51 )
  {
    v52 = v51;
    v51 = *((void **)v51 + 4);
    dwarfstring_destructor(v52);
    free(v52);
  }
  sub_11580((__int64)v82);
  return 0;
}

