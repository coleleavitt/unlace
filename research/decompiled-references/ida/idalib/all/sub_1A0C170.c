__int64 __fastcall sub_1A0C170(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __int64 a8)
{
  char v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rbp
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // r14d
  __int64 v36; // rcx
  unsigned int v37; // ebx
  __int64 v38; // r12
  __int64 *v39; // rax
  __int64 v40; // rax
  int v41; // ebp
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r13
  unsigned __int64 v45; // rdx
  bool v46; // cf
  __int64 v47; // rdx
  __int64 v48; // rdi
  _QWORD *v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // edx
  unsigned __int64 v53; // r15
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rdx
  int v59; // edx
  __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned __int64 v63; // rax
  _QWORD *v64; // rax
  unsigned __int64 v65; // rax
  _QWORD *v66; // rbx
  char v67; // r13
  _QWORD *v68; // r15
  unsigned __int8 v69; // r12
  __int64 v70; // rdx
  _QWORD *v71; // rcx
  __int64 v72; // r8
  unsigned __int8 v73; // al
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r10
  unsigned __int64 *v77; // rbx
  unsigned __int64 v78; // r13
  __int64 v79; // r12
  unsigned __int8 v80; // al
  __int64 v81; // r11
  unsigned __int8 v82; // cl
  __m128i si128; // xmm1
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v87; // [rsp+8h] [rbp-170h]
  __int64 v88; // [rsp+10h] [rbp-168h] BYREF
  _QWORD *v89; // [rsp+18h] [rbp-160h]
  __int64 v90; // [rsp+20h] [rbp-158h]
  __int64 v91; // [rsp+28h] [rbp-150h]
  int v92; // [rsp+30h] [rbp-148h]
  char v93; // [rsp+37h] [rbp-141h]
  unsigned __int64 v94; // [rsp+38h] [rbp-140h]
  unsigned __int64 v95; // [rsp+40h] [rbp-138h]
  __int64 v96; // [rsp+48h] [rbp-130h]
  __int64 v97; // [rsp+50h] [rbp-128h]
  __int64 v98; // [rsp+58h] [rbp-120h]
  unsigned __int64 *v99; // [rsp+60h] [rbp-118h]
  unsigned __int64 v100; // [rsp+68h] [rbp-110h] BYREF
  int v101; // [rsp+74h] [rbp-104h] BYREF
  const __m128i *v102; // [rsp+78h] [rbp-100h] BYREF
  __m128i v103; // [rsp+80h] [rbp-F8h] BYREF
  unsigned __int64 v104; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v105; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v106[24]; // [rsp+A8h] [rbp-D0h] BYREF
  __m128i v107; // [rsp+C0h] [rbp-B8h]
  __m128i v108; // [rsp+D0h] [rbp-A8h]
  __int64 v109; // [rsp+E0h] [rbp-98h]

  v9 = a5;
  v10 = *(_QWORD *)(a2 + 16);
  v100 = a4;
  v92 = a6;
  v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v93 = a5;
  v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43;
  if ( (unsigned int)v12 > 1 )
    goto LABEL_4;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v11 + 32);
    if ( (*(_BYTE *)(v11 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43;
      if ( (unsigned int)v12 <= 1 )
        break;
LABEL_4:
      v14 = sub_F63050(v11, a2, v12, a4);
      v13 = *(_QWORD *)(v14 + 32);
      if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  v87 = v13;
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *v15;
  v89 = v15;
  v17 = *(_QWORD *)(v16 + 8) & 7LL;
  if ( v17 | (*(__int64 *)(v16 + 8) >> 3) & 1 )
    v18 = sub_F64F00(v87, a2, v17, v17 | (*(__int64 *)(v16 + 8) >> 3) & 1, a5) & 0xFFFFFFFFFFFFFFF0LL;
  else
    v18 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  v19 = *(_QWORD *)(v100 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v20 = *(_QWORD *)(*(_QWORD *)v19 + 8LL) & 7LL;
  if ( v20 | (*(__int64 *)(*(_QWORD *)v19 + 8LL) >> 3) & 1 )
    v21 = sub_F64F00(*(_QWORD *)(v100 + 8), a2, v20, v20 | (*(__int64 *)(*(_QWORD *)v19 + 8LL) >> 3) & 1, a5)
        & 0xFFFFFFFFFFFFFFF0LL;
  else
    v21 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFF0LL;
  v22 = 2;
  v23 = a8 + 192;
  sub_1BD2860(a8 + 192, 2);
  v24 = *(_BYTE *)a3 == 2;
  LOBYTE(v90) = 1;
  if ( v24 )
    LOBYTE(v90) = *(_BYTE *)(a3 + 1) == 1;
  if ( v9 )
  {
    v24 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48;
    v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v24 )
    {
      v22 = *(unsigned int *)(a3 + 4);
      if ( (unsigned __int8)sub_1E63330(a1, v22, v18, 1, 0)
        || (v22 = (__int64)sub_F60F10(v94, v22, v25, v26, v27, v28), (v76 = sub_1A3D890(a1, v22)) == 0) )
      {
        if ( *((char *)sub_F60F10(v94, v22, v25, v26, v27, v28) + 28) < 0 )
          return 1;
      }
      else
      {
        v95 = v21;
        v99 = &v100;
        v96 = a3;
        do
        {
          v77 = (unsigned __int64 *)(v76 & 0xFFFFFFFFFFFFFFF8LL);
          v78 = v76 & 0xFFFFFFFFFFFFFFF8LL;
          v79 = (v76 >> 2) & 1;
          if ( ((v76 >> 2) & 1) != 0 )
          {
            v78 = 0;
            if ( v77 )
              v78 = *v77;
          }
          v80 = *(_BYTE *)(v78 + 28) & 0x7F;
          if ( v80 != 81 )
          {
            if ( (unsigned int)v80 - 53 <= 1 || (v81 = v78, ((v80 + 52) & 0x7Fu) <= 1) )
            {
              v81 = sub_B72ED0(v78);
              v80 = *(_BYTE *)(v81 + 28) & 0x7F;
            }
            v82 = *(_BYTE *)(v81 + 29);
            v88 = 0;
            v26 = (v82 >> 5) & 3;
            v25 = v26 | v78;
            v105 = v26 | v78;
            if ( v80 == 71 )
            {
              v25 = *(_QWORD *)(v81 + 48);
              v88 = v81;
              v81 = v25;
              v80 = *(_BYTE *)(v25 + 28) & 0x7F;
            }
            if ( v80 == 38 )
            {
              v91 = v81;
              a7 = _mm_loadh_ps((const double *)&v88);
              *(__m128 *)v106 = a7;
              si128 = _mm_load_si128((const __m128i *)&v105);
              v104 = a7.m128_u64[1];
              v103 = si128;
              if ( *(char *)(v81 + 28) >= 0 )
              {
                v22 = 1;
                v91 = v81;
                if ( sub_B99130(v81, 1) )
                {
                  if ( v88 )
                  {
                    v22 = v88;
                    sub_1BF2330(a1, v88, v103.m128i_i32[0], 0, (_DWORD)v99, 1, v23, 1, 0, 0, 0, 0, 0);
                  }
                  else
                  {
                    v97 = 0;
                    v22 = v91;
                    v98 = 0;
                    sub_1BF10B0(a1, v91, v103.m128i_i32[0], (_DWORD)v99, 1, v23, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                  }
                }
              }
            }
          }
          if ( !v79 )
            break;
          if ( !v77 )
            break;
          v76 = v77[1];
        }
        while ( v76 );
        v21 = v95;
        a3 = v96;
        if ( *((char *)sub_F60F10(v94, v22, v25, v26, v27, v28) + 28) < 0 )
          return 1;
      }
    }
  }
  v29 = *(_QWORD *)(*(_QWORD *)v21 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v30 = *(_QWORD *)v29;
  if ( *(_BYTE *)(*(_QWORD *)v29 + 16LL) != 48 )
    goto LABEL_18;
  v22 = *(unsigned int *)(a3 + 4);
  if ( (unsigned __int8)sub_1E63330(a1, v22, v21, 1, 0)
    || (v64 = sub_F60F10(v30, v22, v31, v32, v33, v34), v65 = sub_B9F870((__int64)v64), v66 = (_QWORD *)v31, v31 == v65) )
  {
    if ( *((char *)sub_F60F10(v30, v22, v31, v32, v33, v34) + 28) < 0 )
      return 1;
    goto LABEL_18;
  }
  v94 = v18;
  v67 = v93;
  v68 = (_QWORD *)v65;
  v95 = v30;
  v69 = v90;
  do
  {
    while ( 1 )
    {
      v22 = *v68 & 0xFFFFFFFFFFFFFFF8LL;
      v71 = (_QWORD *)(*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v22 + 16) & 4) != 0 )
        v71 = (_QWORD *)*v71;
      if ( v71 )
        v71 -= 8;
      v73 = *(_BYTE *)(v22 + 28) & 0x7F;
      if ( (unsigned int)v73 - 53 <= 1 )
      {
        v22 = *(_QWORD *)(v22 + 64);
        v73 = *(_BYTE *)(v22 + 28) & 0x7F;
      }
      if ( v73 != 71 )
        break;
      if ( !v67 )
      {
        v70 = v22;
        v22 = *(_QWORD *)(v22 + 48);
        goto LABEL_93;
      }
LABEL_54:
      sub_1BEE030(a1, v22, *v68, (_DWORD)v71, v100, v10, v23, 0, v69, 1);
LABEL_55:
      if ( v66 == ++v68 )
        goto LABEL_65;
    }
    v70 = 0;
    if ( v67 )
      goto LABEL_64;
LABEL_93:
    v84 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v72 = (unsigned int)*(unsigned __int8 *)(v84 + 16) - 25;
    if ( (unsigned int)v72 > 1 )
    {
      v85 = *(_QWORD *)(*(_QWORD *)(v22 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v91 = v70;
      v90 = v22;
      v88 = (__int64)v71;
      v84 = sub_F63050(v85, v22, v70, v71);
      v70 = v91;
      v22 = v90;
      v71 = (_QWORD *)v88;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v84 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 43 )
      goto LABEL_55;
    if ( v70 )
    {
      v22 = v70;
      goto LABEL_54;
    }
LABEL_64:
    sub_1BEE590(a1, v22, *v68++, (_DWORD)v71, v100, v10, v23, 0, v69, 1, 0);
  }
  while ( v66 != v68 );
LABEL_65:
  v18 = v94;
  if ( *((char *)sub_F60F10(v95, v22, v70, (__int64)v71, v72, v34) + 28) < 0 )
    return 1;
LABEL_18:
  v35 = sub_EEB7E0(v100, v22, *(double *)a7.m128_u64);
  v37 = sub_1BF27B0(v23, a1, v35, &v102);
  if ( !v37 )
  {
    v38 = v102->m128i_i64[0];
    *(_BYTE *)(v38 + 29) |= 8u;
    v103.m128i_i64[0] = 0;
    if ( (*(_BYTE *)(v38 + 28) & 0x7F) == 0x25 )
    {
      v74 = *(_QWORD *)(*(_QWORD *)(v38 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v75 = (unsigned int)*(unsigned __int8 *)(v74 + 16) - 25;
      if ( (unsigned int)v75 > 1 )
        v74 = sub_F63050(v74, a1, v75, v36);
      v103.m128i_i64[0] = *(_QWORD *)(v74 + 24);
      v39 = (__int64 *)(v103.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v103.m128i_i64[0] = v18;
      v39 = (__int64 *)v18;
    }
    v40 = *v39;
    v41 = 1;
    v42 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (_BYTE)v42 != 43 )
    {
      if ( *(_BYTE *)(v40 + 16) == 44 || (_BYTE)v42 == 44 && (v40 = sub_F63050(v40, a1, v42, v36)) != 0 )
      {
        while ( 1 )
        {
          v24 = (*(_BYTE *)(v40 + 18) & 0x10) == 0;
          v40 = *(_QWORD *)(*(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( v24 )
            break;
          v43 = (unsigned int)*(unsigned __int8 *)(v40 + 16) - 43;
          if ( (unsigned int)v43 > 1 )
            v40 = sub_F63050(v40, a1, v43, v36);
        }
        v41 = ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1)
            + 1;
      }
      else
      {
        v41 = 0;
      }
    }
    v103.m128i_i64[0] = sub_F67970(&v103, *(_QWORD *)(a1 + 248));
    v44 = a8 + 8;
    v45 = *(unsigned int *)(a8 + 200) + (unsigned __int64)(*(_DWORD *)(a8 + 3056) & 0x3FFFFFFF);
    v46 = v45 == 0;
    v24 = v45 == 1;
    v47 = v102->m128i_i64[1];
    *(_QWORD *)&v106[16] = v38;
    v106[8] = !v46 && !v24;
    v107.m128i_i64[0] = v47;
    LODWORD(v105) = 8;
    *(_QWORD *)v106 = v103.m128i_i64[0];
    sub_1A0C040(a8 + 8, (const __m128i *)&v105);
    if ( (unsigned int)sub_1BE5E80(a1, v35, v18, v103.m128i_i64[0], &v101) )
    {
      v48 = v103.m128i_i64[0];
    }
    else
    {
      LODWORD(v105) = 6;
      *(_QWORD *)v106 = 0;
      sub_1BCD530(&v106[8]);
      if ( (v105 & 0x7FFFFFFF) == 3 )
        sub_1BD22E0(&v106[8]);
      LODWORD(v105) = v105 & 0x80000000;
      *(__m128i *)&v106[8] = _mm_loadu_si128(v102 + 7);
      v107 = _mm_loadu_si128(v102 + 8);
      v108 = _mm_loadu_si128(v102 + 9);
      v109 = v102[10].m128i_i64[0];
      sub_1A0BA10(a8, (const __m128i *)&v105, v108.m128i_i64[0], 0);
      v48 = v108.m128i_i64[0];
      v103.m128i_i64[0] = v108.m128i_i64[0];
      v41 = 0;
      if ( (v105 & 0x7FFFFFFF) == 3 )
      {
        sub_1BD22E0(&v106[8]);
        v48 = v103.m128i_i64[0];
      }
    }
    v49 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
    v50 = v89[1];
    v88 = v87 & 7;
    v51 = v48 & 7;
    v52 = ((unsigned __int8)v50 | (unsigned __int8)v87) & 7;
    if ( (v50 & 8) != 0
      && (v61 = v88 | *(__int64 *)((char *)&qword_18 + (v50 & 0xFFFFFFFFFFFFFFF0LL)) | v50 & 7,
          v52 = v61,
          (v61 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v62 = v51 | v61;
      if ( (v48 & 8) != 0 )
      {
        v62 |= *(__int64 *)((char *)&qword_18 + (v48 & 0xFFFFFFFFFFFFFFF0LL));
        v49 = (_QWORD *)*v49;
      }
      v63 = sub_A70C40(*(_QWORD *)(a1 + 248), (__int64)v49, v62);
      LOBYTE(v48) = v103.m128i_i8[0];
      v53 = v63;
      v49 = (_QWORD *)(v103.m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v53 = (unsigned int)v51 | v52 | v48 & 0xFFFFFFFFFFFFFFF8LL;
    }
    v54 = v49[1];
    v55 = 0;
    if ( (v54 & 8) != 0 )
      v55 = *(__int64 *)((char *)&qword_18 + (v54 & 0xFFFFFFFFFFFFFFF0LL));
    v56 = *(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL];
    v57 = v55 | ((unsigned __int8)v48 | (unsigned __int8)v54) & 7;
    v58 = 0;
    if ( (v56 & 8) != 0 )
      v58 = *(__int64 *)((char *)&qword_18 + (v56 & 0xFFFFFFFFFFFFFFF0LL));
    if ( (v58 | ((unsigned __int8)v53 | (unsigned __int8)v56) & 7) != v57 )
      sub_1A0B930(a8, v53, v41);
    *(_QWORD *)v106 = v53;
    LODWORD(v105) = (v41 == 0) + 4;
    sub_1A0C040(v44, (const __m128i *)&v105);
    v59 = ((_BYTE)v92 == 0) + 1;
    if ( (v101 & 8) != 0 )
    {
      sub_1A0B840(a8, v87, v59);
    }
    else
    {
      v37 = v101 & 0x10;
      if ( (v101 & 0x10) != 0 )
      {
        v37 = 0;
        LODWORD(v105) = 24;
        *(_QWORD *)v106 = v87;
        sub_1A0C040(v44, (const __m128i *)&v105);
      }
      else if ( (v101 & 4) != 0 )
      {
        LODWORD(v105) = 12;
        *(_QWORD *)v106 = v87;
        sub_1A0C040(v44, (const __m128i *)&v105);
      }
      else
      {
        v37 = v101 & 1;
        if ( (v101 & 1) != 0 )
        {
          v37 = 0;
          if ( (*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v53) & 7) != (v89[1] | v88) )
            sub_1A0B930(a8, v87, v59);
        }
      }
    }
  }
  return v37;
}
