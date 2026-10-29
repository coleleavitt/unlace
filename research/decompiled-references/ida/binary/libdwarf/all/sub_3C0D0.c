__int64 __fastcall sub_3C0D0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int16 a5,
        _DWORD *a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        unsigned __int8 **a12,
        __int64 a13)
{
  unsigned __int8 v13; // r15
  unsigned __int8 *v15; // r12
  __int64 v18; // r8
  __int64 v19; // r10
  unsigned __int8 *v20; // r12
  __int64 v21; // rax
  unsigned __int8 *v22; // r12
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // rax
  unsigned __int8 *v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r10
  unsigned __int64 v32; // r12
  unsigned __int8 *v33; // rsi
  __int64 v34; // r11
  int v35; // eax
  __int64 v36; // r10
  int v37; // eax
  int v38; // edx
  __int64 v39; // rax
  __int64 v41; // [rsp+0h] [rbp-E8h]
  unsigned __int8 *v43; // [rsp+40h] [rbp-A8h]
  unsigned __int8 *v44; // [rsp+40h] [rbp-A8h]
  unsigned __int8 *v45; // [rsp+40h] [rbp-A8h]
  __int64 v46; // [rsp+48h] [rbp-A0h]
  __int64 v47; // [rsp+48h] [rbp-A0h]
  __int64 v48; // [rsp+50h] [rbp-98h]
  __int64 v49; // [rsp+50h] [rbp-98h]
  unsigned __int8 *v50; // [rsp+50h] [rbp-98h]
  __int64 v51; // [rsp+50h] [rbp-98h]
  __int64 v52; // [rsp+50h] [rbp-98h]
  __int64 v53; // [rsp+50h] [rbp-98h]
  __int64 v54; // [rsp+50h] [rbp-98h]
  __int64 v55; // [rsp+58h] [rbp-90h]
  __int64 v56; // [rsp+58h] [rbp-90h]
  __int64 v57; // [rsp+58h] [rbp-90h]
  __int64 v58; // [rsp+60h] [rbp-88h]
  __int64 v59; // [rsp+60h] [rbp-88h]
  __int64 v60; // [rsp+68h] [rbp-80h]
  __int64 v61; // [rsp+78h] [rbp-70h] BYREF
  _QWORD v62[13]; // [rsp+80h] [rbp-68h] BYREF

  v62[5] = __readfsqword(0x28u);
  if ( (unsigned __int64)a2 >= a4 )
  {
    _dwarf_error_string(
      a1,
      a13,
      469,
      "DW_DLE_LOCLISTS_ERROR: An lle entry begins past the end of its allowed space. Corrupt DWARF.");
  }
  else
  {
    v13 = *a2;
    v15 = a2 + 1;
    switch ( *a2 )
    {
      case 0u:
        v30 = 0;
        v28 = nullptr;
        v27 = 0;
        v25 = 0;
        v26 = 0;
        v29 = 1;
        goto LABEL_9;
      case 1u:
        v61 = 0;
        v62[0] = 0;
        if ( (unsigned int)dwarf_decode_leb128(v15, &v61, v62, a4) == 1 )
          goto LABEL_33;
        v30 = 0;
        v28 = nullptr;
        v27 = 0;
        v26 = v62[0];
        v25 = 0;
        v15 += v61;
        v29 = v61 + 1;
        goto LABEL_9;
      case 2u:
      case 3u:
      case 4u:
        v61 = 0;
        v62[0] = 0;
        if ( (unsigned int)dwarf_decode_leb128(a2 + 1, &v61, v62, a4) == 1 )
          goto LABEL_33;
        v18 = v61;
        v19 = v62[0];
        v61 = 0;
        v62[0] = 0;
        v20 = &v15[v18];
        v55 = v19;
        v48 = v18;
        if ( (unsigned int)dwarf_decode_leb128(v20, &v61, v62, a4) == 1 )
          goto LABEL_33;
        v21 = v61;
        v61 = 0;
        v22 = &v20[v21];
        v23 = v48 + v21 + 1;
        v49 = v62[0];
        v58 = v23;
        v62[0] = 0;
        v24 = dwarf_decode_leb128(v22, &v61, v62, a4);
        v25 = v49;
        v26 = v55;
        if ( v24 == 1 )
          goto LABEL_33;
        v27 = v62[0];
        v28 = &v22[v61];
        v29 = v62[0] + v61 + v58;
        v15 = &v22[v62[0] + v61];
        v30 = v61 + a3;
        goto LABEL_9;
      case 5u:
        v61 = 0;
        v62[0] = 0;
        if ( (unsigned int)dwarf_decode_leb128(v15, &v61, v62, a4) == 1 )
          goto LABEL_33;
        v25 = 0;
        v26 = 0;
        v27 = v62[0];
        v28 = &v15[v61];
        v30 = v61 + a3;
        v15 += v62[0] + v61;
        v29 = v62[0] + v61 + 1;
        goto LABEL_9;
      case 6u:
        v62[0] = 0;
        if ( __CFADD__(a5, v15) )
          goto LABEL_37;
        if ( a4 < (unsigned __int64)&v15[a5] )
          goto LABEL_32;
        v43 = &v15[a5];
        v41 = a5;
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD))(a1 + 8296))(v62, a2 + 1, a5);
        v30 = 0;
        v28 = nullptr;
        v26 = v62[0];
        v15 = v43;
        v27 = 0;
        v25 = 0;
        v29 = v41 + 1;
        goto LABEL_9;
      case 7u:
        v62[0] = 0;
        if ( __CFADD__(a5, v15) )
          goto LABEL_37;
        if ( a4 < (unsigned __int64)&v15[a5] )
          goto LABEL_32;
        v50 = &v15[a5];
        v46 = a5;
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *))(a1 + 8296))(v62, a2 + 1);
        v31 = v62[0];
        v62[0] = 0;
        v32 = (unsigned __int64)&v50[v46];
        if ( __CFADD__(v46, v50) )
        {
LABEL_37:
          _dwarf_error_string(a1, a13, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
        }
        else if ( a4 < v32 )
        {
LABEL_32:
          _dwarf_error_string(a1, a13, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
        }
        else
        {
          v56 = v31;
          v33 = v50;
          v51 = v46;
          (*(void (__fastcall **)(_QWORD *, unsigned __int8 *))(a1 + 8296))(v62, v33);
          v34 = v62[0];
          v61 = 0;
          v62[0] = 0;
          v47 = v34;
          v52 = 2 * v51;
          v35 = dwarf_decode_leb128(v32, &v61, v62, a4);
          v25 = v47;
          v26 = v56;
          if ( v35 == 1 )
          {
LABEL_33:
            _dwarf_error_string(a1, a13, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
          }
          else
          {
            v27 = v62[0];
            v28 = (unsigned __int8 *)(v32 + v61);
            v30 = v61 + a3;
            v15 = (unsigned __int8 *)(v62[0] + v61 + v32);
            v29 = v62[0] + v61 + v52 + 1;
LABEL_9:
            if ( a4 < (unsigned __int64)v15 || v15 < a2 )
            {
              _dwarf_error_string(
                a1,
                a13,
                469,
                "DW_DLE_LOCLISTS_ERROR: The end of an lle entry is past the end of its allowed space");
            }
            else
            {
              if ( *(_QWORD *)(a1 + 3384) >= v29 )
              {
                *a6 = v29;
                *a7 = v13;
                *a8 = v26;
                *a9 = v25;
                *a10 = v27;
                *a11 = v30;
                *a12 = v28;
                return 0;
              }
              _dwarf_error_string(
                a1,
                a13,
                469,
                "DW_DLE_LOCLISTS_ERROR: The number of bytes in a single loclist entry is too large to be reasonable");
            }
          }
        }
        break;
      case 8u:
        v62[0] = 0;
        v44 = &v15[a5];
        if ( __CFADD__(a5, v15) )
          goto LABEL_37;
        if ( a4 < (unsigned __int64)v44 )
          goto LABEL_32;
        v57 = a5;
        (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD))(a1 + 8296))(v62, a2 + 1, a5);
        v36 = v62[0];
        v61 = 0;
        v62[0] = 0;
        v53 = v36;
        if ( (unsigned int)dwarf_decode_leb128(v44, &v61, v62, a4) == 1 )
          goto LABEL_33;
        v59 = v53;
        v54 = v62[0];
        v45 = &v44[v61];
        v60 = (unsigned int)v61;
        v61 = 0;
        v62[0] = 0;
        v37 = dwarf_decode_leb128(v45, &v61, v62, a4);
        v25 = v54;
        v26 = v59;
        if ( v37 == 1 )
          goto LABEL_33;
        v27 = v62[0];
        v28 = &v45[v61];
        v30 = v61 + a3;
        v15 = &v45[v62[0] + v61];
        v29 = v57 + v60 + v62[0] + v61 + 1;
        goto LABEL_9;
      default:
        if ( a13 )
        {
          dwarfstring_constructor(v62);
          dwarfstring_append_printf_u(
            v62,
            "DW_DLE_LOCLISTS_ERROR: The loclists entry at .debug_loclists offset 0x%x",
            a3);
          dwarfstring_append_printf_u(v62, " has code 0x%x which is unknown", v13);
          v39 = dwarfstring_string(v62, " has code 0x%x which is unknown", v38);
          _dwarf_error_string(a1, a13, 469, v39);
          dwarfstring_destructor(v62);
        }
        return 1;
    }
  }
  return 1;
}

