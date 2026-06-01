__int64 __fastcall sub_10DF1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __int64 result; // rax
  _QWORD *v20; // r15
  unsigned __int64 v21; // rbp
  char *v22; // r13
  _QWORD *v23; // rax
  int v24; // eax
  unsigned int v25; // r12d
  unsigned __int8 *v26; // rdx
  __m128 v27; // kr00_16
  const char **v28; // rax
  unsigned __int8 *v29; // rdx
  char *v30; // r12
  const char **v31; // rax
  size_t v32; // rcx
  const char *v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r12
  __int64 v38; // rdx
  unsigned __int64 *v39; // rcx
  unsigned __int64 v40; // rax
  char *v41; // rax
  __int64 (__fastcall *v42)(__int64, const char *, size_t); // rcx
  size_t v43; // rdx
  bool v44; // zf
  const char *v45; // rax
  const char *v46; // r12
  size_t v47; // rax
  _QWORD *v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 *v53; // rax
  unsigned __int64 v54; // rdx
  const char **v55; // rax
  unsigned __int8 *v56; // rdx
  char *v57; // r12
  const char **v58; // rax
  size_t v59; // rcx
  const char *v60; // r12
  unsigned __int64 v61; // rsi
  char *v62; // rax
  __int64 (__fastcall *v63)(__int64, const char *, size_t); // rcx
  size_t v64; // rdx
  const char *v65; // rax
  const char *v66; // r12
  size_t v67; // rax
  int v68; // eax
  _BYTE *v69; // rdi
  size_t v70; // rax
  size_t v71; // rax
  unsigned __int8 **v72; // rbp
  unsigned __int8 **v73; // r12
  __int64 v74; // rdi
  unsigned __int64 v75; // rcx
  size_t v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rcx
  int v79; // eax
  unsigned int v80; // eax
  __int64 v81; // rsi
  __int64 v82; // rax
  unsigned __int8 **v83; // r12
  __int64 v84; // rax
  __int32 v85; // edi
  unsigned __int64 v86; // rax
  int v87; // eax
  unsigned __int8 **v88; // r15
  __int64 v89; // rdi
  __m128i v90; // [rsp+8h] [rbp-150h] BYREF
  __int64 v91; // [rsp+18h] [rbp-140h]
  unsigned __int8 **v92; // [rsp+20h] [rbp-138h]
  __int64 v93; // [rsp+28h] [rbp-130h]
  unsigned __int64 v94; // [rsp+30h] [rbp-128h]
  unsigned __int64 v95; // [rsp+38h] [rbp-120h]
  __m128i *v96; // [rsp+40h] [rbp-118h]
  _QWORD *v97; // [rsp+48h] [rbp-110h]
  __int64 v98; // [rsp+50h] [rbp-108h]
  __int64 v99; // [rsp+58h] [rbp-100h]
  unsigned __int64 v100; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v101; // [rsp+68h] [rbp-F0h]
  _BYTE *v102; // [rsp+70h] [rbp-E8h] BYREF
  size_t v103; // [rsp+78h] [rbp-E0h]
  __m128 v104; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v105; // [rsp+90h] [rbp-C8h]
  __m128i v106; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-A8h]
  __int64 v108; // [rsp+B8h] [rbp-A0h]
  unsigned __int8 *v109[17]; // [rsp+D0h] [rbp-88h] BYREF

  v91 = a2;
  v93 = sub_1105E80();
  v7 = sub_10DECA0(a3, 0xD02u, 0xD07u);
  v97 = (_QWORD *)v7;
  if ( v7 )
  {
    v8 = 0;
    v90.m128i_i32[3] = (unsigned __int8)sub_21B9810(v7, 3330) == 0 ? 17 : 2;
    v96 = &v106;
    sub_10DF020((__int64)&v106, a3, 0xD02u, 0xD07u);
    LOBYTE(v92) = 0;
    v105 = v107;
    v104 = (__m128)_mm_load_si128(&v106);
    v90.m128i_i64[0] = v108;
    if ( v108 != v106.m128i_i64[0] )
    {
      v98 = a3;
      v99 = a4;
      v9 = (_QWORD *)v106.m128i_i64[0];
      do
      {
        while ( 1 )
        {
          v10 = *v9;
          if ( v8 )
          {
            sub_FC70B0((__int64)v109, *(_QWORD *)a1, 0, 586);
            sub_AEC220(v109, *(_BYTE **)(v8 + 24), *(_QWORD *)(v8 + 32));
            sub_AEC220(v109, *(_BYTE **)(v10 + 24), *(_QWORD *)(v10 + 32));
            sub_AEA040((__int64)v109);
            LOBYTE(v92) = 1;
          }
          v104.m128_u64[0] = (unsigned __int64)++v9;
          if ( v9 != (_QWORD *)v104.m128_u64[1] )
            break;
LABEL_13:
          v8 = v10;
          if ( (_QWORD *)v90.m128i_i64[0] == v9 )
            goto LABEL_14;
        }
        while ( 1 )
        {
          v11 = *v9;
          if ( *v9 )
          {
            if ( (_DWORD)v105
              && ((unsigned __int8)sub_21B9810(*v9, (unsigned int)v105)
               || HIDWORD(v105) && (unsigned __int8)sub_21B9810(v11, HIDWORD(v105))) )
            {
              break;
            }
          }
          v104.m128_u64[0] = (unsigned __int64)++v9;
          if ( (_QWORD *)v104.m128_u64[1] == v9 )
            goto LABEL_13;
        }
        v9 = (_QWORD *)v104.m128_u64[0];
        v8 = v10;
      }
      while ( v90.m128i_i64[0] != v104.m128_u64[0] );
LABEL_14:
      a3 = v98;
      a4 = v99;
      if ( (_BYTE)v92 )
      {
        sub_FC70B0((__int64)v109, *(_QWORD *)a1, 0, 525);
        sub_AEA040((__int64)v109);
      }
    }
  }
  else
  {
    v90.m128i_i32[3] = 67;
    v96 = &v106;
  }
  v12 = sub_10DF140(a3, 0xDB6u);
  v13 = sub_10DF140(a3, 0x46u);
  if ( v12 && v13 && *(_DWORD *)(v13 + 40) < *(_DWORD *)(v12 + 40) )
  {
    sub_FC70B0((__int64)v109, *(_QWORD *)a1, 0, 612);
    sub_10D8830(v109, **(_QWORD **)(v12 + 48));
    sub_AEA040((__int64)v109);
  }
  v14 = *(unsigned int *)(a3 + 16);
  v15 = *(_QWORD *)(a3 + 8);
  LODWORD(v105) = 0;
  v90.m128i_i64[0] = v15 + 8 * v14;
  v104 = _mm_loadh_ps((const double *)v90.m128i_i64);
  sub_10D8800(&v104, v90.m128i_i64[0]);
  v16 = *(_QWORD *)(a3 + 8);
  v17 = *(unsigned int *)(a3 + 16);
  LODWORD(v107) = 0;
  v90.m128i_i64[0] = v16 + 8 * v17;
  v18 = _mm_loadl_epi64(&v90);
  v106 = _mm_unpacklo_epi64(v18, v18);
  sub_10D8800(v96, v90.m128i_i64[0]);
  result = v104.m128_u64[0];
  if ( v106.m128i_i64[0] != v104.m128_u64[0] )
  {
    v90.m128i_i64[0] = a3;
    v20 = v97;
    v96 = (__m128i *)&v102;
    v92 = v109;
    while ( 1 )
    {
      v21 = *(_QWORD *)result;
      if ( *(_BYTE *)(**(_QWORD **)result + 44LL) != 1 )
      {
        if ( (unsigned __int8)sub_21B9810(v21, 3331) )
        {
          v28 = *(const char ***)(v21 + 48);
          v29 = nullptr;
          v30 = (char *)*v28;
          if ( *v28 )
            v29 = (unsigned __int8 *)j__strlen(*v28);
          if ( (unsigned __int8)sub_10DA440(a1, v30, v29, 2u, 0) )
          {
            v31 = *(const char ***)(v21 + 48);
            v32 = 0;
            v33 = *v31;
            if ( *v31 )
              v32 = j__strlen(*v31);
            v34 = sub_10D8670(v90.m128i_i64[0], v93, (__int64)v33, v32, 1);
            v35 = *(unsigned int *)(a4 + 8);
            v36 = *(unsigned int *)(a4 + 12);
            v37 = v95 & 0xFFFFFFFF00000000LL | 2;
            v38 = v35 + 1;
            v95 = v37;
            if ( v35 + 1 > v36 )
              goto LABEL_78;
            goto LABEL_48;
          }
          goto LABEL_49;
        }
        if ( (unsigned __int8)sub_21B9810(v21, 3336) )
        {
          v55 = *(const char ***)(v21 + 48);
          v56 = nullptr;
          v57 = (char *)*v55;
          if ( *v55 )
            v56 = (unsigned __int8 *)j__strlen(*v55);
          if ( (unsigned __int8)sub_10DA440(a1, v57, v56, 0x11u, 0) )
          {
            v58 = *(const char ***)(v21 + 48);
            v59 = 0;
            v60 = *v58;
            if ( *v58 )
              v59 = j__strlen(*v58);
            v34 = sub_10D8670(v90.m128i_i64[0], v93, (__int64)v60, v59, 1);
            v35 = *(unsigned int *)(a4 + 8);
            v61 = *(unsigned int *)(a4 + 12);
            v37 = v101 & 0xFFFFFFFF00000000LL | 0x11;
            v38 = v35 + 1;
            v101 = v37;
            if ( v35 + 1 > v61 )
            {
LABEL_78:
              v97 = (_QWORD *)v34;
              sub_2237220(a4, a4 + 16, v38, 16);
              v35 = *(unsigned int *)(a4 + 8);
              v34 = (__int64)v97;
            }
LABEL_48:
            v39 = (unsigned __int64 *)(*(_QWORD *)a4 + 16 * v35);
            *v39 = v37;
            v39[1] = v34;
            ++*(_DWORD *)(a4 + 8);
          }
LABEL_49:
          v40 = *(_QWORD *)(v21 + 16);
          if ( !v40 )
            v40 = v21;
          *(_BYTE *)(v40 + 44) |= 1u;
          goto LABEL_35;
        }
        if ( (*(_BYTE *)(*(_QWORD *)v21 + 48LL) & 0x20) == 0 )
        {
          if ( (unsigned __int8)sub_21B9810(v21, 3510) )
          {
            v85 = sub_12CD410(**(char ***)(v21 + 48));
            v90.m128i_i32[3] = v85;
            v86 = *(_QWORD *)(v21 + 16);
            if ( !v86 )
              v86 = v21;
            *(_BYTE *)(v86 + 44) |= 1u;
            if ( v85 )
            {
              v20 = (_QWORD *)v21;
              if ( v90.m128i_i32[3] == 28 )
              {
                v87 = *(_DWORD *)(a1 + 32);
                if ( v87 )
                {
                  v90.m128i_i32[3] = 32;
                  if ( v87 != 2 )
                    v90.m128i_i32[3] = (v87 == 3) + 30;
                }
              }
            }
            else
            {
              v88 = v92;
              sub_FC70B0((__int64)v92, *(_QWORD *)a1, 0, 484);
              sub_10D8830(v88, **(_QWORD **)(v21 + 48));
              v89 = (__int64)v88;
              v20 = (_QWORD *)v21;
              sub_AEA040(v89);
              v90.m128i_i32[3] = 58;
            }
          }
          else if ( *(_DWORD *)(*(_QWORD *)v21 + 40LL) == 3363 )
          {
            v69 = **(_BYTE ***)(v21 + 48);
            v70 = 0;
            v102 = v69;
            if ( v69 )
              v70 = j__strlen(v69);
            v103 = v70;
            v71 = j__strlen("/\\");
            if ( sub_2246EC0(v96, "/\\", v71, 0) != -1 )
            {
              v72 = v92;
              sub_FC70B0((__int64)v92, *(_QWORD *)a1, 0, 625);
              sub_AEC220(v72, v102, v103);
              sub_AEA040((__int64)v72);
              sub_FC70B0((__int64)v72, *(_QWORD *)a1, 0, 528);
              sub_AEA040((__int64)v72);
            }
          }
          goto LABEL_35;
        }
        v51 = *(unsigned int *)(a4 + 8);
        v75 = *(unsigned int *)(a4 + 12);
        v50 = v100 & 0xFFFFFFFF00000000LL | 0x3A;
        v52 = v51 + 1;
        v100 = v50;
        if ( v51 + 1 <= v75 )
          goto LABEL_66;
LABEL_105:
        sub_2237220(a4, a4 + 16, v52, 16);
        v51 = *(unsigned int *)(a4 + 8);
        goto LABEL_66;
      }
      v22 = **(char ***)(v21 + 48);
      if ( v90.m128i_i32[3] != 67 )
      {
        if ( !(unsigned __int8)sub_21B9810(v20, 3510) )
        {
          v41 = strrchr(v22, 46);
          if ( v41 )
          {
            v42 = *(__int64 (__fastcall **)(__int64, const char *, size_t))(*(_QWORD *)v91 + 136LL);
            v43 = 0;
            v44 = v41 + 1 == nullptr;
            v45 = v41 + 1;
            v46 = v45;
            if ( !v44 )
            {
              v97 = *(_QWORD **)(*(_QWORD *)v91 + 136LL);
              v47 = j__strlen(v45);
              v42 = (__int64 (__fastcall *)(__int64, const char *, size_t))v97;
              v43 = v47;
            }
            v25 = v42(v91, v46, v43);
            if ( v25 == 58 )
              goto LABEL_33;
          }
        }
        v48 = (_QWORD *)v20[2];
        if ( !v48 )
          v48 = v20;
        *((_BYTE *)v48 + 44) |= 1u;
        if ( v90.m128i_i32[3] == 2 || v90.m128i_i32[3] == 17 )
        {
          v25 = 11;
          if ( !sub_10DF140(v90.m128i_i64[0], 0x848u) )
            v25 = v90.m128i_u32[3];
        }
        else
        {
          v25 = v90.m128i_u32[3];
        }
        goto LABEL_63;
      }
      if ( v20 )
      {
        v23 = (_QWORD *)v20[2];
        if ( !v23 )
          v23 = v20;
        *((_BYTE *)v23 + 44) |= 1u;
      }
      if ( *(_WORD *)v22 == 45 )
      {
        v24 = *(_DWORD *)(a1 + 16);
        v25 = 40;
        if ( v24 != 4 )
        {
          v25 = 21;
          if ( v24 != 5 )
          {
            v25 = 2;
            if ( !sub_10DF140(v90.m128i_i64[0], 0x185u) )
            {
              v25 = *(_DWORD *)(a1 + 16);
              if ( v25 != 2 )
              {
                v44 = v25 == 3;
                v73 = v92;
                sub_FC70B0((__int64)v92, *(_QWORD *)a1, 0, v44 + 486);
                v74 = (__int64)v73;
                v25 = 2;
                sub_AEA040(v74);
              }
            }
          }
        }
        goto LABEL_31;
      }
      v62 = strrchr(v22, 46);
      if ( v62 )
      {
        v63 = *(__int64 (__fastcall **)(__int64, const char *, size_t))(*(_QWORD *)v91 + 136LL);
        v64 = 0;
        v44 = v62 + 1 == nullptr;
        v65 = v62 + 1;
        v66 = v65;
        if ( !v44 )
        {
          v97 = *(_QWORD **)(*(_QWORD *)v91 + 136LL);
          v67 = j__strlen(v65);
          v63 = (__int64 (__fastcall *)(__int64, const char *, size_t))v97;
          v64 = v67;
        }
        v25 = v63(v91, v66, v64);
        if ( v25 )
        {
          v68 = *(_DWORD *)(a1 + 16);
LABEL_84:
          if ( v68 == 1 )
          {
            v80 = sub_12CD630(v25);
            if ( v80 != v25 )
            {
              if ( v25 == 23 && *(_DWORD *)(a1 + 32) )
              {
                v25 = v80;
              }
              else
              {
                v81 = *(_QWORD *)a1;
                LODWORD(v97) = v80;
                sub_FC70B0((__int64)v92, v81, 0, 595);
                v82 = sub_12CC8C0(v25);
                v83 = v92;
                sub_10D8830(v92, v82);
                v84 = sub_12CC8C0((unsigned int)v97);
                sub_10D8830(v83, v84);
                sub_AEA040((__int64)v83);
                v25 = (unsigned int)v97;
              }
            }
          }
          if ( sub_10DF140(v90.m128i_i64[0], 0x746u) )
          {
            if ( v25 == 58 )
              v25 = 44;
          }
          else if ( v25 == 58 )
          {
            goto LABEL_33;
          }
          goto LABEL_31;
        }
      }
      v68 = *(_DWORD *)(a1 + 16);
      if ( v68 == 3 )
      {
        v44 = sub_10DF140(v90.m128i_i64[0], 0x185u) == 0;
        v68 = *(_DWORD *)(a1 + 16);
        if ( !v44 || (*(_BYTE *)(a1 + 920) & 2) != 0 )
        {
          v25 = 17;
          goto LABEL_84;
        }
        if ( v68 == 2 )
        {
LABEL_134:
          v25 = 2;
          sub_10DF140(v90.m128i_i64[0], 0x746u);
          goto LABEL_31;
        }
      }
      else
      {
        if ( v68 == 2 )
          goto LABEL_134;
        v25 = 2;
        if ( (*(_BYTE *)(a1 + 920) & 2) != 0 )
          goto LABEL_84;
      }
      v25 = 58;
      if ( v68 != 5 )
        goto LABEL_84;
      v25 = 21;
      sub_10DF140(v90.m128i_i64[0], 0x746u);
LABEL_31:
      if ( sub_10DCD30(v90.m128i_i64[0], 0xBFFu) )
      {
        v25 = 15;
LABEL_33:
        v26 = (unsigned __int8 *)j__strlen(v22);
        goto LABEL_34;
      }
      if ( sub_10DCD30(v90.m128i_i64[0], 0xBFCu) )
      {
        v25 = 20;
        goto LABEL_33;
      }
      if ( v25 != 28 && v25 != 23 || (v79 = *(_DWORD *)(a1 + 32)) == 0 )
      {
        if ( (v25 == 17 || v25 == 2) && sub_10DF140(v90.m128i_i64[0], 0x848u) )
          v25 = 11;
        goto LABEL_33;
      }
      if ( v79 == 2 )
      {
        v25 = 32;
        goto LABEL_33;
      }
      v25 = 30;
      if ( v79 != 3 )
        goto LABEL_33;
      v25 = 31;
LABEL_63:
      if ( v22 )
        goto LABEL_33;
      v26 = nullptr;
LABEL_34:
      if ( !(unsigned __int8)sub_10DA440(a1, v22, v26, v25, 1) )
        goto LABEL_35;
      v49 = *(unsigned int *)(a4 + 12);
      v50 = v94 & 0xFFFFFFFF00000000LL | v25;
      v51 = *(unsigned int *)(a4 + 8);
      v94 = v50;
      v52 = v51 + 1;
      if ( v51 + 1 > v49 )
        goto LABEL_105;
LABEL_66:
      v53 = (unsigned __int64 *)(*(_QWORD *)a4 + 16 * v51);
      *v53 = v50;
      v53[1] = v21;
      ++*(_DWORD *)(a4 + 8);
LABEL_35:
      v27 = v104;
      result = v104.m128_u64[0] + 8;
      v104.m128_u64[0] = result;
      if ( result != v104.m128_u64[1] && !*(_QWORD *)(v27.m128_u64[0] + 8) )
      {
        v54 = v27.m128_u64[0] + 16;
        do
        {
          result = v27.m128_u64[0];
          if ( v27.m128_u64[1] == v27.m128_u64[0] )
            break;
          v54 += 8LL;
        }
        while ( !*(_QWORD *)v27.m128_u64[0] );
        v104.m128_u64[0] = v27.m128_u64[0];
      }
      if ( v106.m128i_i64[0] == result )
      {
        a3 = v90.m128i_i64[0];
        break;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 16) == 2 )
  {
    result = *(unsigned int *)(a4 + 8);
    if ( !(_DWORD)result )
    {
      v76 = j__strlen("-");
      result = sub_10D8670(a3, v93, (__int64)"-", v76, 1);
      v77 = *(unsigned int *)(a4 + 8);
      if ( v77 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
      {
        v90.m128i_i64[0] = result;
        sub_2237220(a4, a4 + 16, v77 + 1, 16);
        v77 = *(unsigned int *)(a4 + 8);
        result = v90.m128i_i64[0];
      }
      v78 = (_QWORD *)(*(_QWORD *)a4 + 16 * v77);
      *v78 = 2;
      v78[1] = result;
      ++*(_DWORD *)(a4 + 8);
    }
  }
  return result;
}
