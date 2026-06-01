__int64 __fastcall dwarf_get_gnu_index_head(__int64 a1, int a2, _QWORD *a3, size_t *a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned int section; // r8d
  bool v9; // zf
  __int64 v11; // rsi
  int debug_info; // eax
  int v13; // r11d
  size_t *v14; // rcx
  size_t **v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r12
  size_t *v19; // rbp
  unsigned __int64 v20; // rdx
  int v21; // r11d
  __int64 v22; // rbp
  __int64 v23; // r9
  __int64 v24; // rsi
  int v25; // r8d
  int v26; // edi
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  __int64 alloc; // rax
  __int64 v30; // rdi
  char *v31; // rax
  int v32; // r11d
  size_t *v33; // rcx
  __int64 v34; // r15
  char *v35; // r13
  __int64 v36; // rbp
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // r14
  __int64 v39; // r10
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // r15
  __int64 v45; // rcx
  unsigned __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // r11d
  __int64 v50; // rbp
  unsigned __int64 v51; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v52; // [rsp+0h] [rbp-B8h]
  size_t nmemba; // [rsp+8h] [rbp-B0h]
  int v56; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+10h] [rbp-A8h]
  void *v58; // [rsp+18h] [rbp-A0h]
  _QWORD *v59; // [rsp+18h] [rbp-A0h]
  int v60; // [rsp+20h] [rbp-98h]
  size_t *v61; // [rsp+20h] [rbp-98h]
  unsigned int v62; // [rsp+28h] [rbp-90h]
  __int64 v63; // [rsp+40h] [rbp-78h]
  __int64 v64; // [rsp+48h] [rbp-70h]
  unsigned __int64 v65; // [rsp+50h] [rbp-68h]
  int v66; // [rsp+58h] [rbp-60h]
  _QWORD *v67; // [rsp+60h] [rbp-58h]
  _QWORD v68[9]; // [rsp+70h] [rbp-48h] BYREF

  v68[1] = __readfsqword(0x28u);
  v5 = a5;
  if ( !a1 || *(_QWORD *)a1 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a5,
      81,
      "DW_DLE_DBG_NULL: dbg argument to dwarf_get_gnu_index_head()either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v9 = a2 == 0;
  v11 = a1 + 7352;
  if ( v9 )
    v11 = a1 + 7584;
  section = _dwarf_load_section(a1, v11, a5);
  if ( section )
    return section;
  debug_info = _dwarf_load_debug_info(a1, v5);
  v13 = a2;
  v14 = a4;
  if ( debug_info == 1 )
    return 1;
  v15 = nullptr;
  if ( *(_QWORD *)a1 == 3959286781LL )
  {
    v15 = (size_t **)(a1 + 7352);
    if ( !a2 )
      v15 = (size_t **)(a1 + 7584);
  }
  v16 = (unsigned __int64)v15[1];
  v17 = (unsigned __int64)*v15 + v16;
  if ( *(_QWORD *)(a1 + 240) - 1LL < v16 )
  {
    sub_2E3D0((_QWORD *)a1, a2, ": section length %u is larger than the file size in", v16, v5);
    return 1;
  }
  nmemba = 0;
  if ( *v15 != (size_t *)v17 )
  {
    v51 = (unsigned __int64)v15[1];
    v18 = 0;
    v60 = v13;
    v58 = (void *)v5;
    v19 = *v15;
    do
    {
      v68[0] = 0;
      if ( v17 < (unsigned __int64)v19 + 4 )
      {
LABEL_78:
        _dwarf_error_string(a1, v58, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        return 1;
      }
      (*(void (__fastcall **)(_QWORD *, size_t *, __int64, size_t *))(a1 + 8296))(v68, v19, 4, v14);
      v20 = v68[0];
      if ( v68[0] == 0xFFFFFFFFLL )
      {
        v68[0] = 0;
        if ( v17 < (unsigned __int64)v19 + 12 )
          goto LABEL_78;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v68, (__int64)v19 + 4, 8);
        v20 = v68[0];
        v14 = (size_t *)((char *)v19 + 12);
        if ( v51 < v68[0] )
          goto LABEL_82;
        v23 = 4;
        v24 = 8;
        v25 = 4;
        v26 = 8;
      }
      else if ( v68[0] )
      {
        if ( v51 < v68[0] )
          goto LABEL_82;
        v14 = (size_t *)((char *)v19 + 4);
        v23 = 0;
        v24 = 4;
        v25 = 0;
        v26 = 4;
      }
      else
      {
        if ( !*(_BYTE *)(a1 + 8360) || *(_BYTE *)(a1 + 232) != 8 )
        {
          v18 += 4LL;
          v21 = v60;
          v22 = (__int64)v58;
          if ( v51 < v18 )
          {
LABEL_20:
            sub_2E3D0((_QWORD *)a1, v21, "Sum of frame fde/cies sizes 0x%llx exceeds section size", v18, v22);
            return 1;
          }
LABEL_81:
          sub_2E3D0((_QWORD *)a1, v21, "Length of fde/cies header sizes 0x%llx is impossibly small", v20, v22);
          return 1;
        }
        if ( v17 < (unsigned __int64)(v19 + 1) )
          goto LABEL_78;
        (*(void (__fastcall **)(_QWORD *, size_t *, __int64))(a1 + 8296))(v68, v19, 8);
        v20 = v68[0];
        v14 = v19 + 1;
        if ( v51 < v68[0] )
        {
LABEL_82:
          _dwarf_create_area_len_error(a1, v58, v20, v51);
          return 1;
        }
        v23 = 0;
        v24 = 8;
        v25 = 0;
        v26 = 8;
      }
      v18 += v20 + v24 + v23;
      v27 = v18;
      if ( v20 >= v18 )
        v27 = v20;
      if ( v51 < v27 )
      {
        v21 = v60;
        v22 = (__int64)v58;
        goto LABEL_20;
      }
      v28 = (unsigned int)(v25 + v26);
      ++nmemba;
      if ( v20 < v28 )
      {
        v21 = v60;
        v22 = (__int64)v58;
        goto LABEL_81;
      }
      v19 = (size_t *)((char *)v14 + v20 + 4 - v28);
    }
    while ( (size_t *)v17 != v19 );
    v13 = v60;
    v14 = a4;
    v5 = (__int64)v58;
  }
  v61 = v14;
  v56 = v13;
  alloc = _dwarf_get_alloc(a1, 53, 1);
  v59 = (_QWORD *)alloc;
  if ( !alloc )
  {
    sub_2E2B0((_QWORD *)a1, v56, (__int64)" Unable to allocate a header record. Out of memory creating record.", v5);
    return 1;
  }
  *(_QWORD *)alloc = a1;
  if ( v56 )
  {
    v30 = *(_QWORD *)(a1 + 7352);
    *(_QWORD *)(alloc + 8) = v30;
    v63 = v30;
    v65 = *(_QWORD *)(a1 + 7360);
  }
  else
  {
    v63 = *(_QWORD *)(a1 + 7584);
    *(_QWORD *)(alloc + 8) = v63;
    v65 = *(_QWORD *)(a1 + 7592);
  }
  *(_QWORD *)(alloc + 16) = v65;
  *(_QWORD *)(alloc + 24) = v65 + v63;
  *(_DWORD *)(alloc + 48) = v56;
  v52 = v65 + v63;
  v31 = (char *)calloc(nmemba, 0x70u);
  v32 = v56;
  section = 0;
  v33 = v61;
  if ( !v31 )
  {
    sub_2E3D0((_QWORD *)a1, v56, "Unable to allocate  %u block records. Out of memory.", nmemba, v5);
    dwarf_gnu_index_dealloc(v59);
    return 1;
  }
  v59[4] = v31;
  v59[5] = nmemba;
  if ( !nmemba )
  {
LABEL_73:
    *a3 = v59;
    *v33 = nmemba;
    return section;
  }
  v57 = 0;
  v34 = 0;
  v66 = v32;
  v67 = a3;
  v64 = v5;
  while ( 1 )
  {
    v68[0] = 0;
    v35 = &v31[112 * v57];
    v36 = v63 + v34;
    v37 = v63 + v34 + 4;
    if ( v52 < v37 )
    {
LABEL_83:
      _dwarf_error_string(a1, v64, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
      goto LABEL_77;
    }
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v68, v63 + v34, 4);
    v38 = v68[0];
    if ( v68[0] == 0xFFFFFFFFLL )
    {
      v68[0] = 0;
      if ( v52 < v36 + 12 )
        goto LABEL_83;
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v68, v37, 8);
      v38 = v68[0];
      v39 = v36 + 12;
      if ( v65 < v68[0] )
      {
LABEL_88:
        _dwarf_create_area_len_error(a1, v64, v38, v65);
        goto LABEL_77;
      }
      v40 = 4;
      goto LABEL_44;
    }
    if ( !v68[0] )
      break;
    if ( v65 < v68[0] )
      goto LABEL_88;
    v62 = 4;
    v39 = v63 + v34 + 4;
    v40 = 0;
LABEL_46:
    v41 = v59[2];
    if ( v41 < v38 || (v42 = v62 + v40, v41 < v42 + v38) )
    {
      sub_2E3D0((_QWORD *)a1, v66, ": block length %llu is too big", v38, v64);
      goto LABEL_77;
    }
    v43 = v34 + v42;
    *((_QWORD *)v35 + 3) = v38;
    *((_QWORD *)v35 + 2) = v34;
    *((_QWORD *)v35 + 1) = v57;
    *((_WORD *)v35 + 16) = v62;
    *(_QWORD *)v35 = v59;
    *((_QWORD *)v35 + 8) = v34 + v42;
    if ( v59[2] < v34 + v42 + v38 )
    {
      sub_2E3D0(
        (_QWORD *)a1,
        v66,
        " header length is %u which runs past the end of section suggesting corrupt data",
        v38,
        v64);
      goto LABEL_77;
    }
    v44 = v39 + 2;
    LOWORD(v68[0]) = 0;
    if ( v52 < v39 + 2 )
      goto LABEL_83;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v68, v39, 2);
    if ( LOWORD(v68[0]) != 2 )
    {
      sub_2E3D0((_QWORD *)a1, v66, " version is %u, not 2, which suggests corrupt data", LOWORD(v68[0]), v64);
      goto LABEL_77;
    }
    *((_WORD *)v35 + 18) = 2;
    v68[0] = 0;
    if ( __CFADD__(v62, v44) )
      goto LABEL_86;
    if ( v52 < (unsigned __int64)v62 + v44 )
      goto LABEL_83;
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(a1 + 8296))(v68, v44, v62);
    v45 = v62 + v44;
    *((_QWORD *)v35 + 6) = v68[0];
    v68[0] = 0;
    v46 = v62 + v45;
    if ( __CFADD__(v62, v45) )
    {
LABEL_86:
      _dwarf_error_string(a1, v64, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
      goto LABEL_77;
    }
    if ( v52 < v46 )
      goto LABEL_83;
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(a1 + 8296))(v68, v45, v62);
    v47 = v68[0];
    *((_QWORD *)v35 + 10) = v46;
    *((_QWORD *)v35 + 7) = v47;
    v48 = v38 - 4 - (2 * v62 + 2);
    *((_QWORD *)v35 + 9) = 2LL * v62 + 2 + v43;
    *((_QWORD *)v35 + 11) = v48;
    if ( v52 < v46 + v48 )
    {
      sub_2E3D0((_QWORD *)a1, v66, " length is %u which runs past the end of section suggesting corrupt data", v38, v64);
      goto LABEL_77;
    }
    if ( (unsigned int)sub_2E500((__int64 **)v35, 0, v66, v64) )
      goto LABEL_77;
    ++v57;
    v34 = v38 + *((_QWORD *)v35 + 2) + 4;
    if ( v57 >= v59[5] )
    {
      section = 0;
      a3 = v67;
      v33 = v61;
      goto LABEL_73;
    }
    v31 = (char *)v59[4];
  }
  if ( !*(_BYTE *)(a1 + 8360) || *(_BYTE *)(a1 + 232) != 8 )
  {
    section = 0;
    v49 = v66;
    a3 = v67;
    v33 = v61;
    v50 = v64;
    goto LABEL_75;
  }
  if ( v52 < v36 + 8 )
    goto LABEL_83;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v68, v36, 8);
  v38 = v68[0];
  v39 = v36 + 8;
  if ( v65 < v68[0] )
    goto LABEL_88;
  v40 = 0;
LABEL_44:
  if ( v38 )
  {
    v62 = 8;
    goto LABEL_46;
  }
  section = 0;
  v49 = v66;
  v37 = v39;
  a3 = v67;
  v33 = v61;
  v50 = v64;
LABEL_75:
  if ( v52 == v37 )
    goto LABEL_73;
  sub_2E2B0((_QWORD *)a1, v49, (__int64)": encountered zero area length before the section end.", v50);
LABEL_77:
  dwarf_gnu_index_dealloc(v59);
  return 1;
}

