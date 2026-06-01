__int64 __fastcall sub_395B0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        _DWORD *a5,
        _WORD *a6,
        unsigned __int64 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10)
{
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  __int64 v14; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rdi
  unsigned __int8 v20; // r14
  int v21; // eax
  __int64 v22; // rdi
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // ebx
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // r12
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rbx
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // r12
  int v45; // edx
  __int64 v46; // rax
  unsigned __int64 v47; // [rsp+8h] [rbp-B0h]
  __int64 v48; // [rsp+8h] [rbp-B0h]
  __int64 v49; // [rsp+10h] [rbp-A8h]
  __int64 v50; // [rsp+10h] [rbp-A8h]
  __int64 v51; // [rsp+10h] [rbp-A8h]
  __int64 v52; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v53; // [rsp+10h] [rbp-A8h]
  __int64 *v54; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v55; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v56; // [rsp+18h] [rbp-A0h]
  __int64 v57; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+18h] [rbp-A0h]
  __int64 v60; // [rsp+18h] [rbp-A0h]
  __int64 *v61; // [rsp+20h] [rbp-98h]
  unsigned __int64 v62; // [rsp+20h] [rbp-98h]
  __int64 v63; // [rsp+20h] [rbp-98h]
  __int64 *v64; // [rsp+20h] [rbp-98h]
  __int64 v65; // [rsp+20h] [rbp-98h]
  __int64 *v66; // [rsp+20h] [rbp-98h]
  __int64 v68; // [rsp+28h] [rbp-90h]
  __int64 *v70; // [rsp+28h] [rbp-90h]
  __int64 *v72; // [rsp+30h] [rbp-88h]
  _QWORD *v73; // [rsp+30h] [rbp-88h]
  __int64 v74; // [rsp+30h] [rbp-88h]
  _QWORD *v75; // [rsp+38h] [rbp-80h]
  __int64 v76; // [rsp+38h] [rbp-80h]
  __int64 v77; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v78[13]; // [rsp+50h] [rbp-68h] BYREF

  result = 0xFFFFFFFFLL;
  v78[5] = __readfsqword(0x28u);
  v12 = *(_QWORD *)(a1 + 1528);
  if ( a7 < v12 )
  {
    v14 = *(_QWORD *)(a1 + 1520);
    *(_QWORD *)(a2 + 32) = a7;
    v17 = v14 + a7;
    *(_OWORD *)(a2 + 16) = 0;
    v18 = v14 + v12;
    *(_WORD *)(a2 + 16) = a9;
    v19 = v14 + a7 + 1;
    *(_OWORD *)a2 = 0;
    v20 = *(_BYTE *)(v14 + a7);
    v47 = a7 + 1;
    switch ( v20 )
    {
      case 0u:
        *a5 = 1;
        *(_QWORD *)(a2 + 24) = v47;
        goto LABEL_18;
      case 1u:
        v54 = a3;
        v77 = 0;
        v78[0] = 0;
        if ( (unsigned int)dwarf_decode_leb128(v19, &v77, v78, v18) == 1 )
        {
          _dwarf_error_string(a1, a10, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
          goto LABEL_26;
        }
        *(_QWORD *)(a2 + 24) = v47;
        v40 = 0xFFFFFFFFLL;
        if ( a8 == 8 )
          v40 = -1;
        *v54 = v40;
        *a4 = v78[0];
        goto LABEL_18;
      case 2u:
        v64 = a3;
        v58 = v14 + v12;
        v51 = v17 + 1;
        v77 = 0;
        v78[0] = 0;
        if ( (unsigned int)dwarf_decode_leb128(v19, &v77, v78, v18) == 1 )
          goto LABEL_28;
        v73 = a4;
        v70 = v64;
        v65 = v77;
        v52 = v77 + v51;
        v76 = v78[0];
        v77 = 0;
        v78[0] = 0;
        if ( (unsigned int)dwarf_decode_leb128(v52, &v77, v78, v58) == 1 )
          goto LABEL_28;
        v32 = v52 + v77;
        v33 = v65 + v77 + 2;
        v34 = v52 + v77 + 2;
        *v70 = v76;
        v35 = v78[0];
        v78[0] = 0;
        *v73 = v35;
        if ( v58 < v34 )
          goto LABEL_25;
        v53 = v34;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64, unsigned __int64, __int64))(a1 + 8296))(
          v78,
          v32,
          2,
          v34,
          v65);
        v36 = v78[0];
        *(_QWORD *)a2 = v78[0];
        *(_QWORD *)(a2 + 8) = v53;
        *(_QWORD *)(a2 + 24) = v33 + v47;
        v37 = v36 + v33 + v47;
        if ( *(_QWORD *)(a1 + 1528) >= v37 )
          goto LABEL_18;
        dwarfstring_constructor(v78);
        dwarfstring_append();
        dwarfstring_append_printf_u(v78, " in DW_LLEX_start_end_entry The expression offset is 0x%x", v37);
        goto LABEL_13;
      case 3u:
        v61 = a3;
        v56 = v14 + v12;
        v49 = v17 + 1;
        v77 = 0;
        v78[0] = 0;
        v21 = dwarf_decode_leb128(v19, &v77, v78, v18);
        v22 = v49;
        v23 = v56;
        if ( v21 == 1 )
        {
LABEL_28:
          _dwarf_error_string(a1, a10, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
        }
        else
        {
          v24 = v78[0];
          v78[0] = 0;
          v50 = v24;
          v57 = v77;
          if ( v23 < v22 + v77 + 4
            || (v75 = a4,
                v72 = v61,
                v25 = v22 + v77 + 6,
                v68 = v22 + v77 + 4,
                v62 = v23,
                (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v78, v22 + v77, 4),
                v26 = v78[0],
                v78[0] = 0,
                v62 < v25) )
          {
LABEL_25:
            _dwarf_error_string(a1, a10, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
          }
          else
          {
            v63 = v26;
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v78, v68, 2);
            v27 = v78[0];
            v28 = v47 + v57 + 6;
            *v72 = v50;
            *v75 = v63;
            *(_QWORD *)a2 = v27;
            *(_QWORD *)(a2 + 8) = v25;
            *(_QWORD *)(a2 + 24) = v28;
            v29 = v27 + v28;
            if ( *(_QWORD *)(a1 + 1528) >= (unsigned __int64)(v27 + v28) )
            {
LABEL_18:
              *a6 = v20;
              return 0;
            }
            dwarfstring_constructor(v78);
            dwarfstring_append();
            dwarfstring_append_printf_u(v78, " in DW_LLEX_start_length_entry The expression offset is 0x%x", v29);
            dwarfstring_append_printf_u(
              v78,
              " which is greater than the section size of 0x%x. Corrupt Dwarf.",
              *(_QWORD *)(a1 + 1528));
            v31 = dwarfstring_string(v78, " which is greater than the section size of 0x%x. Corrupt Dwarf.", v30);
            _dwarf_error_string(a1, a10, 194, v31);
            dwarfstring_destructor(v78);
          }
        }
LABEL_26:
        result = 1;
        break;
      case 4u:
        v78[0] = 0;
        if ( v18 < v17 + 5 )
          goto LABEL_25;
        v66 = a3;
        v60 = v17 + 5;
        v55 = v14 + v12;
        v48 = v14 + a7;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v78, v17 + 1, 4);
        v41 = v78[0];
        v78[0] = 0;
        v74 = v41;
        if ( v55 < v14 + a7 + 9 )
          goto LABEL_25;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v78, v60, 4);
        v42 = v78[0];
        v78[0] = 0;
        *v66 = v74;
        *a4 = v42;
        if ( v55 < v48 + 11 )
          goto LABEL_25;
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v78, v48 + 9, 2);
        v43 = v78[0];
        *(_QWORD *)(a2 + 24) = a7 + 11;
        *(_QWORD *)a2 = v43;
        v44 = v43 + a7 + 11;
        *(_QWORD *)(a2 + 8) = v48 + 11;
        if ( *(_QWORD *)(a1 + 1528) >= v44 )
          goto LABEL_18;
        dwarfstring_constructor(v78);
        dwarfstring_append();
        dwarfstring_append_printf_u(v78, " in DW_LLEX_offset_pair_entry The expression offset is 0x%x", v44);
LABEL_13:
        dwarfstring_append_printf_u(
          v78,
          " which is greater than the section size of 0x%x. Corrupt Dwarf.",
          *(_QWORD *)(a1 + 1528));
        v39 = dwarfstring_string(v78, " which is greater than the section size of 0x%x. Corrupt Dwarf.", v38);
        _dwarf_error_string(a1, a10, 194, v39);
        dwarfstring_destructor(v78);
        goto LABEL_26;
      default:
        dwarfstring_constructor(v78);
        dwarfstring_append();
        dwarfstring_append_printf_u(v78, " in DW_LLEX_ code value  is 0x%x ,not an expected value.", v20);
        v46 = dwarfstring_string(v78, " in DW_LLEX_ code value  is 0x%x ,not an expected value.", v45);
        _dwarf_error_string(a1, a10, 310, v46);
        dwarfstring_destructor(v78);
        goto LABEL_26;
    }
  }
  return result;
}

