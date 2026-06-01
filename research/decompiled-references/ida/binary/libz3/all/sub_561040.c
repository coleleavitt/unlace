_QWORD *__fastcall sub_561040(__int64 a1, const void *a2, const void *a3)
{
  __int64 v4; // rax
  int *v5; // r15
  __int64 v6; // rbp
  unsigned int v7; // r14d
  _DWORD *v8; // rax
  _DWORD *v9; // r13
  __int64 v10; // rax
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  size_t v14; // rdx
  int v15; // eax
  _DWORD *v16; // rax
  int *v17; // r12
  _DWORD *v18; // rbx
  int v19; // ecx
  int v20; // edi
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r9d
  size_t v24; // rsi
  unsigned int v25; // r14d
  unsigned int *v26; // rax
  __int64 v27; // rax
  _DWORD *v28; // rax
  int *v29; // r15
  _DWORD *v30; // rdx
  int v31; // esi
  int v32; // r9d
  __int64 v33; // rax
  unsigned int v34; // edi
  unsigned int v35; // r10d
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  _QWORD *v42; // r14
  _QWORD *v43; // rbx
  __m128i v44; // xmm0
  _QWORD *v45; // rax
  size_t v46; // rdx
  __m128i *exception; // rax
  __m128i *v49; // r12
  char *v50; // rax
  __m128i *v51; // rax
  __m128i *v52; // r13
  char *v53; // rax
  const void **v54; // [rsp+8h] [rbp-80h]
  _QWORD *v55; // [rsp+10h] [rbp-78h]
  int v56; // [rsp+18h] [rbp-70h]
  int *v57; // [rsp+20h] [rbp-68h]
  __int64 v58; // [rsp+28h] [rbp-60h]
  _QWORD *v59; // [rsp+30h] [rbp-58h] BYREF
  __int64 v60; // [rsp+38h] [rbp-50h]
  _QWORD v61[9]; // [rsp+40h] [rbp-48h] BYREF

  v54 = (const void **)__dynamic_cast(
                         a2,
                         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
                         0);
  if ( !v54
    || (v55 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
                0)) == nullptr
    || ((v4 = sub_186B270(0x50u), v5 = *(int **)(a1 + 24), v6 = v4, v57 = *(int **)(a1 + 32), !v5)
      ? (v7 = 0)
      : (v7 = *(v5 - 1)),
        v8 = __dynamic_cast(
               v54[1],
               (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
               (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
               0),
        (v9 = v8) == nullptr) )
  {
    __cxa_bad_cast();
  }
  *(_QWORD *)(v6 + 8) = v8;
  *(_QWORD *)v6 = &off_1C675A8;
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v6 + 16) = 0;
  if ( v10 )
  {
    v11 = _mm_loadl_epi64((const __m128i *)(v10 - 8));
    v12 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v11) + 8);
    v13 = *(_QWORD **)(a1 + 8);
    *(_QWORD *)(v6 + 16) = v12 + 1;
    *v12 = v11.m128i_i64[0];
    if ( v13 )
    {
      v14 = 8LL * *((unsigned int *)v13 - 1);
      if ( v14 <= 8 )
      {
        if ( v14 == 8 )
          v12[1] = *v13;
      }
      else
      {
        memmove(v12 + 1, v13, v14);
      }
    }
  }
  v15 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 40) = 0;
  v56 = v15;
  *(_DWORD *)(v6 + 24) = v15;
  *(_QWORD *)v6 = off_1C50E28;
  if ( v7 )
  {
    v16 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v58 = v7;
    v17 = &v5[v58];
    *((_QWORD *)v16 - 1) = 2;
    v18 = v16;
    *(_QWORD *)(v6 + 48) = v16;
    while ( 1 )
    {
      v19 = *v5++;
      *v16 = v19;
      v20 = *(v18 - 1);
      v21 = (unsigned int)(v20 + 1);
      *(v18 - 1) = v21;
      if ( v5 == v17 )
        break;
      v22 = *(v18 - 2);
      if ( v22 == (_DWORD)v21 )
      {
        v23 = (3 * v22 + 1) >> 1;
        v24 = 4 * v23 + 8;
        v25 = v23;
        if ( 4 * v20 + 12 >= (unsigned int)v24 || v22 >= v23 )
        {
          exception = (__m128i *)__cxa_allocate_exception(0x28u);
          v59 = v61;
          v49 = exception;
          v50 = (char *)operator new(0x2Bu);
          strcpy(v50, "Overflow encountered when expanding vector");
          v49->m128i_i64[1] = (__int64)v50;
          v49->m128i_i64[0] = (__int64)off_1C63128;
          v60 = 0;
          v49[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v61[0] = 0;
          v59 = v61;
          sub_233E40((__int64)&v59);
          __cxa_throw(v49, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v26 = (unsigned int *)sub_186B300(v18 - 2, v24);
        v18 = v26 + 2;
        *v26 = v25;
        v27 = v26[1];
        *(_QWORD *)(v6 + 48) = v18;
        v16 = &v18[v27];
      }
      else
      {
        v16 = &v18[v21];
      }
    }
    *(_QWORD *)(v6 + 56) = 0;
    v28 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v29 = v57;
    *((_QWORD *)v28 - 1) = 2;
    v30 = v28;
    *(_QWORD *)(v6 + 56) = v28;
    while ( 1 )
    {
      v31 = *v29++;
      *v28 = v31;
      v32 = *(v30 - 1);
      v33 = (unsigned int)(v32 + 1);
      *(v30 - 1) = v33;
      if ( &v57[v58] == v29 )
        break;
      v34 = *(v30 - 2);
      if ( v34 == (_DWORD)v33 )
      {
        v35 = (3 * v34 + 1) >> 1;
        v36 = 4 * v35 + 8;
        if ( 4 * v32 + 12 >= (unsigned int)v36 || v34 >= v35 )
        {
          v51 = (__m128i *)__cxa_allocate_exception(0x28u);
          v59 = v61;
          v52 = v51;
          v53 = (char *)operator new(0x2Bu);
          strcpy(v53, "Overflow encountered when expanding vector");
          v52->m128i_i64[1] = (__int64)v53;
          v52->m128i_i64[0] = (__int64)off_1C63128;
          v59 = v61;
          v52[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
          v60 = 0;
          v61[0] = 0;
          sub_233E40((__int64)&v59);
          __cxa_throw(v52, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v37 = (unsigned int *)sub_186B300(v30 - 2, v36);
        v30 = v37 + 2;
        *v37 = (3 * v34 + 1) >> 1;
        v38 = v37[1];
        *(_QWORD *)(v6 + 56) = v30;
        v28 = &v30[v38];
      }
      else
      {
        v28 = &v30[v33];
      }
    }
  }
  else
  {
    *(_QWORD *)(v6 + 56) = 0;
  }
  v39 = v54[5];
  *(_QWORD *)(v6 + 64) = v39;
  if ( v39 )
    ++v39[8];
  v40 = v55[5];
  *(_QWORD *)(v6 + 72) = v40;
  if ( v40 )
    ++*(_DWORD *)(v40 + 32);
  v41 = (_QWORD *)sub_186B270(0x30u);
  v42 = *(_QWORD **)(v6 + 16);
  v43 = v41;
  *v41 = qword_1C67518;
  v41[1] = v9;
  v41[2] = 0;
  if ( v42 )
  {
    v44 = _mm_loadl_epi64((const __m128i *)(v42 - 1));
    v45 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v44) + 8);
    v46 = 8LL * *((unsigned int *)v42 - 1);
    v43[2] = v45 + 1;
    *v45 = v44.m128i_i64[0];
    if ( v46 <= 8 )
    {
      if ( v46 == 8 )
        v45[1] = *v42;
    }
    else
    {
      memcpy(v45 + 1, v42, v46);
    }
  }
  v43[5] = v6;
  *(_DWORD *)(v6 + 32) = 1;
  *((_DWORD *)v43 + 6) = v56;
  *((_DWORD *)v43 + 8) = v9[2];
  *v43 = &off_1C675D8;
  return v43;
}

