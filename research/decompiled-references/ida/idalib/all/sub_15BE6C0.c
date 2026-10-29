unsigned __int64 __fastcall sub_15BE6C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // r13d
  __int64 *v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // r9
  __int64 *v25; // r8
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // r9
  __int64 *v39; // r8
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __m128i si128; // xmm0
  unsigned int v51; // eax
  _QWORD *v52; // r15
  __int64 v53; // rsi
  __int64 v54; // rbp
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // r9
  _QWORD *v57; // rsi
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdi
  unsigned __int64 v64; // rbx
  __m128i *v65; // rdi
  __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __m128i v69; // xmm0
  unsigned int v70; // eax
  _QWORD *v71; // rbp
  __int64 v72; // rsi
  unsigned __int64 v73; // rsi
  void *v74; // rbx
  unsigned __int64 v75; // rax
  __int64 v76; // r15
  unsigned __int8 v77; // al
  __int64 v78; // rbx
  __int64 v79; // rax
  unsigned int v80; // eax
  void *v81; // rdx
  unsigned __int64 v82; // rbx
  unsigned __int64 v83; // rax
  __int64 v84; // [rsp+10h] [rbp-68h]
  __int64 v85; // [rsp+10h] [rbp-68h]
  __int64 *v86; // [rsp+10h] [rbp-68h]
  __int64 v87; // [rsp+10h] [rbp-68h]
  __int64 v89; // [rsp+18h] [rbp-60h]
  __int64 v90; // [rsp+18h] [rbp-60h]
  __int64 v91; // [rsp+18h] [rbp-60h]
  int v92; // [rsp+18h] [rbp-60h]
  int v93; // [rsp+18h] [rbp-60h]
  __int64 v94; // [rsp+18h] [rbp-60h]
  __int64 v95; // [rsp+18h] [rbp-60h]
  __int64 v96; // [rsp+20h] [rbp-58h]
  __int64 *v97; // [rsp+20h] [rbp-58h]
  __int64 *v98; // [rsp+20h] [rbp-58h]
  unsigned __int64 v99; // [rsp+28h] [rbp-50h]
  void *v100; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v101; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD **)(a1 + 248);
  v7 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v5 & 4) != 0 )
    v7 = (_QWORD *)*v7;
  v8 = v6[2188];
  v9 = sub_2244B30("element_type", 12);
  v11 = sub_2244CB0(v8, "element_type", 12, v9);
  v12 = (__int64 *)(*(_QWORD *)v8 + 8LL * v11);
  if ( *v12 )
  {
    if ( *v12 != -8 )
    {
      sub_989490((__int64 **)&v100, v12, 0);
      v14 = *(_QWORD *)v100;
      v15 = *(_QWORD **)(*(_QWORD *)v100 + 8LL);
      if ( v15 )
        goto LABEL_27;
      goto LABEL_6;
    }
    --*(_DWORD *)(v8 + 16);
  }
  v34 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 104) += 29LL;
  v35 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v8 + 32) >= v35 + 29 && v34 )
  {
    *(_QWORD *)(v8 + 24) = v35 + 29;
  }
  else
  {
    v86 = v12;
    v35 = sub_986170(v8 + 24, 29, 29, 3, (__int64)v12, v10);
    v12 = v86;
  }
  strcpy((char *)(v35 + 16), "element_type");
  *(_QWORD *)v35 = 12;
  *(_QWORD *)(v35 + 8) = 0;
  *v12 = v35;
  ++*(_DWORD *)(v8 + 12);
  v36 = sub_22450D0(v8, v11);
  sub_989490((__int64 **)&v100, (__int64 *)(*(_QWORD *)v8 + 8LL * v36), 0);
  v14 = *(_QWORD *)v100;
  v15 = *(_QWORD **)(*(_QWORD *)v100 + 8LL);
  if ( v15 )
  {
LABEL_27:
    v19 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) == 0 )
      goto LABEL_12;
    goto LABEL_28;
  }
LABEL_6:
  v16 = *(_QWORD *)(v8 + 120);
  if ( v16 )
  {
    v84 = v14;
    v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v16 + 16LL))(
                      v16,
                      "element_type",
                      12);
    v14 = v84;
    *(_QWORD *)(v84 + 8) = v15;
    if ( v15 )
      goto LABEL_27;
  }
  v17 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 104) += 24LL;
  v15 = (_QWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( *(_QWORD *)(v8 + 32) >= (unsigned __int64)(v15 + 3) && v17 )
  {
    *(_QWORD *)(v8 + 24) = v15 + 3;
  }
  else
  {
    v87 = v14;
    v15 = (_QWORD *)sub_986170(v8 + 24, 24, 24, 3, v14, v13);
    v14 = v87;
  }
  v18 = *v15 & 0xFFFFF80000000000LL;
  v15[1] = 0;
  *v15 = v18 | 0x1FFFC05;
  *(_QWORD *)(v14 + 8) = v15;
  v15[2] = v14;
  v19 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
LABEL_28:
    v19 = (_QWORD *)*v19;
LABEL_12:
  v20 = sub_BBE1D0(v6, (__int64)v19, 0, 0, 0, 0, (__int64)v15, 1, 0, 0, 0);
  sub_B8C080(v20, (__int64)v7);
  *(_BYTE *)(v20 + 29) |= 8u;
  v100 = (void *)v20;
  v21 = sub_BC21A0(v6, 0, 0, (__int64)&v100, 1, 0, nullptr);
  v22 = v6[2188];
  v85 = v21;
  if ( a3 )
  {
    v23 = sub_2244B30("__is_typed_resource_element_compatible", 38);
    v24 = (unsigned int)sub_2244CB0(v22, "__is_typed_resource_element_compatible", 38, v23);
    v25 = (__int64 *)(*(_QWORD *)v22 + 8 * v24);
    if ( *v25 )
    {
      if ( *v25 != -8 )
      {
        sub_989490((__int64 **)&v100, v25, 0);
        v29 = *(_QWORD *)v100;
        v30 = *(_QWORD *)(*(_QWORD *)v100 + 8LL);
        if ( !v30 )
          goto LABEL_16;
        goto LABEL_43;
      }
      --*(_DWORD *)(v22 + 16);
    }
    v48 = *(_QWORD *)(v22 + 24);
    *(_QWORD *)(v22 + 104) += 55LL;
    v49 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v22 + 32) >= v49 + 55 && v48 )
    {
      *(_QWORD *)(v22 + 24) = v49 + 55;
    }
    else
    {
      v98 = v25;
      v93 = v24;
      v49 = sub_986170(v22 + 24, 55, 55, 3, (__int64)v25, v24);
      v25 = v98;
      LODWORD(v24) = v93;
    }
    *(__m128i *)(v49 + 16) = _mm_load_si128((const __m128i *)&xmmword_23AA800);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA810);
    strcpy((char *)(v49 + 48), "atible");
    *(__m128i *)(v49 + 32) = si128;
    *(_QWORD *)v49 = 38;
    *(_QWORD *)(v49 + 8) = 0;
    *v25 = v49;
    ++*(_DWORD *)(v22 + 12);
    v51 = sub_22450D0(v22, (unsigned int)v24);
    sub_989490((__int64 **)&v100, (__int64 *)(*(_QWORD *)v22 + 8LL * v51), 0);
    v29 = *(_QWORD *)v100;
    v30 = *(_QWORD *)(*(_QWORD *)v100 + 8LL);
    if ( !v30 )
    {
LABEL_16:
      v31 = *(_QWORD *)(v22 + 120);
      if ( !v31
        || (v89 = v29,
            v30 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v31 + 16LL))(
                    v31,
                    "__is_typed_resource_element_compatible",
                    38),
            v29 = v89,
            (*(_QWORD *)(v89 + 8) = v30) == 0) )
      {
        v32 = *(_QWORD *)(v22 + 24);
        *(_QWORD *)(v22 + 104) += 24LL;
        v30 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v22 + 32) >= (unsigned __int64)(v30 + 24) && v32 )
        {
          *(_QWORD *)(v22 + 24) = v30 + 24;
          v26 = (_QWORD *)((v32 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        }
        else
        {
          v95 = v29;
          v30 = sub_986170(v22 + 24, 24, 24, 3, v29, v28);
          v29 = v95;
          v26 = (_QWORD *)v30;
        }
        v33 = *v26 & 0xFFFFF80000000000LL;
        v26[1] = 0;
        v27 = v33 | 0x1FFFC05;
        *v26 = v27;
        *(_QWORD *)(v29 + 8) = v26;
        v26[2] = v29;
      }
    }
LABEL_43:
    v52 = *(_QWORD **)(a1 + 248);
    v53 = *(_QWORD *)(v20 + 48);
    v96 = v30;
    v54 = v52[2330];
    if ( v53 )
      v55 = v53 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v55 = sub_A7AA70((__int64)v52, v20, (__int64)v26, v27, v29, v28);
    v100 = sub_A81910(v52, v55, 0);
    v56 = sub_C98650(v52, v54, 0, 0x40u, &v100, 1, 0, 1u);
    goto LABEL_46;
  }
  v37 = sub_2244B30("__is_structured_resource_element_compatible", 43);
  v38 = (unsigned int)sub_2244CB0(v22, "__is_structured_resource_element_compatible", 43, v37);
  v39 = (__int64 *)(*(_QWORD *)v22 + 8 * v38);
  if ( *v39 )
  {
    if ( *v39 != -8 )
    {
      sub_989490((__int64 **)&v100, v39, 0);
      v43 = *(_QWORD *)v100;
      v44 = *(_QWORD *)(*(_QWORD *)v100 + 8LL);
      if ( !v44 )
        goto LABEL_32;
      goto LABEL_56;
    }
    --*(_DWORD *)(v22 + 16);
  }
  v67 = *(_QWORD *)(v22 + 24);
  *(_QWORD *)(v22 + 104) += 60LL;
  v68 = (v67 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v22 + 32) >= v68 + 60 && v67 )
  {
    *(_QWORD *)(v22 + 24) = v68 + 60;
  }
  else
  {
    v97 = v39;
    v92 = v38;
    v68 = sub_986170(v22 + 24, 60, 60, 3, (__int64)v39, v38);
    v39 = v97;
    LODWORD(v38) = v92;
  }
  v69 = _mm_load_si128((const __m128i *)&xmmword_23AA820);
  strcpy((char *)(v68 + 48), "_compatible");
  *(__m128i *)(v68 + 16) = v69;
  *(__m128i *)(v68 + 32) = _mm_load_si128((const __m128i *)&xmmword_23AA830);
  *(_QWORD *)v68 = 43;
  *(_QWORD *)(v68 + 8) = 0;
  *v39 = v68;
  ++*(_DWORD *)(v22 + 12);
  v70 = sub_22450D0(v22, (unsigned int)v38);
  sub_989490((__int64 **)&v100, (__int64 *)(*(_QWORD *)v22 + 8LL * v70), 0);
  v43 = *(_QWORD *)v100;
  v44 = *(_QWORD *)(*(_QWORD *)v100 + 8LL);
  if ( !v44 )
  {
LABEL_32:
    v45 = *(_QWORD *)(v22 + 120);
    if ( !v45
      || (v90 = v43,
          v44 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v45 + 16LL))(
                  v45,
                  "__is_structured_resource_element_compatible",
                  43),
          v43 = v90,
          (*(_QWORD *)(v90 + 8) = v44) == 0) )
    {
      v46 = *(_QWORD *)(v22 + 24);
      *(_QWORD *)(v22 + 104) += 24LL;
      v44 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v22 + 32) >= (unsigned __int64)(v44 + 24) && v46 )
      {
        *(_QWORD *)(v22 + 24) = v44 + 24;
        v40 = (_QWORD *)((v46 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v94 = v43;
        v44 = sub_986170(v22 + 24, 24, 24, 3, v43, v42);
        v43 = v94;
        v40 = (_QWORD *)v44;
      }
      v47 = *v40 & 0xFFFFF80000000000LL;
      v40[1] = 0;
      v41 = v47 | 0x1FFFC05;
      *v40 = v41;
      *(_QWORD *)(v43 + 8) = v40;
      v40[2] = v43;
    }
  }
LABEL_56:
  v71 = *(_QWORD **)(a1 + 248);
  v72 = *(_QWORD *)(v20 + 48);
  v96 = v44;
  v91 = v71[2330];
  if ( v72 )
    v73 = v72 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v73 = sub_A7AA70((__int64)v71, v20, (__int64)v40, v41, v43, v42);
  v100 = sub_A81910(v71, v73, 0);
  v74 = v100;
  v75 = sub_C98650(v71, v91, 0, 0x3Fu, &v100, 1, 0, 1u);
  v99 = sub_C09D40(v71, v75, 9, v91, 1, 0, 0, 0, 0);
  v76 = sub_EEE9A0(32, v71, 8u);
  *(_WORD *)v76 = *(_WORD *)v76 & 0xFE00 | 5;
  if ( unk_2CD7484 )
    sub_EE9B50(5);
  *(_QWORD *)(v76 + 16) = v74;
  *(_WORD *)(v76 + 1) &= 0xF801u;
  *(_QWORD *)(v76 + 8) = v91;
  *(_QWORD *)(v76 + 24) = 0;
  *(_BYTE *)(v76 + 2) = 0x80;
  v77 = sub_B62710(v76);
  *(_BYTE *)(v76 + 1) = (v77 << 6) | *(_BYTE *)(v76 + 1) & 0x3F;
  *(_BYTE *)(v76 + 2) = *(_BYTE *)(v76 + 2) & 0xF8 | (v77 >> 2) & 7;
  v78 = sub_A63CE0(v71);
  v79 = sub_A63CE0(v71);
  v80 = sub_A97D20((__int64)v71, *(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL));
  v101 = v80;
  if ( v80 > 0x40 )
  {
    sub_2205470(&v100, 1, 1);
  }
  else
  {
    v81 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v80) & 1);
    if ( !v80 )
      v81 = nullptr;
    v100 = v81;
  }
  v82 = sub_C0C5D0(v71, (__int64)&v100, v78, 0);
  if ( v101 > 0x40 && v100 )
    operator delete[](v100);
  v83 = sub_C09F10(v71, v76, v82, 13, v91, 1, 0, 0, 0);
  v56 = sub_C09F10(v71, v99, v83, 19, v91, 1, 0, 0, 0);
LABEL_46:
  v57 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v57 = (_QWORD *)*v57;
  v58 = sub_BBF2E0(v6, (__int64)v57, 0, v96, v85, v56);
  *(_QWORD *)(v58 + 56) = v85;
  v63 = *(_QWORD *)(a2 + 16);
  v64 = v58;
  if ( (v63 & 4) != 0 )
    v65 = *(__m128i **)(v63 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v65 = (__m128i *)(v63 & 0xFFFFFFFFFFFFFFF8LL);
  sub_B94AD0(v65, v58, v59, v60, v61, v62);
  return v64;
}
