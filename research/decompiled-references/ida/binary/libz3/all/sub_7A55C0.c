__m128 *__fastcall sub_7A55C0(const __m128i *a1, unsigned __int64 *a2, unsigned int a3, _DWORD *a4)
{
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // rbp
  __m128 *result; // rax
  __int64 v8; // r14
  __int32 v11; // r13d
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  __int64 *v26; // rsi
  _QWORD *v27; // rdx
  _DWORD *v28; // r13
  int v29; // r14d
  __int64 v30; // rax
  unsigned int v31; // r15d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int32 v36; // eax
  __int64 v37; // rax
  __int32 v38; // eax
  __int64 (__fastcall *v39)(__int64); // rax
  __m128 v40; // xmm0
  __m128 v41; // xmm1
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rax
  int *i; // rax
  unsigned int v46; // r15d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rsi
  unsigned int v50; // ecx
  size_t v51; // rsi
  unsigned int v52; // r13d
  unsigned int *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 m128i_i64; // [rsp+0h] [rbp-78h]
  int v58; // [rsp+Ch] [rbp-6Ch]
  __int64 v59[11]; // [rsp+20h] [rbp-58h] BYREF

  result = (__m128 *)a1[1].m128i_i64[1];
  if ( !result )
    return result;
  if ( !result[22].m128_i8[0] )
    return nullptr;
  v8 = a3;
  sub_7A4170(a1);
  v11 = a1[516].m128i_i32[1];
  m128i_i64 = (__int64)a1[134].m128i_i64;
  v12 = sub_180C100(&a1[134], 24);
  v13 = (_QWORD *)a1[133].m128i_i64[0];
  v14 = v12;
  *(_QWORD *)v12 = &off_1C4C070;
  *(_QWORD *)(v12 + 8) = (char *)a1 + 8260;
  *(_DWORD *)(v12 + 16) = v11;
  if ( v13 )
  {
    v15 = *((_DWORD *)v13 - 1);
    if ( v15 == *((_DWORD *)v13 - 2) )
    {
      v50 = (3 * v15 + 1) >> 1;
      v51 = 8 * v50 + 8;
      v52 = v50;
      if ( 8 * v15 + 8 >= (unsigned int)v51 || v15 >= v50 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v59, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v59);
        sub_233E40((__int64)v59);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v13 - 1, v51);
      v54 = v53[1];
      v13 = v53 + 2;
      *v53 = v52;
      a1[133].m128i_i64[0] = (__int64)(v53 + 2);
      LODWORD(v53) = v54;
      v18 = &v13[v54];
      v17 = (_DWORD)v53 + 1;
    }
    else
    {
      v16 = v15;
      v17 = v15 + 1;
      v18 = &v13[v16];
    }
  }
  else
  {
    v55 = (_QWORD *)sub_186B270(0x18u);
    v13 = v55 + 1;
    *v55 = 2;
    v17 = 1;
    a1[133].m128i_i64[0] = (__int64)v13;
    v18 = v13;
  }
  *v18 = v14;
  *((_DWORD *)v13 - 1) = v17;
  v19 = a1[514].m128i_i64[0];
  if ( v19 )
    v58 = *(_DWORD *)(v19 - 4);
  else
    v58 = 0;
  v20 = sub_180C100(m128i_i64, 24);
  v21 = (_QWORD *)a1[133].m128i_i64[0];
  v22 = v20;
  *(_QWORD *)v20 = off_1C547E8;
  *(_QWORD *)(v20 + 8) = a1 + 514;
  *(_DWORD *)(v20 + 16) = v58;
  if ( v21 )
  {
    v23 = *((_DWORD *)v21 - 1);
    if ( v23 == *((_DWORD *)v21 - 2) )
    {
      v46 = (3 * v23 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v23 + 8 >= (unsigned int)v47 || v23 >= v46 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v59, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v59);
        sub_233E40((__int64)v59);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v48 = (unsigned int *)sub_186B300(v21 - 1, v47);
      v49 = v48[1];
      v21 = v48 + 2;
      *v48 = v46;
      a1[133].m128i_i64[0] = (__int64)(v48 + 2);
      LODWORD(v48) = v49;
      v26 = &v21[v49];
      v25 = (_DWORD)v48 + 1;
    }
    else
    {
      v24 = v23;
      v25 = v23 + 1;
      v26 = &v21[v24];
    }
  }
  else
  {
    v56 = (_QWORD *)sub_186B270(0x18u);
    v21 = v56 + 1;
    *v56 = 2;
    v25 = 1;
    a1[133].m128i_i64[0] = (__int64)v21;
    v26 = v21;
  }
  *v26 = v22;
  *((_DWORD *)v21 - 1) = v25;
  v27 = (_QWORD *)a1[514].m128i_i64[0];
  if ( (_DWORD)v8 )
  {
    v28 = &a4[v8];
    v29 = *a4 ^ 1;
    if ( v27 )
      goto LABEL_19;
    v44 = (_QWORD *)sub_186B270(0x10u);
    v27 = v44 + 1;
    *v44 = 2;
    a1[514].m128i_i64[0] = (__int64)(v44 + 1);
    for ( i = (int *)(v44 + 1); ; i = (int *)v27 + v30 )
    {
      ++a4;
      *i = v29;
      ++*((_DWORD *)v27 - 1);
      if ( v28 == a4 )
        break;
      while ( 1 )
      {
        v29 = *a4 ^ 1;
LABEL_19:
        v30 = *((unsigned int *)v27 - 1);
        if ( (_DWORD)v30 != *((_DWORD *)v27 - 2) )
          break;
        v31 = (unsigned int)(3 * v30 + 1) >> 1;
        v32 = 4 * v31 + 8;
        if ( 4 * (int)v30 + 8 >= (unsigned int)v32 || (unsigned int)v30 >= v31 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v59, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v59);
          sub_233E40((__int64)v59);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++a4;
        v33 = (unsigned int *)sub_186B300(v27 - 1, v32);
        v27 = v33 + 2;
        *v33 = v31;
        v34 = v33[1];
        a1[514].m128i_i64[0] = (__int64)v27;
        *((_DWORD *)v27 + v34) = v29;
        ++*((_DWORD *)v27 - 1);
        if ( v28 == a4 )
          goto LABEL_23;
      }
    }
LABEL_23:
    a1[516].m128i_i32[0] = a1[516].m128i_i32[1];
    a1[517].m128i_i32[0] = a1[517].m128i_i32[1];
    a1[517].m128i_i32[2] = a1[517].m128i_i32[3];
  }
  else
  {
    a1[516].m128i_i32[0] = a1[516].m128i_i32[1];
    a1[517].m128i_i32[0] = a1[517].m128i_i32[1];
    a1[517].m128i_i32[2] = a1[517].m128i_i32[3];
    if ( !v27 )
      goto LABEL_25;
  }
  LODWORD(v8) = *((_DWORD *)v27 - 1);
LABEL_25:
  v35 = a1[514].m128i_i64[1];
  a1[516].m128i_i32[1] = v8;
  if ( v35 )
    v36 = *(_DWORD *)(v35 - 4);
  else
    v36 = 0;
  a1[517].m128i_i32[1] = v36;
  v37 = a1[515].m128i_i64[0];
  if ( v37 )
    v38 = *(_DWORD *)(v37 - 4);
  else
    v38 = 0;
  a1[517].m128i_i32[3] = v38;
  v39 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 432);
  if ( v39 != sub_79EFF0 )
    m128i_i64 = v39((__int64)a1);
  result = (__m128 *)sub_180C100(m128i_i64, 40);
  v40 = (__m128)_mm_loadu_si128(a1 + 516);
  v41 = (__m128)_mm_loadu_si128(a1 + 517);
  v42 = a1[517].m128i_i64[1];
  result->m128_u64[0] = (unsigned __int64)off_1C54888;
  v43 = *a2;
  result[1] = _mm_shuffle_ps(v40, v41, 68);
  result[2].m128_u64[0] = v42;
  result->m128_u64[1] = v43;
  return result;
}

