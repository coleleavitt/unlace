__int64 __fastcall sub_7A43D0(const __m128i *a1, __int64 *a2, int a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbp
  __int64 result; // rax
  __int64 m128i_i64; // r12
  __int64 v12; // r14
  _QWORD *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // r14
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 *v31; // rcx
  _QWORD *v32; // rdx
  int v33; // r13d
  __int64 v34; // rax
  int *v35; // rax
  _DWORD *v36; // rcx
  _DWORD *v37; // r15
  __int32 v38; // eax
  __int64 v39; // rax
  __int32 v40; // eax
  __int64 (__fastcall *v41)(__int64); // rax
  __int64 v42; // rdx
  __m128i v43; // xmm0
  unsigned int i; // r13d
  _QWORD *v45; // rax
  _DWORD *v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // r14d
  size_t v49; // rsi
  unsigned int *v50; // rax
  __int64 v51; // rax
  unsigned int v52; // ecx
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // r15d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rcx
  unsigned int v60; // r15d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rcx
  _QWORD *v64; // rax
  unsigned int v65; // r14d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  _QWORD *v71; // rax
  __int32 v72; // [rsp+0h] [rbp-6Ch]
  __int32 v73; // [rsp+0h] [rbp-6Ch]
  int v74; // [rsp+0h] [rbp-6Ch]
  unsigned int v75; // [rsp+0h] [rbp-6Ch]
  __int64 v76[11]; // [rsp+14h] [rbp-58h] BYREF

  result = a1[1].m128i_i64[1];
  if ( !result )
    return result;
  if ( !*(_BYTE *)(result + 352) )
    return 0;
  m128i_i64 = (__int64)a1[134].m128i_i64;
  sub_7A4170(a1);
  v72 = a1[516].m128i_i32[1];
  v12 = sub_180C100(&a1[134], 24);
  *(_QWORD *)v12 = &off_1C4C070;
  *(_DWORD *)(v12 + 16) = v72;
  v13 = (_QWORD *)a1[133].m128i_i64[0];
  *(_QWORD *)(v12 + 8) = (char *)a1 + 8260;
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    if ( v14 == *((_DWORD *)v13 - 2) )
    {
      v52 = (3 * v14 + 1) >> 1;
      v53 = 8 * v52 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v53 || v14 >= v52 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v76, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v75 = (3 * v14 + 1) >> 1;
      v54 = (unsigned int *)sub_186B300(v13 - 1, v53);
      v13 = v54 + 2;
      *v54 = v75;
      v55 = v54[1];
      a1[133].m128i_i64[0] = (__int64)(v54 + 2);
      LODWORD(v54) = v55;
      v17 = &v13[v55];
      v16 = (_DWORD)v54 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v13[v15];
    }
  }
  else
  {
    v64 = (_QWORD *)sub_186B270(0x18u);
    v13 = v64 + 1;
    *v64 = 2;
    v16 = 1;
    a1[133].m128i_i64[0] = (__int64)v13;
    v17 = v13;
  }
  *v17 = v12;
  *((_DWORD *)v13 - 1) = v16;
  v73 = a1[516].m128i_i32[3];
  v18 = sub_180C100(m128i_i64, 24);
  *(_QWORD *)v18 = &off_1C4C070;
  *(_DWORD *)(v18 + 16) = v73;
  v19 = (_QWORD *)a1[133].m128i_i64[0];
  *(_QWORD *)(v18 + 8) = (char *)a1 + 8268;
  if ( v19 )
  {
    v20 = *((_DWORD *)v19 - 1);
    if ( v20 == *((_DWORD *)v19 - 2) )
    {
      v60 = (3 * v20 + 1) >> 1;
      v61 = 8 * v60 + 8;
      if ( 8 * v20 + 8 >= (unsigned int)v61 || v20 >= v60 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v76, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v62 = (unsigned int *)sub_186B300(v19 - 1, v61);
      v63 = v62[1];
      v19 = v62 + 2;
      *v62 = v60;
      a1[133].m128i_i64[0] = (__int64)(v62 + 2);
      LODWORD(v62) = v63;
      v23 = &v19[v63];
      v22 = (_DWORD)v62 + 1;
    }
    else
    {
      v21 = v20;
      v22 = v20 + 1;
      v23 = &v19[v21];
    }
  }
  else
  {
    v70 = (_QWORD *)sub_186B270(0x18u);
    v19 = v70 + 1;
    *v70 = 2;
    v22 = 1;
    a1[133].m128i_i64[0] = (__int64)v19;
    v23 = v19;
  }
  *v23 = v18;
  *((_DWORD *)v19 - 1) = v22;
  v24 = a1[514].m128i_i64[0];
  if ( v24 )
    v74 = *(_DWORD *)(v24 - 4);
  else
    v74 = 0;
  v25 = sub_180C100(m128i_i64, 24);
  v26 = (_QWORD *)a1[133].m128i_i64[0];
  v27 = v25;
  *(_QWORD *)v25 = off_1C547E8;
  *(_QWORD *)(v25 + 8) = a1 + 514;
  *(_DWORD *)(v25 + 16) = v74;
  if ( v26 )
  {
    v28 = *((_DWORD *)v26 - 1);
    if ( v28 == *((_DWORD *)v26 - 2) )
    {
      v56 = (3 * v28 + 1) >> 1;
      v57 = 8 * v56 + 8;
      if ( 8 * v28 + 8 >= (unsigned int)v57 || v28 >= v56 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v76, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v58 = (unsigned int *)sub_186B300(v26 - 1, v57);
      v59 = v58[1];
      v26 = v58 + 2;
      *v58 = v56;
      a1[133].m128i_i64[0] = (__int64)(v58 + 2);
      LODWORD(v58) = v59;
      v31 = &v26[v59];
      v30 = (_DWORD)v58 + 1;
    }
    else
    {
      v29 = v28;
      v30 = v28 + 1;
      v31 = &v26[v29];
    }
  }
  else
  {
    v69 = (_QWORD *)sub_186B270(0x18u);
    v26 = v69 + 1;
    *v69 = 2;
    v30 = 1;
    a1[133].m128i_i64[0] = (__int64)v26;
    v31 = v26;
  }
  *v31 = v27;
  *((_DWORD *)v26 - 1) = v30;
  v32 = (_QWORD *)a1[514].m128i_i64[0];
  if ( a3 == -2 )
  {
    v36 = (_DWORD *)a1[147].m128i_i64[1];
    v37 = v36;
    if ( !v36 || !*(v36 - 1) )
    {
      a1[516].m128i_i32[0] = a1[516].m128i_i32[1];
      a1[516].m128i_i32[2] = a1[516].m128i_i32[3];
      v38 = 0;
      if ( !v32 )
        goto LABEL_24;
      goto LABEL_23;
    }
    if ( !v32 )
    {
      i = 0;
      v45 = (_QWORD *)sub_186B270(0x10u);
      v36 = (_DWORD *)a1[147].m128i_i64[1];
      v32 = v45 + 1;
      *v45 = 2;
      a1[514].m128i_i64[0] = (__int64)(v45 + 1);
      v46 = v45 + 1;
      goto LABEL_33;
    }
    goto LABEL_55;
  }
  v33 = a3 ^ 1;
  if ( v32 )
  {
    v34 = *((unsigned int *)v32 - 1);
    if ( (_DWORD)v34 == *((_DWORD *)v32 - 2) )
    {
      v65 = (unsigned int)(3 * v34 + 1) >> 1;
      v66 = 4 * v65 + 8;
      if ( 4 * (int)v34 + 8 >= (unsigned int)v66 || (unsigned int)v34 >= v65 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v76, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v76);
        sub_233E40((__int64)v76);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v67 = (unsigned int *)sub_186B300(v32 - 1, v66);
      v32 = v67 + 2;
      *v67 = v65;
      v68 = v67[1];
      a1[514].m128i_i64[0] = (__int64)v32;
      v35 = (int *)v32 + v68;
    }
    else
    {
      v35 = (int *)v32 + v34;
    }
  }
  else
  {
    v71 = (_QWORD *)sub_186B270(0x10u);
    v32 = v71 + 1;
    *v71 = 2;
    a1[514].m128i_i64[0] = (__int64)(v71 + 1);
    v35 = (int *)(v71 + 1);
  }
  v36 = (_DWORD *)a1[147].m128i_i64[1];
  *v35 = v33;
  ++*((_DWORD *)v32 - 1);
  v37 = v36;
  if ( v36 && *(v36 - 1) )
  {
LABEL_55:
    for ( i = 0; ; v37 = &v36[i] )
    {
      v47 = *((unsigned int *)v32 - 1);
      v46 = (_DWORD *)v32 + v47;
      if ( (_DWORD)v47 == *((_DWORD *)v32 - 2) )
      {
        v48 = (unsigned int)(3 * v47 + 1) >> 1;
        v49 = 4 * v48 + 8;
        if ( 4 * (int)v47 + 8 >= (unsigned int)v49 || (unsigned int)v47 >= v48 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v50 = (unsigned int *)sub_186B300(v32 - 1, v49);
        v36 = (_DWORD *)a1[147].m128i_i64[1];
        v32 = v50 + 2;
        *v50 = v48;
        v51 = v50[1];
        a1[514].m128i_i64[0] = (__int64)v32;
        v46 = (_DWORD *)v32 + v51;
      }
LABEL_33:
      ++i;
      *v46 = *v37;
      ++*((_DWORD *)v32 - 1);
      if ( !v36 || i >= *(v36 - 1) )
        break;
    }
  }
  a1[516].m128i_i32[0] = a1[516].m128i_i32[1];
  a1[516].m128i_i32[2] = a1[516].m128i_i32[3];
LABEL_23:
  v38 = *((_DWORD *)v32 - 1);
LABEL_24:
  a1[516].m128i_i32[1] = v38;
  v39 = a1[146].m128i_i64[1];
  if ( v39 )
    v40 = *(_DWORD *)(v39 - 4);
  else
    v40 = 0;
  a1[516].m128i_i32[3] = v40;
  v41 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 432);
  if ( v41 != sub_79EFF0 )
    m128i_i64 = v41((__int64)a1);
  result = sub_180C100(m128i_i64, 32);
  v42 = *a2;
  v43 = _mm_loadu_si128(a1 + 516);
  *(_QWORD *)result = off_1C54838;
  *(_QWORD *)(result + 8) = v42;
  *(__m128i *)(result + 16) = v43;
  return result;
}

