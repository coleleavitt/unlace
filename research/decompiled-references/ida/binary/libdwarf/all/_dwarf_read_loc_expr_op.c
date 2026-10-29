__int64 __fastcall dwarf_read_loc_expr_op(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned __int64 v12; // r14
  unsigned int v13; // edi
  unsigned __int8 *v14; // rdi
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r11
  unsigned __int8 v17; // r15
  unsigned __int16 v18; // si
  unsigned __int64 v19; // rax
  unsigned __int8 *v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+8h] [rbp-A0h]
  _BYTE *v32; // [rsp+10h] [rbp-98h]
  __int64 v33; // [rsp+10h] [rbp-98h]
  _BYTE *v34; // [rsp+10h] [rbp-98h]
  unsigned __int64 v35; // [rsp+10h] [rbp-98h]
  __int64 v36; // [rsp+10h] [rbp-98h]
  unsigned __int64 v37; // [rsp+10h] [rbp-98h]
  __int64 v38; // [rsp+10h] [rbp-98h]
  __int64 v39; // [rsp+10h] [rbp-98h]
  __int64 v40; // [rsp+18h] [rbp-90h]
  __int64 v41; // [rsp+18h] [rbp-90h]
  __m128i v42; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v43[13]; // [rsp+40h] [rbp-68h] BYREF

  v12 = *a2;
  v43[5] = __readfsqword(0x28u);
  v42.m128i_i64[0] = 0;
  if ( v12 < a7 )
    goto LABEL_7;
  v13 = -1;
  if ( v12 != a7 )
  {
    v14 = (unsigned __int8 *)(a7 + a2[1]);
    v15 = (unsigned __int64)(v14 + 1);
    if ( a8 >= (unsigned __int64)(v14 + 1) )
    {
      v16 = a7 + 1;
      *(_OWORD *)a10 = 0;
      *(_OWORD *)(a10 + 48) = 0;
      *(_OWORD *)(a10 + 64) = 0;
      *(_QWORD *)(a10 + 56) = a3;
      *(_QWORD *)(a10 + 64) = a7;
      *(_OWORD *)(a10 + 16) = 0;
      *(_OWORD *)(a10 + 32) = 0;
      v17 = *v14;
      *(_BYTE *)a10 = *v14;
      v18 = a6;
      switch ( v17 )
      {
        case 3u:
          v43[0] = 0;
          if ( __CFADD__(a6, v15) )
            goto LABEL_94;
          if ( a8 < a6 + v15 )
            goto LABEL_92;
          v38 = a6;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD))(a1 + 8296))(v43, v15, a6);
          v42.m128i_i64[0] = v43[0];
          v16 = v38 + a7 + 1;
          goto LABEL_22;
        case 6u:
        case 0x12u:
        case 0x13u:
        case 0x14u:
        case 0x16u:
        case 0x17u:
        case 0x18u:
        case 0x19u:
        case 0x1Au:
        case 0x1Bu:
        case 0x1Cu:
        case 0x1Du:
        case 0x1Eu:
        case 0x1Fu:
        case 0x20u:
        case 0x21u:
        case 0x22u:
        case 0x24u:
        case 0x25u:
        case 0x26u:
        case 0x27u:
        case 0x29u:
        case 0x2Au:
        case 0x2Bu:
        case 0x2Cu:
        case 0x2Du:
        case 0x2Eu:
        case 0x50u:
        case 0x51u:
        case 0x52u:
        case 0x53u:
        case 0x54u:
        case 0x55u:
        case 0x56u:
        case 0x57u:
        case 0x58u:
        case 0x59u:
        case 0x5Au:
        case 0x5Bu:
        case 0x5Cu:
        case 0x5Du:
        case 0x5Eu:
        case 0x5Fu:
        case 0x60u:
        case 0x61u:
        case 0x62u:
        case 0x63u:
        case 0x64u:
        case 0x65u:
        case 0x66u:
        case 0x67u:
        case 0x68u:
        case 0x69u:
        case 0x6Au:
        case 0x6Bu:
        case 0x6Cu:
        case 0x6Du:
        case 0x6Eu:
        case 0x6Fu:
        case 0x96u:
        case 0x97u:
        case 0x9Bu:
        case 0x9Cu:
        case 0x9Fu:
        case 0xE0u:
        case 0xE1u:
        case 0xE2u:
        case 0xE3u:
        case 0xE5u:
        case 0xE7u:
        case 0xEAu:
        case 0xF0u:
          v19 = 0;
          goto LABEL_6;
        case 8u:
        case 0x15u:
        case 0x94u:
        case 0x95u:
          if ( v15 == a8 )
            goto LABEL_7;
          v42.m128i_i64[0] = v14[1];
          goto LABEL_30;
        case 9u:
          if ( v15 == a8 )
            goto LABEL_7;
          v42.m128i_i64[0] = (char)v14[1];
          if ( v42.m128i_i8[0] < 0 )
          {
            *(__int32 *)((char *)v42.m128i_i32 + 1) = -1;
            v42.m128i_i32[1] = -1;
          }
LABEL_30:
          if ( a8 < (unsigned __int64)(v14 + 2) )
            goto LABEL_7;
          v16 = a7 + 2;
          v21 = nullptr;
          v19 = 0;
          goto LABEL_13;
        case 0xAu:
        case 0x98u:
          v43[0] = 0;
          if ( a8 < (unsigned __int64)(v14 + 3) )
            goto LABEL_92;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v43, v15, 2);
          v42.m128i_i64[0] = v43[0];
          goto LABEL_38;
        case 0xBu:
        case 0x28u:
        case 0x2Fu:
          v43[0] = 0;
          if ( a8 < (unsigned __int64)(v14 + 3) )
            goto LABEL_92;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v43, v15, 2);
          v42.m128i_i64[0] = v43[0];
          if ( (v43[0] & 0x8000LL) != 0 )
          {
            *(__int32 *)((char *)v42.m128i_i32 + 2) = -1;
            v42.m128i_i16[3] = -1;
          }
LABEL_38:
          v16 = a7 + 3;
          goto LABEL_22;
        case 0xCu:
        case 0x99u:
        case 0xFAu:
          v43[0] = 0;
          if ( a8 < (unsigned __int64)(v14 + 5) )
            goto LABEL_92;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v43, v15, 4);
          v42.m128i_i64[0] = v43[0];
          goto LABEL_34;
        case 0xDu:
          v43[0] = 0;
          if ( a8 < (unsigned __int64)(v14 + 5) )
            goto LABEL_92;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v43, v15, 4);
          v42.m128i_i64[0] = v43[0];
          if ( (v43[0] & 0x80000000LL) != 0 )
            v42.m128i_i32[1] = -1;
LABEL_34:
          v16 = a7 + 5;
          goto LABEL_22;
        case 0xEu:
        case 0xFu:
          v43[0] = 0;
          if ( a8 < (unsigned __int64)(v14 + 9) )
            goto LABEL_92;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v43, v15, 8);
          v16 = a7 + 9;
          v42.m128i_i64[0] = v43[0];
          goto LABEL_22;
        case 0x10u:
        case 0x23u:
        case 0x90u:
        case 0x93u:
        case 0xA1u:
        case 0xA2u:
        case 0xA8u:
        case 0xA9u:
        case 0xE4u:
        case 0xE6u:
        case 0xF7u:
        case 0xF9u:
        case 0xFBu:
        case 0xFCu:
          v42.m128i_i64[1] = 0;
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_leb128(v14 + 1, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_93;
          v42.m128i_i64[0] = v43[0];
          v15 = (unsigned __int64)&v14[v42.m128i_i64[1] + 1];
          v16 = v42.m128i_i64[1] + a7 + 1;
          v19 = 0;
          goto LABEL_6;
        case 0x11u:
        case 0x70u:
        case 0x71u:
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x75u:
        case 0x76u:
        case 0x77u:
        case 0x78u:
        case 0x79u:
        case 0x7Au:
        case 0x7Bu:
        case 0x7Cu:
        case 0x7Du:
        case 0x7Eu:
        case 0x7Fu:
        case 0x80u:
        case 0x81u:
        case 0x82u:
        case 0x83u:
        case 0x84u:
        case 0x85u:
        case 0x86u:
        case 0x87u:
        case 0x88u:
        case 0x89u:
        case 0x8Au:
        case 0x8Bu:
        case 0x8Cu:
        case 0x8Du:
        case 0x8Eu:
        case 0x8Fu:
        case 0x91u:
          v42.m128i_i64[1] = 0;
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_signed_leb128(v14 + 1, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_95;
          v15 = (unsigned __int64)&v14[v42.m128i_i64[1] + 1];
          v16 = v42.m128i_i64[1] + a7 + 1;
          v42.m128i_i64[0] = v43[0];
          v19 = 0;
          goto LABEL_6;
        case 0x30u:
        case 0x31u:
        case 0x32u:
        case 0x33u:
        case 0x34u:
        case 0x35u:
        case 0x36u:
        case 0x37u:
        case 0x38u:
        case 0x39u:
        case 0x3Au:
        case 0x3Bu:
        case 0x3Cu:
        case 0x3Du:
        case 0x3Eu:
        case 0x3Fu:
        case 0x40u:
        case 0x41u:
        case 0x42u:
        case 0x43u:
        case 0x44u:
        case 0x45u:
        case 0x46u:
        case 0x47u:
        case 0x48u:
        case 0x49u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x4Du:
        case 0x4Eu:
        case 0x4Fu:
          v42.m128i_i64[0] = v17 - 48;
          goto LABEL_22;
        case 0x92u:
          v42.m128i_i64[1] = 0;
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_leb128(v14 + 1, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_93;
          v41 = v42.m128i_i64[1];
          v39 = (__int64)&v14[v42.m128i_i64[1] + 1];
          v42 = (__m128i)v43[0];
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_signed_leb128(v39, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_95;
          v19 = v43[0];
          v15 = v42.m128i_i64[1] + v39;
          v16 = v42.m128i_i64[1] + v41 + a7 + 1;
          goto LABEL_6;
        case 0x9Au:
          v43[0] = 0;
          if ( __CFADD__(a5, v15) )
            goto LABEL_94;
          if ( a8 < a5 + v15 )
            goto LABEL_92;
          v36 = a5;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD))(a1 + 8296))(v43, v15, a5);
          v42.m128i_i64[0] = v43[0];
          v16 = v36 + a7 + 1;
          goto LABEL_22;
        case 0x9Du:
        case 0xA5u:
        case 0xE8u:
        case 0xEBu:
        case 0xECu:
        case 0xF5u:
          v42.m128i_i64[1] = 0;
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_leb128(v14 + 1, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_93;
          v40 = v42.m128i_i64[1];
          v33 = (__int64)&v14[v42.m128i_i64[1] + 1];
          v42 = (__m128i)v43[0];
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_leb128(v33, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_93;
          v19 = v43[0];
          v15 = v42.m128i_i64[1] + v33;
          v16 = v42.m128i_i64[1] + v40 + a7 + 1;
          goto LABEL_6;
        case 0x9Eu:
        case 0xA3u:
        case 0xF3u:
          v32 = v14 + 1;
          v42.m128i_i64[1] = 0;
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_leb128(v14 + 1, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_93;
          v19 = (unsigned __int64)&v32[v42.m128i_i64[1]];
          v42.m128i_i64[0] = v43[0];
          v16 = v43[0] + v42.m128i_i64[1] + a7 + 1;
          if ( a8 >= (unsigned __int64)&v32[v42.m128i_i64[1] + v43[0]] )
            goto LABEL_12;
          goto LABEL_7;
        case 0xA0u:
        case 0xF2u:
          v43[0] = 0;
          if ( a4 != 2 )
            v18 = a5;
          v35 = v18 + v15;
          if ( __CFADD__(v18, v15) )
            goto LABEL_94;
          if ( a8 < v35 )
            goto LABEL_92;
          (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, _QWORD))(a1 + 8296))(v43, v14 + 1, v18);
          v42 = (__m128i)v43[0];
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_signed_leb128(v35, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_95;
          v19 = v43[0];
          v15 = v42.m128i_i64[1] + v35;
          v16 = v18 + a7 + 1 + v42.m128i_i64[1];
          goto LABEL_6;
        case 0xA4u:
        case 0xF4u:
          v34 = v14 + 1;
          v42.m128i_i64[1] = 0;
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_leb128(v14 + 1, &v42.m128i_u64[1], v43, a8) == 1 )
            goto LABEL_93;
          v42.m128i_i64[0] = v43[0];
          v26 = &v34[v42.m128i_i64[1]];
          if ( (unsigned __int64)&v34[v42.m128i_i64[1]] >= a8 )
          {
            _dwarf_error_string(
              a1,
              a11,
              343,
              "DW_DLE_LOCEXPR_OFF_SECTION_END: Error reading DW_OP_const_type/DW_OP_GNU_const_type content");
            return 1;
          }
          v19 = *v26;
          v21 = v26 + 1;
          if ( a8 < (unsigned __int64)&v26[v19 + 1] )
            goto LABEL_7;
          v16 = v19 + v42.m128i_i64[1] + 1 + a7 + 1;
          goto LABEL_13;
        case 0xA6u:
        case 0xA7u:
        case 0xF6u:
          if ( v15 == a8 )
            goto LABEL_7;
          v42.m128i_i64[0] = v14[1];
          if ( a8 < (unsigned __int64)(v14 + 2) )
            goto LABEL_7;
          v42.m128i_i64[1] = 0;
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_leb128(v14 + 2, &v42.m128i_u64[1], v43, a8) != 1 )
          {
            v19 = v43[0];
            v15 = (unsigned __int64)&v14[v42.m128i_i64[1] + 2];
            v16 = v42.m128i_i64[1] + a7 + 2;
            goto LABEL_6;
          }
LABEL_93:
          _dwarf_error_string(a1, a11, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
          return 1;
        case 0xE9u:
          v43[0] = 0;
          v37 = a5 + v15;
          if ( __CFADD__(a5, v15) )
            goto LABEL_94;
          if ( a8 < v37 )
            goto LABEL_92;
          (*(void (__fastcall **)(_QWORD *, unsigned __int8 *))(a1 + 8296))(v43, v14 + 1);
          v42 = (__m128i)v43[0];
          v43[0] = 0;
          if ( (unsigned int)dwarf_decode_signed_leb128(v37, &v42.m128i_u64[1], v43, a8) == 1 )
          {
LABEL_95:
            _dwarf_error_string(a1, a11, 329, "DW_DLE_LEB_IMPROPER: decode sleb w/len  runs past allowed area.f");
            return 1;
          }
          v19 = v43[0];
          v15 = v42.m128i_i64[1] + v37;
          v16 = v42.m128i_i64[1] + a7 + 1;
LABEL_6:
          if ( a8 >= v15 )
          {
LABEL_12:
            v21 = nullptr;
            goto LABEL_13;
          }
          goto LABEL_7;
        case 0xF1u:
          if ( v15 == a8 )
          {
            _dwarf_error_string(a1, a11, 343, "DW_DLE_LOCEXPR_OFF_SECTION_END at DW_OP_GNU_encoded_addr. Corrupt DWARF");
            return 1;
          }
          v27 = v14[1];
          if ( v14[1] )
            v18 = v14[1];
          if ( v18 != 4 )
          {
            if ( v18 > 4u )
            {
              if ( v18 == 8 )
              {
                v43[0] = 0;
                if ( a8 < (unsigned __int64)(v14 + 9) )
                  goto LABEL_92;
                (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(a1 + 8296))(v43, v14 + 1, 8);
                v27 = v43[0];
                v15 = (unsigned __int64)(v14 + 1);
                v28 = 9;
                v16 = a7 + 1;
                goto LABEL_82;
              }
              goto LABEL_102;
            }
            if ( v18 != 1 )
            {
              if ( v18 == 2 )
              {
                v43[0] = 0;
                if ( a8 < (unsigned __int64)(v14 + 3) )
                  goto LABEL_92;
                (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(a1 + 8296))(v43, v14 + 1, 2);
                v27 = v43[0];
                v15 = (unsigned __int64)(v14 + 1);
                v28 = 3;
                v16 = a7 + 1;
                goto LABEL_82;
              }
LABEL_102:
              _dwarf_error(a1, a11, 240);
              return 1;
            }
            v28 = 2;
LABEL_82:
            v42.m128i_i64[0] = v27;
            if ( a8 < v28 + v15 )
              goto LABEL_7;
            v16 += v28;
            v21 = nullptr;
            v19 = 0;
LABEL_13:
            if ( (a7 & 0x8000000000000000LL) != 0LL || a7 >= v16 )
            {
              v31 = v16;
              dwarfstring_constructor(v43);
              dwarfstring_append_printf_u(
                v43,
                "DW_DLE_LOCEXPR_OFF_SECTION_END: A  DW_OP (0x%02x) has a value that results in decreasing the section offset from ",
                v17);
              dwarfstring_append_printf_u(v43, " %ld to ", a7);
              dwarfstring_append_printf_u(v43, " %ld ", a7);
              dwarfstring_append_printf_u(v43, " (0x%lx) ", a7);
              dwarfstring_append_printf_i(v43, " to 0x%lx. Corrupt Dwarf ", v31);
              v30 = dwarfstring_string(v43, " to 0x%lx. Corrupt Dwarf ", v29);
              v24 = 343;
              v25 = v30;
LABEL_24:
              _dwarf_error_string(a1, a11, v24, v25);
              dwarfstring_destructor(v43);
            }
            else
            {
              if ( v12 >= v16 )
              {
                v22 = _mm_loadl_epi64(&v42);
                v13 = 0;
                *(_BYTE *)a10 = v17;
                *(_QWORD *)(a10 + 48) = v21;
                *(__m128i *)(a10 + 32) = _mm_unpacklo_epi64(v22, (__m128i)v19);
                *a9 = v16;
                return v13;
              }
              _dwarf_error(a1, a11, 230);
            }
            return 1;
          }
          v43[0] = 0;
          if ( a8 >= (unsigned __int64)(v14 + 5) )
          {
            (*(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(a1 + 8296))(v43, v14 + 1, 4);
            v27 = v43[0];
            v15 = (unsigned __int64)(v14 + 1);
            v28 = 5;
            v16 = a7 + 1;
            goto LABEL_82;
          }
LABEL_92:
          _dwarf_error_string(a1, a11, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
          break;
        case 0xFDu:
          v43[0] = 0;
          if ( __CFADD__(a5, v15) )
          {
LABEL_94:
            _dwarf_error_string(a1, a11, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read starts past the end of section");
            return 1;
          }
          if ( a8 < a5 + v15 )
            goto LABEL_92;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64))(a1 + 8296))(v43, v15);
          v16 = a7 + 1;
          v42.m128i_i64[0] = v43[0];
LABEL_22:
          v21 = nullptr;
          v19 = 0;
          goto LABEL_13;
        default:
          v42.m128i_i64[1] = 0;
          dwarfstring_constructor(v43);
          dwarfstring_append_printf_u(v43, "ERROR: DW_DLE_LOC_EXPR_BAD as DW_OP atom 0x%x ", v17);
          dwarfstring_append();
          dwarf_get_OP_name(v17, (const char **)&v42.m128i_i64[1]);
          dwarfstring_append();
          dwarfstring_append();
          dwarfstring_append();
          v23 = dwarfstring_string(v43, "is unknown.");
          v24 = 128;
          v25 = v23;
          goto LABEL_24;
      }
      return 1;
    }
LABEL_7:
    _dwarf_error(a1, a11, 343);
    return 1;
  }
  return v13;
}

