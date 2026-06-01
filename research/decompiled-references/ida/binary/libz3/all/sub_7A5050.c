__int64 __fastcall sub_7A5050(const __m128i *a1, _DWORD *a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  __int64 result; // rax
  __int64 m128i_i64; // r12
  __int32 v9; // r13d
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // rcx
  __int32 v17; // r15d
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // r15d
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // r13
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 *v33; // rcx
  _DWORD *v34; // rdx
  int v35; // r13d
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rcx
  int v39; // r13d
  unsigned int v40; // ecx
  int v41; // ebp
  int *v42; // rax
  __int64 v43; // rax
  __int32 v44; // eax
  __int64 (__fastcall *v45)(__int64); // rax
  __m128i v46; // xmm0
  __int64 v47; // rdx
  unsigned int v48; // r13d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r14d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  int v56; // ebp
  unsigned int v57; // r14d
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // r14d
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rcx
  unsigned int v65; // r14d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rcx
  unsigned int v69; // r13d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77[11]; // [rsp+2h] [rbp-58h] BYREF

  result = a1[1].m128i_i64[1];
  if ( !result )
    return result;
  if ( !*(_BYTE *)(result + 352) )
    return 0;
  m128i_i64 = (__int64)a1[134].m128i_i64;
  sub_7A4170(a1);
  v9 = a1[516].m128i_i32[1];
  v10 = sub_180C100(&a1[134], 24);
  v11 = (_QWORD *)a1[133].m128i_i64[0];
  *(_QWORD *)v10 = &off_1C4C070;
  v12 = v10;
  *(_QWORD *)(v10 + 8) = (char *)a1 + 8260;
  *(_DWORD *)(v10 + 16) = v9;
  if ( v11 )
  {
    v13 = *((_DWORD *)v11 - 1);
    if ( v13 == *((_DWORD *)v11 - 2) )
    {
      v69 = (3 * v13 + 1) >> 1;
      v70 = 8 * v69 + 8;
      if ( 8 * v13 + 8 >= (unsigned int)v70 || v13 >= v69 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v77, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v77);
        sub_233E40((__int64)v77);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v71 = (unsigned int *)sub_186B300(v11 - 1, v70);
      v72 = v71[1];
      v11 = v71 + 2;
      *v71 = v69;
      a1[133].m128i_i64[0] = (__int64)(v71 + 2);
      LODWORD(v71) = v72;
      v16 = &v11[v72];
      v15 = (_DWORD)v71 + 1;
    }
    else
    {
      v14 = v13;
      v15 = v13 + 1;
      v16 = &v11[v14];
    }
  }
  else
  {
    v73 = (_QWORD *)sub_186B270(0x18u);
    v11 = v73 + 1;
    *v73 = 2;
    v15 = 1;
    a1[133].m128i_i64[0] = (__int64)v11;
    v16 = v11;
  }
  *v16 = v12;
  *((_DWORD *)v11 - 1) = v15;
  v17 = a1[516].m128i_i32[3];
  v18 = sub_180C100(m128i_i64, 24);
  v19 = (_QWORD *)a1[133].m128i_i64[0];
  *(_QWORD *)v18 = &off_1C4C070;
  v20 = v18;
  *(_QWORD *)(v18 + 8) = (char *)a1 + 8268;
  *(_DWORD *)(v18 + 16) = v17;
  if ( v19 )
  {
    v21 = *((_DWORD *)v19 - 1);
    if ( v21 == *((_DWORD *)v19 - 2) )
    {
      v65 = (3 * v21 + 1) >> 1;
      v66 = 8 * v65 + 8;
      if ( 8 * v21 + 8 >= (unsigned int)v66 || v21 >= v65 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v77, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v77);
        sub_233E40((__int64)v77);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v67 = (unsigned int *)sub_186B300(v19 - 1, v66);
      v68 = v67[1];
      v19 = v67 + 2;
      *v67 = v65;
      a1[133].m128i_i64[0] = (__int64)(v67 + 2);
      LODWORD(v67) = v68;
      v24 = &v19[v68];
      v23 = (_DWORD)v67 + 1;
    }
    else
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = &v19[v22];
    }
  }
  else
  {
    v74 = (_QWORD *)sub_186B270(0x18u);
    v19 = v74 + 1;
    *v74 = 2;
    v23 = 1;
    a1[133].m128i_i64[0] = (__int64)v19;
    v24 = v19;
  }
  *v24 = v20;
  *((_DWORD *)v19 - 1) = v23;
  v25 = a1[514].m128i_i64[0];
  if ( v25 )
    v26 = *(_DWORD *)(v25 - 4);
  else
    v26 = 0;
  v27 = sub_180C100(m128i_i64, 24);
  v28 = (_QWORD *)a1[133].m128i_i64[0];
  v29 = v27;
  *(_QWORD *)v27 = off_1C547E8;
  *(_QWORD *)(v27 + 8) = a1 + 514;
  *(_DWORD *)(v27 + 16) = v26;
  if ( v28 )
  {
    v30 = *((_DWORD *)v28 - 1);
    if ( v30 == *((_DWORD *)v28 - 2) )
    {
      v61 = (3 * v30 + 1) >> 1;
      v62 = 8 * v61 + 8;
      if ( 8 * v30 + 8 >= (unsigned int)v62 || v30 >= v61 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v77, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v77);
        sub_233E40((__int64)v77);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v63 = (unsigned int *)sub_186B300(v28 - 1, v62);
      v64 = v63[1];
      v28 = v63 + 2;
      *v63 = v61;
      a1[133].m128i_i64[0] = (__int64)(v63 + 2);
      LODWORD(v63) = v64;
      v33 = &v28[v64];
      v32 = (_DWORD)v63 + 1;
    }
    else
    {
      v31 = v30;
      v32 = v30 + 1;
      v33 = &v28[v31];
    }
  }
  else
  {
    v76 = (_QWORD *)sub_186B270(0x18u);
    v28 = v76 + 1;
    *v76 = 2;
    v32 = 1;
    a1[133].m128i_i64[0] = (__int64)v28;
    v33 = v28;
  }
  *v33 = v29;
  *((_DWORD *)v28 - 1) = v32;
  v34 = (_DWORD *)a1[514].m128i_i64[0];
  v35 = *a2 ^ 1;
  if ( v34 )
  {
    v36 = (unsigned int)*(v34 - 1);
    v37 = *(v34 - 2);
    if ( v37 == (_DWORD)v36 )
    {
      v57 = (3 * v37 + 1) >> 1;
      v58 = 4 * v57 + 8;
      if ( 4 * v37 + 8 >= (unsigned int)v58 || v37 >= v57 )
        goto LABEL_54;
      v59 = (unsigned int *)sub_186B300(v34 - 2, v58);
      v60 = v59[1];
      v34 = v59 + 2;
      *v59 = v57;
      a1[514].m128i_i64[0] = (__int64)(v59 + 2);
      v59[v60 + 2] = v35;
      v38 = v59[1] + 1;
      v59[1] = v38;
      v39 = a2[1] ^ 1;
    }
    else
    {
      v34[v36] = v35;
      v38 = (unsigned int)(*(v34 - 1) + 1);
      *(v34 - 1) = v38;
      v39 = a2[1] ^ 1;
    }
  }
  else
  {
    v75 = sub_186B270(0x10u);
    v38 = 1;
    v34 = (_DWORD *)(v75 + 8);
    *(_QWORD *)v75 = 2;
    a1[514].m128i_i64[0] = v75 + 8;
    *(_DWORD *)(v75 + 8) = v35;
    *(_DWORD *)(v75 + 4) = 1;
    v39 = a2[1] ^ 1;
  }
  if ( *(v34 - 2) == (_DWORD)v38 )
  {
    v52 = (unsigned int)(3 * v38 + 1) >> 1;
    v53 = 4 * v52 + 8;
    if ( 4 * (int)v38 + 8 >= (unsigned int)v53 || (unsigned int)v38 >= v52 )
      goto LABEL_54;
    v54 = (unsigned int *)sub_186B300(v34 - 2, v53);
    v55 = v54[1];
    v34 = v54 + 2;
    *v54 = v52;
    a1[514].m128i_i64[0] = (__int64)(v54 + 2);
    v54[v55 + 2] = v39;
    v56 = a2[2];
    v40 = v54[1] + 1;
    v54[1] = v40;
    v41 = v56 ^ 1;
  }
  else
  {
    v34[v38] = v39;
    v40 = *(v34 - 1) + 1;
    *(v34 - 1) = v40;
    v41 = a2[2] ^ 1;
  }
  v42 = &v34[v40];
  if ( *(v34 - 2) == v40 )
  {
    v48 = (3 * v40 + 1) >> 1;
    v49 = 4 * v48 + 8;
    if ( 4 * v40 + 8 < (unsigned int)v49 && v40 < v48 )
    {
      v50 = (unsigned int *)sub_186B300(v34 - 2, v49);
      v34 = v50 + 2;
      *v50 = v48;
      v51 = v50[1];
      a1[514].m128i_i64[0] = (__int64)v34;
      v42 = &v34[v51];
      goto LABEL_22;
    }
LABEL_54:
    v5 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v77, "Overflow encountered when expanding vector");
    *v5 = (char *)off_1C63128;
    sub_2333C0(v5 + 1, v77);
    sub_233E40((__int64)v77);
    __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_22:
  *v42 = v41;
  ++*(v34 - 1);
  a1[516].m128i_i32[0] = a1[516].m128i_i32[1];
  a1[516].m128i_i32[2] = a1[516].m128i_i32[3];
  a1[516].m128i_i32[1] = *(v34 - 1);
  v43 = a1[146].m128i_i64[1];
  if ( v43 )
    v44 = *(_DWORD *)(v43 - 4);
  else
    v44 = 0;
  a1[516].m128i_i32[3] = v44;
  v45 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 432);
  if ( v45 != sub_79EFF0 )
    m128i_i64 = v45((__int64)a1);
  result = sub_180C100(m128i_i64, 32);
  v46 = _mm_loadu_si128(a1 + 516);
  v47 = a1[518].m128i_i64[0];
  *(_QWORD *)result = off_1C54838;
  *(_QWORD *)(result + 8) = v47;
  *(__m128i *)(result + 16) = v46;
  return result;
}

