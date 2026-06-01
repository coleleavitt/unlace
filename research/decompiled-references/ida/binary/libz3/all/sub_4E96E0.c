_QWORD *__fastcall sub_4E96E0(__int64 a1, _QWORD *a2, unsigned __int32 a3, int *a4)
{
  char **v4; // r15
  char **exception; // rbx
  char **v6; // r15
  _QWORD *v8; // r14
  _QWORD *v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // rax
  int *v12; // r15
  _DWORD *v13; // rdx
  int v14; // esi
  int v15; // r9d
  __int64 v16; // rax
  unsigned int v17; // edi
  unsigned int v18; // r10d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rax
  _QWORD *v25; // rax
  _DWORD *v26; // rcx
  _QWORD *v27; // r15
  _QWORD *v28; // rsi
  size_t v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // r13d
  _QWORD *v32; // rsi
  unsigned int v33; // edx
  unsigned int v34; // edi
  _QWORD *v35; // rax
  unsigned int v36; // r15d
  size_t v37; // rsi
  unsigned int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdi
  __m128i *v44; // rax
  __int8 v45; // dl
  __m128i *v46; // rbx
  __int32 v47; // eax
  __int64 v48; // rax
  unsigned int v49; // r15d
  size_t v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rcx
  __m128i *v53; // rdx
  _DWORD *v54; // r13
  const __m128i *v55; // rax
  const __m128i *v56; // rcx
  bool v57; // zf
  __int64 v58; // r12
  __m128i *v59; // r15
  __m128i *v60; // r12
  __m128i *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rax
  __m128i *v64; // r12
  __m128i *v65; // rax
  __m128i *v66; // r15
  unsigned __int32 v68; // edx
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  int v72; // [rsp+8h] [rbp-A8h]
  __int64 v73; // [rsp+18h] [rbp-98h]
  int v74; // [rsp+20h] [rbp-90h]
  unsigned int v75; // [rsp+24h] [rbp-8Ch]
  unsigned int v76; // [rsp+24h] [rbp-8Ch]
  int *v78; // [rsp+28h] [rbp-88h]
  __int64 v81; // [rsp+48h] [rbp-68h] BYREF
  __m128i v82; // [rsp+50h] [rbp-60h] BYREF
  __int64 v83[10]; // [rsp+60h] [rbp-50h] BYREF

  v8 = (_QWORD *)sub_186B270(0x30u);
  v9 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v9 )
    __cxa_bad_cast();
  v10 = sub_15D1F10(v9[4]);
  v8[1] = 0;
  v81 = v10;
  *v8 = qword_1C66740;
  v8[2] = 0;
  if ( a3 )
  {
    v11 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v12 = a4;
    *((_QWORD *)v11 - 1) = 2;
    v13 = v11;
    v8[2] = v11;
    while ( 1 )
    {
      v14 = *v12++;
      *v11 = v14;
      v15 = *(v13 - 1);
      v16 = (unsigned int)(v15 + 1);
      *(v13 - 1) = v16;
      if ( &a4[a3] == v12 )
        break;
      v17 = *(v13 - 2);
      if ( v17 == (_DWORD)v16 )
      {
        v18 = (3 * v17 + 1) >> 1;
        v19 = 4 * v18 + 8;
        if ( 4 * v15 + 12 >= (unsigned int)v19 || v17 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v83, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v13 - 2, v19);
        v13 = v20 + 2;
        *v20 = (3 * v17 + 1) >> 1;
        v21 = v20[1];
        v8[2] = v13;
        v11 = &v13[v21];
      }
      else
      {
        v11 = &v13[v16];
      }
    }
    if ( v8 + 1 == a2 + 2 || (v22 = a2[2]) == 0 )
    {
      v31 = -a3;
      v35 = (_QWORD *)sub_186B270(0x18u);
      v26 = v35 + 1;
      v23 = 0;
      v8[1] = v35 + 1;
      *v35 = 2;
LABEL_30:
      while ( 1 )
      {
        v39 = *(v26 - 2);
        if ( v39 >= v31 )
          break;
        v36 = (3 * v39 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v39 + 8 >= (unsigned int)v37 || v39 >= v36 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v83, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(v26 - 2, v37);
        v26 = v38 + 2;
        *v38 = v36;
        v8[1] = v38 + 2;
      }
      *(v26 - 1) = v31;
      v40 = 8LL * v23;
      v41 = 8LL * v31;
      if ( v40 != v41 )
        memset(&v26[(unsigned __int64)v40 / 4], 0, v41 - v40);
      goto LABEL_33;
    }
  }
  else
  {
    if ( a2 + 2 == v8 + 1 )
      goto LABEL_33;
    v22 = a2[2];
    if ( !v22 )
      goto LABEL_33;
  }
  v23 = *(_DWORD *)(v22 - 4);
  v24 = *(unsigned int *)(v22 - 8);
  v75 = v24;
  v25 = (_QWORD *)sub_186B270(8 * v24 + 8);
  v26 = v25 + 1;
  v27 = v25;
  v8[1] = v25 + 1;
  *v25 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v75), _mm_cvtsi32_si128(v23)).m128i_u64[0];
  v28 = (_QWORD *)a2[2];
  if ( v28 )
  {
    v29 = 8LL * *((unsigned int *)v28 - 1);
    if ( v29 <= 8 )
    {
      if ( v29 == 8 )
        v25[1] = *v28;
    }
    else
    {
      v26 = memmove(v26, v28, v29);
    }
  }
  if ( a3 )
  {
    v30 = *a4 + 1;
    v31 = v23 - a3;
    if ( v30 < v23 )
    {
      v32 = &v27[v30 + 1];
      v33 = 1;
      if ( a3 != 1 && v30 == a4[1] )
        goto LABEL_23;
      while ( 1 )
      {
        v34 = v30++;
        *(_QWORD *)&v26[2 * (v34 - v33)] = *v32;
        if ( v30 >= v23 )
          break;
        if ( a3 == v33 )
        {
          v68 = v30 - a3;
          do
          {
            v69 = v30++;
            v70 = *(_QWORD *)&v26[2 * v69];
            v71 = v68++;
            *(_QWORD *)&v26[2 * v71] = v70;
          }
          while ( v30 < v23 );
          if ( v23 < a3 )
            goto LABEL_30;
          goto LABEL_25;
        }
        while ( 1 )
        {
          ++v32;
          if ( a3 == v33 || v30 != a4[v33] )
            break;
LABEL_23:
          ++v30;
          ++v33;
          if ( v30 >= v23 )
            goto LABEL_24;
        }
      }
    }
LABEL_24:
    if ( v23 >= a3 )
    {
LABEL_25:
      *((_DWORD *)v27 + 1) = v23 - a3;
      goto LABEL_33;
    }
    goto LABEL_30;
  }
LABEL_33:
  *v8 = &off_1C4FB48;
  v8[3] = a1;
  v42 = sub_4D6490(*(_QWORD *)(a1 + 24));
  v8[4] = 0;
  v43 = *(_QWORD *)(a1 + 24);
  v8[5] = v42;
  v72 = sub_4D6490(v43);
  v74 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40));
  if ( a3 )
  {
    v82.m128i_i8[8] = 0;
    v82.m128i_i32[0] = *a4;
    v44 = (__m128i *)(sub_186B270(0x28u) + 8);
    v45 = 0;
    v78 = &a4[a3];
    v44[-1].m128i_i64[1] = 2;
    v46 = v44;
LABEL_35:
    *v44 = _mm_load_si128(&v82);
    if ( v45 )
    {
      v82.m128i_i32[0] = 0;
      v82.m128i_i8[8] = 0;
      goto LABEL_37;
    }
    while ( 1 )
    {
      v82.m128i_i32[0] = 0;
LABEL_37:
      ++v46[-1].m128i_i32[3];
      sub_15D0DF0(&v82);
      if ( v78 == ++a4 )
        break;
      v47 = *a4;
      v82.m128i_i8[8] = 0;
      v82.m128i_i32[0] = v47;
      v48 = v46[-1].m128i_u32[3];
      if ( (_DWORD)v48 == v46[-1].m128i_i32[2] )
      {
        v49 = (unsigned int)(3 * v48 + 1) >> 1;
        v76 = v49;
        v50 = 16 * v49 + 8;
        if ( 16 * (int)v48 + 8 >= (unsigned int)v50 || (unsigned int)v48 >= v49 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v83, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v83);
          sub_233E40((__int64)v83);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v51 = sub_186B270(v50);
        v52 = v46[-1].m128i_u32[3];
        v53 = (__m128i *)(v51 + 8);
        v54 = (_DWORD *)v51;
        v73 = v51 + 8;
        *(_DWORD *)(v51 + 4) = v52;
        v55 = v46;
        v56 = &v46[v52];
        if ( v56 != v46 )
        {
          do
          {
            v57 = v55->m128i_i8[8] == 0;
            *v53 = _mm_loadu_si128(v55);
            v55->m128i_i32[0] = 0;
            if ( !v57 )
              v55->m128i_i8[8] = 0;
            ++v55;
            ++v53;
          }
          while ( v55 != v56 );
        }
        v58 = v46[-1].m128i_u32[3];
        if ( (_DWORD)v58 )
        {
          v59 = v46;
          v60 = &v46[v58];
          do
          {
            v61 = v59++;
            sub_15D0DF0(v61);
          }
          while ( v59 != v60 );
        }
        sub_186B220(&v46[-1].m128i_u64[1]);
        v46 = (__m128i *)v73;
        v45 = v82.m128i_i8[8];
        *v54 = v76;
        v44 = (__m128i *)(v73 + 16LL * (unsigned int)v54[1]);
        goto LABEL_35;
      }
      v46[v48] = _mm_load_si128(&v82);
    }
    a3 = v46[-1].m128i_u32[3];
  }
  else
  {
    v46 = nullptr;
  }
  v62 = sub_15D2D10(v72, v74, 6, a3, (_DWORD)v46, 1, (__int64)&v81, 0);
  if ( v62 )
    ++*(_DWORD *)(v62 + 8);
  v8[4] = v62;
  if ( v46 )
  {
    v63 = v46[-1].m128i_u32[3];
    if ( (_DWORD)v63 )
    {
      v64 = &v46[v63];
      v65 = v46;
      do
      {
        v66 = v65;
        sub_15D0DF0(v65);
        v65 = v66 + 1;
      }
      while ( &v66[1] != v64 );
    }
    sub_186B220(&v46[-1].m128i_u64[1]);
  }
  return v8;
}

