__int64 __fastcall dwarf_internal_srclines(
        Dwarf_Half *a1,
        int a2,
        _QWORD *a3,
        _BYTE *a4,
        __int64 *a5,
        _QWORD *a6,
        __int64 *a7,
        _QWORD *a8,
        __int64 *a9,
        int a10,
        int a11,
        Dwarf_Error *a12)
{
  __int64 *v13; // r14
  __int64 v14; // r15
  unsigned int section; // r12d
  Dwarf_Error *v17; // rdx
  Dwarf_Off v18; // rax
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int64 alloc; // rax
  unsigned int v23; // eax
  __int64 v24; // r10
  unsigned int v25; // ebx
  __int64 v26; // rax
  const char *v27; // rsi
  unsigned __int16 v28; // r9
  bool v29; // zf
  unsigned __int64 v30; // rax
  const char *v31; // r14
  unsigned int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 *v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  unsigned __int16 address_size; // [rsp+38h] [rbp-A0h]
  _QWORD *v44; // [rsp+38h] [rbp-A0h]
  __int64 v45; // [rsp+40h] [rbp-98h]
  char *v46; // [rsp+40h] [rbp-98h]
  unsigned __int16 v47; // [rsp+40h] [rbp-98h]
  void *v48; // [rsp+48h] [rbp-90h]
  char *v49; // [rsp+48h] [rbp-90h]
  _QWORD *v50; // [rsp+48h] [rbp-90h]
  void *v51; // [rsp+48h] [rbp-90h]
  unsigned __int64 v52; // [rsp+50h] [rbp-88h]
  unsigned __int64 v53; // [rsp+50h] [rbp-88h]
  Dwarf_Attribute v54[2]; // [rsp+68h] [rbp-70h] BYREF
  __int64 v55; // [rsp+78h] [rbp-60h]
  Dwarf_Off v56; // [rsp+80h] [rbp-58h] BYREF
  __int64 v57; // [rsp+88h] [rbp-50h] BYREF
  char *v58[9]; // [rsp+90h] [rbp-48h] BYREF

  v58[1] = (char *)__readfsqword(0x28u);
  v54[0] = nullptr;
  v54[1] = nullptr;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  if ( a12 )
    *a12 = nullptr;
  if ( !a1 )
  {
    _dwarf_error(0, a12, 52);
    return 1;
  }
  v13 = *((__int64 **)a1 + 2);
  if ( !v13 )
  {
    _dwarf_error(0, a12, 104);
    return 1;
  }
  v14 = *v13;
  if ( !*v13 || *(_QWORD *)v14 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a12,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  section = _dwarf_load_section(*v13, v14 + 1056, a12);
  if ( !section )
  {
    if ( !*(_QWORD *)(v14 + 1064) )
      return (unsigned int)-1;
    address_size = _dwarf_get_address_size((Dwarf_Debug)v14, a1, v17);
    section = dwarf_attr((Dwarf_Die)a1, 0x10u, v54, a12);
    if ( !section )
    {
      section = dwarf_global_formref(v54[0], &v56, a12);
      if ( section )
        goto LABEL_40;
      v18 = *(_QWORD *)(v14 + 1064);
      if ( v56 >= v18 )
      {
        dwarf_dealloc((Dwarf_Debug)v14, v54[0], 0xAu);
        _dwarf_error(v14, a12, 120);
        return 1;
      }
      v48 = (void *)v56;
      v19 = *(_QWORD *)(v14 + 1056);
      v58[0] = nullptr;
      v45 = v19;
      v52 = v19 + v18;
      section = _dwarf_get_fission_addition_die(a1, 4, &v57, v58, a12);
      if ( section )
      {
LABEL_40:
        dwarf_dealloc((Dwarf_Debug)v14, v54[0], 0xAu);
        return section;
      }
      if ( v52 < (unsigned __int64)v48 + v57 + v45 )
      {
        dwarf_dealloc((Dwarf_Debug)v14, v54[0], 0xAu);
        _dwarf_error_string(
          v14,
          a12,
          341,
          "DW_DLE_FISSION_ADDITION_ERROR: on  retrieving the fission addition value for adding that into the line table o"
          "ffset results in running off the end of the line table. Corrupt DWARF.");
        return 1;
      }
      v20 = *(_QWORD *)(v14 + 1056);
      v53 = v20;
      v49 = (char *)(v20 + *(_QWORD *)(v14 + 1064));
      v46 = (char *)(v56 + v57 + v20);
      dwarf_dealloc((Dwarf_Debug)v14, v54[0], 0xAu);
      if ( *(_QWORD *)(v14 + 1064) < v56 + v57 || v49 < v46 )
      {
        _dwarf_error(v14, a12, 120);
        return 1;
      }
      if ( (unsigned int)_dwarf_internal_get_die_comp_dir((Dwarf_Die)a1) == 1 )
        return 1;
      v21 = v55;
      alloc = _dwarf_get_alloc(v14, 36, 1);
      if ( !alloc )
      {
        _dwarf_error(v14, a12, 62);
        return 1;
      }
      *(_QWORD *)(alloc + 280) = v21;
      *(_BYTE *)(alloc + 4) = a2;
      v58[0] = nullptr;
      v50 = (_QWORD *)alloc;
      v23 = sub_347B0(v14, (__int64)v13, v53, v46, *(_QWORD *)(v14 + 1064), v58, alloc, (__int64)a12);
      v24 = (__int64)v50;
      v25 = v23;
      if ( v23 == 1 || v23 == -1 )
        goto LABEL_44;
      v26 = v50[8];
      v27 = v58[0];
      v28 = address_size;
      if ( v26 )
      {
        v29 = v50[14] + v26 == 0;
        v30 = v50[14] + v26;
        v31 = (const char *)v30;
        if ( !v29 )
        {
          v51 = (void *)v50[12];
          *(_DWORD *)(v24 + 300) = 0;
          v47 = address_size;
          v44 = (_QWORD *)v24;
          v32 = sub_369A0((struct Dwarf_Debug_s *)v14, v27, v30, v53, v24, v28, a10, a11, 0, 0, (__int64)a12);
          v24 = (__int64)v44;
          v25 = v32;
          if ( !v32 )
          {
            if ( a7 )
            {
              v33 = v44[39];
              if ( v33 < 0 )
                goto LABEL_77;
              *a7 = v33;
              if ( a6 )
                *a6 = v44[38];
              if ( !a2 )
              {
LABEL_31:
                if ( !*a7 && (!a9 || !*a9) )
                {
                  dwarf_dealloc((Dwarf_Debug)v14, (void *)v24, 0x24u);
                  return section;
                }
                goto LABEL_34;
              }
            }
            else
            {
              if ( a6 )
                *a6 = v44[38];
              if ( !a2 )
                goto LABEL_34;
            }
            v37 = sub_369A0(
                    (struct Dwarf_Debug_s *)v14,
                    v31,
                    (unsigned __int64)v51,
                    v53,
                    (__int64)v44,
                    v47,
                    a10,
                    a11,
                    0,
                    1,
                    (__int64)a12);
            v24 = (__int64)v44;
            v25 = v37;
            if ( !v37 )
            {
              if ( a8 )
                *a8 = v44[40];
              if ( !a9 )
                goto LABEL_34;
              v38 = v44[41];
              if ( v38 >= 0 )
              {
                *a9 = v38;
                goto LABEL_34;
              }
LABEL_77:
              _dwarf_error_string(
                v14,
                a12,
                500,
                "DW_DLE_LINE_COUNT_WRONG Call to dwarf_srclines finds an Impossible lines count");
              return 1;
            }
            goto LABEL_59;
          }
LABEL_44:
          if ( !a2 )
          {
            dwarf_dealloc((Dwarf_Debug)v14, (void *)v24, 0x24u);
            return v25;
          }
LABEL_59:
          dwarf_srclines_dealloc_b((void *)v24);
          return v25;
        }
      }
      v34 = sub_369A0(
              (struct Dwarf_Debug_s *)v14,
              v58[0],
              v50[12],
              v53,
              (__int64)v50,
              address_size,
              a10,
              a11,
              1,
              0,
              (__int64)a12);
      v24 = (__int64)v50;
      v25 = v34;
      if ( v34 )
        goto LABEL_44;
      if ( a6 )
        *a6 = v50[38];
      if ( a7 )
      {
        v35 = v50[39];
        if ( v35 < 0 )
        {
          _dwarf_error_string(
            v14,
            a12,
            500,
            "DW_DLE_LINE_COUNT_WRONG Call to dwarf_srclines finds an impossible lines count");
          return 1;
        }
        *a7 = v35;
        if ( a8 )
          *a8 = 0;
        if ( a9 )
          *a9 = 0;
        if ( a2 )
          goto LABEL_34;
        goto LABEL_31;
      }
      if ( a8 )
      {
        *a8 = 0;
        v36 = a9;
        if ( !a9 )
        {
LABEL_34:
          *a4 = *(_BYTE *)(v24 + 296);
          if ( a3 )
            *a3 = *(unsigned __int16 *)(v24 + 24);
          *a5 = v24;
          return section;
        }
      }
      else
      {
        v36 = a9;
        if ( !a9 )
          goto LABEL_34;
      }
      *v36 = 0;
      goto LABEL_34;
    }
  }
  return section;
}

