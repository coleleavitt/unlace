char __fastcall sub_F521E0(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // al
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // r12
  char v7; // kr00_1
  unsigned __int64 v11; // rax
  int v12; // eax
  bool v13; // al
  __int8 v14; // r13
  int v15; // edx
  _BYTE *v16; // rax
  int v17; // eax
  char *v18; // r15
  size_t v19; // rax
  _BYTE *v20; // rax
  __int64 v21; // rsi
  char *v22; // r15
  size_t v23; // rax
  __int8 v24; // dl
  bool v25; // r13
  __int8 v26; // r14
  __int64 v27; // rsi
  _BYTE *v28; // rax
  __int8 v29; // dl
  __int8 v30; // r14
  __int64 v31; // rbx
  _BYTE *v32; // rax
  __int8 v33; // r13
  __int64 v34; // r13
  char *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int8 v41; // r13
  _BYTE *v42; // rax
  char v43; // di
  _BYTE *v44; // rax
  __int8 v45; // dl
  __int64 v46; // rsi
  char *v47; // r13
  size_t v48; // rax
  _BYTE *v49; // rax
  char v50; // r13
  __int64 v51; // rax
  char *v52; // r15
  size_t v53; // rax
  _BYTE *v54; // rax
  _BYTE *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  __int64 *v58; // r15
  __int64 *v59; // rbx
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 i; // rax
  __int64 v68; // rdi
  const char *v69; // rsi
  _BYTE *v70; // rax
  char *v71; // rax
  size_t v73; // [rsp+0h] [rbp-50h]
  unsigned __int16 v74[5]; // [rsp+16h] [rbp-3Ah] BYREF
  __int64 v75; // [rsp+20h] [rbp-30h]
  __int64 v76; // [rsp+28h] [rbp-28h]
  __int64 v77; // [rsp+30h] [rbp-20h]

  v7 = v3;
  v77 = v6;
  v76 = v5;
  v75 = v4;
  LOBYTE(v11) = *(_BYTE *)(a2 + 16);
  switch ( (char)v11 )
  {
    case 0:
    case 1:
      goto LABEL_34;
    case 2:
    case 3:
      LOBYTE(v11) = sub_F53650();
      return v11;
    case 4:
      v44 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v44 >= *(_QWORD *)(a3 + 24) )
      {
        sub_2257CD0(a3, 91);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v44 + 1;
        *v44 = 91;
      }
      goto LABEL_25;
    case 5:
      sub_971800(a3, "[]");
      LOBYTE(v11) = sub_F53190(a1, *(_QWORD *)(a2 + 32), a3);
      return v11;
    case 6:
      v16 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v16 >= *(_QWORD *)(a3 + 24) )
      {
        sub_2257CD0(a3, 91);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v16 + 1;
        *v16 = 91;
      }
      if ( ((*(_BYTE *)(a2 + 18) >> 3) & 7) != 0 )
      {
        sub_F4B110(a3, (*(_BYTE *)(a2 + 18) >> 3) & 7, (a1->m128i_i8[3] & 4) != 0);
        v54 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v54 >= *(_QWORD *)(a3 + 24) )
        {
          sub_2257CD0(a3, 32);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v54 + 1;
          *v54 = 32;
        }
      }
      v17 = (*(_WORD *)(a2 + 18) >> 6) & 7;
      if ( v17 == 1 )
      {
        sub_971800(a3, "static ");
      }
      else if ( v17 == 2 )
      {
        v55 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v55 >= *(_QWORD *)(a3 + 24) )
        {
          sub_2257CD0(a3, 42);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v55 + 1;
          *v55 = 42;
        }
      }
LABEL_25:
      v18 = *(char **)(a2 + 40);
      if ( v18 )
      {
        v19 = j__strlen("\n");
        sub_EE3EC0(v18, a3, 0, a1, 0, 0, "\n", v19);
      }
      v20 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v20 >= *(_QWORD *)(a3 + 24) )
      {
        sub_2257CD0(a3, 93);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v20 + 1;
        *v20 = 93;
      }
      goto LABEL_29;
    case 7:
    case 10:
    case 13:
    case 15:
    case 19:
    case 20:
    case 22:
    case 28:
    case 29:
    case 34:
    case 36:
    case 37:
    case 39:
    case 41:
    case 45:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      return v11;
    case 8:
      v12 = *(_WORD *)(a2 + 18) >> 3;
      if ( v12 == 24 || v12 == 72 )
      {
        LOBYTE(v11) = sub_F53190(a1, *(_QWORD *)(a2 + 48), a3);
        return v11;
      }
      v13 = sub_F3A5A0(a2);
      v14 = a1[1].m128i_i8[5];
      a1[1].m128i_i8[5] = v13;
      sub_F53190(a1, *(_QWORD *)(a2 + 40), a3);
      LOWORD(v11) = *(_WORD *)(a2 + 18) >> 3;
      if ( (_WORD)v11 == 26 )
        goto LABEL_18;
      LOBYTE(v11) = sub_F3A560(a2);
      if ( (_BYTE)v11 )
        goto LABEL_18;
      LOWORD(v11) = (unsigned __int16)sub_F3AC00(a2) >> 8;
      if ( (_WORD)v11 )
        goto LABEL_18;
      LOBYTE(v11) = sub_F3A590(a2);
      if ( (_BYTE)v11 )
        goto LABEL_18;
      LOWORD(v11) = *(_WORD *)(a2 + 18);
      v15 = (unsigned __int16)v11 >> 3;
      if ( v15 == 25 )
        goto LABEL_18;
      if ( v15 != 71 )
        goto LABEL_10;
      v56 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      LODWORD(v11) = *(unsigned __int8 *)(v56 + 16) - 25;
      if ( (unsigned int)v11 > 1 )
      {
        v11 = sub_F3F310(v56);
        if ( (*(_BYTE *)(v11 + 21) & 2) == 0 )
          goto LABEL_18;
        LOWORD(v11) = *(_WORD *)(a2 + 18);
LABEL_10:
        LODWORD(v11) = (unsigned __int16)v11 >> 3;
        switch ( (_DWORD)v11 )
        {
          case 0x43:
            LOBYTE(v11) = sub_971800(a3, " [[clang::lifetimebound]]");
            goto LABEL_18;
          case 0x44:
            sub_971800(a3, " [[clang::lifetime_capture_by(");
            v57 = *(_QWORD *)(a2 + 32);
            if ( v57 )
            {
              if ( *(_WORD *)(v57 + 36) == 68 )
              {
                v58 = *(__int64 **)(v57 + 56);
                v59 = &v58[*(_QWORD *)(v57 + 64)];
                v73 = j__strlen(", ");
                if ( v58 != v59 )
                {
                  while ( 1 )
                  {
                    v60 = *v58++;
                    sub_9717A0(a3, (const void *)(*(_QWORD *)(v60 + 16) + 16LL), **(unsigned int **)(v60 + 16));
                    if ( v59 == v58 )
                      break;
                    sub_9717A0(a3, ", ", v73);
                  }
                }
              }
            }
            LOBYTE(v11) = sub_971800(a3, ")]]");
            goto LABEL_18;
          case 0:
            goto LABEL_18;
          case 2:
            LOBYTE(v11) = sub_971800(a3, " [[clang::annotate_type(...)]]");
            goto LABEL_18;
          case 9:
            LOBYTE(v11) = sub_971800(a3, "__arm_streaming");
            goto LABEL_18;
          case 0xA:
            LOBYTE(v11) = sub_971800(a3, "__arm_streaming_compatible");
            goto LABEL_18;
          case 0x55:
            v61 = *(_QWORD *)(a2 + 32);
            if ( v61 && *(_WORD *)(v61 + 36) == 85 )
            {
              v62 = sub_971800(a3, " __attribute__((swift_attr(\"");
              v63 = sub_9717A0(v62, *(const void **)(v61 + 48), *(unsigned int *)(v61 + 40));
              LOBYTE(v11) = sub_971800(v63, "\")))");
            }
            goto LABEL_18;
        }
        LODWORD(v11) = v11 - 75;
        if ( (unsigned int)v11 <= 2 )
        {
LABEL_18:
          a1[1].m128i_i8[5] = v14;
          return v11;
        }
      }
      else if ( (*(_BYTE *)(v56 + 21) & 2) == 0 )
      {
        goto LABEL_18;
      }
      sub_971800(a3, " __attribute__((");
      switch ( ((*(_WORD *)(a2 + 18) >> 3) + 8186) & 0x1FFF )
      {
        case 0:
          sub_971800(a3, "__clang_arm_mve_strict_polymorphism");
          break;
        case 7:
          sub_971800(a3, "cfi_unchecked_callee");
          break;
        case 9:
          sub_971800(a3, "ext_vector_type");
          break;
        case 0xF:
          sub_971800(a3, "noderef");
          break;
        case 0x33:
          sub_971800(a3, "aarch64_sve_pcs");
          break;
        case 0x34:
          sub_971800(a3, "aarch64_vector_pcs");
          break;
        case 0x35:
          sub_971800(a3, "acquire_handle");
          break;
        case 0x36:
          sub_971800(a3, "nocf_check");
          break;
        case 0x37:
          sub_971800(a3, "cdecl");
          break;
        case 0x3A:
          v71 = sub_AF8050(*(_QWORD *)(a2 + 32));
          sub_971800(a3, v71);
          break;
        case 0x3B:
          sub_971800(a3, "fastcall");
          break;
        case 0x3C:
          sub_971800(a3, "inteloclbicc");
          break;
        case 0x3F:
          sub_971800(a3, "m68k_rtd");
          break;
        case 0x40:
          sub_971800(a3, "ms_abi");
          break;
        case 0x41:
          sub_971800(a3, "ns_returns_retained");
          break;
        case 0x43:
          sub_971800(a3, "pascal");
          break;
        case 0x44:
          sub_971800(a3, "pcs(");
          for ( i = *(_QWORD *)(a2 + 48); ; i = sub_F44710(v68, (__int64)"pcs(", v64, v65, v66) )
          {
            v68 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 25 <= 1 )
              break;
          }
          if ( (unsigned int)*(unsigned __int8 *)(v68 + 16) - 25 > 1 )
            v68 = sub_F3F310(v68);
          v69 = "\"aapcs\"";
          if ( (unsigned __int8)*(_WORD *)(v68 + 20) >> 2 != 9 )
            v69 = "\"aapcs-vfp\"";
          sub_971800(a3, v69);
          v70 = *(_BYTE **)(a3 + 32);
          if ( (unsigned __int64)v70 >= *(_QWORD *)(a3 + 24) )
          {
            sub_2257CD0(a3, 41);
          }
          else
          {
            *(_QWORD *)(a3 + 32) = v70 + 1;
            *v70 = 41;
          }
          break;
        case 0x48:
          sub_971800(a3, "riscv_vls_cc");
          break;
        case 0x49:
          sub_971800(a3, "riscv_vector_cc");
          break;
        case 0x4A:
          sub_971800(a3, "regcall");
          break;
        case 0x4D:
          sub_971800(a3, "stdcall");
          break;
        case 0x4E:
          sub_971800(a3, "swiftasynccall");
          break;
        case 0x50:
          sub_971800(a3, "swiftcall");
          break;
        case 0x51:
          sub_971800(a3, "sysv_abi");
          break;
        case 0x52:
          sub_971800(a3, "thiscall");
          break;
        case 0x54:
          sub_971800(a3, "vectorcall");
          break;
        default:
          break;
      }
      LOBYTE(v11) = sub_971800(a3, "))");
      a1[1].m128i_i8[5] = v14;
      return v11;
    case 9:
    case 14:
    case 23:
    case 31:
    case 32:
    case 57:
      goto LABEL_29;
    case 11:
      v33 = a1[1].m128i_i8[4];
      a1[1].m128i_i8[4] = 0;
      LOBYTE(v11) = sub_F53190(a1, *(_QWORD *)(a2 + 32), a3);
      a1[1].m128i_i8[4] = v33;
      return v11;
    case 12:
      sub_F53190(a1, *(_QWORD *)(a2 + 32), a3);
      LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2;
      if ( (unsigned __int8)v11 <= 4u )
        LOBYTE(v11) = (unsigned __int8)sub_F4B240(a2, a3, a1);
      return v11;
    case 16:
    case 17:
      v21 = *(_QWORD *)(a2 + 24);
      if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_30;
      return v11;
    case 18:
      sub_971800(a3, " __attribute__((address_space(");
      v22 = *(char **)(a2 + 32);
      if ( v22 )
      {
        v23 = j__strlen("\n");
        sub_EE3EC0(v22, a3, 0, a1, 0, 0, "\n", v23);
      }
      goto LABEL_33;
    case 21:
      if ( a1->m128i_i8[5] < 0 )
      {
        sub_971800(a3, ", ");
        v52 = *(char **)(a2 + 32);
        if ( v52 )
        {
          v53 = j__strlen("\n");
          sub_EE3EC0(v52, a3, 0, a1, 0, 0, "\n", v53);
        }
        sub_971800(a3, ">");
      }
      else
      {
        sub_971800(a3, " __attribute__((ext_vector_type(");
        v47 = *(char **)(a2 + 32);
        if ( v47 )
        {
          v48 = j__strlen("\n");
          sub_EE3EC0(v47, a3, 0, a1, 0, 0, "\n", v48);
        }
LABEL_33:
        sub_971800(a3, ")))");
      }
      goto LABEL_34;
    case 24:
      v50 = a1->m128i_i8[1];
      if ( (v50 & 4) != 0 && (*(_BYTE *)(a2 + 19) & 8) != 0 && *(_QWORD *)(a2 + 48) )
        return v11;
      if ( v50 < 0 )
      {
LABEL_34:
        LOBYTE(v11) = sub_F53190(a1, *(_QWORD *)(a2 + 40), a3);
      }
      else
      {
        a1->m128i_i8[1] |= 0xAu;
        sub_F53190(a1, *(_QWORD *)(a2 + 40), a3);
        LOBYTE(v11) = v50 & 2 | a1->m128i_i8[1] & 0xF5;
        a1->m128i_i8[1] = v11 | v50 & 8;
      }
      return v11;
    case 25:
      v41 = a1[1].m128i_i8[4];
      if ( !v41 )
      {
        v42 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v42 >= *(_QWORD *)(a3 + 24) )
        {
          sub_2257CD0(a3, 41);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v42 + 1;
          *v42 = 41;
        }
        v41 = a1[1].m128i_i8[4];
      }
      a1[1].m128i_i8[4] = 0;
      sub_971800(a3, "()");
      v43 = a1[1].m128i_i8[5];
      v74[0] = *(_WORD *)(a2 + 20) >> 2;
      sub_F4B360(v43, v74, a3);
      LOBYTE(v11) = sub_F53190(a1, *(_QWORD *)(a2 + 24), a3);
      a1[1].m128i_i8[4] = v41;
      return v11;
    case 26:
      LOBYTE(v11) = sub_F50ED0(a1, a2, a3);
      return v11;
    case 27:
      sub_F53190(a1, *(_QWORD *)(a2 + 32), a3);
      v34 = sub_971800(a3, " [[hlsl::resource_class(");
      v35 = sub_AEF980(*(_BYTE *)(a2 + 48));
      v36 = sub_971800(v34, v35);
      sub_971800(v36, ")]]");
      LOBYTE(v11) = *(_BYTE *)(a2 + 49);
      if ( (v11 & 1) != 0 )
      {
        sub_971800(a3, " [[hlsl::is_rov]]");
        LOBYTE(v11) = *(_BYTE *)(a2 + 49);
      }
      if ( (v11 & 2) != 0 )
        LOBYTE(v11) = sub_971800(a3, " [[hlsl::raw_buffer]]");
      v37 = *(_QWORD *)(a2 + 40);
      if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_971800(a3, " [[hlsl::contained_type(");
        sub_F507B0(a1, v37, a3, v38, v39, v40);
        sub_F53190(a1, v37, a3);
        LOBYTE(v11) = sub_971800(a3, ")]]");
      }
      return v11;
    case 30:
      v51 = sub_F39EF0(a2);
      LOBYTE(v11) = sub_F53190(a1, v51, a3);
      return v11;
    case 33:
    case 42:
      v24 = a1->m128i_i8[2];
      v25 = (v24 & 8) != 0;
      if ( (v24 & 0x10) == 0 )
        a1->m128i_i8[2] = v24 & 0xF7;
      v26 = a1[1].m128i_i8[4];
      a1[1].m128i_i8[4] = 0;
      v27 = *(_QWORD *)(a2 + 32);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
      {
        v28 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v28 >= *(_QWORD *)(a3 + 24) )
        {
          sub_2257CD0(a3, 41);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v28 + 1;
          *v28 = 41;
        }
        v27 = *(_QWORD *)(a2 + 32);
      }
      sub_F53190(a1, v27, a3);
      a1[1].m128i_i8[4] = v26;
      goto LABEL_45;
    case 35:
      LOBYTE(v11) = *(_BYTE *)(a2 + 19) >> 2;
      if ( !(_BYTE)v11 )
      {
        v11 = *(_QWORD *)(a2 + 16);
        if ( ((v11 >> 16) & 0x3F8) == 0 && (v11 & 0x100000000LL) == 0 )
          LOBYTE(v11) = sub_F53190(a1, *(_QWORD *)(a2 + 24), a3);
      }
      return v11;
    case 38:
      sub_F53190(a1, *(_QWORD *)(a2 + 32), a3);
      LOBYTE(v11) = sub_971800(a3, "...");
      return v11;
    case 40:
      v21 = *(_QWORD *)(a2 + 32);
      if ( a1[1].m128i_i8[4]
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
      {
        goto LABEL_30;
      }
      v49 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v49 >= *(_QWORD *)(a3 + 24) )
      {
        sub_2257CD0(a3, 41);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v49 + 1;
        *v49 = 41;
      }
LABEL_29:
      v21 = *(_QWORD *)(a2 + 32);
LABEL_30:
      LOBYTE(v11) = sub_F53190(a1, v21, a3);
      return v11;
    case 43:
    case 44:
      v29 = a1->m128i_i8[2];
      v25 = (v29 & 8) != 0;
      if ( (v29 & 0x10) == 0 )
        a1->m128i_i8[2] = v29 & 0xF7;
      v30 = a1[1].m128i_i8[4];
      a1[1].m128i_i8[4] = 0;
      v31 = sub_F4AE40(*(_QWORD *)(a2 + 32));
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
      {
        v32 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v32 >= *(_QWORD *)(a3 + 24) )
        {
          sub_2257CD0(a3, 41);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v32 + 1;
          *v32 = 41;
        }
      }
      sub_F53190(a1, v31, a3);
      a1[1].m128i_i8[4] = v30;
      goto LABEL_45;
    case 46:
      v45 = a1->m128i_i8[2];
      v25 = (v45 & 8) != 0;
      if ( (v45 & 0x10) == 0 )
        a1->m128i_i8[2] = v45 & 0xF7;
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        v46 = *(_QWORD *)(a2 + 48);
      else
        v46 = *(_QWORD *)(a2 + 8);
      sub_F53190(a1, v46, a3);
LABEL_45:
      LOBYTE(v11) = (8 * v25) | a1->m128i_i8[2] & 0xF7;
      a1->m128i_i8[2] = v11;
      return v11;
    case 58:
      sub_F53190(a1, *(_QWORD *)(a2 + 32), a3);
      if ( a1->m128i_i8[5] < 0 )
      {
        sub_971800(a3, ", ");
        sub_2257BD0(a3, *(unsigned int *)(a2 + 20));
        LOBYTE(v11) = sub_971800(a3, ">");
      }
      else
      {
        sub_971800(a3, " __attribute__((ext_vector_type(");
        sub_2257BD0(a3, *(unsigned int *)(a2 + 20));
        LOBYTE(v11) = sub_971800(a3, ")))");
      }
      return v11;
    default:
      LOBYTE(v11) = v7;
      return v11;
  }
}

