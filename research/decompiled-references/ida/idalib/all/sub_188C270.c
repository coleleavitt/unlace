void __fastcall sub_188C270(__int64 a1, __m128i *a2, double a3, double a4)
{
  unsigned __int64 v4; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // r12
  __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // r13
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r12
  __int64 *v82; // r13
  __int64 *v83; // r12
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  unsigned __int64 v102; // [rsp+8h] [rbp-80h]
  __int64 v103; // [rsp+10h] [rbp-78h]
  unsigned __int64 v104; // [rsp+10h] [rbp-78h]
  __int64 *v105; // [rsp+20h] [rbp-68h] BYREF
  __int64 v106; // [rsp+28h] [rbp-60h]
  _BYTE v107[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = (unsigned __int64)&a2[4];
  if ( !(unsigned __int8)sub_B8E180((unsigned __int64)&a2[4]) )
  {
    if ( (unsigned __int8)sub_B9BFC0((__int64)a2, (__int64)a2, v7, v8, v9, v10) )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22928LL);
      sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v25, v26, v27, v28);
      if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 4) != 0 )
        sub_1889700(a1, (__int64)a2, a3, a4);
    }
    v29 = a2[6].m128i_i64[1];
    sub_7052B0((__int64 *)(v29 + 96), v29, v25, v26, v27, v28);
    if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 2) == 0 )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22936LL);
      sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v30, v31, v32, v33);
      if ( ((*(_BYTE *)a2[8].m128i_i64[0] >> 1) & 0x14) != 0
        || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v61, v62, v63, v64),
            (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x20) != 0)
        || (v29 = a2[6].m128i_i64[1],
            sub_7052B0((__int64 *)(v29 + 96), v29, v65, v66, v67, v68),
            (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 4) != 0)
        || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10
        && ((sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v30, v31, v32, v33),
             (*(_BYTE *)a2[8].m128i_i64[0] & 8) != 0)
         || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v69, v70, v71, v72),
             (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x40) != 0)
         || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v73, v74, v75, v76),
             (*(_BYTE *)a2[8].m128i_i64[0] & 0x20) != 0)
         || (v29 = a2[6].m128i_i64[1],
             sub_7052B0((__int64 *)(v29 + 96), v29, v77, v78, v79, v80),
             (*(_BYTE *)(a2[8].m128i_i64[0] + 4) & 1) != 0)) )
      {
        v29 = (__int64)a2;
        sub_188B1F0(a1, a2, a3, a4);
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
    {
      if ( (unsigned __int8)sub_B9C060((__int64)a2, v29, v30, v31, v32, v33) )
      {
        ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22944LL);
        sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v30, v31, v32, v33);
        if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x40) != 0
          || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v57, v58, v59, v60),
              (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 4) != 0) )
        {
          sub_188ABF0(a1, a2, a3, a4);
        }
      }
    }
    v34 = a2[6].m128i_i64[1];
    sub_7052B0((__int64 *)(v34 + 96), v34, v30, v31, v32, v33);
    if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 8) == 0 )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22952LL);
      sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v35, v36, v37, v38);
      if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 1) & 4) != 0
        || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v53, v54, v55, v56),
            v89 = *(unsigned int *)(a2[8].m128i_i64[0] + 20),
            (_DWORD)v89)
        || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v89, v86, v87, v88),
            ((*(_BYTE *)a2[8].m128i_i64[0] >> 1) & 0x14) != 0)
        || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v90, v91, v92, v93),
            *(char *)(a2[8].m128i_i64[0] + 3) < 0)
        || (v34 = a2[6].m128i_i64[1],
            sub_7052B0((__int64 *)(v34 + 96), v34, v94, v95, v96, v97),
            (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x10) != 0) )
      {
        v34 = (__int64)a2;
        sub_188BD60(a1, a2, a3, a4);
      }
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) != 0 )
    {
      if ( (unsigned __int8)sub_B9C100((__int64)a2, v34, v35, v36, v37, v38) )
      {
        ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22960LL);
        if ( sub_ED8AE0((__int64)a2, v34, v35, v36, v37, v38)
          || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v45, v46, v47, v48),
              (*(_BYTE *)(a2[8].m128i_i64[0] + 4) & 1) != 0)
          || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v49, v50, v51, v52),
              (*(_BYTE *)(a2[8].m128i_i64[0] + 3) & 0x10) != 0) )
        {
          sub_188B8A0(a1, a2, a3, a4);
        }
      }
    }
    sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v35, v36, v37, v38);
    if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 9) & 0x20) == 0 )
    {
      ++*(_DWORD *)(*(_QWORD *)(a1 + 248) + 22968LL);
      sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v7, v8, v9, v10);
      if ( (*(_BYTE *)(a2[8].m128i_i64[0] + 1) & 4) != 0
        || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v39, v40, v41, v42),
            *(_DWORD *)(a2[8].m128i_i64[0] + 20))
        || (sub_7052B0((__int64 *)(a2[6].m128i_i64[1] + 96), a2[6].m128i_i64[1], v98, v99, v100, v101),
            (*(_BYTE *)(a2[8].m128i_i64[0] + 4) & 2) != 0) )
      {
        sub_18892E0(a1, a2, a3, a4);
      }
    }
  }
  if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 || *(_DWORD *)(a1 + 11320) > *(_DWORD *)(a1 + 12596) )
    return;
  v106 = 0x400000000LL;
  v11 = *(_QWORD *)(a1 + 248);
  v105 = (__int64 *)v107;
  v103 = v11;
  if ( (sub_B94670(v4, (v11 + 18072) | 6, v7, v8, v9, v10) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    goto LABEL_58;
  for ( i = sub_BA5B10((__int64)a2); i; i = sub_BA5A00(i) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(i + 40);
      if ( v17 )
      {
        if ( (v17 & 4) == 0 )
        {
          v18 = v17 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v18 )
          {
            if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 34 <= 5 )
            {
              if ( (unsigned int)sub_B77890(v18) == 30 )
              {
                LODWORD(v106) = 0;
                v81 = 0;
                goto LABEL_60;
              }
              if ( (unsigned int)sub_B77890(v18) == 34 && (*(_BYTE *)(v18 + 83) & 4) != 0 )
              {
                v43 = (unsigned int)v106;
                v13 = HIDWORD(v106);
                v44 = (unsigned int)v106 + 1LL;
                if ( v44 > HIDWORD(v106) )
                {
                  sub_2237220(&v105, v107, v44, 8);
                  v43 = (unsigned int)v106;
                }
                v12 = (__int64)v105;
                v105[v43] = v18;
                LODWORD(v106) = v106 + 1;
              }
            }
          }
        }
      }
      if ( (*(_BYTE *)(i + 48) & 1) != 0 )
        break;
      i = *(_QWORD *)(i + 48);
      if ( !i )
        goto LABEL_15;
    }
  }
LABEL_15:
  v19 = sub_B94670(v4, (v103 + 18136) | 6, v12, v13, v14, v15);
  if ( !v19 )
  {
LABEL_58:
    v20 = (unsigned int)v106;
    goto LABEL_59;
  }
  v20 = (unsigned int)v106;
  while ( 1 )
  {
    v21 = v19;
    v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
    LODWORD(v21) = (v21 >> 2) & 1;
    v23 = (unsigned int)v21;
    if ( !(_DWORD)v21 )
      break;
    if ( !v22 )
      goto LABEL_59;
    v24 = *(_QWORD *)v22;
    if ( (*(_BYTE *)(*(_QWORD *)v22 + 28LL) & 0x7Fu) - 34 > 5 || (*(_BYTE *)(v24 + 83) & 4) == 0 )
      goto LABEL_21;
    v85 = v20 + 1;
    if ( HIDWORD(v106) < (unsigned __int64)(v20 + 1) )
      goto LABEL_84;
    v105[v20] = v24;
    v20 = (unsigned int)(v106 + 1);
    LODWORD(v106) = v106 + 1;
LABEL_72:
    if ( !v22 )
      goto LABEL_59;
LABEL_21:
    v19 = *(_QWORD *)(v22 + 8);
    if ( !v19 )
      goto LABEL_59;
  }
  if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 34 > 5 || (*(_BYTE *)(v22 + 83) & 4) == 0 )
    goto LABEL_59;
  v85 = v20 + 1;
  if ( HIDWORD(v106) < (unsigned __int64)(v20 + 1) )
  {
    v24 = v22;
LABEL_84:
    v104 = v22;
    v102 = v24;
    sub_2237220(&v105, v107, v85, 8);
    v105[(unsigned int)v106] = v102;
    v20 = (unsigned int)(v106 + 1);
    v22 = v104;
    LODWORD(v106) = v106 + 1;
    if ( !v23 )
      goto LABEL_59;
    goto LABEL_72;
  }
  v105[v20] = v22;
  v20 = (unsigned int)(v106 + 1);
  LODWORD(v106) = v106 + 1;
LABEL_59:
  v81 = v20;
LABEL_60:
  v82 = v105;
  v83 = &v105[v81];
  if ( v105 != v83 )
  {
    do
    {
      v84 = *v82++;
      sub_183C8E0(a1, (__int64)a2, v84);
    }
    while ( v83 != v82 );
    v83 = v105;
  }
  if ( v83 != (__int64 *)v107 )
    free(v83);
}
