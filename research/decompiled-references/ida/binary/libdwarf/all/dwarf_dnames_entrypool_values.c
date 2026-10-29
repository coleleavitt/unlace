__int64 __fastcall dwarf_dnames_entrypool_values(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10,
        unsigned __int64 *a11,
        __int64 a12)
{
  __int64 v15; // r11
  _QWORD *v16; // r8
  unsigned __int64 *v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // r13
  unsigned __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r12
  unsigned __int64 v23; // rdx
  unsigned __int8 *v24; // rcx
  unsigned __int8 *v25; // r15
  __int64 v26; // rbx
  unsigned __int16 v27; // ax
  __int64 v28; // rdx
  __int64 v29; // rsi
  unsigned int v30; // edx
  __int64 v32; // rdx
  int v33; // edx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  __int64 v39; // r11
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // edx
  __int64 v43; // rax
  const char *v44; // rdx
  __int64 v45; // rax
  const char *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v49; // [rsp+8h] [rbp-D0h]
  int v50; // [rsp+8h] [rbp-D0h]
  __int64 v51; // [rsp+10h] [rbp-C8h]
  unsigned __int16 v52; // [rsp+28h] [rbp-B0h]
  __int64 v53; // [rsp+30h] [rbp-A8h]
  unsigned int v54; // [rsp+3Ch] [rbp-9Ch]
  __int64 v55; // [rsp+60h] [rbp-78h]
  char *v56; // [rsp+68h] [rbp-70h] BYREF
  _QWORD v57[13]; // [rsp+70h] [rbp-68h] BYREF

  v57[5] = __readfsqword(0x28u);
  v15 = a12;
  v55 = 0;
  v16 = a10;
  v17 = a11;
  if ( !a1 || *(_QWORD *)a1 != 43981 )
  {
    _dwarf_error_string(0, a12, 81, "DW_DLE_DBG_NULL: bad Head argument to dwarf_dnames_entrypool_values");
    return 1;
  }
  v48 = *(_QWORD *)(a1 + 8);
  v18 = *(_QWORD *)(a1 + 144);
  if ( a3 >= v18 )
    return (unsigned int)-1;
  if ( a2 >= *(_QWORD *)(a1 + 320) )
    return (unsigned int)-1;
  v19 = *(_QWORD *)(a1 + 312) + 80 * a2;
  v20 = *(_QWORD *)(v19 + 32);
  if ( !v20 )
    return (unsigned int)-1;
  if ( a4 < v20 )
  {
    v50 = a4;
    dwarfstring_constructor(v57);
    dwarfstring_append_printf_u(
      v57,
      "DW_DLE_DEBUG_NAMES_OFF_END: The size of the pair of arrays passed to dwarf_dnames_entrypool_values is %u",
      v50);
    dwarfstring_append_printf_u(v57, " but the entry requires %u entries.", v20);
    v38 = dwarfstring_string(v57, " but the entry requires %u entries.", v37);
    v39 = a12;
    v40 = 375;
    v41 = v38;
LABEL_34:
    _dwarf_error_string(v48, v39, v40, v41);
    dwarfstring_destructor(v57);
    return 1;
  }
  if ( v18 < v20 )
  {
    dwarfstring_constructor(v57);
    dwarfstring_append_printf_u(
      v57,
      "DW_DLE_DEBUG_NAMES_ABBREV_CORRUPTION: The abbrev count for this entry pool entry is %u, impossibly large. Corrupt data",
      v20);
    v43 = dwarfstring_string(
            v57,
            "DW_DLE_DEBUG_NAMES_ABBREV_CORRUPTION: The abbrev count for this entry pool entry is %u, impossibly large. Corrupt data",
            v42);
    v39 = a12;
    v40 = 377;
    v41 = v43;
    goto LABEL_34;
  }
  v21 = *(_QWORD *)(a1 + 304);
  v22 = 0;
  v23 = v21 + v18;
  v24 = (unsigned __int8 *)(a3 + v21);
  v49 = v23;
  v51 = *(_QWORD *)(v19 + 32);
  v25 = v24;
  v26 = a6;
  do
  {
    v27 = *(_WORD *)(v19 + 2 * v22 + 40);
    v28 = *(unsigned __int16 *)(v19 + 2 * v22 + 60);
    v29 = v27;
    *(_WORD *)(a5 + 2 * v22) = v27;
    *(_WORD *)(v26 + 2 * v22) = v28;
    if ( !((unsigned __int16)v28 | v27) )
      break;
    if ( (_WORD)v28 == 7 && v27 == 5 )
    {
      if ( v49 < (unsigned __int64)(v25 + 8) )
      {
        _dwarf_error(v48, v15, 380);
        return 1;
      }
      v55 = 8;
      a3 += 8LL;
      v32 = *(_QWORD *)v25;
      v25 += 8;
      *(_QWORD *)(a8 + 8 * v22) = v32;
    }
    else
    {
      v53 = v15;
      v52 = v28;
      v54 = (unsigned __int16)v28;
      LOWORD(v29) = v28 | v27;
      v34 = _dwarf_allow_formudata((unsigned __int16)v28, v29, v28, v24, v16, v17);
      v15 = v53;
      if ( v34 )
      {
        v57[0] = 0;
        v30 = _dwarf_formudata_internal();
        v24 = (unsigned __int8 *)v53;
        if ( v30 )
          return v30;
        v15 = v53;
        v25 += v55;
        a3 += v55;
        *(_QWORD *)(a7 + 8 * v22) = v57[0];
      }
      else if ( v52 == 25 )
      {
        *(_QWORD *)(a7 + 8 * v22) = 1;
      }
      else
      {
        if ( (unsigned __int64)v25 >= v49 )
        {
          v56 = nullptr;
          dwarfstring_constructor(v57);
          dwarfstring_append_printf_u(v57, "DW_DLE_DEBUG_NAMES_OFF_END: Reading data of form 0x%02x ", v52);
          dwarf_get_FORM_name(v54, (const char **)&v56);
          dwarfstring_append_printf_s();
          v47 = dwarfstring_string(v57, "%s from entrypool would read off the end of the pool", v46);
          v39 = v53;
          v40 = 375;
          v41 = v47;
          goto LABEL_34;
        }
        switch ( v52 )
        {
          case 0x12u:
            v57[0] = 0;
            if ( v49 < (unsigned __int64)(v25 + 2) )
              goto LABEL_47;
            (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(v48 + 8296))(v57, v25, 2);
            v35 = v57[0];
            v25 += 2;
            v36 = 2;
            v15 = v53;
            break;
          case 0x13u:
            v57[0] = 0;
            if ( v49 < (unsigned __int64)(v25 + 4) )
            {
LABEL_47:
              _dwarf_error_string(
                v48,
                v53,
                331,
                "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
              return 1;
            }
            (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(v48 + 8296))(v57, v25, 4);
            v35 = v57[0];
            v25 += 4;
            v36 = 4;
            v15 = v53;
            break;
          case 0x11u:
            v35 = *v25;
            v36 = 1;
            ++v25;
            break;
          default:
            v56 = "<unexpected form>";
            dwarfstring_constructor(v57);
            dwarfstring_append_printf_u(v57, "DW_DLE_DEBUG_NAMES_UNHANDLED_FORM: Form 0x%x", v52);
            dwarf_get_FORM_name(v54, (const char **)&v56);
            dwarfstring_append_printf_s();
            v45 = dwarfstring_string(v57, " %s is not currently supported for .debug_names ", v44);
            v39 = v53;
            v40 = 381;
            v41 = v45;
            goto LABEL_34;
        }
        v55 = v36;
        if ( (unsigned __int64)v25 >= v49 )
        {
          _dwarf_error_string(
            v48,
            v15,
            380,
            "DW_DLE_DEBUG_NAMES_ENTRYPOOL_OFFSET: a DW_FORM_ref* would read past end of the entrypool");
          return 1;
        }
        a3 += v36;
        *(_QWORD *)(a7 + 8 * v22) = v35;
      }
    }
    ++v22;
  }
  while ( v22 != v51 );
  v33 = *(_DWORD *)(a1 + 328);
  if ( v33 && a9 && a10 )
  {
    *a9 = v33;
    *a10 = *(_QWORD *)(a1 + 336);
  }
  *a11 = a3;
  return 0;
}

