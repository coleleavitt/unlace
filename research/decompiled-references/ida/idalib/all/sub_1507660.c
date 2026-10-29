__int64 __fastcall sub_1507660(__int64 a1, unsigned int a2, __m128i a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r12
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // rax
  bool v20; // al
  char v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int16 v25; // dx
  size_t v26; // rax
  __int16 v27; // ax
  size_t v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // r12
  int v32; // r13d
  __int64 v33; // rax
  __int64 v34; // rbp
  __m128i v35; // xmm1
  int v36; // edx
  __int64 v37; // rdi
  __m128i v38; // xmm2
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // r14
  __int64 v42; // rax
  unsigned __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int16 v48; // ax
  int v49; // eax
  int v50; // edx
  int v51; // edx
  __int16 v52; // ax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 *v56; // rdi
  unsigned __int8 v57; // al
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 *v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  unsigned __int64 v67; // r8
  unsigned __int64 v68; // rdx
  __int64 *v69; // rcx
  __int64 *v70; // rdi
  __int64 v71; // [rsp+8h] [rbp-240h]
  unsigned __int64 v72; // [rsp+10h] [rbp-238h]
  unsigned int v73; // [rsp+10h] [rbp-238h]
  __int64 v74; // [rsp+10h] [rbp-238h]
  __int64 v75; // [rsp+10h] [rbp-238h]
  int v76; // [rsp+20h] [rbp-228h]
  int v77; // [rsp+30h] [rbp-218h]
  __int64 v78; // [rsp+30h] [rbp-218h]
  __int64 *v79; // [rsp+38h] [rbp-210h]
  unsigned __int64 v80; // [rsp+38h] [rbp-210h]
  unsigned __int8 *v81; // [rsp+48h] [rbp-200h]
  unsigned int v82; // [rsp+54h] [rbp-1F4h]
  __int64 v83; // [rsp+60h] [rbp-1E8h]
  int *v84; // [rsp+68h] [rbp-1E0h]
  __int64 v85; // [rsp+78h] [rbp-1D0h] BYREF
  __int64 v86; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v87; // [rsp+88h] [rbp-1C0h] BYREF
  _BYTE *v88; // [rsp+90h] [rbp-1B8h] BYREF
  char v89; // [rsp+98h] [rbp-1B0h]
  __int64 v90; // [rsp+A0h] [rbp-1A8h]
  int v91; // [rsp+A8h] [rbp-1A0h]
  __int16 v92; // [rsp+ACh] [rbp-19Ch]
  __int64 (__fastcall *v93)(__int64); // [rsp+B0h] [rbp-198h]
  __int64 v94; // [rsp+B8h] [rbp-190h]
  __int64 v95; // [rsp+C0h] [rbp-188h]
  unsigned __int8 *v96; // [rsp+D0h] [rbp-178h] BYREF
  unsigned __int8 v97; // [rsp+D8h] [rbp-170h]
  __int64 v98; // [rsp+E0h] [rbp-168h]
  int v99; // [rsp+E8h] [rbp-160h]
  __int16 v100; // [rsp+ECh] [rbp-15Ch]
  __int64 (__fastcall *v101)(__int64); // [rsp+F0h] [rbp-158h]
  __int64 v102; // [rsp+F8h] [rbp-150h]
  __int64 v103; // [rsp+100h] [rbp-148h]
  __int64 v104; // [rsp+120h] [rbp-128h] BYREF
  __m128i v105; // [rsp+128h] [rbp-120h]
  __m128i v106; // [rsp+138h] [rbp-110h]
  __int64 v107; // [rsp+148h] [rbp-100h]
  __m128i v108; // [rsp+150h] [rbp-F8h]
  int v109; // [rsp+160h] [rbp-E8h]
  __int64 v110; // [rsp+168h] [rbp-E0h]
  int v111; // [rsp+170h] [rbp-D8h]
  __int16 v112; // [rsp+174h] [rbp-D4h]
  char v113; // [rsp+176h] [rbp-D2h]
  void *ptr; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v115; // [rsp+188h] [rbp-C0h]
  _BYTE v116[184]; // [rsp+190h] [rbp-B8h] BYREF

  v6 = *(_QWORD *)(a1 + 96);
  v90 = a1;
  v92 = 449;
  v7 = *(_QWORD *)(v6 + 232);
  v91 = 1507350;
  v94 = 0;
  v8 = *(unsigned int *)(v7 + 64);
  v81 = (unsigned __int8 *)(a1 + 1952);
  v88 = (_BYTE *)(a1 + 1952);
  LOBYTE(v7) = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v89 = v7;
  v93 = sub_146A990;
  v95 = 0;
  v9 = sub_20EAB70(13, v8);
  if ( (unsigned __int8)sub_156A040(&v88, 1625, v9, 0) )
  {
    LOWORD(ptr) = 449;
    sub_15680D0(a1, &ptr, 1, 2);
    result = 0;
    goto LABEL_3;
  }
  v11 = *(unsigned __int16 *)(a1 + 32);
  v12 = *(unsigned int *)(a1 + 16);
  v13 = *(_QWORD *)(a1 + 96);
  if ( (_WORD)v11 == 140 )
  {
    *(_DWORD *)(a1 + 40) = v12;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v12 = *(unsigned int *)(a1 + 16);
    v14 = *(_QWORD *)(a1 + 24);
    v15 = 1;
    v11 = *(unsigned __int16 *)(a1 + 32);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 24);
    v15 = 0;
  }
  switch ( v11 )
  {
    case 5:
      if ( v15 )
        goto LABEL_27;
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      if ( sub_141A630(5u) )
      {
        v76 = 0;
      }
      else
      {
        v76 = v14;
        LOBYTE(v13) = (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0;
        if ( v14 )
          goto LABEL_9;
      }
      goto LABEL_28;
    case 28:
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_QWORD *)(v13 + 248);
      v17 = 232;
      goto LABEL_8;
    case 29:
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_QWORD *)(v13 + 248);
      v17 = 616;
      goto LABEL_8;
    case 31:
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_QWORD *)(v13 + 248);
      v17 = 168;
      goto LABEL_8;
    case 33:
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_QWORD *)(v13 + 248);
      v17 = 136;
      goto LABEL_8;
    case 36:
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_QWORD *)(v13 + 248);
      v17 = 152;
      goto LABEL_8;
    case 56:
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_QWORD *)(v13 + 248);
      v17 = 216;
      goto LABEL_8;
    case 58:
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_QWORD *)(v13 + 248);
      v17 = 248;
      goto LABEL_8;
    case 59:
      *(_DWORD *)(a1 + 40) = v12;
      sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
      v16 = *(_QWORD *)(v13 + 248);
      v17 = 632;
LABEL_8:
      v18 = v16 + v17 + 17536;
      LODWORD(v13) = v18 | 6;
      v76 = v18 | 6;
      LOBYTE(v13) = (v18 & 0xFFFFFFFFFFFFFFF8LL) != 0;
LABEL_9:
      v19 = j__strlen(&byte_22F0C30);
      if ( (unsigned __int8)sub_1569A00(a1, 62, 14, &byte_22F0C30, v19) )
        goto LABEL_30;
      v20 = *(_WORD *)(a1 + 32) == 62 || *(_WORD *)(a1 + 32) == 449;
      if ( (_BYTE)v13 )
      {
        if ( v20 )
          goto LABEL_34;
      }
      else
      {
        if ( v20 )
          goto LABEL_34;
        LODWORD(v13) = 1;
      }
      goto LABEL_12;
    default:
LABEL_27:
      sub_1564820(&ptr, a1, v12, 1806);
      sub_AEA040((__int64)&ptr);
      LODWORD(ptr) = 1507390;
      WORD2(ptr) = 449;
      sub_15680D0(a1, &ptr, 3, 2);
      v76 = 0;
LABEL_28:
      if ( *(_WORD *)(a1 + 32) == 449 )
        goto LABEL_35;
      v26 = j__strlen(&byte_22F0C30);
      if ( (unsigned __int8)sub_1569A00(a1, 62, 14, &byte_22F0C30, v26) )
      {
LABEL_30:
        v27 = *(_WORD *)(a1 + 32);
        if ( v27 == 449 )
          goto LABEL_35;
      }
      else
      {
        v27 = *(_WORD *)(a1 + 32);
        if ( v27 == 449 )
        {
LABEL_34:
          sub_1564820(&ptr, a1, *(unsigned int *)(a1 + 16), 1657);
          sub_AEA040((__int64)&ptr);
          if ( *(_WORD *)(a1 + 32) != 449 )
          {
            LODWORD(v13) = 0;
            goto LABEL_12;
          }
LABEL_35:
          result = 0;
          goto LABEL_3;
        }
      }
      if ( v27 == 62 )
        goto LABEL_34;
      LODWORD(v13) = 0;
LABEL_12:
      v21 = *(_BYTE *)(a1 + 2040);
      v115 = 0x800000000LL;
      ptr = v116;
      while ( 1 )
      {
        *(_BYTE *)(a1 + 2040) = 1;
        v96 = nullptr;
        v22 = sub_1496480(a1, &v96, 1, a2, nullptr, 0, a3, a4);
        if ( (_BYTE)v23 || !v22 )
        {
          LODWORD(v104) = (_DWORD)&loc_3E0042;
          WORD2(v104) = 449;
          sub_15680D0(a1, &v104, 3, 2);
        }
        else
        {
          v24 = sub_1B06350(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), (unsigned int)v96, v22, v23);
          if ( (v24 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v66 = (unsigned int)v115;
            v67 = (unsigned int)v96 | v72 & 0xFFFFFFFF00000000LL;
            v68 = (unsigned int)v115 + 1LL;
            v72 = v67;
            if ( v68 > HIDWORD(v115) )
            {
              v80 = v67;
              v78 = v24;
              sub_2237220(&ptr, v116, v68, 16);
              v67 = v80;
              v24 = v78;
              v66 = (unsigned int)v115;
            }
            v69 = (__int64 *)((char *)ptr + 16 * v66);
            *v69 = v24;
            v69[1] = v67;
            LODWORD(v115) = v115 + 1;
          }
        }
        v25 = *(_WORD *)(a1 + 32);
        if ( v25 == 62 || v25 == 449 )
          break;
        if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, 0) )
        {
          if ( *(_WORD *)(a1 + 32) == 449 )
          {
            sub_1564820(&v104, a1, *(unsigned int *)(a1 + 16), 1657);
            sub_AEA040((__int64)&v104);
            result = 0;
            *(_BYTE *)(a1 + 2040) = v21;
            goto LABEL_65;
          }
          *(_BYTE *)(a1 + 2040) = v21;
          LODWORD(v13) = 0;
        }
        else
        {
          v25 = *(_WORD *)(a1 + 32);
          *(_BYTE *)(a1 + 2040) = v21;
          if ( v25 == 449 )
            goto LABEL_42;
        }
      }
      *(_BYTE *)(a1 + 2040) = v21;
LABEL_42:
      if ( !(_DWORD)v115 )
      {
        LOWORD(v104) = 449;
        sub_15680D0(a1, &v104, 1, 2);
        result = 0;
        goto LABEL_65;
      }
      if ( !(_BYTE)v13 )
      {
        result = 0;
        if ( v25 == 449 )
          goto LABEL_65;
      }
      v28 = j__strlen(&byte_22F0C30);
      if ( (unsigned __int8)sub_1569A00(a1, 62, 14, &byte_22F0C30, v28) )
        LODWORD(v13) = 0;
      if ( *(_WORD *)(a1 + 32) == 449 )
      {
        sub_1564820(&v104, a1, *(unsigned int *)(a1 + 16), 1614);
        sub_AEA040((__int64)&v104);
        result = 0;
        goto LABEL_65;
      }
      v29 = *(_QWORD **)(a1 + 96);
      v30 = v29[379];
      if ( !v30 )
        v30 = v29[68];
      v83 = sub_1B2A880(v29[95], v29[76], v30, v76, (_DWORD)ptr, v115, a2, 0);
      v77 = v115;
      v85 = v83;
      if ( (v83 & 1) == 0 )
      {
        if ( v83 )
        {
          v31 = &v85;
          v79 = &v86;
          goto LABEL_52;
        }
LABEL_82:
        v55 = (unsigned __int8)v13;
        goto LABEL_64;
      }
      v31 = (__int64 *)((v83 & 0xFFFFFFFFFFFFFFFELL) + 8);
      v79 = (__int64 *)((v83 & 0xFFFFFFFFFFFFFFFELL) + 8LL * *(unsigned int *)(v83 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( v79 == v31 )
        goto LABEL_82;
LABEL_52:
      v32 = 0;
      v84 = (int *)(a1 + 16);
      while ( 1 )
      {
        v33 = *(_QWORD *)(a1 + 80);
        v34 = *v31;
        v104 = a1;
        v40 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        v35 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        v36 = *(_DWORD *)(a1 + 88);
        v37 = *(_QWORD *)(a1 + 8);
        v107 = v33;
        LODWORD(v33) = *(_DWORD *)(a1 + 32);
        v38 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        v105 = v40;
        v106 = v35;
        v109 = v33;
        v39 = *(unsigned int *)(a1 + 2712);
        v108 = v38;
        v110 = v39;
        LOWORD(v39) = *(_WORD *)(a1 + 92);
        v111 = v36;
        v112 = v39;
        sub_1418D30(v37, 0);
        v113 = 1;
        sub_146B5E0(&v86, a1, 0x408009u, 1, 0);
        *(double *)v40.m128i_i64 = sub_1AFE810(
                                     *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
                                     *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                                     v34);
        v41 = *(_QWORD *)(a1 + 96);
        v73 = *(_DWORD *)(v34 + 24);
        v42 = sub_14BFC10((const __m128i *)a1, 0, v40);
        v43 = sub_19B4A30(v41, v42 & 0xFFFFFFFFFFFFFFFELL, v73, 0, 0, 0);
        sub_1AF57E0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v34, v43 & 0xFFFFFFFFFFFFFFFELL);
        if ( v43 == 1 )
        {
          v48 = *(_WORD *)(a1 + 32);
          if ( v48 != 23 && v48 != 449 )
            goto LABEL_60;
        }
        v49 = sub_14808E0((__int64)&v88, (__int64 *)v34, v44, v45, v46, v47);
        LOBYTE(v50) = v43 > 1;
        v51 = (v49 ^ 1) & v50;
        v52 = *(_WORD *)(a1 + 32);
        LODWORD(v13) = v51 & v13;
        if ( v52 != 449 )
          break;
LABEL_78:
        if ( ++v32 == v77 )
          sub_14C5EA0(&v104);
        else
          sub_147B460((__int64)&v104);
        if ( v86 )
        {
          sub_1564F70(v86);
          if ( v79 == ++v31 )
            goto LABEL_82;
        }
        else if ( v79 == ++v31 )
        {
          goto LABEL_82;
        }
      }
      v53 = *(unsigned int *)(a1 + 16);
      if ( v52 != 5
        || (v54 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), *(_DWORD *)v54 != 11)
        || *(_QWORD *)(v54 + 16) != 0x696C616974696E69LL
        || *(_WORD *)(v54 + 24) != 25978
        || *(_BYTE *)(v54 + 26) != 114 )
      {
        sub_1564820(&v96, a1, v53, 14);
        sub_1503D30(&v96, (__int64)"'initializer'");
        sub_AEA040((__int64)&v96);
LABEL_60:
        sub_14C5EA0(&v104);
        goto LABEL_61;
      }
      v56 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = v53;
      sub_14634E0(v56, v84);
      v98 = a1;
      v96 = v81;
      v57 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      v97 = v57;
      v100 = 449;
      v99 = 1507350;
      v101 = sub_146A990;
      v102 = 0;
      v103 = 0;
      LODWORD(v13) = (sub_156A040(&v96, 1625, "initializer", 0) ^ 1) & v13;
      if ( *(_WORD *)(a1 + 32) == 449 )
      {
LABEL_77:
        *v96 = v97;
        goto LABEL_78;
      }
      sub_146B5E0(&v87, a1, 0x408009u, 1, 0);
      v58 = sub_1AFE990(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v34);
      if ( *(_WORD *)(a1 + 32) == 5 )
      {
        v59 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( *(_DWORD *)v59 == 8 && *(_QWORD *)(v59 + 16) == 0x766972705F706D6FLL )
        {
          v70 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v70, v84);
          sub_1507260(a1, v58, v40);
          v61 = (__int64 *)v34;
          LODWORD(v34) = 1;
          sub_1AF5860(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v61, 0, v58);
LABEL_75:
          LODWORD(v13) = (sub_14808E0((__int64)&v96, v61, v62, v63, v64, v65) ^ 1) & v34 & v13;
          if ( v87 )
            sub_1564F70(v87);
          goto LABEL_77;
        }
      }
      v82 = *(_DWORD *)(v34 + 24);
      v74 = *(_QWORD *)(a1 + 96);
      v60 = sub_14BDAD0(a1, 0, v40);
      v61 = (__int64 *)v34;
      v75 = sub_19B4A30(v74, v60 & 0xFFFFFFFFFFFFFFFELL, v82, 0, 0, 0);
      sub_1AF5860(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), v34, v75 & 0xFFFFFFFFFFFFFFFELL, v58);
      if ( v75 != 1 )
      {
        LODWORD(v34) = 1;
        goto LABEL_75;
      }
      LOBYTE(v34) = *(_WORD *)(a1 + 32) != 23 && *(_WORD *)(a1 + 32) != 449;
      if ( !(_BYTE)v34 )
        goto LABEL_75;
      sub_14C5EA0(&v104);
      if ( v87 )
        sub_1564F70(v87);
      *v96 = v97;
LABEL_61:
      if ( v86 )
        sub_1564F70(v86);
      v55 = 0;
LABEL_64:
      result = sub_1AF5920(
                 *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
                 *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                 v83,
                 v55);
LABEL_65:
      if ( ptr != v116 )
      {
        v71 = result;
        free(ptr);
        result = v71;
      }
LABEL_3:
      *v88 = v89;
      return result;
  }
}
