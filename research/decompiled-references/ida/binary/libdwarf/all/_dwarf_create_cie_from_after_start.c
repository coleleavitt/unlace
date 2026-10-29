__int64 __fastcall dwarf_create_cie_from_after_start(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v9; // rbx
  char v10; // al
  unsigned __int64 v12; // r12
  __int16 v13; // bp
  int v14; // edx
  __int64 v15; // rax
  unsigned int return_address_reg; // r11d
  unsigned __int8 *v18; // r14
  size_t v19; // rax
  unsigned __int8 *v20; // r8
  int v21; // edi
  unsigned __int8 *v22; // rdi
  unsigned __int8 *v23; // r8
  unsigned __int8 *v24; // r9
  __int64 alloc; // rax
  unsigned __int8 *v26; // r8
  unsigned __int64 v27; // r9
  unsigned int v28; // r11d
  __int64 v29; // rsi
  __int64 v30; // rdx
  int v31; // edi
  int v32; // r10d
  __int64 v33; // rax
  int v34; // ecx
  unsigned __int8 *v35; // rcx
  __m128 v36; // xmm0
  unsigned __int64 v37; // rbp
  __int64 v38; // r9
  int v39; // eax
  int v40; // eax
  char v41; // al
  __int64 v42; // rdi
  unsigned __int8 *v43; // rdx
  unsigned __int8 *v44; // r15
  unsigned __int64 v45; // rbx
  unsigned __int8 v46; // r12
  unsigned __int8 *v47; // rbp
  unsigned __int8 v48; // al
  unsigned __int64 v49; // rdx
  __int64 v50; // rbx
  char v51; // al
  char v52; // al
  __int64 v53; // rdx
  __int64 v54; // rax
  unsigned __int16 v55; // [rsp+0h] [rbp-F8h]
  unsigned int v57; // [rsp+8h] [rbp-F0h]
  __int64 v58; // [rsp+10h] [rbp-E8h] BYREF
  __int64 *v59; // [rsp+18h] [rbp-E0h]
  unsigned __int8 *v60; // [rsp+20h] [rbp-D8h]
  unsigned __int8 *v61; // [rsp+28h] [rbp-D0h]
  __int64 *v62; // [rsp+30h] [rbp-C8h]
  __int64 v63; // [rsp+38h] [rbp-C0h]
  int augmentation_type; // [rsp+40h] [rbp-B8h]
  int v65; // [rsp+44h] [rbp-B4h]
  unsigned __int64 v66; // [rsp+48h] [rbp-B0h]
  __int64 v67; // [rsp+50h] [rbp-A8h]
  unsigned __int16 v68; // [rsp+58h] [rbp-A0h]
  char v69; // [rsp+5Bh] [rbp-9Dh]
  unsigned int v70; // [rsp+5Ch] [rbp-9Ch]
  __int64 v71; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v72; // [rsp+68h] [rbp-90h] BYREF
  __int64 v73; // [rsp+70h] [rbp-88h] BYREF
  __int64 v74; // [rsp+78h] [rbp-80h] BYREF
  __int64 v75; // [rsp+80h] [rbp-78h] BYREF
  __int64 v76; // [rsp+88h] [rbp-70h] BYREF
  _QWORD v77[13]; // [rsp+90h] [rbp-68h] BYREF

  v9 = a1;
  v58 = a6;
  v59 = a8;
  v10 = *(_BYTE *)(a1 + 280);
  v77[5] = __readfsqword(0x28u);
  LOBYTE(v55) = v10;
  v71 = -1;
  v72 = 31;
  v73 = 0;
  v74 = 0;
  if ( (unsigned __int64)a4 >= a5 )
  {
    _dwarf_error_string(
      a1,
      a9,
      89,
      "DW_DLE_DEBUG_FRAME_LENGTH_BAD: reading a cie version byte we have run off the end of the section.  Corrupt Dwarf");
  }
  else
  {
    v12 = a5;
    if ( (unsigned __int64)(a4 + 2) >= a5 )
    {
      _dwarf_error_string(
        a1,
        a9,
        89,
        "DW_DLE_DEBUG_FRAME_LENGTH_BAD: reading an augmentation would run off the end of the section.  Corrupt Dwarf");
    }
    else
    {
      v13 = *(unsigned __int8 *)a4;
      if ( (unsigned __int8)(v13 - 3) <= 2u || (_BYTE)v13 == 1 )
      {
        v18 = (unsigned __int8 *)(a4 + 1);
        return_address_reg = _dwarf_check_string_valid(a1, a3, a4 + 1, a5, 362, a9);
        if ( return_address_reg )
          return return_address_reg;
        v19 = strlen(a4 + 1);
        if ( (unsigned __int64)&v18[v19 + 1] >= v12 )
        {
          _dwarf_error_string(
            a1,
            a9,
            89,
            "DW_DLE_DEBUG_FRAME_LENGTH_BAD: following any augmentation field we have run off the end of the section with "
            "the CIE incomplete.  Corrupt Dwarf");
        }
        else
        {
          v60 = &v18[v19 + 1];
          v75 = 0;
          augmentation_type = _dwarf_get_augmentation_type();
          v68 = 0;
          v20 = v60;
          v55 = (unsigned __int8)v55;
          if ( (_BYTE)v13 != 4 )
            goto LABEL_11;
          if ( (unsigned __int64)(v60 + 2) >= v12 )
          {
            _dwarf_error_string(
              a1,
              a9,
              89,
              "DW_DLE_DEBUG_FRAME_LENGTH_BAD: We would run off the end of the section in a DWARF4 cie header.  Corrupt Dwarf");
            return 1;
          }
          v55 = *v60;
          if ( !*v60 )
          {
            _dwarf_error_string(a1, a9, 371, "DW_DLE_ADDRESS_SIZE_ZERO: bad address size for a DWARF4 cie header");
            return 1;
          }
          if ( v55 > 8u )
          {
            _dwarf_create_address_size_dwarf_error(a1, a9, *v60, 50, "DW_DLE_ADDRESS_SIZE_ERROR..:");
            return 1;
          }
          v20 = v60 + 2;
          v68 = v60[1];
          if ( v68 <= 8u )
          {
LABEL_11:
            if ( (unsigned __int64)(v20 + 2) >= v12 )
            {
              _dwarf_error_string(
                a1,
                a9,
                89,
                "DW_DLE_DEBUG_FRAME_LENGTH_BAD: Running off the end  of a CIE header before the code alignment value read. Corrupt DWARF");
            }
            else
            {
              v60 = v20;
              v76 = 0;
              v77[0] = 0;
              v61 = (unsigned __int8 *)v77;
              v62 = &v76;
              if ( (unsigned int)dwarf_decode_leb128(v20, &v76, v77, v12) == 1 )
              {
LABEL_59:
                _dwarf_error_string(v9, a9, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
              }
              else
              {
                v60 += v76;
                v63 = v77[0];
                return_address_reg = dwarf_decode_signed_leb128(v60, &v73, &v71, v12);
                if ( return_address_reg )
                  return return_address_reg;
                v21 = v73 + (_DWORD)v60;
                if ( (unsigned __int64)&v60[v73 + 1] >= v12 )
                {
                  _dwarf_error_string(
                    v9,
                    a9,
                    89,
                    "DW_DLE_DEBUG_FRAME_LENGTH_BAD: Running off the end of a CIE header before the return address registe"
                    "r number read. Corrupt DWARF");
                }
                else
                {
                  v60 += v73;
                  return_address_reg = _dwarf_get_return_address_reg(
                                         v21,
                                         (unsigned __int8)v13,
                                         v9,
                                         v12,
                                         (int)&v75,
                                         (int)&v72,
                                         a9);
                  if ( return_address_reg )
                    return return_address_reg;
                  if ( *(_QWORD *)(v9 + 8320) < v72 )
                  {
                    _dwarf_error(v9, a9, 91);
                  }
                  else
                  {
                    v22 = &v60[v75];
                    v23 = &v60[v75];
                    if ( v12 < (unsigned __int64)&v60[v75] )
                    {
                      _dwarf_error_string(
                        v9,
                        a9,
                        89,
                        "DW_DLE_DEBUG_FRAME_LENGTH_BAD: Past the end of a CIE header before reading the augmentation stri"
                        "ng. Corrupt DWARF");
                    }
                    else
                    {
                      switch ( augmentation_type )
                      {
                        case 0:
                        case 3:
                        case 5:
                          goto LABEL_30;
                        case 1:
                          v65 = 0;
                          v76 = 0;
                          v77[0] = 0;
                          v60 += v75;
                          v39 = dwarf_decode_leb128(v22, v62, v61, v12);
                          return_address_reg = 0;
                          if ( v39 == 1 )
                            goto LABEL_59;
                          v23 = &v60[v77[0] + v76];
                          if ( v77[0] < *(_QWORD *)(v9 + 240) )
                            goto LABEL_30;
                          _dwarf_error_string(
                            v9,
                            a9,
                            89,
                            "DW_DLE_DEBUG_FRAME_LENGTH_BAD: The irix exception table length is too large to be real");
                          return 1;
                        case 2:
                          if ( v12 < (unsigned __int64)(v22 + 1) )
                          {
                            _dwarf_error_string(
                              v9,
                              a9,
                              89,
                              "DW_DLE_AUG_DATA_LENGTH_BAD: The gcc .eh_frame augmentation data cannot be read. Out of roo"
                              "m in the section. Corrupt DWARF.");
                          }
                          else
                          {
                            v65 = 0;
                            v76 = 0;
                            v77[0] = 0;
                            v60 += v75;
                            v40 = dwarf_decode_leb128(v22, v62, v61, v12);
                            return_address_reg = 0;
                            if ( v40 == 1 )
                              goto LABEL_59;
                            v24 = &v60[v76];
                            v60 = (unsigned __int8 *)v77[0];
                            v23 = &v22[v76 + v77[0]];
                            if ( v77[0] && (v23 < v24 || v12 < (unsigned __int64)v23) )
                            {
                              dwarfstring_constructor(v61);
                              dwarfstring_append_printf_u(
                                v61,
                                "DW_DLE_AUG_DATA_LENGTH_BAD: The gcc .eh_frame augmentation data length of %llu is too lo"
                                "ng to fit in the section.",
                                v60);
                              v54 = dwarfstring_string(
                                      v61,
                                      "DW_DLE_AUG_DATA_LENGTH_BAD: The gcc .eh_frame augmentation data length of %llu is "
                                      "too long to fit in the section.",
                                      v53);
                              _dwarf_error_string(v9, a9, 393, v54);
                              dwarfstring_destructor(v61);
                            }
                            else
                            {
                              v41 = a4[1];
                              if ( v41 )
                              {
                                LOBYTE(v65) = 0;
                                v42 = v9;
                                v43 = v24;
                                v44 = (unsigned __int8 *)(a4 + 1);
                                v69 = 0;
                                v45 = (unsigned __int64)v23;
                                LOBYTE(v62) = 0;
                                v66 = v12;
                                v46 = v13;
                                v47 = v24;
                                while ( 1 )
                                {
                                  if ( v41 == 82 )
                                  {
                                    if ( (unsigned __int64)v43 >= v45 )
                                      goto LABEL_70;
                                    v52 = *v43++;
                                    LOBYTE(v65) = v52;
                                  }
                                  else if ( v41 > 82 )
                                  {
                                    if ( v41 != 83 && v41 != 122 )
                                    {
LABEL_70:
                                      v50 = v42;
                                      _dwarf_error(v42, a9, 195);
LABEL_71:
                                      _dwarf_error_string(
                                        v50,
                                        a9,
                                        195,
                                        "DW_DLE_FRAME_AUGMENTATION_UNKNOWN  Reading gnu aug encodings failed");
                                      return 1;
                                    }
                                  }
                                  else if ( v41 == 76 )
                                  {
                                    if ( (unsigned __int64)v43 >= v45 )
                                    {
                                      v50 = v42;
                                      _dwarf_error_string(
                                        v42,
                                        a9,
                                        195,
                                        "DW_DLE_FRAME_AUGMENTATION_UNKNOWN:  Augmentation L runs off the end of augmentation bytes");
                                      goto LABEL_71;
                                    }
                                    v51 = *v43++;
                                    v69 = v51;
                                  }
                                  else
                                  {
                                    if ( v41 != 80 )
                                      goto LABEL_70;
                                    v77[0] = 0;
                                    if ( (unsigned __int64)v43 >= v45 )
                                      goto LABEL_70;
                                    v48 = *v43;
                                    v49 = (unsigned __int64)(v43 + 1);
                                    v70 = return_address_reg;
                                    LOBYTE(v62) = v48;
                                    if ( v45 < v49 )
                                      goto LABEL_70;
                                    v67 = v42;
                                    if ( (unsigned int)sub_22D50(v42, 0, v49, v48, v45, v55, &v74, v61, a9) )
                                    {
                                      v50 = v67;
                                      goto LABEL_71;
                                    }
                                    v43 = (unsigned __int8 *)v77[0];
                                    return_address_reg = v70;
                                    if ( v45 < v77[0] )
                                      goto LABEL_70;
                                  }
                                  v41 = *++v44;
                                  if ( !v41 )
                                  {
                                    v23 = (unsigned __int8 *)v45;
                                    v24 = v47;
                                    v9 = v42;
                                    v13 = v46;
                                    v12 = v66;
                                    goto LABEL_31;
                                  }
                                }
                              }
                              LOBYTE(v65) = 0;
                              v69 = 0;
                              LOBYTE(v62) = 0;
LABEL_31:
                              LODWORD(v67) = return_address_reg;
                              v66 = (unsigned __int64)v24;
                              v61 = v23;
                              alloc = _dwarf_get_alloc(v9, 20, 1);
                              v26 = v61;
                              v27 = v66;
                              v28 = v67;
                              v29 = alloc;
                              if ( alloc )
                              {
                                *(_WORD *)(alloc + 92) = v13;
                                *(_QWORD *)(alloc + 72) = 0;
                                v30 = *(_QWORD *)(a2 + 16);
                                *(_QWORD *)alloc = v30;
                                v31 = *(_DWORD *)(a2 + 24);
                                *(_WORD *)(alloc + 88) = (unsigned __int8)v31;
                                v32 = *(_DWORD *)(a2 + 28);
                                *(_QWORD *)(alloc + 8) = v18;
                                *(_WORD *)(alloc + 90) = (unsigned __int8)v32;
                                *(_QWORD *)(alloc + 24) = (char)v71;
                                *(_QWORD *)(alloc + 16) = (unsigned __int8)v63;
                                *(_QWORD *)(alloc + 32) = v72;
                                v33 = *(_QWORD *)a2;
                                *(_QWORD *)(v29 + 40) = *(_QWORD *)a2;
                                if ( v12 >= (unsigned __int64)v26 )
                                {
                                  v34 = augmentation_type;
                                  *(_QWORD *)(v29 + 48) = v26;
                                  *(_QWORD *)(v29 + 64) = v9;
                                  *(_DWORD *)(v29 + 96) = v34;
                                  v35 = v60;
                                  v36 = _mm_loadh_ps((const double *)&v58);
                                  *(_QWORD *)(v29 + 112) = v27;
                                  *(_QWORD *)(v29 + 104) = v35;
                                  LOBYTE(v35) = (_BYTE)v62;
                                  v37 = v33 + v30 + (unsigned __int8)v31 + (unsigned __int64)(unsigned __int8)v32;
                                  *(__m128 *)(v29 + 128) = v36;
                                  *(_BYTE *)(v29 + 120) = (_BYTE)v35;
                                  *(_BYTE *)(v29 + 121) = v69;
                                  *(_BYTE *)(v29 + 122) = v65;
                                  v38 = *(_QWORD *)(a2 + 48);
                                  *(_QWORD *)(v29 + 160) = v12;
                                  *(_QWORD *)(v29 + 56) = v37;
                                  *(_QWORD *)(v29 + 144) = v38;
                                  if ( v12 >= v37 )
                                  {
                                    v57 = v28;
                                    *(_WORD *)(v29 + 168) = v55;
                                    *(_WORD *)(v29 + 170) = v68;
                                    sub_22BC0(v9, v29, v30, (unsigned __int8)v31, (unsigned __int8)v32, v38, v33, "cie");
                                    *v59 = v29;
                                    return v57;
                                  }
                                  dwarf_dealloc((Dwarf_Debug)v9, (void *)v29, 0x14u);
                                }
                                _dwarf_error(v9, a9, 193);
                              }
                              else
                              {
                                _dwarf_error_string(v9, a9, 62, "DW_DLE_ALLOC_FAIL attempting to allocate a Dwarf_Cie");
                              }
                            }
                          }
                          break;
                        case 4:
                          if ( !a7 )
                            goto LABEL_58;
                          if ( !a4[3] )
                          {
LABEL_30:
                            LOBYTE(v65) = 0;
                            v24 = nullptr;
                            v69 = 0;
                            LOBYTE(v62) = 0;
                            v60 = nullptr;
                            goto LABEL_31;
                          }
                          _dwarf_error(v9, a9, 195);
LABEL_58:
                          _dwarf_error(v9, a9, 195);
                          return 1;
                        default:
                          v23 = (unsigned __int8 *)(*(_QWORD *)a2
                                                  + *(_QWORD *)(a2 + 16)
                                                  + *(int *)(a2 + 28)
                                                  + (__int64)*(int *)(a2 + 24));
                          if ( v12 >= (unsigned __int64)v23 )
                            goto LABEL_30;
                          _dwarf_error_string(
                            v9,
                            a9,
                            89,
                            "DW_DLE_DEBUG_FRAME_LENGTH_BAD: Reading an unknown type of augmentation string run off the en"
                            "d of the section. Corrupt DWARF.");
                          return 1;
                      }
                    }
                  }
                }
              }
            }
            return 1;
          }
          _dwarf_error(a1, a9, 135);
        }
      }
      else
      {
        dwarfstring_constructor(v77);
        dwarfstring_append_printf_u(v77, "DW_DLE_FRAME_VERSION_BAD: cie version %u unknown", (unsigned __int8)v13);
        v15 = dwarfstring_string(v77, "DW_DLE_FRAME_VERSION_BAD: cie version %u unknown", v14);
        _dwarf_error_string(a1, a9, 90, v15);
        dwarfstring_destructor(v77);
      }
    }
  }
  return 1;
}

