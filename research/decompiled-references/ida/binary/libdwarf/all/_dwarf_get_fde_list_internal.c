__int64 __fastcall dwarf_get_fde_list_internal(
        _QWORD *a1,
        Dwarf_Debug ***a2,
        __int64 *a3,
        Dwarf_Debug ***a4,
        size_t *a5,
        unsigned __int64 a6,
        __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v11; // rbp
  unsigned __int64 v14; // rsi
  __int64 v15; // r15
  __int128 v16; // xmm0
  int cie_fde_prefix; // eax
  __int64 v18; // r11
  __int64 v19; // rsi
  unsigned __int64 v21; // rsi
  int fde_from_after_start; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  size_t v26; // rax
  unsigned int cie_from_after_start; // eax
  Dwarf_Debug **alloc; // rax
  __int64 v29; // rcx
  size_t v30; // r8
  Dwarf_Debug **v31; // rbp
  Dwarf_Debug *v32; // rdx
  Dwarf_Debug **v33; // rsi
  Dwarf_Debug **v34; // rdi
  Dwarf_Debug **v35; // rax
  Dwarf_Debug *v36; // rsi
  Dwarf_Debug **v37; // rdx
  Dwarf_Debug *v38; // [rsp+8h] [rbp-140h]
  Dwarf_Debug *v39; // [rsp+10h] [rbp-138h]
  __int64 v40; // [rsp+18h] [rbp-130h]
  unsigned int v41; // [rsp+18h] [rbp-130h]
  size_t nmemb; // [rsp+20h] [rbp-128h]
  __int64 v43; // [rsp+28h] [rbp-120h]
  size_t v44; // [rsp+30h] [rbp-118h]
  __int64 v49; // [rsp+58h] [rbp-F0h]
  __int64 v50; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-E0h] BYREF
  _OWORD v52[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v53; // [rsp+90h] [rbp-B8h]
  __int128 v54; // [rsp+A0h] [rbp-A8h]
  __int64 v55; // [rsp+B0h] [rbp-98h]
  __int64 v56[2]; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v57; // [rsp+D0h] [rbp-78h]
  __int128 v58; // [rsp+E0h] [rbp-68h]
  __int128 v59; // [rsp+F0h] [rbp-58h]
  __int64 v60; // [rsp+100h] [rbp-48h]
  unsigned __int64 v61; // [rsp+108h] [rbp-40h]

  v11 = a6 + a8;
  v61 = __readfsqword(0x28u);
  if ( !a6 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)_dwarf_validate_register_numbers(a1, a11) == 1 )
    return 1;
  if ( a6 >= v11 )
  {
    v38 = nullptr;
    v39 = nullptr;
LABEL_74:
    sub_22B40(v39, v38);
    return 0xFFFFFFFFLL;
  }
  LODWORD(v14) = a6;
  v15 = 0;
  v43 = 0;
  v16 = 0;
  v39 = nullptr;
  nmemb = 0;
  v38 = nullptr;
  v40 = 0;
  v44 = 0;
  do
  {
    v52[0] = v16;
    v52[1] = v16;
    v53 = v16;
    v54 = v16;
    v55 = 0;
    cie_fde_prefix = _dwarf_read_cie_fde_prefix((int)a1, v14, a6, a7, a8, (int)v52, a11);
    v16 = 0;
    if ( cie_fde_prefix == 1 )
      goto LABEL_55;
    if ( cie_fde_prefix == -1 )
      break;
    v18 = *((_QWORD *)&v52[0] + 1);
    if ( *((_QWORD *)&v52[0] + 1) >= v11 )
    {
      sub_22B40(v39, v38);
      _dwarf_error_string(
        a1,
        a11,
        89,
        "DW_DLE_DEBUG_FRAME_LENGTH_BAD: following a the start of a cie/fde we have run off the end of the section.  Corrupt Dwarf");
      return 1;
    }
    if ( (_QWORD)v53 == a9 )
    {
      v56[0] = 0;
      if ( !v15 || (v19 = *(_QWORD *)(v15 + 40), *(_QWORD *)&v52[0] != v19) )
      {
        v15 = (__int64)v38;
        if ( !v38 )
        {
          cie_from_after_start = _dwarf_create_cie_from_after_start(
                                   (int)a1,
                                   (__int64)v52,
                                   a6,
                                   *((__int64 *)&v52[0] + 1),
                                   v11,
                                   v40,
                                   a10,
                                   (__int64)v56,
                                   a11);
          v16 = 0;
          if ( cie_from_after_start )
          {
LABEL_57:
            v41 = cie_from_after_start;
            sub_22B40(v39, v38);
            return v41;
          }
          v15 = v56[0];
          ++v40;
          nmemb = v56[0];
          v19 = *(_QWORD *)(v56[0] + 40);
          v38 = (Dwarf_Debug *)v56[0];
          goto LABEL_16;
        }
        while ( 1 )
        {
          v19 = *(_QWORD *)(v15 + 40);
          if ( *(_QWORD *)&v52[0] == v19 )
            break;
          v15 = *(_QWORD *)(v15 + 80);
          if ( !v15 )
          {
            cie_from_after_start = _dwarf_create_cie_from_after_start(
                                     (int)a1,
                                     (__int64)v52,
                                     a6,
                                     *((__int64 *)&v52[0] + 1),
                                     v11,
                                     v40,
                                     a10,
                                     (__int64)v56,
                                     a11);
            v16 = 0;
            if ( cie_from_after_start )
              goto LABEL_57;
            v15 = v56[0];
            ++v40;
            *(_QWORD *)(nmemb + 80) = v56[0];
            v19 = *(_QWORD *)(v15 + 40);
            nmemb = v15;
            goto LABEL_16;
          }
        }
      }
      v56[0] = v15;
LABEL_16:
      v14 = *(_QWORD *)v15 + *(unsigned __int16 *)(v15 + 90) + (unsigned __int64)*(unsigned __int16 *)(v15 + 88) + v19;
      continue;
    }
    v50 = 0;
    v51 = 0;
    if ( (unsigned __int64)v53 >= a8 )
    {
      _dwarf_error_string(
        a1,
        a11,
        89,
        "DW_DLE_DEBUG_FRAME_LENGTH_BAD: in eh_frame  cie_id value makes no sense. Corrupt DWARF");
      return 1;
    }
    if ( a10 )
    {
      if ( (unsigned __int64)v53 >= *((_QWORD *)&v53 + 1) )
      {
        _dwarf_error_string(
          a1,
          a11,
          89,
          "DW_DLE_DEBUG_FRAME_LENGTH_BAD: in eh_frame  cie_id makes no sense. Corrupt DWARF");
        return 1;
      }
      v21 = *((_QWORD *)&v53 + 1) - v53;
    }
    else
    {
      v21 = a6 + v53;
    }
    if ( !v15 || v21 != *(_QWORD *)(v15 + 40) )
    {
      v15 = (__int64)v38;
      if ( !v38 )
      {
LABEL_40:
        if ( v21 < a6 || v21 >= v11 )
        {
          _dwarf_error(a1, a11, 89);
          goto LABEL_55;
        }
        v49 = *((_QWORD *)&v52[0] + 1);
        *(_OWORD *)v56 = 0;
        v57 = 0;
        v58 = 0;
        v59 = 0;
        v60 = 0;
        v24 = _dwarf_read_cie_fde_prefix((int)a1, v21, a6, a7, a8, (int)v56, a11);
        if ( v24 == 1 )
          goto LABEL_55;
        if ( v24 == -1 || a9 != (_QWORD)v58 )
        {
          _dwarf_error(a1, a11, 200);
LABEL_55:
          sub_22B40(v39, v38);
          return 1;
        }
        v25 = _dwarf_create_cie_from_after_start((int)a1, (__int64)v56, a6, v56[1], v11, v40, a10, (__int64)&v50, a11);
        v18 = v49;
        if ( v25 == 1 )
          goto LABEL_55;
        if ( v25 == -1 )
          return 0xFFFFFFFFLL;
        ++v40;
        v15 = v50;
        if ( v38 )
        {
          v26 = nmemb;
          nmemb = v50;
          *(_QWORD *)(v26 + 80) = v50;
        }
        else
        {
          nmemb = v50;
          v38 = (Dwarf_Debug *)v50;
        }
        goto LABEL_32;
      }
      while ( v21 != *(_QWORD *)(v15 + 40) )
      {
        v15 = *(_QWORD *)(v15 + 80);
        if ( !v15 )
          goto LABEL_40;
      }
    }
    v50 = v15;
LABEL_32:
    fde_from_after_start = _dwarf_create_fde_from_after_start(
                             (int)a1,
                             (__int64)v52,
                             a6,
                             a8,
                             v18,
                             v11,
                             a10,
                             v15,
                             *(unsigned __int16 *)(v15 + 168),
                             (__int64)&v51,
                             a11);
    v16 = 0;
    if ( fde_from_after_start == 1 )
      goto LABEL_55;
    if ( fde_from_after_start == -1 )
      return 0xFFFFFFFFLL;
    v23 = v51;
    if ( v39 )
      *(_QWORD *)(v43 + 96) = v51;
    else
      v39 = (Dwarf_Debug *)v51;
    v14 = *(_QWORD *)(v23 + 56)
        + *(_QWORD *)v23
        + *(unsigned __int8 *)(v23 + 105)
        + (unsigned __int64)*(unsigned __int8 *)(v23 + 104);
    if ( v14 < *(_QWORD *)(v23 + 64) )
    {
      sub_22B40(v39, v38);
      _dwarf_error(a1, a11, 229);
      return 1;
    }
    ++v44;
    v43 = v23;
  }
  while ( v14 < v11 );
  if ( v40 )
  {
    alloc = (Dwarf_Debug **)_dwarf_get_alloc(a1, 15, v40);
    v29 = v40;
    v30 = v44;
    v31 = alloc;
    if ( !alloc )
    {
      sub_22B40(v39, v38);
      _dwarf_error(a1, a11, 62);
      return 1;
    }
    if ( !v38 )
    {
      _dwarf_error_string(a1, a11, 83, "DW_DLE_DEBUGFRAME_ERRORImpossible no head_cie_ptr");
      return 1;
    }
    v32 = v38;
    v33 = &alloc[v40];
    do
    {
      *alloc++ = v32;
      v32 = (Dwarf_Debug *)v32[10];
    }
    while ( alloc != v33 );
    v34 = nullptr;
    if ( v44 )
    {
      v35 = (Dwarf_Debug **)_dwarf_get_alloc(a1, 15, v44);
      v30 = v44;
      v36 = v39;
      v29 = v40;
      v34 = v35;
      v37 = &v35[v44];
      if ( !v35 )
      {
        sub_22B40(v39, v38);
        _dwarf_error_string(a1, a11, 62, "DW_DLE_ALLOC_FAILgetting DW_DLA_LIST given fde_count");
        return 1;
      }
      do
      {
        *v35++ = v36;
        v36 = (Dwarf_Debug *)v36[12];
      }
      while ( v35 != v37 );
    }
    *a2 = v31;
    *a3 = v29;
    *a4 = v34;
    *a5 = v30;
    if ( a10 )
    {
      a1[43] = v34;
      a1[44] = v30;
      a1[39] = v31;
      a1[40] = v29;
    }
    else
    {
      a1[41] = v34;
      a1[42] = v30;
      a1[37] = v31;
      a1[38] = v29;
    }
    if ( v30 )
      qsort(v34, v30, 8u, (__compar_fn_t)compar);
    return 0;
  }
  else
  {
    if ( !v44 )
      goto LABEL_74;
    sub_22B40(v39, v38);
    _dwarf_error(a1, a11, 221);
    return 1;
  }
}

