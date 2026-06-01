__int64 __fastcall sub_1CC7360(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 si128)
{
  unsigned int v8; // eax
  unsigned int v9; // r12d
  _QWORD *v11; // r12
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  size_t v27; // rax
  __m128i *v28; // rax
  size_t v29; // rax
  __int64 v30; // r8
  char *v31; // rsi
  __int64 v32; // rcx
  size_t v33; // r9
  unsigned __int64 v34; // rdx
  __int8 *v35; // rdi
  __m128i *v36; // rdx
  unsigned int v37; // eax
  int v38; // eax
  __int64 v39; // rbp
  int v40; // eax
  int v41; // eax
  __int64 *v42; // rax
  __int64 *v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rbp
  unsigned __int64 v46; // rbp
  __int64 v47; // r13
  unsigned int *v48; // rdx
  __int64 v49; // r13
  unsigned int *v50; // rbp
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // rdx
  _QWORD *v53; // r15
  _QWORD *v54; // rbx
  _QWORD *v55; // rdi
  void *v56; // rdi
  void **v57; // r15
  void **v58; // rbx
  __int64 v59; // rcx
  __int64 *i; // rax
  __int64 v61; // rcx
  unsigned int v62; // eax
  size_t v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  unsigned int v67; // eax
  __int64 v68; // r9
  __int64 v69; // r10
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // r15
  size_t v77; // [rsp+10h] [rbp-2E8h]
  __int64 v78; // [rsp+10h] [rbp-2E8h]
  size_t v79; // [rsp+10h] [rbp-2E8h]
  unsigned int v80; // [rsp+10h] [rbp-2E8h]
  size_t v81; // [rsp+10h] [rbp-2E8h]
  __int64 v82; // [rsp+28h] [rbp-2D0h] BYREF
  void *v83; // [rsp+30h] [rbp-2C8h] BYREF
  __int64 v84; // [rsp+38h] [rbp-2C0h]
  __m128 v85; // [rsp+40h] [rbp-2B8h] BYREF
  __int64 v86[3]; // [rsp+50h] [rbp-2A8h] BYREF
  void *v87; // [rsp+68h] [rbp-290h]
  __int64 v88; // [rsp+78h] [rbp-280h] BYREF
  void *v89[2]; // [rsp+90h] [rbp-268h] BYREF
  __int64 v90; // [rsp+A0h] [rbp-258h] BYREF
  void *v91; // [rsp+A8h] [rbp-250h]
  __int64 v92; // [rsp+B8h] [rbp-240h] BYREF
  __int16 v93; // [rsp+D0h] [rbp-228h] BYREF
  unsigned int **v94; // [rsp+D8h] [rbp-220h]
  unsigned int v95; // [rsp+E0h] [rbp-218h] BYREF
  char v96; // [rsp+E4h] [rbp-214h]
  __m128i *v97; // [rsp+120h] [rbp-1D8h] BYREF
  size_t v98; // [rsp+128h] [rbp-1D0h]
  __m128i v99[8]; // [rsp+130h] [rbp-1C8h] BYREF
  unsigned int *v100; // [rsp+1B0h] [rbp-148h] BYREF
  __int64 v101; // [rsp+1B8h] [rbp-140h]
  _BYTE v102[312]; // [rsp+1C0h] [rbp-138h] BYREF

  v8 = *(_DWORD *)a4;
  v82 = a3;
  if ( ((v8 >> 14) & 0xC) != 0 )
    return 0;
  v11 = (_QWORD *)a4;
  if ( a5 && (*(_BYTE *)(a5 + 29) & 1) != 0 )
  {
    v42 = sub_B8C3D0(a5, a2, a3, a4, a5, a6);
    a3 = *v42;
    a4 = *v42 + 8LL * *((unsigned int *)v42 + 2);
    if ( *v42 >= a4 )
    {
      if ( a3 != a4 )
      {
        if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 197 )
          return 0;
        for ( i = (__int64 *)(a4 + 8); ; ++i )
        {
          a4 = (unsigned __int64)i;
          if ( (__int64 *)a3 == i )
            break;
          v61 = *i;
          if ( *(_WORD *)(v61 + 36) == 197 )
            return 0;
        }
      }
    }
    else
    {
      v43 = (__int64 *)*v42;
      while ( 1 )
      {
        a3 = *v43;
        if ( *(_WORD *)(*v43 + 36) == 197 )
          break;
        if ( (__int64 *)a4 == ++v43 )
          goto LABEL_6;
      }
      if ( (__int64 *)a4 != v43 )
        return 0;
    }
  }
LABEL_6:
  v14 = sub_C00A40((unsigned __int64)v11, a2, a3, a4, a5);
  sub_1E63330(a1, v14, v82, 1, 0);
  if ( (*(_BYTE *)(a1[29] + 1) & 0x10) == 0 )
    return 0;
  v18 = sub_190ABA0((__int64)a1, v11, 1, v15, v16, v17, a7, si128);
  if ( v18 == 1 )
    return 2;
  v21 = a1[31];
  v22 = v18 & 0xFFFFFFFFFFFFFFFELL;
  v93 = 0;
  v100 = (unsigned int *)v102;
  v101 = 0x800000000LL;
  v94 = &v100;
  v96 &= ~1u;
  v95 = 0;
  if ( !(unsigned __int8)sub_C3D370(v18 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v93, v21, 0, v19, v20) || (_BYTE)v93 )
  {
    v44 = sub_C00A40(v22, (__int64)&v93, v23, v24, v25);
    if ( (_DWORD)v101 == 1 && v100[6] == 108 )
    {
      v80 = *v100;
      sub_C239B0((__int64)v100, (__int64)(v100 + 8));
      v44 = v80;
      LODWORD(v101) = 0;
    }
    sub_168B9F0((__int64)&v97, a1 + 1, v44, 0x13EBu, 0);
    v86[0] = *(_QWORD *)(v22 + 8);
    v45 = sub_162B6D0((__int64)&v97, v86);
    v89[0] = (void *)sub_EEC8C0(v22, (__int64)v86, *(double *)a7.m128i_i64);
    sub_1587DB0(v45, (__int64 *)v89);
    sub_15F7200(&v97);
    if ( (_DWORD)v101 )
    {
      v46 = 0;
      v47 = 32 * ((unsigned int)(v101 - 1) + 1LL);
      do
      {
        v48 = &v100[v46 / 4];
        v46 += 32LL;
        sub_168CDE0((__int64)&v97, a1 + 1, *v48, (__int64)(v48 + 2), 0);
        sub_15F7200(&v97);
      }
      while ( v47 != v46 );
    }
    goto LABEL_45;
  }
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v26 + 16) == 13 && ((*(_WORD *)(v26 + 18) >> 3) & 0x1FF) == 0x1E8 )
  {
LABEL_34:
    v9 = 1;
    goto LABEL_46;
  }
  if ( v95 != 7 )
  {
    if ( v95 != 12 )
      goto LABEL_14;
    goto LABEL_90;
  }
  if ( (unsigned __int8)sub_A510C0((__int64)&v95) )
    goto LABEL_92;
  v62 = v95;
  if ( v95 == 12 )
  {
LABEL_90:
    if ( sub_A51390((__int64)&v95) )
    {
      v62 = v95;
      goto LABEL_82;
    }
LABEL_92:
    if ( !sub_1CAFE20(*(_QWORD *)(v22 + 8), v82) )
    {
      v70 = v68;
      if ( !sub_1BD41F0((__int64)a1, v68, v69, 0, &v83) )
      {
        v74 = sub_C00A40(v22, v70, v71, v72, v73);
        sub_168B9F0((__int64)&v97, a1 + 1, v74, 0x13FBu, 0);
        v86[0] = *(_QWORD *)(v22 + 8);
        v75 = sub_162B6D0((__int64)&v97, v86);
        v76 = sub_1605D30(v75, &v82);
        v89[0] = (void *)sub_EEC8C0(v22, (__int64)&v82, *(double *)a7.m128i_i64);
        sub_1587DB0(v76, (__int64 *)v89);
        sub_15F7200(&v97);
        sub_1CC6E20((__int64)a1, a2);
      }
    }
    goto LABEL_34;
  }
LABEL_82:
  if ( v62 == 7 )
  {
    v97 = (__m128i *)sub_A51060((__int64)&v95);
    v98 = v63;
    if ( !sub_A4F700(&v97) )
    {
      v67 = sub_C00A40(v22, (__int64)&v93, v64, v65, v66);
      sub_168B9F0((__int64)&v97, a1 + 1, v67, 0x13E1u, 0);
      sub_A53AF0((__int64)v89, &v95, a1[31], v82);
      sub_1682AF0((__int64)&v97, (__int64)v89);
      if ( v89[0] != &v90 )
        operator delete(v89[0]);
      sub_15F7200(&v97);
LABEL_45:
      v9 = 2;
      sub_1CC6E20((__int64)a1, a2);
      goto LABEL_46;
    }
  }
LABEL_14:
  v9 = sub_BFE6E0(v22, a1[31], 0, *(double *)a7.m128i_i64);
  if ( v9 )
  {
    sub_F78400((__int64)v89, &v82);
    v27 = j__strlen("static_cast<");
    v28 = (__m128i *)sub_99BDC0(v89, 0, 0, "static_cast<", v27);
    v97 = v99;
    if ( (__m128i *)v28->m128i_i64[0] == &v28[1] )
    {
      a7 = _mm_loadu_si128(v28 + 1);
      v99[0] = a7;
    }
    else
    {
      v97 = (__m128i *)v28->m128i_i64[0];
      v99[0].m128i_i64[0] = v28[1].m128i_i64[0];
    }
    v98 = v28->m128i_u64[1];
    v28->m128i_i64[0] = (__int64)v28[1].m128i_i64;
    v28->m128i_i64[1] = 0;
    v28[1].m128i_i8[0] = 0;
    v29 = j__strlen(">(");
    v31 = (char *)v98;
    if ( v29 > 0x7FFFFFFFFFFFFFFFLL - v98 )
      std::__throw_length_error("basic_string::append");
    v32 = (__int64)v97;
    v33 = v29 + v98;
    if ( v97 == v99 )
      v34 = 15;
    else
      v34 = v99[0].m128i_i64[0];
    if ( v33 > v34 )
    {
      v81 = v29 + v98;
      sub_998B30((__int64)&v97, v98, 0, ">(", v29);
      v32 = (__int64)v97;
      v33 = v81;
    }
    else if ( v29 )
    {
      v35 = &v97->m128i_i8[v98];
      if ( v29 == 1 )
      {
        *v35 = 62;
        v32 = (__int64)v97;
      }
      else
      {
        v31 = ">(";
        v77 = v29 + v98;
        memcpy(v35, ">(", v29);
        v32 = (__int64)v97;
        v33 = v77;
      }
    }
    v98 = v33;
    v36 = v99;
    *(_BYTE *)(v32 + v33) = 0;
    v83 = &v85;
    if ( v97 == v99 )
    {
      si128 = (__m128)_mm_load_si128(v99);
      v85 = si128;
    }
    else
    {
      v83 = v97;
      v85.m128_u64[0] = v99[0].m128i_i64[0];
    }
    v84 = v98;
    if ( v89[0] != &v90 )
      operator delete(v89[0]);
    v37 = sub_C00A40(v22, (__int64)v31, (__int64)v36, v32, v30);
    sub_168B9F0((__int64)&v97, a1 + 1, v37, 0x13FAu, 0);
    v78 = sub_1605D30((__int64)&v97, &v82);
    v38 = sub_EEB7E0(v22, (__int64)&v82, *(double *)a7.m128i_i64);
    sub_9EC740((__int64)v86, v38, v83, v84, 0);
    v39 = sub_1589170(v78, v86);
    v79 = j__strlen(")");
    v40 = sub_EEC140(v22);
    v41 = sub_15F0EF0((__int64)a1, v40, 0, a7, *(double *)si128.m128_u64);
    sub_9EC740((__int64)v89, v41, ")", v79, 0);
    sub_1589170(v39, v89);
    if ( v91 != &v92 )
      operator delete(v91);
    if ( v87 != &v88 )
      operator delete(v87);
    sub_15F7200(&v97);
    sub_1CC6E20((__int64)a1, a2);
    if ( v83 != &v85 )
      operator delete(v83);
    goto LABEL_34;
  }
LABEL_46:
  v49 = (__int64)v100;
  v50 = &v100[8 * (unsigned int)v101];
  if ( v100 != v50 )
  {
    do
    {
      v50 -= 8;
      v51 = *((_QWORD *)v50 + 1);
      if ( v51 )
      {
        v52 = *((_QWORD *)v50 + 2);
        if ( v52 )
        {
          if ( v51 < v52 || v51 > v52 + 14848 )
          {
            v53 = *(_QWORD **)(v51 + 528);
            v54 = &v53[8 * (unsigned __int64)*(unsigned int *)(v51 + 536)];
            if ( v53 != v54 )
            {
              do
              {
                while ( 1 )
                {
                  v54 -= 8;
                  v55 = (_QWORD *)v54[3];
                  if ( v55 == v54 + 5 )
                    break;
                  operator delete(v55);
                  if ( v53 == v54 )
                    goto LABEL_53;
                }
              }
              while ( v53 != v54 );
LABEL_53:
              v54 = *(_QWORD **)(v51 + 528);
            }
            if ( v54 != (_QWORD *)(v51 + 544) )
              free(v54);
            v56 = *(void **)(v51 + 416);
            if ( v56 != (void *)(v51 + 432) )
              free(v56);
            v57 = (void **)(v51 + 384);
            v58 = (void **)(v51 + 64);
            do
            {
              while ( *v57 != v57 + 2 )
              {
                operator delete(*v57);
                v57 -= 4;
                if ( v57 == v58 )
                  goto LABEL_61;
              }
              v57 -= 4;
            }
            while ( v57 != v58 );
LABEL_61:
            operator delete((void *)v51, 0x3A0u);
          }
          else
          {
            v59 = *(unsigned int *)(v52 + 14976);
            *(_DWORD *)(v52 + 14976) = v59 + 1;
            *(_QWORD *)(v52 + 8 * v59 + 14848) = v51;
          }
        }
      }
    }
    while ( (unsigned int *)v49 != v50 );
    v50 = v100;
  }
  if ( v50 != (unsigned int *)v102 )
    free(v50);
  if ( v95 > 1 )
    sub_A4F8E0((int *)&v95);
  return v9;
}
