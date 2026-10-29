char __fastcall sub_F75F20(__m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  char v8; // kr00_1
  unsigned __int64 v12; // rax
  int v13; // eax
  bool v14; // al
  __int8 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  _BYTE *v19; // rax
  int v20; // eax
  char *v21; // r15
  size_t v22; // rax
  _BYTE *v23; // rax
  __int64 v24; // rsi
  char *v25; // r15
  size_t v26; // rax
  __int8 v27; // dl
  bool v28; // r13
  __int8 v29; // r14
  __int64 v30; // rsi
  _BYTE *v31; // rax
  __int64 v32; // rdx
  __int8 v33; // r14
  __int64 v34; // rbx
  _BYTE *v35; // rax
  __int8 v36; // r13
  __int64 v37; // r13
  char *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int8 v44; // r13
  _BYTE *v45; // rax
  char v46; // di
  _BYTE *v47; // rax
  __int8 v48; // dl
  __int64 v49; // rsi
  char *v50; // r13
  size_t v51; // rax
  _BYTE *v52; // rax
  char v53; // r13
  __int64 v54; // rax
  char *v55; // r15
  size_t v56; // rax
  _BYTE *v57; // rax
  _BYTE *v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 *v61; // r15
  __int64 *v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 i; // rax
  __int64 v71; // rdi
  const char *v72; // rsi
  _BYTE *v73; // rax
  char *v74; // rax
  size_t v76; // [rsp+0h] [rbp-50h]
  unsigned __int16 v77[5]; // [rsp+16h] [rbp-3Ah] BYREF
  __int64 v78; // [rsp+20h] [rbp-30h]
  __int64 v79; // [rsp+28h] [rbp-28h]
  __int64 v80; // [rsp+30h] [rbp-20h]

  v8 = v4;
  v80 = v7;
  v79 = v6;
  v78 = v5;
  LOBYTE(v12) = *(_BYTE *)(a2 + 16);
  switch ( (char)v12 )
  {
    case 0:
    case 1:
      goto LABEL_34;
    case 2:
    case 3:
      LOBYTE(v12) = sub_F77390();
      return v12;
    case 4:
      v47 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v47 >= *(_QWORD *)(a3 + 24) )
      {
        sub_227BA10(a3, 91);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v47 + 1;
        *v47 = 91;
      }
      goto LABEL_25;
    case 5:
      sub_995540(a3, "[]");
      LOBYTE(v12) = sub_F76ED0(a1, *(_QWORD *)(a2 + 32), a3);
      return v12;
    case 6:
      v19 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v19 >= *(_QWORD *)(a3 + 24) )
      {
        sub_227BA10(a3, 91);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v19 + 1;
        *v19 = 91;
      }
      if ( ((*(_BYTE *)(a2 + 18) >> 3) & 7) != 0 )
      {
        sub_F6EE50(a3, (*(_BYTE *)(a2 + 18) >> 3) & 7, (a1->m128i_i8[3] & 4) != 0);
        v57 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v57 >= *(_QWORD *)(a3 + 24) )
        {
          sub_227BA10(a3, 32);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v57 + 1;
          *v57 = 32;
        }
      }
      v20 = (*(_WORD *)(a2 + 18) >> 6) & 7;
      if ( v20 == 1 )
      {
        sub_995540(a3, "static ");
      }
      else if ( v20 == 2 )
      {
        v58 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v58 >= *(_QWORD *)(a3 + 24) )
        {
          sub_227BA10(a3, 42);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v58 + 1;
          *v58 = 42;
        }
      }
LABEL_25:
      v21 = *(char **)(a2 + 40);
      if ( v21 )
      {
        v22 = j__strlen("\n");
        sub_F07C00(v21, a3, 0, a1, 0, 0, "\n", v22);
      }
      v23 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v23 >= *(_QWORD *)(a3 + 24) )
      {
        sub_227BA10(a3, 93);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v23 + 1;
        *v23 = 93;
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
      return v12;
    case 8:
      v13 = *(_WORD *)(a2 + 18) >> 3;
      if ( v13 == 24 || v13 == 72 )
      {
        LOBYTE(v12) = sub_F76ED0(a1, *(_QWORD *)(a2 + 48), a3);
        return v12;
      }
      v14 = sub_F5E2E0(a2);
      v15 = a1[1].m128i_i8[5];
      a1[1].m128i_i8[5] = v14;
      v16 = *(_QWORD *)(a2 + 40);
      sub_F76ED0(a1, v16, a3);
      LOWORD(v12) = *(_WORD *)(a2 + 18) >> 3;
      if ( (_WORD)v12 == 26 )
        goto LABEL_18;
      LOBYTE(v12) = sub_F5E2A0(a2);
      if ( (_BYTE)v12 )
        goto LABEL_18;
      LOWORD(v12) = (unsigned __int16)sub_F5E940(a2) >> 8;
      if ( (_WORD)v12 )
        goto LABEL_18;
      LOBYTE(v12) = sub_F5E2D0(a2);
      if ( (_BYTE)v12 )
        goto LABEL_18;
      LOWORD(v12) = *(_WORD *)(a2 + 18);
      v18 = (unsigned __int16)v12 >> 3;
      if ( (_DWORD)v18 == 25 )
        goto LABEL_18;
      if ( (_DWORD)v18 != 71 )
        goto LABEL_10;
      v59 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      LODWORD(v12) = *(unsigned __int8 *)(v59 + 16) - 25;
      if ( (unsigned int)v12 > 1 )
      {
        v12 = sub_F63050(v59, v16, v18, v17);
        if ( (*(_BYTE *)(v12 + 21) & 2) == 0 )
          goto LABEL_18;
        LOWORD(v12) = *(_WORD *)(a2 + 18);
LABEL_10:
        LODWORD(v12) = (unsigned __int16)v12 >> 3;
        switch ( (_DWORD)v12 )
        {
          case 0x43:
            LOBYTE(v12) = sub_995540(a3, " [[clang::lifetimebound]]");
            goto LABEL_18;
          case 0x44:
            sub_995540(a3, " [[clang::lifetime_capture_by(");
            v60 = *(_QWORD *)(a2 + 32);
            if ( v60 )
            {
              if ( *(_WORD *)(v60 + 36) == 68 )
              {
                v61 = *(__int64 **)(v60 + 56);
                v62 = &v61[*(_QWORD *)(v60 + 64)];
                v76 = j__strlen(", ");
                if ( v61 != v62 )
                {
                  while ( 1 )
                  {
                    v63 = *v61++;
                    sub_9954E0(a3, (const void *)(*(_QWORD *)(v63 + 16) + 16LL), **(unsigned int **)(v63 + 16));
                    if ( v62 == v61 )
                      break;
                    sub_9954E0(a3, ", ", v76);
                  }
                }
              }
            }
            LOBYTE(v12) = sub_995540(a3, ")]]");
            goto LABEL_18;
          case 0:
            goto LABEL_18;
          case 2:
            LOBYTE(v12) = sub_995540(a3, " [[clang::annotate_type(...)]]");
            goto LABEL_18;
          case 9:
            LOBYTE(v12) = sub_995540(a3, "__arm_streaming");
            goto LABEL_18;
          case 0xA:
            LOBYTE(v12) = sub_995540(a3, "__arm_streaming_compatible");
            goto LABEL_18;
          case 0x55:
            v64 = *(_QWORD *)(a2 + 32);
            if ( v64 && *(_WORD *)(v64 + 36) == 85 )
            {
              v65 = sub_995540(a3, " __attribute__((swift_attr(\"");
              v66 = sub_9954E0(v65, *(const void **)(v64 + 48), *(unsigned int *)(v64 + 40));
              LOBYTE(v12) = sub_995540(v66, "\")))");
            }
            goto LABEL_18;
        }
        LODWORD(v12) = v12 - 75;
        if ( (unsigned int)v12 <= 2 )
        {
LABEL_18:
          a1[1].m128i_i8[5] = v15;
          return v12;
        }
      }
      else if ( (*(_BYTE *)(v59 + 21) & 2) == 0 )
      {
        goto LABEL_18;
      }
      sub_995540(a3, " __attribute__((");
      switch ( ((*(_WORD *)(a2 + 18) >> 3) + 8186) & 0x1FFF )
      {
        case 0:
          sub_995540(a3, "__clang_arm_mve_strict_polymorphism");
          break;
        case 7:
          sub_995540(a3, "cfi_unchecked_callee");
          break;
        case 9:
          sub_995540(a3, "ext_vector_type");
          break;
        case 0xF:
          sub_995540(a3, "noderef");
          break;
        case 0x33:
          sub_995540(a3, "aarch64_sve_pcs");
          break;
        case 0x34:
          sub_995540(a3, "aarch64_vector_pcs");
          break;
        case 0x35:
          sub_995540(a3, "acquire_handle");
          break;
        case 0x36:
          sub_995540(a3, "nocf_check");
          break;
        case 0x37:
          sub_995540(a3, "cdecl");
          break;
        case 0x3A:
          v74 = sub_B1BD90(*(_QWORD *)(a2 + 32));
          sub_995540(a3, v74);
          break;
        case 0x3B:
          sub_995540(a3, "fastcall");
          break;
        case 0x3C:
          sub_995540(a3, "inteloclbicc");
          break;
        case 0x3F:
          sub_995540(a3, "m68k_rtd");
          break;
        case 0x40:
          sub_995540(a3, "ms_abi");
          break;
        case 0x41:
          sub_995540(a3, "ns_returns_retained");
          break;
        case 0x43:
          sub_995540(a3, "pascal");
          break;
        case 0x44:
          sub_995540(a3, "pcs(");
          for ( i = *(_QWORD *)(a2 + 48); ; i = sub_F68450(v71, (__int64)"pcs(", v67, v68, v69) )
          {
            v71 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 25 <= 1 )
              break;
          }
          if ( (unsigned int)*(unsigned __int8 *)(v71 + 16) - 25 > 1 )
            v71 = sub_F63050(v71, "pcs(", v67, v68);
          v72 = "\"aapcs\"";
          if ( (unsigned __int8)*(_WORD *)(v71 + 20) >> 2 != 9 )
            v72 = "\"aapcs-vfp\"";
          sub_995540(a3, v72);
          v73 = *(_BYTE **)(a3 + 32);
          if ( (unsigned __int64)v73 >= *(_QWORD *)(a3 + 24) )
          {
            sub_227BA10(a3, 41);
          }
          else
          {
            *(_QWORD *)(a3 + 32) = v73 + 1;
            *v73 = 41;
          }
          break;
        case 0x48:
          sub_995540(a3, "riscv_vls_cc");
          break;
        case 0x49:
          sub_995540(a3, "riscv_vector_cc");
          break;
        case 0x4A:
          sub_995540(a3, "regcall");
          break;
        case 0x4D:
          sub_995540(a3, "stdcall");
          break;
        case 0x4E:
          sub_995540(a3, "swiftasynccall");
          break;
        case 0x50:
          sub_995540(a3, "swiftcall");
          break;
        case 0x51:
          sub_995540(a3, "sysv_abi");
          break;
        case 0x52:
          sub_995540(a3, "thiscall");
          break;
        case 0x54:
          sub_995540(a3, "vectorcall");
          break;
        default:
          break;
      }
      LOBYTE(v12) = sub_995540(a3, "))");
      a1[1].m128i_i8[5] = v15;
      return v12;
    case 9:
    case 14:
    case 23:
    case 31:
    case 32:
    case 57:
      goto LABEL_29;
    case 11:
      v36 = a1[1].m128i_i8[4];
      a1[1].m128i_i8[4] = 0;
      LOBYTE(v12) = sub_F76ED0(a1, *(_QWORD *)(a2 + 32), a3);
      a1[1].m128i_i8[4] = v36;
      return v12;
    case 12:
      sub_F76ED0(a1, *(_QWORD *)(a2 + 32), a3);
      LOBYTE(v12) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2;
      if ( (unsigned __int8)v12 <= 4u )
        LOBYTE(v12) = (unsigned __int8)sub_F6EF80(a2, a3, a1);
      return v12;
    case 16:
    case 17:
      v24 = *(_QWORD *)(a2 + 24);
      if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_30;
      return v12;
    case 18:
      sub_995540(a3, " __attribute__((address_space(");
      v25 = *(char **)(a2 + 32);
      if ( v25 )
      {
        v26 = j__strlen("\n");
        sub_F07C00(v25, a3, 0, a1, 0, 0, "\n", v26);
      }
      goto LABEL_33;
    case 21:
      if ( a1->m128i_i8[5] < 0 )
      {
        sub_995540(a3, ", ");
        v55 = *(char **)(a2 + 32);
        if ( v55 )
        {
          v56 = j__strlen("\n");
          sub_F07C00(v55, a3, 0, a1, 0, 0, "\n", v56);
        }
        sub_995540(a3, ">");
      }
      else
      {
        sub_995540(a3, " __attribute__((ext_vector_type(");
        v50 = *(char **)(a2 + 32);
        if ( v50 )
        {
          v51 = j__strlen("\n");
          sub_F07C00(v50, a3, 0, a1, 0, 0, "\n", v51);
        }
LABEL_33:
        sub_995540(a3, ")))");
      }
      goto LABEL_34;
    case 24:
      v53 = a1->m128i_i8[1];
      if ( (v53 & 4) != 0 && (*(_BYTE *)(a2 + 19) & 8) != 0 && *(_QWORD *)(a2 + 48) )
        return v12;
      if ( v53 < 0 )
      {
LABEL_34:
        LOBYTE(v12) = sub_F76ED0(a1, *(_QWORD *)(a2 + 40), a3);
      }
      else
      {
        a1->m128i_i8[1] |= 0xAu;
        sub_F76ED0(a1, *(_QWORD *)(a2 + 40), a3);
        LOBYTE(v12) = v53 & 2 | a1->m128i_i8[1] & 0xF5;
        a1->m128i_i8[1] = v12 | v53 & 8;
      }
      return v12;
    case 25:
      v44 = a1[1].m128i_i8[4];
      if ( !v44 )
      {
        v45 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v45 >= *(_QWORD *)(a3 + 24) )
        {
          sub_227BA10(a3, 41);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v45 + 1;
          *v45 = 41;
        }
        v44 = a1[1].m128i_i8[4];
      }
      a1[1].m128i_i8[4] = 0;
      sub_995540(a3, "()");
      v46 = a1[1].m128i_i8[5];
      v77[0] = *(_WORD *)(a2 + 20) >> 2;
      sub_F6F0A0(v46, v77, a3);
      LOBYTE(v12) = sub_F76ED0(a1, *(_QWORD *)(a2 + 24), a3);
      a1[1].m128i_i8[4] = v44;
      return v12;
    case 26:
      LOBYTE(v12) = sub_F74C10(a1, a2, a3);
      return v12;
    case 27:
      sub_F76ED0(a1, *(_QWORD *)(a2 + 32), a3);
      v37 = sub_995540(a3, " [[hlsl::resource_class(");
      v38 = sub_B136C0(*(_BYTE *)(a2 + 48));
      v39 = sub_995540(v37, v38);
      sub_995540(v39, ")]]");
      LOBYTE(v12) = *(_BYTE *)(a2 + 49);
      if ( (v12 & 1) != 0 )
      {
        sub_995540(a3, " [[hlsl::is_rov]]");
        LOBYTE(v12) = *(_BYTE *)(a2 + 49);
      }
      if ( (v12 & 2) != 0 )
        LOBYTE(v12) = sub_995540(a3, " [[hlsl::raw_buffer]]");
      v40 = *(_QWORD *)(a2 + 40);
      if ( (v40 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_995540(a3, " [[hlsl::contained_type(");
        sub_F744F0(a1, v40, a3, v41, v42, v43);
        sub_F76ED0(a1, v40, a3);
        LOBYTE(v12) = sub_995540(a3, ")]]");
      }
      return v12;
    case 30:
      v54 = sub_F5DC30(a2);
      LOBYTE(v12) = sub_F76ED0(a1, v54, a3);
      return v12;
    case 33:
    case 42:
      v27 = a1->m128i_i8[2];
      v28 = (v27 & 8) != 0;
      if ( (v27 & 0x10) == 0 )
        a1->m128i_i8[2] = v27 & 0xF7;
      v29 = a1[1].m128i_i8[4];
      a1[1].m128i_i8[4] = 0;
      v30 = *(_QWORD *)(a2 + 32);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
      {
        v31 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v31 >= *(_QWORD *)(a3 + 24) )
        {
          sub_227BA10(a3, 41);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v31 + 1;
          *v31 = 41;
        }
        v30 = *(_QWORD *)(a2 + 32);
      }
      sub_F76ED0(a1, v30, a3);
      a1[1].m128i_i8[4] = v29;
      goto LABEL_45;
    case 35:
      LOBYTE(v12) = *(_BYTE *)(a2 + 19) >> 2;
      if ( !(_BYTE)v12 )
      {
        v12 = *(_QWORD *)(a2 + 16);
        if ( ((v12 >> 16) & 0x3F8) == 0 && (v12 & 0x100000000LL) == 0 )
          LOBYTE(v12) = sub_F76ED0(a1, *(_QWORD *)(a2 + 24), a3);
      }
      return v12;
    case 38:
      sub_F76ED0(a1, *(_QWORD *)(a2 + 32), a3);
      LOBYTE(v12) = sub_995540(a3, "...");
      return v12;
    case 40:
      v24 = *(_QWORD *)(a2 + 32);
      if ( a1[1].m128i_i8[4]
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
      {
        goto LABEL_30;
      }
      v52 = *(_BYTE **)(a3 + 32);
      if ( (unsigned __int64)v52 >= *(_QWORD *)(a3 + 24) )
      {
        sub_227BA10(a3, 41);
      }
      else
      {
        *(_QWORD *)(a3 + 32) = v52 + 1;
        *v52 = 41;
      }
LABEL_29:
      v24 = *(_QWORD *)(a2 + 32);
LABEL_30:
      LOBYTE(v12) = sub_F76ED0(a1, v24, a3);
      return v12;
    case 43:
    case 44:
      v32 = a1->m128i_u8[2];
      v28 = (a1->m128i_i8[2] & 8) != 0;
      if ( (v32 & 0x10) == 0 )
      {
        v32 = (unsigned int)v32 & 0xFFFFFFF7;
        a1->m128i_i8[2] = v32;
      }
      v33 = a1[1].m128i_i8[4];
      a1[1].m128i_i8[4] = 0;
      v34 = sub_F6EB80(*(_QWORD *)(a2 + 32), a2, v32, a4);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
      {
        v35 = *(_BYTE **)(a3 + 32);
        if ( (unsigned __int64)v35 >= *(_QWORD *)(a3 + 24) )
        {
          sub_227BA10(a3, 41);
        }
        else
        {
          *(_QWORD *)(a3 + 32) = v35 + 1;
          *v35 = 41;
        }
      }
      sub_F76ED0(a1, v34, a3);
      a1[1].m128i_i8[4] = v33;
      goto LABEL_45;
    case 46:
      v48 = a1->m128i_i8[2];
      v28 = (v48 & 8) != 0;
      if ( (v48 & 0x10) == 0 )
        a1->m128i_i8[2] = v48 & 0xF7;
      if ( (*(_BYTE *)(a2 + 18) & 8) != 0 )
        v49 = *(_QWORD *)(a2 + 48);
      else
        v49 = *(_QWORD *)(a2 + 8);
      sub_F76ED0(a1, v49, a3);
LABEL_45:
      LOBYTE(v12) = (8 * v28) | a1->m128i_i8[2] & 0xF7;
      a1->m128i_i8[2] = v12;
      return v12;
    case 58:
      sub_F76ED0(a1, *(_QWORD *)(a2 + 32), a3);
      if ( a1->m128i_i8[5] < 0 )
      {
        sub_995540(a3, ", ");
        sub_227B910(a3, *(unsigned int *)(a2 + 20));
        LOBYTE(v12) = sub_995540(a3, ">");
      }
      else
      {
        sub_995540(a3, " __attribute__((ext_vector_type(");
        sub_227B910(a3, *(unsigned int *)(a2 + 20));
        LOBYTE(v12) = sub_995540(a3, ")))");
      }
      return v12;
    default:
      LOBYTE(v12) = v8;
      return v12;
  }
}
