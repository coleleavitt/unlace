__int64 __fastcall dwarf_srcfiles(struct Dwarf_Die_s *a1, __int64 *a2, unsigned __int64 *a3, Dwarf_Error *a4)
{
  __int64 *v4; // r13
  __int64 *v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // ecx
  unsigned int section; // eax
  int v12; // ecx
  int v13; // eax
  Dwarf_Off v14; // r9
  char *v15; // rax
  unsigned int fission_addition_die; // eax
  bool v17; // cf
  unsigned __int64 v18; // r14
  __int64 alloc; // rax
  unsigned int v20; // eax
  unsigned __int64 *v21; // r10
  _QWORD *v22; // r14
  __int64 v23; // r15
  unsigned __int64 *v24; // r10
  unsigned __int64 *v25; // r13
  _QWORD *v26; // r12
  _QWORD *v27; // rax
  int v28; // eax
  _QWORD *v29; // r14
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // ecx
  _QWORD *v36; // r12
  unsigned __int64 *v37; // r14
  _QWORD *v38; // rt0
  unsigned int v39; // r13d
  unsigned __int64 *v40; // rbx
  void *v41; // rsi
  void *v42; // [rsp+8h] [rbp-C0h]
  unsigned int v43; // [rsp+8h] [rbp-C0h]
  unsigned int v44; // [rsp+8h] [rbp-C0h]
  unsigned int v45; // [rsp+8h] [rbp-C0h]
  unsigned int v46; // [rsp+8h] [rbp-C0h]
  unsigned __int64 *v47; // [rsp+8h] [rbp-C0h]
  unsigned int v48; // [rsp+8h] [rbp-C0h]
  unsigned int v49; // [rsp+10h] [rbp-B8h]
  __int64 *v50; // [rsp+10h] [rbp-B8h]
  Dwarf_Off v51; // [rsp+18h] [rbp-B0h]
  char *v52; // [rsp+18h] [rbp-B0h]
  char *v53; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v54; // [rsp+20h] [rbp-A8h]
  unsigned __int64 *v55; // [rsp+20h] [rbp-A8h]
  Dwarf_Half v56; // [rsp+3Eh] [rbp-8Ah] BYREF
  Dwarf_Attribute v57[2]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v58; // [rsp+50h] [rbp-78h]
  Dwarf_Off v59; // [rsp+58h] [rbp-70h] BYREF
  _QWORD *v60; // [rsp+60h] [rbp-68h] BYREF
  __int64 v61; // [rsp+68h] [rbp-60h] BYREF
  __int64 v62; // [rsp+70h] [rbp-58h] BYREF
  __int64 v63; // [rsp+78h] [rbp-50h] BYREF
  Dwarf_Addr v64[9]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a2;
  v64[1] = __readfsqword(0x28u);
  v56 = 0;
  v57[0] = nullptr;
  v57[1] = nullptr;
  v58 = 0;
  v59 = 0;
  v60 = nullptr;
  if ( a4 )
    *a4 = nullptr;
  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v7 = *((__int64 **)a1 + 2);
  if ( !v7 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  v8 = *v7;
  if ( *v7 && *(_QWORD *)v8 == 3959286781LL )
  {
    v9 = dwarf_attr(a1, 0x10u, v57, a4);
    if ( v9 )
      return v9;
    if ( !*(_QWORD *)(v8 + 1080) )
    {
      dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
      _dwarf_error(v8, a4, 38);
      return 1;
    }
    section = _dwarf_load_section(v8, v8 + 1056, a4);
    if ( section )
    {
      v44 = section;
      dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
      return v44;
    }
    if ( !*(_QWORD *)(v8 + 1064) )
    {
      dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
      return (unsigned int)-1;
    }
    v42 = *(void **)(v8 + 1056);
    v12 = dwarf_whatform(v57[0], &v56, a4);
    if ( !v12 )
    {
      if ( v56 == 1 )
      {
        v64[0] = 0;
        v28 = dwarf_formaddr(v57[0], v64, a4);
        v9 = v28;
        if ( !v28 )
        {
          v14 = v64[0];
          v59 = v64[0];
LABEL_19:
          if ( v14 >= *(_QWORD *)(v8 + 1064) )
          {
            dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
            _dwarf_error(v8, a4, 120);
            return 1;
          }
          v51 = v14;
          v15 = *(char **)(v8 + 1056);
          v63 = 0;
          v64[0] = 0;
          v53 = v15;
          fission_addition_die = _dwarf_get_fission_addition_die(a1, 4, &v63, v64, a4);
          if ( fission_addition_die )
          {
            v45 = fission_addition_die;
            dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
            return v45;
          }
          v17 = *(_QWORD *)(v8 + 1056) + *(_QWORD *)(v8 + 1064) < (unsigned __int64)&v53[v51 + v63];
          v52 = &v53[v51 + v63];
          if ( v17 )
          {
            dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
            _dwarf_error(v8, a4, 341);
            return 1;
          }
          dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
          v57[0] = nullptr;
          if ( (unsigned int)_dwarf_internal_get_die_comp_dir(a1) == 1 )
            return 1;
          v18 = v58;
          alloc = _dwarf_get_alloc(v8, 36, 1);
          if ( !alloc )
            goto LABEL_49;
          *(_BYTE *)(alloc + 4) = 0;
          v64[0] = 0;
          v54 = (unsigned __int64 *)alloc;
          v20 = sub_347B0(v8, (__int64)v7, (__int64)v42, v52, *(_QWORD *)(v8 + 1064), (char **)v64, alloc, (__int64)a4);
          v21 = v54;
          if ( v20 == 1 || v20 == -1 )
          {
            v46 = v20;
LABEL_51:
            dwarf_dealloc((Dwarf_Debug)v8, v21, 0x24u);
            return v46;
          }
          v54[35] = v18;
          v22 = (_QWORD *)v54[27];
          v61 = 0;
          v62 = 0;
          v63 = 0;
          v9 = dwarf_srclines_files_indexes(v54, &v61, &v62, &v63, a4);
          if ( v9 )
            return v9;
          v23 = v61;
          v24 = v54;
          if ( v61 < v63 )
          {
            v25 = v54;
            v55 = a3;
            v26 = &v60;
            do
            {
              v64[0] = 0;
              if ( (unsigned int)sub_325F0(v8, (__int64)v22, (__int64)v25, (__int64 *)v64, (__int64)a4) )
              {
                dwarf_dealloc((Dwarf_Debug)v8, v25, 0x24u);
                return 1;
              }
              v27 = (_QWORD *)_dwarf_get_alloc(v8, 31, 1);
              if ( !v27 )
              {
                dwarf_dealloc((Dwarf_Debug)v8, (void *)v64[0], 1u);
                v21 = v25;
                goto LABEL_48;
              }
              *v27 = v64[0];
              ++v23;
              *v26 = v27;
              v26 = v27 + 2;
              v22 = (_QWORD *)*v22;
            }
            while ( v63 > v23 );
            v24 = v25;
            v9 = 0;
            v4 = a2;
            a3 = v55;
          }
          v29 = v60;
          if ( v60 )
          {
            v30 = v24[29];
            if ( v30 )
            {
              v47 = v24;
              v49 = v9;
              v31 = _dwarf_get_alloc(v8, 15, v30);
              v21 = v47;
              v32 = v31;
              if ( v31 )
              {
                v33 = v47[29];
                v34 = 0;
                v35 = v49;
                if ( v33 )
                {
                  v48 = v49;
                  v38 = v29;
                  v37 = a3;
                  v36 = v38;
                  v50 = v4;
                  v39 = 0;
                  v40 = v21;
                  do
                  {
                    v41 = v36;
                    *(_QWORD *)(v32 + 8 * v34) = *v36;
                    *v36 = 0;
                    v36 = (_QWORD *)v36[2];
                    dwarf_dealloc((Dwarf_Debug)v8, v41, 0x1Fu);
                    v33 = v40[29];
                    v34 = ++v39;
                  }
                  while ( v39 < v33 );
                  v35 = v48;
                  v4 = v50;
                  v21 = v40;
                  a3 = v37;
                }
                *v4 = v32;
                v46 = v35;
                *a3 = v33;
                goto LABEL_51;
              }
LABEL_48:
              dwarf_dealloc((Dwarf_Debug)v8, v21, 0x24u);
LABEL_49:
              _dwarf_error(v8, a4, 62);
              return 1;
            }
          }
          dwarf_dealloc((Dwarf_Debug)v8, v24, 0x24u);
          *v4 = 0;
          *a3 = 0;
          return (unsigned int)-1;
        }
        if ( v28 != 1 )
          return v9;
        v43 = 1;
        sub_32090(v8, v56, (__int64)a4);
LABEL_37:
        dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
        return v43;
      }
      if ( v56 != 7968 && v56 != 23 && (unsigned __int16)(v56 - 6) > 1u )
      {
        sub_32090(v8, v56, (__int64)a4);
        dwarf_dealloc((Dwarf_Debug)v8, v57[0], 0xAu);
        return 1;
      }
      v13 = dwarf_global_formref(v57[0], &v59, a4);
      v14 = v59;
      v12 = v13;
      if ( !v13 )
        goto LABEL_19;
    }
    v43 = v12;
    goto LABEL_37;
  }
  _dwarf_error_string(
    0,
    a4,
    81,
    "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
  return 1;
}

