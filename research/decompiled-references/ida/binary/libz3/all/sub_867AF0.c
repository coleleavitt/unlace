__int64 __fastcall sub_867AF0(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4, unsigned int *a5, __int64 *a6)
{
  char **exception; // rbx
  char **v7; // r12
  unsigned int *v11; // r12
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __m128i v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int32 v20; // r8d
  __int64 v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdi
  int v24; // eax
  _QWORD *v25; // rdi
  __int64 (*v26)(void); // rax
  __int64 v27; // rdi
  char v28; // al
  __int64 v29; // rdx
  unsigned __int32 v30; // edx
  size_t v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  _DWORD *v35; // r8
  __int64 v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  __int64 *v39; // rdi
  int v40; // eax
  __int32 v41; // r10d
  size_t v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r11
  _DWORD *v46; // r9
  __m128i v47; // xmm1
  __int64 v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  __m128i *v51; // rdi
  __int64 v52; // rax
  __m128i v53; // xmm1
  __int64 *v54; // r13
  __int64 v55; // r11
  __int64 v56; // rax
  __int64 v57; // r8
  _QWORD *v58; // rax
  __int8 v59; // al
  __int64 v60; // rax
  unsigned int v61; // ecx
  __int64 v62; // rsi
  int v63; // ecx
  __int64 **v64; // rsi
  _QWORD *v65; // rax
  __int64 v66; // rax
  __m128i v67; // xmm1
  unsigned int v68; // r12d
  unsigned int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rsi
  _DWORD *v72; // r14
  __int64 v73; // rdi
  unsigned __int64 v74; // rcx
  __int64 v75; // rdi
  _QWORD *v76; // rax
  _QWORD *v77; // rbx
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  __int64 *v80; // rax
  unsigned int v81; // r13d
  unsigned int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rcx
  _DWORD *v85; // r12
  __int64 v86; // rax
  unsigned __int64 v87; // rsi
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int8 v90; // al
  __int64 v92; // [rsp+8h] [rbp-C0h]
  __int64 v93; // [rsp+8h] [rbp-C0h]
  __int32 v94; // [rsp+8h] [rbp-C0h]
  _QWORD *v95; // [rsp+8h] [rbp-C0h]
  unsigned __int32 v96; // [rsp+8h] [rbp-C0h]
  __m128i v97; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v98; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v99; // [rsp+30h] [rbp-98h] BYREF
  __int64 v100; // [rsp+40h] [rbp-88h]
  __int64 v101; // [rsp+48h] [rbp-80h]
  __m128i v102; // [rsp+50h] [rbp-78h] BYREF
  __int64 v103[11]; // [rsp+70h] [rbp-58h] BYREF

  if ( a4 == a5 )
    return 1;
  v11 = a5;
  if ( (unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 8), a4, a5) )
    return (unsigned __int32)-1;
  v97.m128i_i64[0] = sub_866CA0((__int64 *)a1, a2, a3, a4, a6);
  v13 = sub_866CA0((__int64 *)a1, a2, a3, v11, a6);
  v14 = v13;
  if ( !v97.m128i_i64[0] )
  {
    if ( !v13 )
      return sub_868720(a1, a2, a3, a4, v11, a6);
    v17 = *(_QWORD *)(v13 + 64);
    if ( v13 == v17 )
    {
      v59 = *(_BYTE *)(a1 + 176);
      v18 = *a6;
      v15 = v14;
      v11 = a4;
      *(_BYTE *)(a1 + 176) = 1;
      v98.m128i_i8[0] = v59;
      goto LABEL_50;
    }
    goto LABEL_22;
  }
  v15 = *(_QWORD *)(v97.m128i_i64[0] + 64);
  v16 = _mm_unpacklo_epi64((__m128i)v97.m128i_u64[0], (__m128i)(unsigned __int64)v15);
  if ( v13 )
  {
    v17 = *(_QWORD *)(v13 + 64);
    if ( v97.m128i_i64[0] != v15 )
    {
      v18 = *a6;
      if ( !*a6 )
      {
        v100 = *(_QWORD *)(v13 + 64);
        v98 = v16;
        v97.m128i_i64[0] = v13;
        v66 = sub_186B270(0x28u);
        v67 = _mm_load_si128(&v98);
        v17 = v100;
        *(_QWORD *)v66 = 0x100000002LL;
        v14 = v97.m128i_i64[0];
        v18 = v66 + 8;
        *a6 = v66 + 8;
        *(__m128i *)(v66 + 8) = v67;
        if ( v14 == v17 )
        {
          if ( !v15 )
          {
            v90 = *(_BYTE *)(a1 + 176);
            v15 = v14;
            *(_BYTE *)(a1 + 176) = 1;
            v11 = a4;
            v98.m128i_i8[0] = v90;
            goto LABEL_51;
          }
          if ( v17 != v15 )
          {
            if ( *(_QWORD *)(a1 + 184) != v15 )
              goto LABEL_15;
LABEL_77:
            if ( *(_QWORD *)(a1 + 192) == v17 )
              return 0;
LABEL_14:
            if ( v17 )
            {
LABEL_15:
              v26 = *(__int64 (**)(void))(**(_QWORD **)a1 + 440LL);
              if ( (char *)v26 == (char *)sub_79F010 )
              {
                v27 = *(_QWORD *)a1 + 1592LL;
              }
              else
              {
                v93 = v17;
                v60 = v26();
                v17 = v93;
                v27 = v60;
              }
              v92 = v17;
              v28 = sub_13D4210(v27, v15, v17);
              v29 = v92;
              if ( !v28 )
              {
                *(_QWORD *)(a1 + 184) = v15;
                *(_QWORD *)(a1 + 192) = v92;
                return 0;
              }
              v77 = (_QWORD *)*a6;
              if ( !*a6 )
              {
                v89 = (_QWORD *)sub_186B270(0x28u);
                v29 = v92;
                *v89 = 2;
                v77 = v89 + 1;
                *a6 = (__int64)(v89 + 1);
                goto LABEL_101;
              }
              v78 = *((_DWORD *)v77 - 2);
              if ( *((_DWORD *)v77 - 1) != v78 )
              {
LABEL_101:
                v79 = *((_DWORD *)v77 - 1);
                v80 = &v77[2 * v79];
                *v80 = v15;
                v80[1] = v29;
                *((_DWORD *)v77 - 1) = v79 + 1;
                return (unsigned __int32)-1;
              }
              v81 = (3 * v78 + 1) >> 1;
              v82 = 16 * v81 + 8;
              if ( 16 * v78 + 8 < v82 && v78 < v81 )
              {
                v83 = sub_186B270(v82);
                v84 = *a6;
                v29 = v92;
                v85 = (_DWORD *)v83;
                v77 = (_QWORD *)(v83 + 8);
                if ( *a6 )
                {
                  v86 = *(unsigned int *)(v84 - 4);
                  v87 = 0;
                  v85[1] = v86;
                  v88 = 16 * v86;
                  if ( v88 )
                  {
                    do
                    {
                      *(__m128i *)&v85[v87 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v84 + v87));
                      v87 += 16LL;
                    }
                    while ( v88 != v87 );
                  }
                  sub_186B220((void *)(v84 - 8));
                  v29 = v92;
                }
                else
                {
                  *(_DWORD *)(v83 + 4) = 0;
                }
                *a6 = (__int64)v77;
                *v85 = v81;
                goto LABEL_101;
              }
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v103, "Overflow encountered when expanding vector");
LABEL_114:
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v103);
              sub_233E40((__int64)v103);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_48;
          }
          return 1;
        }
        v22 = 1;
        goto LABEL_10;
      }
LABEL_7:
      v19 = *(_DWORD *)(v18 - 4);
      v20 = *(_DWORD *)(v18 - 8);
      if ( v19 == v20 )
      {
        v43 = 16 * ((3 * v19 + 1) >> 1) + 8;
        if ( 16 * v19 + 8 >= (unsigned int)v43 || v19 >= (3 * v19 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v103, "Overflow encountered when expanding vector");
          goto LABEL_114;
        }
        v98.m128i_i64[0] = v17;
        LODWORD(v100) = (3 * v19 + 1) >> 1;
        v97.m128i_i64[0] = v14;
        v99 = v16;
        v44 = sub_186B270(v43);
        v45 = *a6;
        v14 = v97.m128i_i64[0];
        v20 = v100;
        v17 = v98.m128i_i64[0];
        v46 = (_DWORD *)v44;
        v18 = v44 + 8;
        v47 = _mm_load_si128(&v99);
        if ( *a6 )
        {
          v48 = *(unsigned int *)(v45 - 4);
          *(_DWORD *)(v44 + 4) = v48;
          v49 = 0;
          v50 = 16 * v48;
          if ( v50 )
          {
            do
            {
              *(__m128i *)&v46[v49 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v45 + v49));
              v49 += 16LL;
            }
            while ( v50 != v49 );
          }
          v101 = v17;
          v99.m128i_i64[0] = (__int64)v46;
          v98.m128i_i32[0] = v20;
          v100 = v18;
          v97.m128i_i64[0] = v14;
          v102 = v47;
          sub_186B220((void *)(v45 - 8));
          v46 = (_DWORD *)v99.m128i_i64[0];
          v18 = v100;
          v14 = v97.m128i_i64[0];
          v20 = v98.m128i_i32[0];
          v17 = v101;
          v47 = _mm_load_si128(&v102);
          v51 = (__m128i *)(v100 + 16LL * *(unsigned int *)(v99.m128i_i64[0] + 4));
          v22 = *(_DWORD *)(v99.m128i_i64[0] + 4) + 1;
        }
        else
        {
          *(_DWORD *)(v44 + 4) = 0;
          v51 = (__m128i *)(v44 + 8);
          v22 = 1;
        }
        *a6 = v18;
        *v46 = v20;
        *v51 = v47;
        *(_DWORD *)(v18 - 4) = v22;
        if ( v17 != v14 )
        {
LABEL_9:
          if ( v22 != v20 )
            goto LABEL_10;
          goto LABEL_24;
        }
      }
      else
      {
        v21 = v19;
        v22 = v19 + 1;
        *(__m128i *)(v18 + 16 * v21) = v16;
        *(_DWORD *)(v18 - 4) = v22;
        if ( v17 != v14 )
          goto LABEL_9;
      }
      if ( !v15 )
        goto LABEL_31;
      goto LABEL_12;
    }
    if ( v13 == v17 )
    {
      if ( v17 != v15 )
      {
        if ( v15 == *(_QWORD *)(a1 + 184) && v17 == *(_QWORD *)(a1 + 192) )
          return 0;
        goto LABEL_15;
      }
      return 1;
    }
LABEL_22:
    v18 = *a6;
    if ( !*a6 )
    {
      v98.m128i_i64[0] = v17;
      v100 = v13;
      v65 = (_QWORD *)sub_186B270(0x28u);
      v15 = v97.m128i_i64[0];
      v14 = v100;
      v18 = (__int64)(v65 + 1);
      *v65 = 2;
      v17 = v98.m128i_i64[0];
      v24 = 1;
      *a6 = v18;
      v25 = (_QWORD *)v18;
LABEL_11:
      *v25 = v14;
      v25[1] = v17;
      *(_DWORD *)(v18 - 4) = v24;
      if ( v15 )
        goto LABEL_12;
      goto LABEL_31;
    }
    v22 = *(_DWORD *)(v18 - 4);
    v15 = v97.m128i_i64[0];
    if ( v22 != *(_DWORD *)(v18 - 8) )
    {
LABEL_10:
      v23 = v22;
      v24 = v22 + 1;
      v25 = (_QWORD *)(v18 + 16 * v23);
      goto LABEL_11;
    }
LABEL_24:
    v97.m128i_i32[0] = (3 * v22 + 1) >> 1;
    v31 = (unsigned int)(16 * v97.m128i_i32[0] + 8);
    if ( 16 * v22 + 8 >= (unsigned int)v31 || v22 >= (3 * v22 + 1) >> 1 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v103, "Overflow encountered when expanding vector");
      goto LABEL_114;
    }
    v98.m128i_i64[0] = v17;
    v100 = v14;
    v32 = sub_186B270(v31);
    v33 = *a6;
    v34 = v100;
    v17 = v98.m128i_i64[0];
    v35 = (_DWORD *)v32;
    v18 = v32 + 8;
    if ( *a6 )
    {
      v36 = *(unsigned int *)(v33 - 4);
      *(_DWORD *)(v32 + 4) = v36;
      v37 = 0;
      v38 = 16 * v36;
      if ( v38 )
      {
        do
        {
          *(__m128i *)&v35[v37 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v33 + v37));
          v37 += 16LL;
        }
        while ( v38 != v37 );
      }
      v101 = v17;
      v99.m128i_i64[0] = (__int64)v35;
      v98.m128i_i64[0] = v18;
      v100 = v34;
      sub_186B220((void *)(v33 - 8));
      v35 = (_DWORD *)v99.m128i_i64[0];
      v34 = v100;
      v17 = v101;
      v39 = (__int64 *)(v18 + 16LL * *(unsigned int *)(v99.m128i_i64[0] + 4));
      v40 = *(_DWORD *)(v99.m128i_i64[0] + 4) + 1;
    }
    else
    {
      *(_DWORD *)(v32 + 4) = 0;
      v39 = (__int64 *)(v32 + 8);
      v40 = 1;
    }
    v41 = v97.m128i_i32[0];
    *a6 = v18;
    *v35 = v41;
    *v39 = v34;
    v39[1] = v17;
    *(_DWORD *)(v18 - 4) = v40;
    if ( !v15 )
    {
LABEL_31:
      if ( v17 )
      {
        v15 = v17;
        v11 = a4;
        v98.m128i_i8[0] = *(_BYTE *)(a1 + 176);
        *(_BYTE *)(a1 + 176) = 1;
LABEL_51:
        LODWORD(v100) = *(_DWORD *)(v18 - 4);
        goto LABEL_52;
      }
      return sub_868720(a1, a2, a3, a4, v11, a6);
    }
LABEL_12:
    if ( v15 != v17 )
      goto LABEL_13;
    return 1;
  }
  if ( v97.m128i_i64[0] != v15 )
  {
    v18 = *a6;
    if ( !*a6 )
    {
      v97 = v16;
      v52 = sub_186B270(0x28u);
      v53 = _mm_load_si128(&v97);
      *(_QWORD *)v52 = 0x100000002LL;
      *a6 = v52 + 8;
      v17 = 0;
      *(__m128i *)(v52 + 8) = v53;
      if ( v15 )
      {
LABEL_13:
        if ( *(_QWORD *)(a1 + 184) != v15 )
          goto LABEL_14;
        goto LABEL_77;
      }
      return sub_868720(a1, a2, a3, a4, v11, a6);
    }
    v17 = 0;
    goto LABEL_7;
  }
  if ( *(_QWORD *)(a1 + 184) == v15 && !*(_QWORD *)(a1 + 192) )
    return 0;
LABEL_48:
  v98.m128i_i8[0] = *(_BYTE *)(a1 + 176);
  if ( v98.m128i_i8[0] )
    return 0;
  *(_BYTE *)(a1 + 176) = 1;
  v18 = *a6;
LABEL_50:
  LODWORD(v100) = 0;
  if ( v18 )
    goto LABEL_51;
LABEL_52:
  v54 = (__int64 *)v15;
  v55 = 0;
  if ( *(_QWORD *)(v15 + 80) == v15 )
    goto LABEL_60;
LABEL_53:
  v56 = v55;
  v55 = (__int64)v54;
  if ( v56 )
    goto LABEL_63;
LABEL_54:
  v54 = (__int64 *)v54[7];
  if ( v55 == v15 && v54 == (__int64 *)v15 )
    goto LABEL_64;
  if ( v54 == (__int64 *)v54[10] )
    goto LABEL_60;
  while ( 1 )
  {
    do
    {
      v54 = (__int64 *)v54[7];
      if ( v15 == v55 && (__int64 *)v15 == v54 )
      {
LABEL_64:
        v30 = 0;
        goto LABEL_65;
      }
    }
    while ( (__int64 *)v54[10] != v54 );
LABEL_60:
    v57 = *v54;
    v97.m128i_i64[0] = v55;
    v30 = sub_868720(a1, a2, a3, v11, v57, a6);
    v55 = v97.m128i_i64[0];
    v58 = (_QWORD *)*a6;
    if ( v30 )
      break;
    if ( !v58 )
      goto LABEL_53;
    *((_DWORD *)v58 - 1) = v100;
    v56 = v55;
    v55 = (__int64)v54;
    if ( !v56 )
      goto LABEL_54;
LABEL_63:
    v55 = v56;
  }
  if ( v58 )
  {
    v61 = *((_DWORD *)v58 - 1);
    if ( v61 == *((_DWORD *)v58 - 2) )
    {
      v68 = (3 * v61 + 1) >> 1;
      v69 = 16 * v68 + 8;
      if ( 16 * v61 + 8 >= v69 || v61 >= v68 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v103, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v103);
        sub_233E40((__int64)v103);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v94 = v30;
      v70 = sub_186B270(v69);
      v71 = *a6;
      v72 = (_DWORD *)v70;
      v30 = v94;
      v58 = (_QWORD *)(v70 + 8);
      if ( *a6 )
      {
        v73 = *(unsigned int *)(v71 - 4);
        v74 = 0;
        v72[1] = v73;
        v75 = 16 * v73;
        if ( v75 )
        {
          do
          {
            *(__m128i *)&v72[v74 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v71 + v74));
            v74 += 16LL;
          }
          while ( v75 != v74 );
        }
        v97.m128i_i32[0] = v94;
        v95 = v58;
        sub_186B220((void *)(v71 - 8));
        v58 = v95;
        v30 = v97.m128i_i32[0];
        v64 = (__int64 **)&v95[2 * (unsigned int)v72[1]];
        v63 = v72[1] + 1;
      }
      else
      {
        v72[1] = 0;
        v64 = (__int64 **)v58;
        v63 = 1;
      }
      *a6 = (__int64)v58;
      *v72 = v68;
    }
    else
    {
      v62 = v61;
      v63 = v61 + 1;
      v64 = (__int64 **)&v58[2 * v62];
    }
  }
  else
  {
    v96 = v30;
    v76 = (_QWORD *)sub_186B270(0x28u);
    *v76 = 2;
    v58 = v76 + 1;
    v30 = v96;
    v63 = 1;
    *a6 = (__int64)v58;
    v64 = (__int64 **)v58;
  }
  *v64 = v54;
  v64[1] = (__int64 *)v15;
  *((_DWORD *)v58 - 1) = v63;
LABEL_65:
  *(_BYTE *)(a1 + 176) = v98.m128i_i8[0];
  return v30;
}

