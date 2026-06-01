__int64 __fastcall dwarf_object_detector_path_b(
        _BYTE *a1,
        _BYTE *a2,
        unsigned __int64 a3,
        Dwarf_Error **a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char *a10,
        _DWORD *a11)
{
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  char *v14; // rbp
  bool v15; // al
  int inited; // eax
  _BYTE *v17; // r10
  Dwarf_Error **v18; // r15
  Dwarf_Error *v19; // rsi
  int v20; // eax
  int v21; // r13d
  char *v22; // rax
  unsigned __int64 v23; // r12
  char v24; // cl
  _BYTE *v25; // rdx
  unsigned int v26; // ebx
  int v27; // r13d
  char v28; // r12
  int v30; // eax
  Dwarf_Error *v31; // rsi
  int v32; // eax
  _BYTE *v33; // r10
  __int64 v34; // r14
  Dwarf_Error *v35; // r15
  int v36; // eax
  int v37; // r12d
  __int64 v38; // rbx
  __int64 v39; // rbp
  int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  _BYTE *v44; // rax
  char v45; // dl
  unsigned __int64 v46; // rcx
  Dwarf_Debug v47; // rdi
  int v48; // r13d
  int v49; // eax
  Dwarf_Debug v50; // rdi
  Dwarf_Error v51; // rsi
  int v52; // eax
  Dwarf_Error *v53; // rsi
  Dwarf_Debug v54; // rdi
  int v55; // eax
  int v56; // eax
  Dwarf_Error *v57; // rsi
  Dwarf_Debug v58; // rdi
  _BYTE *v59; // [rsp+8h] [rbp-170h]
  _BYTE *v60; // [rsp+8h] [rbp-170h]
  __int64 v63; // [rsp+40h] [rbp-138h]
  int *v64; // [rsp+48h] [rbp-130h]
  int v65; // [rsp+54h] [rbp-124h]
  unsigned __int64 v66; // [rsp+58h] [rbp-120h]
  int v67; // [rsp+70h] [rbp-108h] BYREF
  int v68; // [rsp+74h] [rbp-104h] BYREF
  int v69; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v70; // [rsp+7Ch] [rbp-FCh] BYREF
  int v71; // [rsp+80h] [rbp-F8h] BYREF
  int v72; // [rsp+84h] [rbp-F4h] BYREF
  int v73; // [rsp+88h] [rbp-F0h] BYREF
  int v74; // [rsp+8Ch] [rbp-ECh] BYREF
  Dwarf_Debug v75; // [rsp+90h] [rbp-E8h] BYREF
  Dwarf_Error v76; // [rsp+98h] [rbp-E0h] BYREF
  Dwarf_Error v77; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-D0h] BYREF
  void *v79; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-B8h] BYREF
  void *v82; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-A8h] BYREF
  int *v84; // [rsp+D8h] [rbp-A0h] BYREF
  void *v85; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v86; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-88h] BYREF
  void *ptr; // [rsp+F8h] [rbp-80h] BYREF
  Dwarf_Debug v89; // [rsp+100h] [rbp-78h] BYREF
  Dwarf_Error *v90; // [rsp+108h] [rbp-70h] BYREF
  _BYTE v91[32]; // [rsp+110h] [rbp-68h] BYREF
  int v92; // [rsp+130h] [rbp-48h] BYREF
  int v93; // [rsp+134h] [rbp-44h] BYREF
  unsigned __int64 v94; // [rsp+138h] [rbp-40h]

  v11 = a5;
  v12 = a3;
  v14 = a10;
  v94 = __readfsqword(0x28u);
  v15 = a3 != 0 && a2 != nullptr;
  if ( a10 )
  {
    if ( *a10 != 1 || !v15 )
    {
      v27 = _dwarf_openr(a1);
      if ( v27 < 0 )
        goto LABEL_77;
      v28 = 1;
LABEL_21:
      v26 = _dwarf_object_detector_fd_a(v27, a6, a7, a8, 0, a9, (__int64)a11);
      if ( v26 )
        v28 = 0;
      if ( v14 )
        *v14 = v28;
LABEL_25:
      _dwarf_closer(v27);
      return v26;
    }
  }
  else if ( !v15 )
  {
    v30 = _dwarf_openr(a1);
    v27 = v30;
    if ( v30 < 0 )
      return (unsigned int)-1;
    v26 = _dwarf_object_detector_fd_a(v30, a6, a7, a8, 0, a9, (__int64)a11);
    goto LABEL_25;
  }
  dwarfstring_constructor(v91);
  v67 = 0;
  v75 = nullptr;
  v76 = nullptr;
  v77 = nullptr;
  v78 = 0;
  v79 = nullptr;
  v68 = 0;
  v80 = 0;
  v81 = 0;
  v69 = 0;
  v82 = nullptr;
  v70 = 0;
  inited = dwarf_init_path((int)a1, 0, 0, 0, 0, 0, (__int64)&v75, (__int64)&v76);
  v17 = a1;
  if ( inited == 1 )
  {
    v49 = dwarf_errno(v76);
    v50 = v75;
    v51 = v76;
    *a11 = v49;
    dwarf_dealloc_error(v50, v51);
    dwarfstring_destructor(v91);
    return 1;
  }
  if ( inited == -1 )
  {
LABEL_62:
    v44 = a2;
    v45 = *v17;
    v46 = (unsigned __int64)&a2[v12];
    if ( *v17 )
    {
      while ( (unsigned __int64)v44 < v46 )
      {
        ++v17;
        *v44++ = v45;
        v45 = *v17;
        if ( !*v17 )
          goto LABEL_73;
      }
    }
    else
    {
      v44 = a2;
LABEL_73:
      if ( (unsigned __int64)v44 < v46 )
      {
        *v44 = 0;
        v28 = 1;
        goto LABEL_75;
      }
    }
    *a11 = 424;
    return 1;
  }
  if ( !(_DWORD)v11 )
    goto LABEL_31;
  v18 = &a4[v11];
  do
  {
    v19 = *a4;
    v20 = dwarf_add_debuglink_global_path();
    if ( v20 )
    {
      v21 = v20;
      if ( v20 != 1 )
      {
        dwarf_finish(v75, v19);
        v17 = a1;
        if ( v21 != -1 )
          goto LABEL_12;
        goto LABEL_62;
      }
      v52 = dwarf_errno(v76);
      v53 = (Dwarf_Error *)v76;
      v54 = v75;
      *a11 = v52;
      dwarf_dealloc_error(v54, v53);
      v76 = nullptr;
      dwarf_finish(v75, v53);
      dwarfstring_destructor(v91);
      return 1;
    }
    ++a4;
  }
  while ( v18 != a4 );
  v17 = a1;
LABEL_31:
  v59 = v17;
  v31 = &v77;
  v32 = dwarf_gnu_debuglink(
          (int)v75,
          (int)&v77,
          (int)&v78,
          (int)&v79,
          (int)&v67,
          (int)&v68,
          (__int64)&v80,
          (__int64)&v81,
          (__int64)&v69,
          (__int64)&v82,
          (__int64)&v70,
          (__int64)&v76);
  v33 = v59;
  if ( v32 == 1 )
  {
    v56 = dwarf_errno(v76);
    v57 = (Dwarf_Error *)v76;
    v58 = v75;
    *a11 = v56;
    dwarf_dealloc_error(v58, v57);
    dwarf_finish(v75, v57);
    v17 = v59;
    goto LABEL_62;
  }
  if ( v32 == -1 )
  {
    dwarf_finish(v75, &v77);
    v17 = v59;
    goto LABEL_62;
  }
  v34 = 0;
  if ( !v70 )
  {
LABEL_61:
    v60 = v33;
    free(v79);
    free(v82);
    v82 = nullptr;
    dwarf_finish(v75, v31);
    v17 = v60;
    goto LABEL_62;
  }
  v66 = v12;
  while ( 1 )
  {
    v35 = *((Dwarf_Error **)v82 + v34);
    v36 = _dwarf_openr(v35);
    if ( v36 >= 0 )
      break;
LABEL_59:
    if ( (unsigned int)++v34 >= v70 )
    {
      v33 = v59;
      v12 = v66;
      v14 = a10;
      goto LABEL_61;
    }
  }
  _dwarf_closer(v36);
  v37 = v69;
  v92 = 0;
  v38 = v81;
  v93 = 0;
  v31 = nullptr;
  v39 = v78;
  v83 = 0;
  v84 = nullptr;
  v85 = nullptr;
  v71 = 0;
  v72 = 0;
  v86 = 0;
  v87 = 0;
  v73 = 0;
  ptr = nullptr;
  v74 = 0;
  v89 = nullptr;
  v90 = nullptr;
  v40 = dwarf_init_path((int)v35, 0, 0, 0, 0, 0, (__int64)&v89, (__int64)&v90);
  if ( v40 == 1 )
  {
    v31 = v90;
    dwarf_dealloc_error(v89, v90);
    goto LABEL_58;
  }
  if ( v40 == -1 )
  {
LABEL_58:
    *a11 = 0;
    goto LABEL_59;
  }
  v31 = (Dwarf_Error *)&v83;
  v41 = dwarf_gnu_debuglink(
          (int)v89,
          (int)&v83,
          (int)&v84,
          (int)&v85,
          (int)&v71,
          (int)&v72,
          (__int64)&v86,
          (__int64)&v87,
          (__int64)&v73,
          (__int64)&ptr,
          (__int64)&v74,
          (__int64)&v90);
  if ( v41 == 1 )
    goto LABEL_87;
  if ( v41 == -1 )
  {
LABEL_57:
    dwarf_finish(v89, v31);
    goto LABEL_58;
  }
  free(ptr);
  ptr = nullptr;
  if ( !(unsigned int)_dwarf_get_suppress_debuglink_crc() && v39 && !v84 )
  {
    v55 = dwarf_crc32(v89, &v92, &v90);
    if ( v55 != 1 )
    {
      if ( !v55 )
      {
        (*((void (__fastcall **)(int *, int *, __int64))v89 + 1037))(&v93, &v92, 4);
        v84 = &v93;
      }
      goto LABEL_43;
    }
    ptr = nullptr;
    free(v85);
LABEL_87:
    v31 = v90;
    dwarf_dealloc_error(v89, v90);
    dwarf_finish(v89, v31);
    goto LABEL_58;
  }
LABEL_43:
  free(v85);
  v63 = v87;
  v65 = v73;
  v64 = v84;
  if ( !(unsigned int)_dwarf_get_suppress_debuglink_crc() )
  {
    if ( v64 )
    {
      v42 = 0;
      if ( v39 )
      {
        while ( *((_BYTE *)v64 + v42) == *(_BYTE *)(v39 + v42) )
        {
          if ( ++v42 == 4 )
          {
            v31 = v90;
            v12 = v66;
            v14 = a10;
            if ( v90 )
              goto LABEL_69;
            goto LABEL_70;
          }
        }
LABEL_54:
        v31 = v90;
        goto LABEL_55;
      }
    }
  }
  v43 = 0;
  if ( v37 )
  {
    while ( *(_BYTE *)(v38 + v43) == *(_BYTE *)(v63 + v43) )
    {
      if ( v37 == ++v43 )
        goto LABEL_67;
    }
    goto LABEL_54;
  }
LABEL_67:
  v31 = v90;
  if ( v37 != v65 )
  {
LABEL_55:
    if ( v31 )
    {
      dwarf_dealloc_error(v89, v31);
      v90 = nullptr;
    }
    goto LABEL_57;
  }
  v12 = v66;
  v14 = a10;
  if ( v90 )
  {
LABEL_69:
    dwarf_dealloc_error(v89, v31);
    v90 = nullptr;
  }
LABEL_70:
  v19 = v35;
  dwarfstring_append();
  v47 = v89;
  *((_BYTE *)v89 + 68) = 0;
  v48 = *((_DWORD *)v47 + 16);
  dwarf_finish(v47, v35);
  free(v79);
  free(v82);
  v82 = nullptr;
  dwarf_finish(v75, v35);
  if ( v48 != -1 )
    _dwarf_closer(v48);
LABEL_12:
  if ( dwarfstring_strlen(v91) + 1 >= v12 )
    goto LABEL_17;
  v22 = (char *)dwarfstring_string(v91, (const char *)v19);
  v23 = (unsigned __int64)&a2[v12];
  v24 = *v22;
  if ( *v22 )
  {
    v25 = a2;
    while ( (unsigned __int64)v25 < v23 )
    {
      ++v22;
      *v25++ = v24;
      v24 = *v22;
      if ( !*v22 )
        goto LABEL_80;
    }
    goto LABEL_17;
  }
  v25 = a2;
LABEL_80:
  if ( (unsigned __int64)v25 >= v23 )
  {
LABEL_17:
    *a11 = 479;
    return 1;
  }
  *v25 = 0;
  v28 = 3;
LABEL_75:
  dwarfstring_destructor(v91);
  v27 = _dwarf_openr(a2);
  if ( v27 >= 0 )
    goto LABEL_21;
  if ( v14 )
LABEL_77:
    *v14 = 0;
  return (unsigned int)-1;
}

