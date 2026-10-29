__int64 __fastcall dwarf_get_aranges(struct Dwarf_Debug_s *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int section; // r10d
  __int64 v9; // r8
  unsigned __int64 v10; // r14
  unsigned int area_length_ck_wrapper; // eax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r15
  __int64 *v14; // r12
  _QWORD *v15; // r13
  unsigned int unaligned_ck_wrapper; // eax
  unsigned __int64 v17; // rdx
  unsigned __int8 *v18; // r11
  __int64 v19; // r12
  unsigned __int8 *v20; // r11
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  unsigned __int8 *v23; // rdx
  _QWORD *v24; // r13
  __int64 alloc; // rax
  _QWORD *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  _QWORD *v30; // r12
  __int64 v31; // r13
  void *v32; // rsi
  _QWORD *v33; // rsi
  __int64 v34; // rbp
  void *v35; // rcx
  __int64 v36; // rdx
  char *v37; // rax
  unsigned int v38; // [rsp+0h] [rbp-108h]
  __int64 v39; // [rsp+0h] [rbp-108h]
  unsigned int v40; // [rsp+0h] [rbp-108h]
  unsigned int v41; // [rsp+0h] [rbp-108h]
  unsigned int v42; // [rsp+0h] [rbp-108h]
  unsigned __int8 *v43; // [rsp+0h] [rbp-108h]
  unsigned __int64 v44; // [rsp+8h] [rbp-100h]
  __int64 v45; // [rsp+10h] [rbp-F8h]
  int v46; // [rsp+30h] [rbp-D8h]
  void **v47; // [rsp+38h] [rbp-D0h]
  __int64 *v49; // [rsp+48h] [rbp-C0h]
  unsigned __int8 *v50; // [rsp+50h] [rbp-B8h]
  unsigned int v51; // [rsp+5Ch] [rbp-ACh]
  unsigned int v52; // [rsp+68h] [rbp-A0h] BYREF
  int v53; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned __int8 *v54; // [rsp+70h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v56; // [rsp+80h] [rbp-88h] BYREF
  void *v57; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-78h] BYREF
  __int64 v59; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v60[13]; // [rsp+A0h] [rbp-68h] BYREF

  v60[5] = __readfsqword(0x28u);
  v4 = a4;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_aranges()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  section = _dwarf_load_section(a1, (char *)a1 + 1752, a4);
  if ( !section )
  {
    section = _dwarf_load_debug_info(a1, v4);
    if ( !section )
    {
      v55 = 0;
      v9 = *((_QWORD *)a1 + 220);
      v56 = 0;
      v57 = nullptr;
      if ( !v9 )
        return (unsigned int)-1;
      v46 = v9;
      v45 = 0;
      v54 = *((unsigned __int8 **)a1 + 219);
      v10 = (unsigned __int64)v54;
      v44 = (unsigned __int64)&v54[v9];
      v47 = &v57;
      v50 = v54;
      v49 = a3;
      while ( 1 )
      {
        v53 = 0;
        v58 = 0;
        if ( v10 >= v44 )
        {
LABEL_44:
          if ( v57 )
            sub_FD80(a1, v57);
          _dwarf_error(a1, v4, 335);
          return 1;
        }
        area_length_ck_wrapper = _dwarf_read_area_length_ck_wrapper(
                                   (int)a1,
                                   (int)&v58,
                                   (int)&v54,
                                   (int)&v52,
                                   (int)&v53,
                                   v46,
                                   v44,
                                   v4);
        section = area_length_ck_wrapper;
        if ( area_length_ck_wrapper )
          break;
        v12 = *((_QWORD *)a1 + 220);
        if ( v12 < v58 )
          goto LABEL_44;
        if ( v12 < v58 + v53 + (__int64)(int)v52 )
          goto LABEL_44;
        v13 = (unsigned __int64)&v54[v58];
        if ( v44 < (unsigned __int64)&v54[v58] )
          goto LABEL_44;
        if ( !v58 )
        {
          v10 = (unsigned __int64)v54;
          goto LABEL_17;
        }
        v38 = area_length_ck_wrapper;
        unaligned_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a1, &v55, v54, 2, &v54[v58], v4);
        if ( unaligned_ck_wrapper )
          goto LABEL_41;
        v17 = (unsigned __int64)(v54 + 2);
        v54 = (unsigned __int8 *)v17;
        if ( v17 >= v13 )
          goto LABEL_44;
        if ( v55 != 2 )
        {
          if ( v57 )
            sub_FD80(a1, v57);
          _dwarf_error(a1, v4, 48);
          return 1;
        }
        unaligned_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a1, &v56, v17, v52, v13, v4);
        if ( unaligned_ck_wrapper )
        {
LABEL_41:
          if ( v57 )
          {
            v40 = unaligned_ck_wrapper;
            sub_FD80(a1, v57);
            return v40;
          }
          return unaligned_ck_wrapper;
        }
        v18 = &v54[v52];
        v54 = v18;
        if ( (unsigned __int64)v18 >= v13 )
          goto LABEL_44;
        if ( v56 >= *((_QWORD *)a1 + 46) )
          goto LABEL_65;
        v19 = *v18;
        if ( (unsigned __int8)v19 > 8u )
        {
          if ( v57 )
            sub_FD80(a1, v57);
          _dwarf_error(a1, v4, 50);
          return 1;
        }
        if ( !(_BYTE)v19 )
        {
          if ( v57 )
            sub_FD80(a1, v57);
          _dwarf_error(a1, v4, 371);
          return 1;
        }
        v54 = v18 + 1;
        if ( (unsigned __int64)(v18 + 1) >= v13 )
          goto LABEL_65;
        if ( v18[1] )
        {
          if ( v57 )
            sub_FD80(a1, v57);
          _dwarf_error_string(a1, v4, 135, "DW_DLE_SEGMENT_SIZE_BAD: segment selector size > 0 is not supported");
          return 1;
        }
        v20 = v18 + 2;
        v54 = v20;
        if ( v13 < (unsigned __int64)v20 )
        {
LABEL_65:
          if ( v57 )
            sub_FD80(a1, v57);
          _dwarf_error(a1, v4, 134);
          return 1;
        }
        v21 = 2 * (unsigned __int8)v19;
        v22 = (unsigned __int64)&v20[-v10] % v21;
        if ( v22 )
        {
          v20 += v21 - v22;
          v54 = v20;
        }
        v23 = v20;
        v24 = v47;
        v51 = v38;
        v39 = v4;
        do
        {
          v59 = 0;
          v60[0] = 0;
          unaligned_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a1, &v59, v23, (unsigned __int8)v19, v13, v39);
          if ( unaligned_ck_wrapper )
            goto LABEL_41;
          v54 += v19;
          unaligned_ck_wrapper = _dwarf_read_unaligned_ck_wrapper(a1, v60, v54, (unsigned __int8)v19, v13, v39);
          if ( unaligned_ck_wrapper )
            goto LABEL_41;
          v54 += v19;
          alloc = _dwarf_get_alloc(a1, 17, 1);
          v26 = (_QWORD *)alloc;
          if ( !alloc )
          {
            v33 = v57;
            v34 = v39;
            if ( v57 )
              goto LABEL_54;
            goto LABEL_55;
          }
          *(_QWORD *)alloc = 0;
          *(_WORD *)(alloc + 40) = 0;
          ++v45;
          *(_QWORD *)(alloc + 8) = v59;
          v27 = v60[0];
          v26[4] = a1;
          v26[2] = v27;
          v26[3] = v56;
          v28 = _dwarf_get_alloc(a1, 31, 1);
          if ( !v28 )
          {
            v35 = v26;
            v34 = v39;
            dwarf_dealloc(a1, v35, 0x11u);
            v33 = v57;
            if ( v57 )
LABEL_54:
              sub_FD80(a1, v33);
LABEL_55:
            _dwarf_error(a1, v34, 62);
            return 1;
          }
          *(_QWORD *)v28 = v26;
          *(_DWORD *)(v28 + 8) = 17;
          *v24 = v28;
          v24 = (_QWORD *)(v28 + 16);
          v23 = v54;
        }
        while ( v13 >= (unsigned __int64)&v54[2 * (unsigned __int8)v19] );
        v47 = (void **)(v28 + 16);
        section = v51;
        v4 = v39;
        if ( v13 < (unsigned __int64)v54 )
        {
          v43 = v54;
          dwarfstring_constructor(v60);
          dwarfstring_append_printf_u(v60, "DW_DLE_ARANGE_LENGTH_BAD. 0x%08llx", &v43[-v13]);
          dwarfstring_append_printf_u(v60, " pad bytes at offset 0x%08llx in .debug_aranges", v43 - v50);
          v37 = (char *)dwarfstring_string(v60, " pad bytes at offset 0x%08llx in .debug_aranges", v36);
          dwarf_insert_harmless_error(a1, v37);
          dwarfstring_destructor(v60);
          section = v51;
        }
        v54 = (unsigned __int8 *)v13;
        v10 = v13;
LABEL_17:
        if ( v10 >= v44 )
        {
          v14 = v49;
          v15 = v57;
          if ( v10 != v44 )
          {
            if ( v57 )
              sub_FD80(a1, v57);
            _dwarf_error(a1, v4, 137);
            return 1;
          }
          v41 = section;
          v29 = _dwarf_get_alloc(a1, 15, v45);
          if ( v29 )
          {
            section = v41;
            if ( v45 > 0 )
            {
              v30 = v15;
              v31 = 0;
              do
              {
                v32 = v30;
                *(_QWORD *)(v29 + 8 * v31++) = *v30;
                *v30 = 0;
                v30 = (_QWORD *)v30[2];
                dwarf_dealloc(a1, v32, 0x1Fu);
              }
              while ( v31 != v45 );
              section = v41;
              v14 = v49;
            }
            *a2 = v29;
            *v14 = v45;
            return section;
          }
          _dwarf_error(a1, v4, 62);
          if ( v15 )
            sub_FD80(a1, v15);
          return 1;
        }
      }
      if ( v57 )
      {
        v42 = area_length_ck_wrapper;
        sub_FD80(a1, v57);
        return v42;
      }
    }
  }
  return section;
}

