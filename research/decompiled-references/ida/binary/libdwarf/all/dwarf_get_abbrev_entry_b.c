__int64 __fastcall dwarf_get_abbrev_entry_b(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        __int64 a8)
{
  _QWORD *v9; // r11
  __int64 v10; // rsi
  _QWORD *v11; // r10
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r15
  bool v16; // cf
  __int64 v17; // r12
  __int64 v18; // rbx
  __int64 v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  int valid; // eax
  int v24; // eax
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v28; // [rsp+10h] [rbp-A8h]
  bool v30; // [rsp+27h] [rbp-91h]
  _QWORD *v32; // [rsp+30h] [rbp-88h]
  _QWORD *v33; // [rsp+40h] [rbp-78h]
  __int64 *v34; // [rsp+48h] [rbp-70h]
  __int64 *v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v37[9]; // [rsp+70h] [rbp-48h] BYREF

  v9 = a7;
  v37[1] = __readfsqword(0x28u);
  v10 = a8;
  if ( !a1 )
  {
    _dwarf_error(0, a8, 110);
    return 1;
  }
  if ( !a1[1] )
    return 0xFFFFFFFFLL;
  v11 = (_QWORD *)a1[4];
  if ( !v11 || *v11 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a8,
      81,
      "DW_DLE_DBG_NULL: calling dwarf_get_abbrev_entry_b() either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v13 = a1[9];
  v14 = v11[103] + v11[104];
  if ( a2 >= v13 )
  {
    v15 = a1[8];
    a2 -= v13;
  }
  else
  {
    v15 = a1[3];
  }
  if ( v15 >= v14 || a2 < 0 )
  {
    v25 = v15;
    v26 = 0;
    v15 = 0;
    v21 = 1;
    v17 = 1;
LABEL_30:
    if ( v25 >= v14 )
    {
      _dwarf_error_string(
        v11,
        v10,
        109,
        "DW_DLE_ABBREV_DECODE_ERROR: Ran off the end of the abbrev section reading abbrev entries..");
      return 1;
    }
    if ( a2 < 0 )
    {
      if ( a5 )
        *a5 = v21;
      if ( v9 )
        *v9 = v15 - v11[103];
      if ( a4 )
        *a4 = v17;
      if ( a6 )
        *a6 = v26;
      a1[8] = v25;
      a1[9] = a2;
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  v32 = (_QWORD *)a1[4];
  v33 = a1;
  v34 = a4;
  v35 = a5;
  v30 = a3 != 0;
  while ( 1 )
  {
    v36 = 0;
    v37[0] = 0;
    if ( (unsigned int)dwarf_decode_leb128(v15, &v36, v37, v14) == 1 )
    {
LABEL_42:
      _dwarf_error_string(v32, a8, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
      return 1;
    }
    v17 = v37[0];
    v18 = v15 + v36;
    if ( v37[0] > 0x3FFFu && v30 )
    {
      _dwarf_error(v32, a8, 451);
      return 1;
    }
    v19 = v15 + v36;
    v36 = 0;
    v37[0] = 0;
    if ( (unsigned int)dwarf_decode_leb128(v19, &v36, v37, v14) == 1 )
      goto LABEL_42;
    v20 = v36 + v18;
    v21 = v37[0];
    v22 = v20;
    if ( a3 )
    {
      v27 = v37[0];
      valid = _dwarf_valid_form_we_know(v37[0], v17);
      v21 = v27;
      v22 = v20;
      if ( !valid )
      {
        _dwarf_error(v32, a8, 321);
        return 1;
      }
    }
    if ( v21 == 33 )
      break;
    v16 = a2-- == 0;
    if ( v16 || v22 >= v14 )
    {
      v25 = v22;
      v11 = v32;
      a1 = v33;
      v26 = 0;
      a4 = v34;
      a5 = v35;
      v9 = a7;
      v10 = a8;
      goto LABEL_30;
    }
    if ( !(v17 | v21) )
      return 0xFFFFFFFFLL;
LABEL_16:
    v15 = v22;
  }
  v28 = v22;
  v36 = 0;
  v37[0] = 0;
  v24 = dwarf_decode_signed_leb128(v22, &v36, v37, v14);
  v21 = 33;
  if ( v24 != 1 )
  {
    v22 = v36 + v28;
    v16 = a2-- == 0;
    if ( v16 || v22 >= v14 )
    {
      v25 = v36 + v28;
      v11 = v32;
      a1 = v33;
      v26 = v37[0];
      a4 = v34;
      a5 = v35;
      v9 = a7;
      v10 = a8;
      goto LABEL_30;
    }
    goto LABEL_16;
  }
  _dwarf_error_string(v32, a8, 329, "DW_DLE_LEB_IMPROPER: decode sleb runs past allowed area.e");
  return 1;
}

