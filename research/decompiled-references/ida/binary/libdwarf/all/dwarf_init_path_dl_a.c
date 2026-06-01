__int64 __fastcall dwarf_init_path_dl_a(
        const char *a1,
        const char *a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        int a10,
        _BYTE *a11,
        _QWORD *a12)
{
  const char *v12; // rbx
  int v14; // eax
  int v15; // r12d
  __int64 result; // rax
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rax
  unsigned int v21; // [rsp+4h] [rbp-C4h]
  char v24; // [rsp+24h] [rbp-A4h]
  char v25; // [rsp+67h] [rbp-61h] BYREF
  unsigned int v26; // [rsp+68h] [rbp-60h] BYREF
  unsigned int v27; // [rsp+6Ch] [rbp-5Ch] BYREF
  unsigned int v28; // [rsp+70h] [rbp-58h] BYREF
  int v29; // [rsp+74h] [rbp-54h] BYREF
  __int64 v30; // [rsp+78h] [rbp-50h] BYREF
  __int64 v31[9]; // [rsp+80h] [rbp-48h] BYREF

  v31[1] = __readfsqword(0x28u);
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v30 = 0;
  v29 = 0;
  v31[0] = 0;
  v25 = 1;
  if ( !a8 )
  {
    _dwarf_error(0, a12, 465);
    return 1;
  }
  *a8 = 0;
  v12 = a1;
  if ( !a1 )
  {
    _dwarf_error_string(
      0,
      a12,
      122,
      "DW_DLE_STRING_PTR_NULL: Passing a null path argument to dwarf_init_path or dwarf_init_path_dl cannot work. Error.");
    return 1;
  }
  v24 = _dwarf_determine_section_allocation_type();
  if ( !a2 )
  {
    result = dwarf_object_detector_path_b(
               (int)a1,
               0,
               a3,
               a9,
               a10,
               (int)&v26,
               (__int64)&v27,
               (__int64)&v28,
               (__int64)&v30,
               (__int64)&v25,
               (__int64)&v29);
    if ( !(_DWORD)result )
      goto LABEL_7;
    if ( (_DWORD)result != 1 )
      return result;
    v29 = 0;
    goto LABEL_24;
  }
  v14 = dwarf_object_detector_path_dSYM(
          (int)a1,
          (int)a2,
          a3,
          a9,
          a10,
          (int)&v26,
          (__int64)&v27,
          (__int64)&v28,
          (__int64)&v30,
          (__int64)&v25,
          (__int64)&v29);
  if ( !v14 )
    goto LABEL_5;
  if ( v14 == 1 )
    v29 = 0;
  result = dwarf_object_detector_path_b(
             (int)a1,
             (int)a2,
             a3,
             a9,
             a10,
             (int)&v26,
             (__int64)&v27,
             (__int64)&v28,
             (__int64)&v30,
             (__int64)&v25,
             (__int64)&v29);
  if ( !(_DWORD)result )
  {
LABEL_5:
    if ( v25 != 1 && *a2 )
    {
      v12 = a2;
      v15 = _dwarf_openr(a2);
LABEL_8:
      if ( v15 == -1 )
      {
        v17 = 411;
        goto LABEL_40;
      }
      if ( v26 == 3 )
      {
        v18 = _dwarf_pe_setup(v15, (int)v12, 3, v27, v28, v30, a4, a6, a7, (__int64)v31, (__int64)a12);
        if ( !v18 )
          goto LABEL_26;
      }
      else
      {
        if ( v26 > 3 )
        {
          if ( v26 != 5 )
            goto LABEL_13;
          goto LABEL_36;
        }
        if ( v26 != 1 )
        {
          if ( v26 != 2 )
          {
LABEL_13:
            _dwarf_closer(v15);
            _dwarf_error(0, a12, 412);
            return 1;
          }
LABEL_36:
          v18 = _dwarf_macho_setup(v15, (__int64)v12, a5, v26, v27, v28, v30, a4, a6, a7, (__int64)v31, (__int64)a12);
          if ( v18 )
            goto LABEL_34;
LABEL_26:
          sub_2BAA0(v31[0], v12, v15, v25, a11, a12);
          v19 = v31[0];
          *(_BYTE *)(v31[0] + 69) = v26;
          *(_BYTE *)(v19 + 72) = v24;
          *a8 = v19;
          return 0;
        }
        v18 = _dwarf_elf_nlsetup(v15, (int)v12, 1, v27, v28, v30, a4, a6, a7, (__int64)v31, (__int64)a12);
        if ( !v18 )
          goto LABEL_26;
      }
LABEL_34:
      v21 = v18;
      _dwarf_closer(v15);
      return v21;
    }
LABEL_7:
    v15 = _dwarf_openr(a1);
    goto LABEL_8;
  }
  if ( (_DWORD)result == 1 )
  {
    v29 = 0;
    if ( a3 )
      goto LABEL_30;
LABEL_24:
    v17 = 0;
LABEL_40:
    _dwarf_error(0, a12, v17);
    return 1;
  }
  if ( !a3 )
    return result;
LABEL_30:
  result = dwarf_object_detector_path_b(
             (int)a1,
             0,
             0,
             a9,
             a10,
             (int)&v26,
             (__int64)&v27,
             (__int64)&v28,
             (__int64)&v30,
             (__int64)&v25,
             (__int64)&v29);
  if ( !(_DWORD)result )
    goto LABEL_5;
  if ( (_DWORD)result == 1 )
  {
    v17 = v29;
    goto LABEL_40;
  }
  return result;
}

