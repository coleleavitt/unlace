__int64 __fastcall sub_B0E620(__int64 a1, _DWORD *a2, __int64 a3)
{
  char **exception; // rbp
  __int64 v7; // r10
  _DWORD *v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // ecx
  _DWORD *i; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // rsi
  unsigned int v20; // r14d
  int v21; // edi
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rax
  int v25; // edx
  int v26; // ebx
  __int64 v27; // rdx
  unsigned __int64 v28; // rbp
  unsigned int v29; // eax
  __int64 v30; // r10
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rax
  int v34; // r12d
  unsigned int *v35; // rax
  __int64 v36; // rdx
  int v37; // r12d
  unsigned int *v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rdx
  int v41; // esi
  int v42; // edx
  _QWORD *v43; // rbp
  unsigned int v44; // r14d
  unsigned int v45; // r13d
  int v46; // eax
  __int64 v47; // rax
  int v48; // ebx
  unsigned int v49; // ebx
  unsigned int v50; // ecx
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v57; // r12d
  __int64 v58; // r12
  char v59; // dl
  char v60; // al
  unsigned int v61; // ebx
  _QWORD *v62; // rax
  __m128i v63; // xmm0
  _QWORD *v64; // r13
  __int64 v65; // rbx
  __int64 v66; // r15
  _QWORD *v67; // rax
  unsigned int v68; // edx
  __int64 v69; // rcx
  int v70; // edx
  __int64 *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r12
  char v74; // al
  _DWORD *v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rax
  char v79; // cl
  unsigned __int64 v80; // rbp
  char v81; // dl
  __int64 v82; // rax
  _QWORD **v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  char *v86; // rsi
  int v87; // eax
  __int64 j; // rcx
  __int64 v89; // rax
  char v90; // si
  char *v91; // rsi
  unsigned int *v92; // r13
  __int64 v93; // rbp
  _QWORD *v94; // rax
  __int64 v95; // rbp
  unsigned int v96; // ebx
  unsigned int v97; // ecx
  unsigned int *v98; // rdx
  __int64 v99; // rcx
  _QWORD *v100; // rax
  unsigned int v101; // [rsp+10h] [rbp-A8h]
  _QWORD *v102; // [rsp+10h] [rbp-A8h]
  __int64 v103; // [rsp+18h] [rbp-A0h]
  unsigned int v104; // [rsp+18h] [rbp-A0h]
  unsigned int v105; // [rsp+28h] [rbp-90h] BYREF
  unsigned int v106; // [rsp+2Ch] [rbp-8Ch] BYREF
  __int64 v107[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 *v108; // [rsp+50h] [rbp-68h] BYREF
  char v109; // [rsp+58h] [rbp-60h]
  int v110; // [rsp+5Ch] [rbp-5Ch]
  __int64 v111; // [rsp+60h] [rbp-58h]
  int v112; // [rsp+68h] [rbp-50h]
  __int64 v113; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v114; // [rsp+78h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_DWORD **)a3;
  *(_DWORD *)(a1 + 848) = 0;
  v9 = *(_QWORD *)(v7 + 8872);
  if ( v8 )
  {
    v10 = 0;
    for ( i = &v8[*(v8 - 1)]; i != v8; *(_DWORD *)(a1 + 848) = v10 )
    {
      if ( v10 < (*(_DWORD *)(v9 + 16LL * (*v8 >> 1) + 8) & 0xFFFFFFu) )
        v10 = *(_DWORD *)(v9 + 16LL * (*v8 >> 1) + 8) & 0xFFFFFF;
      ++v8;
    }
  }
  else
  {
    v10 = 0;
  }
  if ( v10 < (*(_DWORD *)(v9 + 16LL * (*a2 >> 1) + 8) & 0xFFFFFFu) || *(_DWORD *)(v7 + 9468) == v10 )
    return 0;
  v12 = *(_QWORD *)(a1 + 864);
  if ( v12 )
  {
    if ( *(_DWORD *)(v12 - 4) )
    {
      v13 = *(_QWORD *)(a1 + 856);
      v14 = 0;
      do
      {
        v15 = v14++;
        *(_DWORD *)(v13 + 4LL * *(unsigned int *)(v12 + 4 * v15)) = 0;
      }
      while ( v14 < *(_DWORD *)(v12 - 4) );
    }
    *(_DWORD *)(v12 - 4) = 0;
  }
  *(_DWORD *)(a1 + 832) = 0;
  *(_DWORD *)(a1 + 872) = a2[4];
  v16 = *(_QWORD *)(a1 + 880);
  if ( v16 )
    *(_DWORD *)(v16 - 4) = 0;
  v17 = *(_QWORD *)(a1 + 840);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  sub_B0E2D0(a1, (__int64)a2, 1);
  v18 = *(_QWORD *)(a1 + 16);
  v19 = *(_QWORD *)(v18 + 8920);
  if ( v19 )
    v20 = *(_DWORD *)(v19 - 4) - 1;
  else
    v20 = -1;
  v21 = *(_DWORD *)(a1 + 832);
  v22 = *(_DWORD *)(*(_QWORD *)a3 + 8LL) ^ 1;
  if ( v21 )
  {
    while ( 1 )
    {
      v23 = *(_QWORD *)(a1 + 856);
      v24 = v22 >> 1;
      if ( !v23 || (unsigned int)v24 >= *(_DWORD *)(v23 - 4) )
        goto LABEL_31;
      v25 = *(_DWORD *)(v23 + 4 * v24);
      v26 = -v25;
      if ( v25 > 0 )
        v26 = v25;
      if ( !v25 )
        goto LABEL_31;
      if ( v26 > 1000 )
      {
        if ( v20 )
        {
          v76 = (_DWORD *)(v19 + 4LL * v20);
          v77 = (__int64)&v76[-v20];
          do
          {
            v78 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8872LL) + 16LL * (*v76 >> 1);
            v79 = *(_BYTE *)(v78 + 11);
            if ( (v79 & 1) != 0 )
              *(_BYTE *)(v78 + 11) = v79 & 0xFE;
            --v76;
          }
          while ( v76 != (_DWORD *)v77 );
        }
        return 0;
      }
      v27 = *(_QWORD *)(a1 + 16);
      v105 = v22;
      v28 = *(_QWORD *)(*(_QWORD *)(v27 + 8872) + 16 * v24);
      sub_B0E5E0((unsigned int **)(a1 + 840), &v105);
      v29 = v28 & 7;
      if ( v29 == 2 )
        goto LABEL_92;
      if ( v29 > 2 )
        break;
      if ( (v28 & 7) != 0 )
      {
        sub_B0CFA0(a1, v105, v26);
        sub_B0D1A0(a1, (v28 >> 3) ^ 1, v26);
      }
      else
      {
        sub_B0CFA0(a1, v105, v26);
        v80 = v28 & 0xFFFFFFFFFFFFFFF8LL;
        v81 = *(_BYTE *)(v80 + 7);
        if ( (v81 & 0x40) == 0 )
          goto LABEL_113;
        v82 = v80 + 4LL * (*(_DWORD *)(v80 + 4) & 0xFFFFFF) + 8;
        if ( (v81 & 3u) - 2 < 2 )
          v82 = v80 + 4LL * (*(_DWORD *)(v80 + 4) & 0xFFFFFF) + 12;
        v83 = (_QWORD **)((v82 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(v80 + 7) & 0x20) != 0 )
          ++v83;
        v84 = *v83;
        if ( !v84 )
          goto LABEL_113;
        v85 = *(_QWORD *)(*v84 - 8LL);
        v86 = *(char **)(v85 + 8);
        if ( "N3smt29unit_resolution_justificationE" == v86
          || `typeinfo name for'smt::unit_resolution_justification[0] != 42
          && (v103 = *(_QWORD *)(*v84 - 8LL),
              v87 = strcmp("N3smt29unit_resolution_justificationE", &v86[*v86 == 42]),
              v85 = v103,
              !v87) )
        {
          if ( *(_DWORD *)(a1 + 832) && v20 )
          {
            for ( j = 4LL * v20; ; j -= 4 )
            {
              v89 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8872LL) + 16LL * (*(_DWORD *)(*(_QWORD *)(v18 + 8920) + j) >> 1);
              v90 = *(_BYTE *)(v89 + 11);
              if ( (v90 & 1) != 0 )
                *(_BYTE *)(v89 + 11) = v90 & 0xFE;
              if ( 4 * (v20 - (unsigned __int64)(v20 - 1)) == j )
                break;
            }
          }
          return 0;
        }
        v91 = *(char **)(v85 + 8);
        if ( "N3smt27justification_proof_wrapperE" == v91
          || `typeinfo name for'smt::justification_proof_wrapper[0] != 42
          && !strcmp("N3smt27justification_proof_wrapperE", &v91[*v91 == 42]) )
        {
LABEL_113:
          v104 = *(_DWORD *)v80;
          if ( v22 != *(_DWORD *)(v80 + 8) )
            goto LABEL_114;
LABEL_121:
          sub_B0D1A0(a1, *(_DWORD *)(v80 + 12), v26);
          goto LABEL_115;
        }
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
        {
          v104 = *(_DWORD *)v80;
          if ( v22 == *(_DWORD *)(v80 + 8) )
            goto LABEL_121;
LABEL_114:
          sub_B0D1A0(a1, *(_DWORD *)(v80 + 8), v26);
LABEL_115:
          if ( v104 > 2 )
          {
            v92 = (unsigned int *)(v80 + 16);
            v93 = v80 + 4LL * (v104 - 3) + 20;
            do
              sub_B0D1A0(a1, *v92++, v26);
            while ( (unsigned int *)v93 != v92 );
          }
        }
      }
LABEL_30:
      *(_DWORD *)(a1 + 872) += v26;
      sub_B0CE70(a1);
      v21 = *(_DWORD *)(a1 + 832);
      v19 = *(_QWORD *)(v18 + 8920);
LABEL_31:
      v22 = *(_DWORD *)(v19 + 4LL * v20);
      v30 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8872LL);
      v31 = v30 + 16LL * (v22 >> 1);
      if ( (*(_BYTE *)(v31 + 11) & 1) == 0 )
      {
        v32 = v20 - 1;
        do
        {
          v33 = v32;
          v20 = v32--;
          v22 = *(_DWORD *)(v19 + 4 * v33);
          v31 = v30 + 16LL * (v22 >> 1);
        }
        while ( (*(_BYTE *)(v31 + 11) & 1) == 0 );
      }
      *(_BYTE *)(v31 + 11) &= ~1u;
      --v20;
      *(_DWORD *)(a1 + 832) = --v21;
      if ( !v21 )
        goto LABEL_35;
    }
    if ( v29 != 3 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1945);
    }
    if ( *(_DWORD *)(a1 + 8) == (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF8LL)
                                                                                 + 40LL))(v28 & 0xFFFFFFFFFFFFFFF8LL)
      && v28 > 7 )
    {
      v94 = __dynamic_cast(
              (const void *)(v28 & 0xFFFFFFFFFFFFFFF8LL),
              (const struct __class_type_info *)&`typeinfo for'smt::justification,
              (const struct __class_type_info *)&`typeinfo for'smt::theory_pb::card_justification,
              0);
      if ( v94 )
      {
        v95 = v94[2];
        sub_B0E2D0(a1, v95, v26);
        v26 *= *(_DWORD *)(v95 + 16);
        goto LABEL_30;
      }
    }
LABEL_92:
    v26 = 0;
    goto LABEL_30;
  }
LABEL_35:
  sub_B0CA60(a1);
  v34 = *(_DWORD *)(a1 + 872);
  v35 = *(unsigned int **)(a1 + 864);
  if ( v34 <= 0 )
  {
    v37 = -v34;
    if ( !v35 )
    {
      v39 = *(_QWORD *)(a1 + 856);
LABEL_141:
      v43 = *(_QWORD **)(a1 + 16);
      v44 = sub_B05C60((_QWORD *)a1, v22 ^ 1);
      v45 = v44 >> 1;
      if ( !v39 )
        goto LABEL_51;
      goto LABEL_47;
    }
    v36 = *(v35 - 1);
  }
  else
  {
    if ( !v35 )
      return 0;
    v36 = *(v35 - 1);
    if ( !(_DWORD)v36 )
      return 0;
    v37 = -v34;
  }
  v38 = &v35[v36];
  v39 = *(_QWORD *)(a1 + 856);
  if ( v38 == v35 )
    goto LABEL_141;
  if ( !v39 )
  {
    v43 = *(_QWORD **)(a1 + 16);
    v44 = sub_B05C60((_QWORD *)a1, v22 ^ 1);
    v45 = v44 >> 1;
    goto LABEL_51;
  }
  do
  {
    v40 = *v35;
    if ( (unsigned int)v40 < *(_DWORD *)(v39 - 4) )
    {
      v41 = *(_DWORD *)(v39 + 4 * v40);
      v42 = -v41;
      if ( v41 > 0 )
        v42 = v41;
      v37 += v42;
    }
    ++v35;
  }
  while ( v35 != v38 );
  v43 = *(_QWORD **)(a1 + 16);
  v44 = sub_B05C60((_QWORD *)a1, v22 ^ 1);
  v45 = v44 >> 1;
LABEL_47:
  if ( v45 < *(_DWORD *)(v39 - 4) )
  {
    v46 = -*(_DWORD *)(v39 + 4LL * v45);
    if ( *(int *)(v39 + 4LL * v45) > 0 )
      v46 = *(_DWORD *)(v39 + 4LL * v45);
    v37 -= v46;
  }
LABEL_51:
  v47 = v43[1115];
  if ( v47 )
    v48 = *(_DWORD *)(v47 - 4);
  else
    v48 = 0;
  v49 = v48 - 1;
  if ( v37 >= 0 )
  {
    while ( 1 )
    {
      if ( v49 == -1 )
      {
LABEL_66:
        v43 = *(_QWORD **)(a1 + 16);
        break;
      }
      v50 = *(_DWORD *)(v43[1115] + 4LL * v49);
      v51 = *(_QWORD *)(a1 + 888);
      v52 = v50 >> 1;
      if ( v51 )
      {
        if ( v52 < *(_DWORD *)(v51 - 4) )
        {
          if ( *(_BYTE *)(v51 + v52) )
          {
            if ( v52 != v45 )
            {
              v53 = *(_QWORD *)(a1 + 856);
              if ( v53 )
              {
                if ( v52 < *(_DWORD *)(v53 - 4) )
                {
                  v54 = *(_DWORD *)(v53 + 4LL * v52);
                  if ( v54 < 0 )
                  {
                    if ( (v50 & 1) != 0 )
                      goto LABEL_64;
                    v106 = *(_DWORD *)(v43[1115] + 4LL * v49);
                    v37 += v54;
                    sub_B0E5E0((unsigned int **)(a1 + 880), &v106);
                  }
                  else
                  {
                    if ( !v54 || (v50 & 1) == 0 )
                      goto LABEL_64;
                    v106 = *(_DWORD *)(v43[1115] + 4LL * v49);
                    v37 -= v54;
                    sub_B0E5E0((unsigned int **)(a1 + 880), &v106);
                  }
                  if ( v37 < 0 )
                    goto LABEL_66;
                }
              }
            }
          }
        }
      }
LABEL_64:
      --v49;
    }
  }
  v55 = *(_QWORD *)(a1 + 880);
  ++*(_DWORD *)(a1 + 788);
  if ( v55 )
    v56 = *(unsigned int *)(v55 - 4);
  else
    v56 = 0;
  v57 = *(_DWORD *)(a1 + 8);
  sub_B727F0(&v108, v43, v56);
  v112 = v57;
  v113 = 0;
  v114 = v44;
  v108 = (__int64 *)&off_1C57888;
  sub_B72CF0(&v108, v43);
  v58 = sub_180C100(v43 + 1050, 48);
  v59 = v109;
  v60 = *(_BYTE *)(v58 + 8);
  *(_QWORD *)(v58 + 32) = 0;
  *(_BYTE *)(v58 + 8) = v59 & 3 | v60 & 0xFC;
  *(_DWORD *)(v58 + 12) = v110;
  *(_QWORD *)(v58 + 16) = v111;
  *(_QWORD *)v58 = qword_1C6F870;
  *(_DWORD *)(v58 + 24) = v112;
  if ( v113 )
  {
    v61 = *(_DWORD *)(v113 - 4);
    v101 = *(_DWORD *)(v113 - 8);
    v62 = (_QWORD *)sub_186B270(16LL * v101 + 8);
    v63 = _mm_cvtsi32_si128(v101);
    v64 = v62 + 1;
    v102 = v62 + 1;
    *v62 = _mm_unpacklo_epi32(v63, _mm_cvtsi32_si128(v61)).m128i_u64[0];
    *(_QWORD *)(v58 + 32) = v62 + 1;
    v65 = v113;
    if ( !v113 || (v66 = v113 + 16LL * *(unsigned int *)(v113 - 4), v113 == v66) )
    {
      *(_QWORD *)v58 = &off_1C57888;
      *(_DWORD *)(v58 + 40) = v114;
      goto LABEL_74;
    }
    do
    {
      sub_15D0E50(v64, v65);
      v65 += 16;
      v64 += 2;
    }
    while ( v66 != v65 );
    v102 = *(_QWORD **)(v58 + 32);
    *(_QWORD *)v58 = &off_1C57888;
    *(_DWORD *)(v58 + 40) = v114;
    if ( v102 )
    {
LABEL_74:
      if ( *((_DWORD *)v102 - 1) )
      {
        v67 = (_QWORD *)v43[1075];
        if ( v67 )
        {
          v68 = *((_DWORD *)v67 - 1);
          if ( v68 == *((_DWORD *)v67 - 2) )
          {
            v96 = (3 * v68 + 1) >> 1;
            v97 = 8 * v96 + 8;
            if ( 8 * v68 + 8 >= v97 || v68 >= v96 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_B035D0(v107, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v107);
              sub_233E40((__int64)v107);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v98 = (unsigned int *)sub_186B300(v67 - 1, v97);
            v67 = v98 + 2;
            v99 = v98[1];
            v43[1075] = v98 + 2;
            *v98 = v96;
            LODWORD(v98) = v99;
            v71 = &v67[v99];
            v70 = (_DWORD)v98 + 1;
          }
          else
          {
            v69 = v68;
            v70 = v68 + 1;
            v71 = &v67[v69];
          }
        }
        else
        {
          v100 = (_QWORD *)sub_186B270(0x18u);
          *v100 = 2;
          v67 = v100 + 1;
          v70 = 1;
          v43[1075] = v67;
          v71 = v67;
        }
        *v71 = v58;
        *((_DWORD *)v67 - 1) = v70;
      }
    }
  }
  else
  {
    *(_QWORD *)v58 = &off_1C57888;
    *(_DWORD *)(v58 + 40) = v114;
  }
  v72 = v43[1106];
  v73 = v58 | 3;
  v107[0] = v73;
  v74 = *(_BYTE *)(v72 + v44);
  if ( v74 == -1 )
  {
    sub_8E8670((__int64)v43, v107, v44 ^ 1);
  }
  else if ( !v74 )
  {
    sub_8F28B0((__int64)v43, v44, v73, 0);
  }
  v108 = qword_1C6F870;
  sub_4EB210(&v113);
  return 1;
}

