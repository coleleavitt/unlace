__m128i *__fastcall sub_33DDB0(__m128i *a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v9; // r13
  void *v11; // r14
  int v12; // eax
  void *v13; // rdi
  int v14; // eax
  void *v15; // r14
  int v16; // eax
  char *v17; // r15
  const char *v18; // r14
  const char *v19; // r13
  void *v20; // rbp
  void *v21; // rbp
  void *v22; // rbp
  void *v23; // rsi
  void *v24; // r15
  void *v25; // r15
  void *v26; // r15
  void *v27; // r15
  int v28; // esi
  char v29; // cl
  char v30; // al
  int v31; // edx
  __int64 v32; // rdx
  char v33; // di
  char v34; // r8
  __int64 v35; // rdx
  char v36; // di
  char v37; // r8
  __int64 v38; // rdx
  char v39; // r8
  char v40; // di
  __int64 v41; // rdx
  char v42; // di
  char v43; // r8
  __int64 v44; // rdx
  char v45; // di
  char v46; // r8
  __int64 v47; // rsi
  void *v48; // r15
  void *v49; // r15
  void *v50; // rax
  void *v51; // rax
  void *v52; // rsi
  void *v53; // rsi
  void *v54; // rsi
  void *v55; // rsi
  const char *v56; // rdi
  void *v57; // rsi
  void *v58; // rsi
  __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  int v62; // [rsp+0h] [rbp-168h]
  int *v63; // [rsp+8h] [rbp-160h]
  unsigned int v64; // [rsp+10h] [rbp-158h]
  std::locale *v65; // [rsp+18h] [rbp-150h]
  char v66; // [rsp+18h] [rbp-150h]
  void *v67; // [rsp+20h] [rbp-148h]
  void *v68; // [rsp+20h] [rbp-148h]
  void *v69; // [rsp+20h] [rbp-148h]
  __int64 *v70; // [rsp+28h] [rbp-140h]
  __int64 v71; // [rsp+30h] [rbp-138h] BYREF
  __int64 v72; // [rsp+38h] [rbp-130h]
  __int64 v73; // [rsp+40h] [rbp-128h] BYREF
  std::ios_base *v74; // [rsp+48h] [rbp-120h]
  __int64 v75; // [rsp+50h] [rbp-118h] BYREF
  __int64 v76; // [rsp+58h] [rbp-110h]
  __int64 v77; // [rsp+60h] [rbp-108h] BYREF
  __int64 v78; // [rsp+68h] [rbp-100h]
  int v79[2]; // [rsp+70h] [rbp-F8h] BYREF
  int v80[2]; // [rsp+78h] [rbp-F0h]
  int v81[2]; // [rsp+80h] [rbp-E8h] BYREF
  int v82[2]; // [rsp+88h] [rbp-E0h]
  int v83[2]; // [rsp+90h] [rbp-D8h] BYREF
  int v84[2]; // [rsp+98h] [rbp-D0h]
  int v85[2]; // [rsp+A0h] [rbp-C8h] BYREF
  int v86[2]; // [rsp+A8h] [rbp-C0h]
  int v87[2]; // [rsp+B0h] [rbp-B8h] BYREF
  int v88[2]; // [rsp+B8h] [rbp-B0h]
  int v89[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+C8h] [rbp-A0h]
  __int64 v91; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-90h]
  __int64 v93; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v94; // [rsp+E8h] [rbp-80h]
  __int64 v95; // [rsp+F0h] [rbp-78h] BYREF
  __int64 v96; // [rsp+F8h] [rbp-70h]
  __int64 v97; // [rsp+100h] [rbp-68h] BYREF
  __int64 v98; // [rsp+108h] [rbp-60h]
  __int64 v99; // [rsp+110h] [rbp-58h] BYREF
  __int64 v100; // [rsp+118h] [rbp-50h]
  __int64 v101; // [rsp+120h] [rbp-48h] BYREF
  __int64 v102; // [rsp+128h] [rbp-40h]
  int v103; // [rsp+130h] [rbp-38h]
  __int64 v104; // [rsp+138h] [rbp-30h]

  if ( !*(_DWORD *)a4 )
  {
    v9 = a3;
    *(_QWORD *)v79 = 0;
    *(_QWORD *)v80 = 0;
    v11 = qword_1C7F2C0;
    *(_QWORD *)v81 = 1;
    *(_QWORD *)v82 = 0;
    v63 = v79;
    if ( (*(_BYTE *)(a4 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v79, a4);
      if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
        goto LABEL_9;
    }
    else if ( (*(_BYTE *)(a4 + 20) & 1) == 0 )
    {
LABEL_9:
      v12 = *(_DWORD *)(a4 + 16);
      LOBYTE(v81[1]) &= ~1u;
      v81[0] = v12;
      goto LABEL_10;
    }
    sub_182C690(v11, v81, a4 + 16);
LABEL_10:
    *(_QWORD *)v83 = 0;
    v13 = qword_1C7F2C0;
    *(_QWORD *)v84 = 0;
    *(_QWORD *)v85 = 1;
    *(_QWORD *)v86 = 0;
    if ( (*(_BYTE *)(a4 + 36) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v83, a4 + 32);
      if ( (*(_BYTE *)(a4 + 52) & 1) == 0 )
        goto LABEL_12;
    }
    else
    {
      v83[0] = *(_DWORD *)(a4 + 32);
      if ( (*(_BYTE *)(a4 + 52) & 1) == 0 )
      {
LABEL_12:
        v14 = *(_DWORD *)(a4 + 48);
        LOBYTE(v85[1]) &= ~1u;
        v85[0] = v14;
        goto LABEL_13;
      }
    }
    sub_182C690(v13, v85, a4 + 48);
LABEL_13:
    *(_QWORD *)v87 = 0;
    v15 = qword_1C7F2C0;
    *(_QWORD *)v88 = 0;
    *(_QWORD *)v89 = 1;
    v90 = 0;
    if ( (*(_BYTE *)(a4 + 68) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v87, a4 + 64);
      if ( (*(_BYTE *)(a4 + 84) & 1) == 0 )
        goto LABEL_15;
    }
    else
    {
      v87[0] = *(_DWORD *)(a4 + 64);
      if ( (*(_BYTE *)(a4 + 84) & 1) == 0 )
      {
LABEL_15:
        v16 = *(_DWORD *)(a4 + 80);
        LOBYTE(v89[1]) &= ~1u;
        v89[0] = v16;
        goto LABEL_16;
      }
    }
    sub_182C690(v15, v89, a4 + 80);
LABEL_16:
    if ( v87[0] < 0 )
    {
      v71 = 0;
      v24 = qword_1C7F2C0;
      v72 = 0;
      v73 = 1;
      v74 = nullptr;
      if ( (v83[1] & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v71, v83);
      else
        LODWORD(v71) = v83[0];
      if ( (v85[1] & 1) != 0 )
      {
        sub_182C690(v24, &v73, v85);
      }
      else
      {
        BYTE4(v73) &= ~1u;
        LODWORD(v73) = v85[0];
      }
      v25 = qword_1C7F2C0;
      v75 = 0;
      v76 = 0;
      v77 = 1;
      v78 = 0;
      sub_182CEF0(qword_1C7F2C0, &v75);
      sub_182CBA0(v25, &v77);
      BYTE4(v77) &= ~1u;
      v26 = qword_1C7F2C0;
      LODWORD(v77) = 1;
      v91 = 0;
      v92 = 0;
      v93 = 1;
      v94 = 0;
      v95 = 0;
      v96 = 0;
      v97 = 1;
      v98 = 0;
      if ( (v71 & 0x100000000LL) != 0 )
      {
        v65 = (std::locale *)&v71;
        sub_182C690(qword_1C7F2C0, &v95, &v71);
      }
      else
      {
        LODWORD(v95) = v71;
        v65 = (std::locale *)&v71;
      }
      if ( (v73 & 0x100000000LL) != 0 )
      {
        sub_182C690(v26, &v97, &v73);
      }
      else
      {
        BYTE4(v97) &= ~1u;
        LODWORD(v97) = v73;
      }
      v99 = 0;
      v27 = qword_1C7F2C0;
      v100 = 0;
      v101 = 1;
      v102 = 0;
      if ( (v75 & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v99, &v75);
      else
        LODWORD(v99) = v75;
      if ( (v77 & 0x100000000LL) != 0 )
      {
        v70 = &v101;
        sub_182C690(v27, &v101, &v77);
        v30 = BYTE4(v101);
        v28 = v101;
        v29 = BYTE4(v101) & 1;
      }
      else
      {
        v28 = v77;
        v29 = 0;
        v70 = &v101;
        v30 = BYTE4(v101);
      }
      v31 = v79[0];
      v79[0] = v91;
      LODWORD(v91) = v31;
      v32 = *(_QWORD *)v80;
      *(_QWORD *)v80 = v92;
      v92 = v32;
      v33 = BYTE4(v91) & 0xFC | v79[1] & 2;
      v34 = v79[1] & 1;
      LOBYTE(v79[1]) = v79[1] & 0xFC | BYTE4(v91) & 2 | BYTE4(v91) & 1;
      BYTE4(v91) = v34 | v33;
      LODWORD(v32) = v81[0];
      v81[0] = v93;
      LODWORD(v93) = v32;
      v35 = *(_QWORD *)v82;
      *(_QWORD *)v82 = v94;
      v94 = v35;
      v36 = BYTE4(v93) & 0xFC | v81[1] & 2;
      v37 = v81[1] & 1;
      LOBYTE(v81[1]) = v81[1] & 0xFC | BYTE4(v93) & 2 | BYTE4(v93) & 1;
      BYTE4(v93) = v37 | v36;
      LODWORD(v35) = v83[0];
      v83[0] = v95;
      LODWORD(v95) = v35;
      v38 = *(_QWORD *)v84;
      *(_QWORD *)v84 = v96;
      v96 = v38;
      v39 = v83[1] & 1;
      v40 = BYTE4(v95) & 0xFC | v83[1] & 2;
      LOBYTE(v83[1]) = v83[1] & 0xFC | BYTE4(v95) & 2 | BYTE4(v95) & 1;
      BYTE4(v95) = v39 | v40;
      LODWORD(v38) = v85[0];
      v85[0] = v97;
      LODWORD(v97) = v38;
      v41 = *(_QWORD *)v86;
      *(_QWORD *)v86 = v98;
      v98 = v41;
      v42 = BYTE4(v97) & 0xFC | v85[1] & 2;
      v43 = v85[1] & 1;
      LOBYTE(v85[1]) = v85[1] & 0xFC | BYTE4(v97) & 2 | BYTE4(v97) & 1;
      BYTE4(v97) = v43 | v42;
      LODWORD(v41) = v87[0];
      v87[0] = v99;
      LODWORD(v99) = v41;
      v44 = *(_QWORD *)v88;
      *(_QWORD *)v88 = v100;
      v100 = v44;
      v45 = BYTE4(v99) & 0xFC | v87[1] & 2;
      v46 = v87[1] & 1;
      LOBYTE(v87[1]) = v87[1] & 0xFC | BYTE4(v99) & 2 | BYTE4(v99) & 1;
      BYTE4(v99) = v46 | v45;
      LODWORD(v44) = v89[0];
      v89[0] = v28;
      LODWORD(v101) = v44;
      v47 = v102;
      v102 = v90;
      v90 = v47;
      v68 = qword_1C7F2C0;
      LOBYTE(v44) = v30 & 0xFC | v89[1] & 3;
      LOBYTE(v89[1]) = v89[1] & 0xFC | v29 | v30 & 2;
      BYTE4(v101) = v44;
      sub_182CBA0(qword_1C7F2C0, &v99);
      sub_182CBA0(v68, &v101);
      v69 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v95);
      sub_182CBA0(v69, &v97);
      v67 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v91);
      sub_182CBA0(v67, &v93);
      v48 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v75);
      sub_182CBA0(v48, &v77);
      v49 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v71);
      sub_182CBA0(v49, &v73);
    }
    v17 = sub_33D9C0((__int64)a2);
    v64 = *(_DWORD *)(a2[116] + 4 * v9);
    v18 = *(const char **)(*(_QWORD *)(*(_QWORD *)v17 - 8LL) + 8LL);
    if ( v18 == "N3smt12theory_arithINS_7inf_extEEE"
      || (v19 = &v18[*v18 == 42], !strcmp("N3smt12theory_arithINS_7inf_extEEE", v19)) )
    {
      if ( !__dynamic_cast(
              v17,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_arith<smt::inf_ext>,
              56) )
        __cxa_bad_cast();
      sub_A54BE0(
        (int)a1,
        v62,
        (int)v79,
        v64,
        v65,
        (int)v67,
        (int)v70,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79[0],
        v80[0],
        v81[0],
        v82[0],
        v83[0],
        v84[0],
        v85[0],
        v86[0],
        v87[0],
        v88[0],
        v89[0],
        v90,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104);
      goto LABEL_21;
    }
    if ( v18 == "N3smt12theory_arithINS_6mi_extEEE" || !strcmp("N3smt12theory_arithINS_6mi_extEEE", v19) )
    {
      v50 = __dynamic_cast(
              v17,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_arith<smt::mi_ext>,
              56);
      if ( !v50 )
        __cxa_bad_cast();
      sub_A14FE0((_DWORD)a1, (_DWORD)v50);
      goto LABEL_21;
    }
    if ( v18 == "N3smt12theory_arithINS_5i_extEEE" || !strcmp("N3smt12theory_arithINS_5i_extEEE", v19) )
    {
      v51 = __dynamic_cast(
              v17,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_arith<smt::i_ext>,
              56);
      if ( !v51 )
        __cxa_bad_cast();
      sub_A48D20((_DWORD)a1, (_DWORD)v51);
      goto LABEL_21;
    }
    if ( v18 == "N3smt17theory_diff_logicINS_7idl_extEEE" || !strcmp("N3smt17theory_diff_logicINS_7idl_extEEE", v19) )
    {
      v52 = __dynamic_cast(
              v17,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_diff_logic<smt::idl_ext>,
              56);
      if ( !v52 )
        __cxa_bad_cast();
      sub_8A6C70(a1, v52, a2[112], v64, v79);
      goto LABEL_21;
    }
    if ( v18 == "N3smt17theory_diff_logicINS_7rdl_extEEE" || !strcmp("N3smt17theory_diff_logicINS_7rdl_extEEE", v19) )
    {
      v53 = __dynamic_cast(
              v17,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_diff_logic<smt::rdl_ext>,
              56);
      if ( !v53 )
        __cxa_bad_cast();
      sub_8A77D0(a1, v53, a2[112], v64, v79);
      goto LABEL_21;
    }
    if ( v18 == "N3smt23theory_dense_diff_logicINS_5i_extEEE"
      || !strcmp("N3smt23theory_dense_diff_logicINS_5i_extEEE", v19) )
    {
      if ( !v87[0] )
      {
        v54 = __dynamic_cast(
                v17,
                (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
                (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::i_ext>,
                56);
        if ( !v54 )
          __cxa_bad_cast();
        sub_9218E0(a1, v54, a2[112], v64, v79);
        goto LABEL_21;
      }
      if ( v18 == "N3smt23theory_dense_diff_logicINS_6mi_extEEE" )
      {
LABEL_80:
        v66 = 1;
LABEL_35:
        if ( "N3smt10theory_lraE" == v18
          || `typeinfo name for'smt::theory_lra[0] != 42 && !strcmp("N3smt10theory_lraE", v19) )
        {
          v23 = __dynamic_cast(
                  v17,
                  (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
                  (const struct __class_type_info *)&`typeinfo for'smt::theory_lra,
                  56);
          if ( !v23 )
            __cxa_bad_cast();
          sub_A76030(a1, v23, a2[112], v64, v83);
          goto LABEL_21;
        }
        v56 = "N3smt23theory_dense_diff_logicINS_6si_extEEE";
        if ( v18 == "N3smt23theory_dense_diff_logicINS_6si_extEEE"
          || !strcmp("N3smt23theory_dense_diff_logicINS_6si_extEEE", v19) )
        {
          if ( !v87[0] )
          {
            v58 = __dynamic_cast(
                    v17,
                    (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
                    (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::si_ext>,
                    56);
            if ( !v58 )
              __cxa_bad_cast();
            sub_9236E0(a1, v58, a2[112], v64, v79);
            goto LABEL_21;
          }
        }
        else
        {
          v56 = "N3smt23theory_dense_diff_logicINS_7smi_extEEE";
          if ( (v18 == "N3smt23theory_dense_diff_logicINS_7smi_extEEE"
             || !strcmp("N3smt23theory_dense_diff_logicINS_7smi_extEEE", v19))
            && !v87[0] )
          {
            v57 = __dynamic_cast(
                    v17,
                    (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
                    (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::smi_ext>,
                    56);
            if ( !v57 )
              __cxa_bad_cast();
            sub_922930(a1, v57, a2[112], v64, v79);
            goto LABEL_21;
          }
        }
        if ( !v66 )
        {
          sub_180B130(v56);
          if ( (unsigned __int8)sub_186A530() )
          {
            sub_186A4C0();
            sub_180B150();
            std::__ostream_insert<char,std::char_traits<char>>();
            v59 = std::operator<<<std::char_traits<char>>();
            std::operator<<<std::char_traits<char>>();
            sub_186A500(v59, "\n");
          }
          else
          {
            sub_180B150();
            std::__ostream_insert<char,std::char_traits<char>>();
            std::operator<<<std::char_traits<char>>();
            std::operator<<<std::char_traits<char>>();
          }
          v60 = a2[111];
          v61 = *(_QWORD *)(v60 + 856);
          *a1 = _mm_unpacklo_epi64((__m128i)v61, (__m128i)v60);
          if ( v61 )
            ++*(_DWORD *)(v61 + 8);
          goto LABEL_21;
        }
        v55 = __dynamic_cast(
                v17,
                (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
                (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::mi_ext>,
                56);
        if ( !v55 )
          __cxa_bad_cast();
        goto LABEL_78;
      }
    }
    else if ( v18 == "N3smt23theory_dense_diff_logicINS_6mi_extEEE" )
    {
LABEL_76:
      if ( !v87[0] )
      {
        v55 = __dynamic_cast(
                v17,
                (const struct __class_type_info *)&`typeinfo for'smt::theory_opt,
                (const struct __class_type_info *)&`typeinfo for'smt::theory_dense_diff_logic<smt::mi_ext>,
                56);
        if ( !v55 )
          __cxa_bad_cast();
LABEL_78:
        sub_920700(a1, v55, a2[112], v64, v79);
LABEL_21:
        v20 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v87);
        sub_182CBA0(v20, v89);
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v83);
        sub_182CBA0(v21, v85);
        v22 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v63);
        sub_182CBA0(v22, v81);
        return a1;
      }
      goto LABEL_80;
    }
    if ( strcmp("N3smt23theory_dense_diff_logicINS_6mi_extEEE", v19) )
    {
      v66 = 0;
      goto LABEL_35;
    }
    goto LABEL_76;
  }
  v6 = a2[111];
  v7 = *(_QWORD *)(v6 + 864);
  if ( *(int *)a4 <= 0 )
    v7 = *(_QWORD *)(v6 + 856);
  *a1 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v6);
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  return a1;
}

