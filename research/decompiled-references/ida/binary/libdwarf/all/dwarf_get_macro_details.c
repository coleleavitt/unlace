__int64 __fastcall dwarf_get_macro_details(
        char *a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        __int64 a6)
{
  Dwarf_Debug v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // r15d
  unsigned int section; // eax
  __int64 v11; // r10
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  char *v14; // rdi
  char v15; // al
  __int64 v16; // r12
  char *v17; // rdi
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  bool v20; // cc
  char v21; // al
  char *v22; // rdi
  bool v23; // cf
  char v24; // al
  unsigned int v25; // eax
  size_t v26; // rax
  char *v27; // rdi
  char *v28; // r9
  __int64 alloc; // rax
  char *v30; // r9
  Dwarf_Debug v31; // r12
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rbp
  char v35; // al
  void *v36; // rsi
  unsigned int v37; // eax
  unsigned int v38; // eax
  size_t v39; // rax
  size_t v40; // r14
  unsigned int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // r14
  char *v45; // rcx
  unsigned int v48; // [rsp+8h] [rbp-C0h]
  __int64 v50; // [rsp+10h] [rbp-B8h]
  char *src; // [rsp+18h] [rbp-B0h]
  char *srca; // [rsp+18h] [rbp-B0h]
  __int64 v53; // [rsp+20h] [rbp-A8h]
  __int64 v54; // [rsp+28h] [rbp-A0h]
  __int64 v55; // [rsp+28h] [rbp-A0h]
  __int64 v56; // [rsp+30h] [rbp-98h]
  __int64 v57; // [rsp+38h] [rbp-90h]
  __int64 v58; // [rsp+40h] [rbp-88h]
  void *v59; // [rsp+48h] [rbp-80h]
  __int64 v60; // [rsp+50h] [rbp-78h]
  char *v61; // [rsp+50h] [rbp-78h]
  __int64 v62; // [rsp+58h] [rbp-70h]
  int v63; // [rsp+68h] [rbp-60h]
  char *s; // [rsp+78h] [rbp-50h] BYREF
  _QWORD v65[9]; // [rsp+80h] [rbp-48h] BYREF

  v6 = (Dwarf_Debug)a1;
  v65[1] = __readfsqword(0x28u);
  v7 = a6;
  s = nullptr;
  if ( a1 && *(_QWORD *)a1 == 3959286781LL )
  {
    section = _dwarf_load_section(a1, a1 + 1984, a6);
    v11 = a3;
    v8 = section;
    if ( section )
    {
      dwarf_dealloc((Dwarf_Debug)a1, nullptr, 1u);
      return v8;
    }
    if ( !*((_QWORD *)a1 + 104) || (v12 = *((_QWORD *)a1 + 248)) == 0 || (v13 = *((_QWORD *)a1 + 249), a2 >= v13) )
    {
      v8 = -1;
      dwarf_dealloc((Dwarf_Debug)a1, nullptr, 1u);
      return v8;
    }
    v14 = (char *)(v12 + a2);
    v50 = v12 + v13;
    if ( !v11 )
      v11 = -1;
    s = (char *)(v12 + a2);
    v15 = *v14;
    v16 = 0;
    v17 = v14 + 1;
    v18 = 0;
    v54 = 0;
    v19 = v11;
    s = v17;
    v20 = (unsigned __int8)v15 <= 3u;
    if ( v15 == 3 )
      goto LABEL_29;
LABEL_13:
    if ( v20 )
    {
      if ( !v15 )
      {
        v21 = 1;
        v22 = &v17[-v12];
        v23 = *((_QWORD *)v6 + 249) < (unsigned __int64)v22;
        if ( *((char **)v6 + 249) != v22 )
        {
LABEL_16:
          if ( !v23 )
          {
            v24 = v21 ^ 1;
            goto LABEL_26;
          }
          _dwarf_error(v6, v7, 182);
          dwarf_dealloc(v6, nullptr, 1u);
          return 1;
        }
        goto LABEL_35;
      }
    }
    else
    {
      if ( v15 == 4 )
      {
        v21 = 0;
        v18 = (v18 == 0) + v18 - 1;
        v27 = &v17[-v12];
        v23 = *((_QWORD *)v6 + 249) < (unsigned __int64)v27;
        if ( *((char **)v6 + 249) != v27 )
          goto LABEL_16;
LABEL_35:
        v28 = (char *)(v12 + a2);
        ++v16;
LABEL_36:
        src = v28;
        v62 = v54 + 40 * v16 + 2;
        alloc = _dwarf_get_alloc(v6, 1, v62);
        v30 = src;
        v56 = alloc + 40 * v16;
        if ( !alloc )
        {
          dwarf_dealloc(v6, nullptr, 1u);
          _dwarf_error(v6, v7, 185);
          return 1;
        }
        s = src;
        v63 = 0;
        v55 = 0;
        v60 = 0;
        srca = nullptr;
        v58 = 0;
        v59 = (void *)alloc;
        v57 = v16;
        v31 = v6;
        v32 = 0;
        v33 = -1;
        v53 = v7;
        v34 = alloc;
        while ( 1 )
        {
          v65[0] = 0;
          if ( *((_QWORD *)v31 + 249) < (unsigned __int64)&v30[-v12] )
          {
            dwarf_dealloc(v31, v59, 1u);
            dwarf_dealloc(v31, srca, 1u);
            _dwarf_error(v31, v53, 182);
            return 1;
          }
          v35 = *v30;
          *(_QWORD *)v34 = &v30[-v12];
          *(_QWORD *)(v34 + 24) = v33;
          *(_BYTE *)(v34 + 8) = v35;
          *(_QWORD *)(v34 + 16) = 0;
          *(_QWORD *)(v34 + 32) = 0;
          ++s;
          if ( v35 == 3 )
          {
            v41 = _dwarf_leb128_uword_wrapper(v31, &s, v50, v65, v53);
            if ( v41 )
            {
              v48 = v41;
              dwarf_dealloc(v31, srca, 1u);
              dwarf_dealloc(v31, v59, 1u);
              return v48;
            }
            *(_QWORD *)(v34 + 16) = v65[0];
            if ( (unsigned __int64)&s[-v12] >= *((_QWORD *)v31 + 249) )
              goto LABEL_67;
            v37 = _dwarf_leb128_uword_wrapper(v31, &s, v50, v65, v53);
            if ( v37 )
            {
LABEL_81:
              v8 = v37;
              dwarf_dealloc(v31, srca, 1u);
              dwarf_dealloc(v31, v59, 1u);
              return v8;
            }
            *(_QWORD *)(v34 + 24) = v65[0];
            if ( v60 )
            {
              if ( v55 < v60 )
              {
                v42 = 8 * v55;
                goto LABEL_65;
              }
              v44 = 2 * v60;
              v43 = 16 * v60;
            }
            else
            {
              v43 = 160;
              v44 = 20;
            }
            v45 = (char *)_dwarf_get_alloc(v31, 1, v43);
            if ( v45 )
            {
              v42 = 8 * v55;
              if ( srca )
              {
                v61 = v45;
                memcpy(v45, srca, 8 * v55);
                dwarf_dealloc(v31, srca, 1u);
                v42 = 8 * v55;
                v45 = v61;
              }
              v60 = v44;
              srca = v45;
LABEL_65:
              ++v55;
              *(_QWORD *)&srca[v42] = v33;
            }
            else
            {
              v63 = 1;
            }
            v33 = v65[0];
            if ( (unsigned __int64)&s[-v12] >= *((_QWORD *)v31 + 249) )
              goto LABEL_67;
            goto LABEL_53;
          }
          if ( (unsigned __int8)v35 <= 3u )
            break;
          if ( v35 != 4 )
          {
            if ( v35 != -1 )
            {
              v6 = v31;
              v7 = v53;
              dwarf_dealloc(v31, v59, 1u);
              v36 = srca;
              goto LABEL_44;
            }
            goto LABEL_49;
          }
          if ( !v63 )
          {
            if ( v55 > 0 )
            {
              --v55;
              v33 = *(_QWORD *)&srca[8 * v55];
              goto LABEL_53;
            }
            v63 = 1;
          }
          v33 = -1;
LABEL_53:
          ++v32;
          v34 += 40;
          if ( v32 == v57 )
          {
LABEL_42:
            *a4 = v57;
            v8 = 0;
            *a5 = v59;
            dwarf_dealloc(v31, srca, 1u);
            return v8;
          }
          v30 = s;
        }
        if ( !v35 )
          goto LABEL_42;
LABEL_49:
        v37 = _dwarf_leb128_uword_wrapper(v31, &s, v50, v65, v53);
        if ( v37 )
          goto LABEL_81;
        *(_QWORD *)(v34 + 16) = v65[0];
        if ( (unsigned __int64)&s[-v12] >= *((_QWORD *)v31 + 249) )
        {
LABEL_67:
          v6 = v31;
          v7 = v53;
          dwarf_dealloc(v31, srca, 1u);
          v36 = v59;
          goto LABEL_44;
        }
        v38 = _dwarf_check_string_valid(v31, v12, s, v50, 367, v53);
        if ( v38 )
        {
          v8 = v38;
          dwarf_dealloc(v31, v59, 1u);
          return v8;
        }
        v39 = strlen(s);
        v40 = v39 + 1;
        _dwarf_safe_strcpy(v56, v62 - v58, s, v39);
        v58 += v40;
        *(_QWORD *)(v34 + 32) = v56;
        s += v40;
        v56 += v40;
        if ( (unsigned __int64)&s[-v12] >= *((_QWORD *)v31 + 249) )
          goto LABEL_67;
        goto LABEL_53;
      }
      if ( v15 != -1 )
      {
LABEL_43:
        v36 = nullptr;
LABEL_44:
        dwarf_dealloc(v6, v36, 1u);
        _dwarf_error(v6, v7, 186);
        return 1;
      }
    }
    v65[0] = 0;
    if ( (unsigned int)_dwarf_skip_leb128(v17, v65, v50) == 1 )
    {
LABEL_68:
      _dwarf_error_string(v6, v7, 329, "DW_DLE_LEB_IMPROPER: skipping leb128 runs past allowed area.a");
      return 1;
    }
    s += v65[0];
    if ( (unsigned __int64)&s[-v12] < *((_QWORD *)v6 + 249) )
    {
      v25 = _dwarf_check_string_valid(v6, v12, s, v50, 367, v7);
      if ( v25 )
        return v25;
      v26 = strlen(s) + 1;
      s += v26;
      if ( (unsigned __int64)&s[-v12] < *((_QWORD *)v6 + 249) )
      {
        v54 += v26;
        while ( 1 )
        {
          v24 = 1;
LABEL_26:
          if ( ++v16 >= v19 || !v24 )
            break;
          v15 = *s;
          v17 = ++s;
          v20 = (unsigned __int8)v15 <= 3u;
          if ( v15 != 3 )
            goto LABEL_13;
LABEL_29:
          v65[0] = 0;
          if ( (unsigned int)_dwarf_skip_leb128(v17, v65, v50) == 1 )
            goto LABEL_68;
          s += v65[0];
          if ( (unsigned __int64)&s[-v12] >= *((_QWORD *)v6 + 249) )
            goto LABEL_43;
          v65[0] = 0;
          if ( (unsigned int)_dwarf_skip_leb128(s, v65, v50) == 1 )
            goto LABEL_68;
          s += v65[0];
          if ( (unsigned __int64)&s[-v12] >= *((_QWORD *)v6 + 249) )
            goto LABEL_43;
          ++v18;
        }
        v28 = (char *)(v12 + a2);
        goto LABEL_36;
      }
    }
    goto LABEL_43;
  }
  _dwarf_error_string(0, a6, 81, "DW_DLE_DBG_NULL: Either null or it containsa stale Dwarf_Debug pointer");
  dwarf_dealloc((Dwarf_Debug)a1, nullptr, 1u);
  return 1;
}

