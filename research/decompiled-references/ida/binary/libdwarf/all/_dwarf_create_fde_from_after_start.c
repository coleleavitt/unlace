__int64 __fastcall dwarf_create_fde_from_after_start(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        __int64 a8,
        unsigned __int16 a9,
        __int64 *a10,
        __int64 a11)
{
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 alloc; // rax
  __int64 v29; // r14
  __int64 v30; // rdx
  int v31; // r11d
  int v32; // eax
  __int64 v33; // rsi
  __int64 v34; // rdi
  unsigned __int64 v35; // rsi
  __int64 v36; // r9
  unsigned __int64 v37; // rsi
  int v38; // [rsp+10h] [rbp-C8h]
  __int64 v39; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+18h] [rbp-C0h]
  __int64 v41; // [rsp+28h] [rbp-B0h]
  __int64 v42; // [rsp+28h] [rbp-B0h]
  __int64 v43; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v44; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+30h] [rbp-A8h]
  __int64 v46; // [rsp+30h] [rbp-A8h]
  __int64 v48; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v49; // [rsp+38h] [rbp-A0h]
  __int64 v50; // [rsp+40h] [rbp-98h]
  int v51; // [rsp+4Ch] [rbp-8Ch]
  __int64 v52; // [rsp+50h] [rbp-88h]
  __int64 v53; // [rsp+58h] [rbp-80h] BYREF
  __int64 v54; // [rsp+60h] [rbp-78h] BYREF
  __int64 v55; // [rsp+68h] [rbp-70h] BYREF
  __int64 v56[13]; // [rsp+70h] [rbp-68h] BYREF

  v56[5] = __readfsqword(0x28u);
  v15 = a2[4];
  v52 = -1;
  v53 = 0;
  v40 = v15;
  v54 = 0;
  if ( a8 )
  {
    v38 = *(_DWORD *)(a8 + 96);
    if ( v38 == 2 )
    {
      v56[0] = 0;
      if ( (unsigned int)sub_22D50(a1, a3, a5, *(unsigned __int8 *)(a8 + 122), a6, a9, &v53, v56, a11)
        || (unsigned int)sub_22D50(a1, 0, v56[0], *(unsigned __int8 *)(a8 + 122), a6, a9, &v54, v56, a11) )
      {
        return 1;
      }
      v24 = v56[0];
      v55 = 0;
      v42 = v56[0];
      v56[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(v24, &v55, v56, a6) == 1 )
        goto LABEL_55;
      v25 = v55 + v42;
      v19 = v56[0];
      v20 = v55 + v42;
      if ( v55 + v42 >= a6 )
      {
        _dwarf_error_string(
          a1,
          a11,
          393,
          "DW_DLE_AUG_DATA_LENGTH_BAD: The frame pointer has stepped off the end of the frame section on reading augmenta"
          "tion length. Corrupt DWARF");
        return 1;
      }
      if ( v56[0] >= a6 - v25 )
      {
        _dwarf_error_string(
          a1,
          a11,
          393,
          "DW_DLE_AUG_DATA_LENGTH_BAD: The augmentation length is too large for the frame section, corrupt DWARF");
        return 1;
      }
      if ( v56[0] >= a4 )
        goto LABEL_36;
      v18 = v25 + v56[0];
      if ( !v56[0] )
      {
LABEL_19:
        if ( a6 < v18 )
        {
          _dwarf_error(a1, a11, 193);
          return 1;
        }
        v19 = 0;
        goto LABEL_38;
      }
      if ( v18 < v25 || v18 >= a6 )
      {
LABEL_36:
        v39 = v56[0];
        dwarfstring_constructor(v56);
        dwarfstring_append_printf_u(
          v56,
          "DW_DLE_AUG_DATA_LENGTH_BAD: The gcc .eh_frame augmentation data length of %llu is too long to fit in the section.",
          v39);
        v27 = dwarfstring_string(
                v56,
                "DW_DLE_AUG_DATA_LENGTH_BAD: The gcc .eh_frame augmentation data length of %llu is too long to fit in the section.",
                v26);
        _dwarf_error_string(a1, a11, 393, v27);
        dwarfstring_destructor(v56);
        return 1;
      }
      goto LABEL_38;
    }
    if ( a6 < a5 + 2 * a9 )
      goto LABEL_22;
  }
  else
  {
    v38 = 0;
    if ( a6 < a5 + 2 * a9 )
      goto LABEL_22;
  }
  v56[0] = 0;
  if ( __CFADD__(a9, a5) )
    goto LABEL_23;
  if ( a6 < a9 + a5 )
    goto LABEL_25;
  v44 = a9 + a5;
  (*(void (__fastcall **)(__int64 *, unsigned __int64))(a1 + 8296))(v56, a5);
  v16 = v44;
  v17 = v56[0];
  v56[0] = 0;
  v53 = v17;
  if ( __CFADD__(a9, v44) )
    goto LABEL_23;
  if ( a6 < a9 + v44 )
  {
LABEL_25:
    _dwarf_error_string(a1, a11, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  v45 = a9 + v44;
  (*(void (__fastcall **)(__int64 *, unsigned __int64))(a1 + 8296))(v56, v16);
  v18 = v45;
  v54 = v56[0];
  if ( v38 == 4 )
  {
    if ( !a7 )
      goto LABEL_26;
    if ( a6 >= v45 + a9 )
    {
      v56[0] = 0;
      if ( v45 + a9 >= v45 )
      {
        (*(void (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(a1 + 8296))(v56, v45, a9);
        v20 = 0;
        v19 = 0;
        v51 = 1;
        v18 = v45 + a9;
        v50 = v56[0];
        goto LABEL_44;
      }
LABEL_23:
      _dwarf_error_string(a1, a11, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
      return 1;
    }
LABEL_22:
    _dwarf_error(a1, a11, 89);
    return 1;
  }
  if ( v38 == 6 )
  {
LABEL_26:
    _dwarf_error(a1, a11, 195);
    return 1;
  }
  v19 = 0;
  v20 = 0;
  if ( v38 == 1 )
  {
    v55 = 0;
    v56[0] = 0;
    if ( (unsigned int)dwarf_decode_leb128(v45, &v55, v56, a6) != 1 )
    {
      v21 = v55 + v45;
      if ( v56[0] >= *(_QWORD *)(a1 + 240) )
      {
        _dwarf_error_string(
          a1,
          a11,
          89,
          "DW_DLE_DEBUG_FRAME_LENGTH_BAD in irix exception table length of augmented fields is too large to be real");
        return 1;
      }
      if ( a6 < v21 + 4 )
      {
        _dwarf_error_string(a1, a11, 89, "DW_DLE_DEBUG_FRAME_LENGTH_BAD irix:frame does not fit in the DWARF section");
        return 1;
      }
      v46 = v56[0];
      v41 = v21;
      v56[0] = 0;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(a1 + 8296))(v56, v21, 4);
      v22 = v56[0];
      v52 = v56[0];
      if ( (v56[0] & 0x80000000LL) != 0 )
      {
        HIDWORD(v52) = -1;
        v22 = v52;
      }
      if ( v22 > 0 && (unsigned __int64)v22 >= *(_QWORD *)(a1 + 240) )
      {
        _dwarf_error_string(a1, a11, 89, "DW_DLE_DEBUG_FRAME_LENGTH_BAD Irix offset into exception tables");
        return 1;
      }
      v18 = v46 + v41;
      v20 = 0;
      goto LABEL_19;
    }
LABEL_55:
    _dwarf_error_string(a1, a11, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
    return 1;
  }
LABEL_38:
  if ( v18 < a5 )
  {
    _dwarf_error_string(
      a1,
      a11,
      193,
      "DW_DLE_DF_FRAME_DECODING_ERROR frame pointer decreased.Impossible. arithmetic overflow");
    return 1;
  }
  v50 = 0;
  v51 = 0;
LABEL_44:
  v49 = v18;
  v48 = v20;
  v43 = v19;
  alloc = _dwarf_get_alloc(a1, 21, 1);
  v29 = alloc;
  if ( !alloc )
  {
    _dwarf_error(a1, a11, 62);
    return 1;
  }
  v30 = a2[2];
  *(_QWORD *)alloc = v30;
  v31 = *((_DWORD *)a2 + 6);
  *(_BYTE *)(alloc + 104) = v31;
  v32 = *((_DWORD *)a2 + 7);
  *(_BYTE *)(v29 + 106) = a7;
  *(_BYTE *)(v29 + 105) = v32;
  *(_QWORD *)(v29 + 8) = v40;
  if ( a8 )
    *(_QWORD *)(v29 + 16) = *(_QWORD *)(a8 + 136);
  v33 = v53;
  *(_QWORD *)(v29 + 24) = a8;
  *(_QWORD *)(v29 + 40) = a5;
  *(_QWORD *)(v29 + 32) = v33;
  *(_QWORD *)(v29 + 48) = v54;
  v34 = *a2;
  *(__m128i *)(v29 + 56) = _mm_unpacklo_epi64((__m128i)*a2, (__m128i)v49);
  v35 = *a2 + a2[2] + *((int *)a2 + 7) + (__int64)*((int *)a2 + 6);
  *(_QWORD *)(v29 + 72) = v35;
  if ( a6 < v35 )
  {
    _dwarf_error(a1, a11, 193);
    dwarf_dealloc((Dwarf_Debug)a1, (void *)v29, 0x15u);
    return 1;
  }
  *(_QWORD *)(v29 + 80) = a1;
  *(_QWORD *)(v29 + 176) = v50;
  *(_QWORD *)(v29 + 88) = v52;
  *(_DWORD *)(v29 + 184) = v51;
  v36 = a2[6];
  *(_QWORD *)(v29 + 144) = v36;
  *(_QWORD *)(v29 + 160) = a2[7];
  v37 = a2[8];
  *(_QWORD *)(v29 + 168) = a6;
  *(_QWORD *)(v29 + 152) = v37;
  if ( v38 == 2 )
    *(_DWORD *)(v29 + 120) = 1;
  *(_QWORD *)(v29 + 112) = v43;
  *(_QWORD *)(v29 + 128) = v48;
  sub_22BC0(a1, a8, v30, (unsigned __int8)v31, (unsigned __int8)v32, v36, v34, "fde");
  *a10 = v29;
  return 0;
}

