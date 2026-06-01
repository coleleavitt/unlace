__int64 __fastcall sub_55E1F0(__int64 a1)
{
  __m128i *exception; // rax
  __m128i *v2; // r12
  char *v3; // rax
  __m128i *v4; // rax
  __m128i *v5; // r12
  char *v6; // rax
  __int64 v8; // rbx
  const void *v9; // r14
  __int64 v10; // rbp
  const void *v11; // rbx
  unsigned int *v12; // r8
  unsigned int v13; // ecx
  _QWORD *v14; // r13
  __int64 (__fastcall *v15)(_QWORD *, const void *, const void *); // rax
  __int64 v16; // rbp
  int *v17; // r14
  __int64 v18; // r15
  void *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  size_t v25; // rdx
  int v26; // eax
  _DWORD *v27; // rax
  int *v28; // rbx
  _DWORD *v29; // rdx
  int v30; // esi
  int v31; // r9d
  __int64 v32; // rax
  unsigned int v33; // edi
  unsigned int v34; // r10d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rax
  int *v39; // r14
  _DWORD *v40; // rdx
  int v41; // esi
  int v42; // r8d
  __int64 v43; // rax
  unsigned int v44; // edi
  unsigned int v45; // r15d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rax
  _DWORD *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r14
  __int64 v53; // rax
  unsigned int v54; // r15d
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rsi
  size_t v58; // rdx
  int v59; // eax
  void *v60; // rdi
  __int64 v61; // rbx
  __int64 v63; // rax
  void *v64; // rdi
  __int64 v65; // rax
  void *v66; // rdi
  const void **v67; // [rsp+8h] [rbp-90h]
  unsigned int v68; // [rsp+8h] [rbp-90h]
  _QWORD *v69; // [rsp+18h] [rbp-80h]
  int *v70; // [rsp+20h] [rbp-78h]
  unsigned int v71; // [rsp+28h] [rbp-70h]
  __int64 v72; // [rsp+28h] [rbp-70h]
  _BYTE v73[16]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD *v74; // [rsp+40h] [rbp-58h] BYREF
  __int64 v75; // [rsp+48h] [rbp-50h]
  _QWORD v76[9]; // [rsp+50h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  v9 = *(const void **)(v8 + 40);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 72);
    v11 = *(const void **)(v10 + 40);
    if ( v11 )
      goto LABEL_3;
    goto LABEL_49;
  }
  v63 = (**(__int64 (__fastcall ***)(_QWORD))v8)(*(_QWORD *)(a1 + 64));
  v64 = *(void **)(v8 + 40);
  v9 = (const void *)v63;
  if ( (void *)v63 != v64 && v64 )
    sub_4D63E0(v64);
  v10 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(v8 + 40) = v9;
  v11 = *(const void **)(v10 + 40);
  if ( !v11 )
  {
LABEL_49:
    v65 = (**(__int64 (__fastcall ***)(__int64))v10)(v10);
    v66 = *(void **)(v10 + 40);
    v11 = (const void *)v65;
    if ( (void *)v65 != v66 && v66 )
      sub_4D63E0(v66);
    *(_QWORD *)(v10 + 40) = v11;
  }
LABEL_3:
  sub_644D80(v73, "join", 11);
  v12 = *(unsigned int **)(a1 + 48);
  if ( v12 )
    v13 = *(v12 - 1);
  else
    v13 = 0;
  v14 = (_QWORD *)sub_4C5B40(
                    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
                    (__int64)v9,
                    (__int64)v11,
                    v13,
                    v12,
                    *(unsigned int **)(a1 + 56));
  v15 = *(__int64 (__fastcall **)(_QWORD *, const void *, const void *))(*v14 + 16LL);
  if ( (char *)v15 == (char *)&sub_561040 )
  {
    v67 = (const void **)__dynamic_cast(
                           v9,
                           (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                           (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
                           0);
    if ( !v67 )
      __cxa_bad_cast();
    v69 = __dynamic_cast(
            v11,
            (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
            0);
    if ( !v69 )
      __cxa_bad_cast();
    v16 = sub_186B270(0x50u);
    v17 = (int *)v14[3];
    v70 = (int *)v14[4];
    if ( v17 )
      v18 = (unsigned int)*(v17 - 1);
    else
      v18 = 0;
    v19 = __dynamic_cast(
            v67[1],
            (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
            (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
            0);
    if ( !v19 )
      __cxa_bad_cast();
    *(_QWORD *)(v16 + 8) = v19;
    v20 = v14[1];
    *(_QWORD *)v16 = &off_1C675A8;
    *(_QWORD *)(v16 + 16) = 0;
    if ( v20 )
    {
      v21 = *(_DWORD *)(v20 - 4);
      v22 = *(unsigned int *)(v20 - 8);
      v71 = v22;
      v23 = (_QWORD *)sub_186B270(8 * v22 + 8);
      *(_QWORD *)(v16 + 16) = v23 + 1;
      v24 = (_QWORD *)v14[1];
      *v23 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v71), _mm_cvtsi32_si128(v21)).m128i_u64[0];
      if ( v24 )
      {
        v25 = 8LL * *((unsigned int *)v24 - 1);
        if ( v25 <= 8 )
        {
          if ( v25 == 8 )
            v23[1] = *v24;
        }
        else
        {
          memmove(v23 + 1, v24, v25);
        }
      }
    }
    v26 = *((_DWORD *)v14 + 4);
    *(_DWORD *)(v16 + 32) = 0;
    *(_OWORD *)(v16 + 40) = 0;
    *(_DWORD *)(v16 + 24) = v26;
    *(_QWORD *)v16 = off_1C50E28;
    if ( (_DWORD)v18 )
    {
      v27 = (_DWORD *)(sub_186B270(0x10u) + 8);
      v72 = v18;
      v28 = &v17[v18];
      *((_QWORD *)v27 - 1) = 2;
      v29 = v27;
      *(_QWORD *)(v16 + 48) = v27;
      while ( 1 )
      {
        v30 = *v17++;
        *v27 = v30;
        v31 = *(v29 - 1);
        v32 = (unsigned int)(v31 + 1);
        *(v29 - 1) = v32;
        if ( v17 == v28 )
          break;
        v33 = *(v29 - 2);
        if ( v33 == (_DWORD)v32 )
        {
          v34 = (3 * v33 + 1) >> 1;
          v35 = 4 * v34 + 8;
          if ( 4 * v31 + 12 >= (unsigned int)v35 || v33 >= v34 )
          {
            exception = (__m128i *)__cxa_allocate_exception(0x28u);
            v74 = v76;
            v2 = exception;
            v3 = (char *)operator new(0x2Bu);
            strcpy(v3, "Overflow encountered when expanding vector");
            v2->m128i_i64[1] = (__int64)v3;
            v2->m128i_i64[0] = (__int64)off_1C63128;
            v75 = 0;
            v2[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
            v76[0] = 0;
            v74 = v76;
            sub_233E40((__int64)&v74);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v36 = (unsigned int *)sub_186B300(v29 - 2, v35);
          v29 = v36 + 2;
          *v36 = (3 * v33 + 1) >> 1;
          v37 = v36[1];
          *(_QWORD *)(v16 + 48) = v29;
          v27 = &v29[v37];
        }
        else
        {
          v27 = &v29[v32];
        }
      }
      *(_QWORD *)(v16 + 56) = 0;
      v38 = (_DWORD *)(sub_186B270(0x10u) + 8);
      v39 = v70;
      *((_QWORD *)v38 - 1) = 2;
      v40 = v38;
      *(_QWORD *)(v16 + 56) = v38;
      while ( 1 )
      {
        v41 = *v39++;
        *v38 = v41;
        v42 = *(v40 - 1);
        v43 = (unsigned int)(v42 + 1);
        *(v40 - 1) = v43;
        if ( &v70[v72] == v39 )
          break;
        v44 = *(v40 - 2);
        if ( v44 == (_DWORD)v43 )
        {
          v45 = (3 * v44 + 1) >> 1;
          v46 = 4 * v45 + 8;
          if ( 4 * v42 + 12 >= (unsigned int)v46 || v44 >= v45 )
          {
            v4 = (__m128i *)__cxa_allocate_exception(0x28u);
            v74 = v76;
            v5 = v4;
            v6 = (char *)operator new(0x2Bu);
            strcpy(v6, "Overflow encountered when expanding vector");
            v5->m128i_i64[1] = (__int64)v6;
            v5->m128i_i64[0] = (__int64)off_1C63128;
            v74 = v76;
            v5[1] = _mm_unpacklo_epi64((__m128i)0x2AuLL, (__m128i)0x2AuLL);
            v75 = 0;
            v76[0] = 0;
            sub_233E40((__int64)&v74);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v47 = (unsigned int *)sub_186B300(v40 - 2, v46);
          v40 = v47 + 2;
          *v47 = v45;
          v48 = v47[1];
          *(_QWORD *)(v16 + 56) = v40;
          v38 = &v40[v48];
        }
        else
        {
          v38 = &v40[v43];
        }
      }
    }
    else
    {
      *(_QWORD *)(v16 + 56) = 0;
    }
    v49 = v67[5];
    *(_QWORD *)(v16 + 64) = v49;
    if ( v49 )
      ++v49[8];
    v50 = v69[5];
    *(_QWORD *)(v16 + 72) = v50;
    if ( v50 )
      ++*(_DWORD *)(v50 + 32);
    v51 = sub_186B270(0x30u);
    v52 = *(_QWORD *)(v16 + 8);
    *(_QWORD *)v51 = qword_1C67518;
    v53 = *(_QWORD *)(v16 + 16);
    *(_QWORD *)(v51 + 8) = v52;
    *(_QWORD *)(v51 + 16) = 0;
    if ( v53 )
    {
      v54 = *(_DWORD *)(v53 - 4);
      v55 = *(unsigned int *)(v53 - 8);
      v68 = v55;
      v56 = (_QWORD *)sub_186B270(8 * v55 + 8);
      v57 = *(_QWORD **)(v16 + 16);
      *(_QWORD *)(v51 + 16) = v56 + 1;
      *v56 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v68), _mm_cvtsi32_si128(v54)).m128i_u64[0];
      if ( v57 )
      {
        v58 = 8LL * *((unsigned int *)v57 - 1);
        if ( v58 <= 8 )
        {
          if ( v58 == 8 )
            v56[1] = *v57;
        }
        else
        {
          memmove(v56 + 1, v57, v58);
        }
      }
    }
    *(_DWORD *)(v51 + 24) = *(_DWORD *)(v16 + 24);
    v59 = *(_DWORD *)(v52 + 8);
    ++*(_DWORD *)(v16 + 32);
    *(_DWORD *)(v51 + 32) = v59;
    *(_QWORD *)v51 = &off_1C675D8;
    *(_QWORD *)(v51 + 40) = v16;
  }
  else
  {
    v51 = v15(v14, v9, v11);
  }
  v60 = *(void **)(a1 + 40);
  if ( !v60 )
    goto LABEL_43;
  if ( (void *)v51 != v60 )
  {
    sub_4D63E0(v60);
LABEL_43:
    *(_QWORD *)(a1 + 40) = v51;
  }
  (*(void (__fastcall **)(_QWORD *))*v14)(v14);
  sub_186B220(v14);
  v61 = *(_QWORD *)(a1 + 40);
  sub_644EE0(v73);
  return v61;
}

