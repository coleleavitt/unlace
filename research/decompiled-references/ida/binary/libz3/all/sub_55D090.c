__int64 __fastcall sub_55D090(__int64 a1)
{
  __int64 v2; // r12
  void *v3; // r14
  void *v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // r15
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD); // rdi
  __int64 v16; // rbx
  __int64 v18; // r12
  unsigned int *v19; // r8
  unsigned int v20; // ecx
  char *v21; // r12
  void (__fastcall *v22)(char *, _QWORD, void *); // rax
  const void **v23; // r14
  _QWORD *v24; // r15
  void *v25; // rax
  _DWORD *v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  size_t v31; // rdx
  _DWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // rax
  _DWORD *v38; // rsi
  size_t v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // r15d
  __int64 v42; // rax
  __int64 v43; // rax
  _DWORD *v44; // rsi
  size_t v45; // rdx
  _DWORD *v46; // r15
  __int64 v48; // rax
  void *v49; // rdi
  void *v50; // r15
  __int64 v51; // rax
  void *v52; // rdi
  __int64 v53; // rax
  void *v54; // rdi
  __int64 v55; // rax
  void *v56; // rdi
  unsigned int v57; // [rsp+4h] [rbp-4Ch]
  unsigned int v58; // [rsp+4h] [rbp-4Ch]
  unsigned int v59; // [rsp+4h] [rbp-4Ch]
  void *lpsrc; // [rsp+8h] [rbp-48h]
  _QWORD *lpsrca; // [rsp+8h] [rbp-48h]
  _BYTE v62[64]; // [rsp+10h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(void **)(v2 + 40);
  if ( !v3 )
  {
    v48 = (**(__int64 (__fastcall ***)(_QWORD))v2)(*(_QWORD *)(a1 + 48));
    v49 = *(void **)(v2 + 40);
    v3 = (void *)v48;
    if ( v49 && (void *)v48 != v49 )
      sub_4D63E0(v49);
    *(_QWORD *)(v2 + 40) = v3;
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 && v4 != v3 )
    sub_4D63E0(v4);
  v5 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 40) = v3;
  v6 = *(_DWORD *)(v5 + 32);
  *(_QWORD *)(v5 + 40) = 0;
  *(_DWORD *)(v5 + 32) = --v6;
  if ( !v6 )
  {
    v50 = (void *)v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    sub_186B220(v50);
  }
  v7 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) != 1 )
    goto LABEL_14;
  v8 = __dynamic_cast(
         *(const void **)(a1 + 56),
         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_ref,
         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_join,
         0);
  v9 = v8;
  if ( !v8 )
    __cxa_bad_cast();
  v10 = v8[8];
  v11 = *(_QWORD *)(v10 + 40);
  if ( !v11 )
  {
    v53 = (**(__int64 (__fastcall ***)(__int64))v10)(v10);
    v54 = *(void **)(v10 + 40);
    v11 = v53;
    if ( (void *)v53 != v54 && v54 )
      sub_4D63E0(v54);
    *(_QWORD *)(v10 + 40) = v11;
    v12 = v9[9];
    v13 = *(_QWORD *)(v12 + 40);
    if ( v13 )
      goto LABEL_11;
    goto LABEL_46;
  }
  v12 = v8[9];
  v13 = *(_QWORD *)(v12 + 40);
  if ( !v13 )
  {
LABEL_46:
    v51 = (**(__int64 (__fastcall ***)(__int64))v12)(v12);
    v52 = *(void **)(v12 + 40);
    v13 = v51;
    if ( v52 && (void *)v51 != v52 )
      sub_4D63E0(v52);
    *(_QWORD *)(v12 + 40) = v13;
  }
LABEL_11:
  sub_644D80(v62, "filter_by_negation_join", 11);
  v14 = sub_4C5000(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), *(_QWORD *)(a1 + 40), v11);
  v15 = (void (__fastcall ***)(_QWORD))v14;
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v14 + 16LL))(
      v14,
      *(_QWORD *)(a1 + 40),
      v11,
      v13);
    (**v15)(v15);
    sub_186B220(v15);
    goto LABEL_13;
  }
  sub_644EE0(v62);
LABEL_14:
  v18 = *(_QWORD *)(a1 + 56);
  lpsrc = *(void **)(v18 + 40);
  if ( !lpsrc )
  {
    v55 = (**(__int64 (__fastcall ***)(__int64))v18)(v18);
    v56 = *(void **)(v18 + 40);
    lpsrc = (void *)v55;
    if ( v56 && (void *)v55 != v56 )
      sub_4D63E0(v56);
    *(_QWORD *)(v18 + 40) = lpsrc;
  }
  sub_644D80(v62, "filter_by_negation", 11);
  v19 = *(unsigned int **)(a1 + 64);
  if ( v19 )
    v20 = *(v19 - 1);
  else
    v20 = 0;
  v21 = sub_4C67E0(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
          *(_QWORD *)(a1 + 40),
          (__int64)lpsrc,
          v20,
          v19,
          *(unsigned int **)(a1 + 72));
  v22 = *(void (__fastcall **)(char *, _QWORD, void *))(*(_QWORD *)v21 + 16LL);
  if ( (char *)v22 == (char *)&sub_560380 )
  {
    v23 = (const void **)__dynamic_cast(
                           *(const void **)(a1 + 40),
                           (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                           (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
                           0);
    if ( !v23 )
      __cxa_bad_cast();
    v24 = __dynamic_cast(
            lpsrc,
            (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
            0);
    if ( !v24 )
      __cxa_bad_cast();
    lpsrca = (_QWORD *)sub_186B270(0x50u);
    v25 = __dynamic_cast(
            v23[1],
            (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
            (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
            0);
    if ( !v25 )
      __cxa_bad_cast();
    lpsrca[1] = v25;
    v26 = v23[2];
    *lpsrca = &off_1C675A8;
    lpsrca[2] = 0;
    if ( v26 )
    {
      v27 = _mm_cvtsi32_si128(*(v26 - 1));
      v28 = (unsigned int)*(v26 - 2);
      v57 = v28;
      v29 = (_QWORD *)sub_186B270(8 * v28 + 8);
      lpsrca[2] = v29 + 1;
      v30 = v23[2];
      *v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v27))).m128i_u64[0];
      if ( v30 )
      {
        v31 = 8LL * *((unsigned int *)v30 - 1);
        if ( v31 <= 8 )
        {
          if ( v31 == 8 )
            v29[1] = *v30;
        }
        else
        {
          memmove(v29 + 1, v30, v31);
        }
      }
    }
    *((_DWORD *)lpsrca + 6) = *((_DWORD *)v23 + 6);
    *lpsrca = off_1C50F48;
    v32 = v23[5];
    *((_DWORD *)lpsrca + 8) = 0;
    lpsrca[5] = 0;
    lpsrca[6] = v32;
    if ( v32 )
      ++v32[8];
    v33 = v24[5];
    lpsrca[7] = v33;
    if ( v33 )
      ++*(_DWORD *)(v33 + 32);
    lpsrca[8] = 0;
    v34 = *((_QWORD *)v21 + 1);
    if ( v34 )
    {
      v35 = *(_DWORD *)(v34 - 4);
      v36 = *(unsigned int *)(v34 - 8);
      v58 = v36;
      v37 = sub_186B270(4 * v36 + 8);
      lpsrca[8] = v37 + 8;
      v38 = *((_DWORD **)v21 + 1);
      *(_QWORD *)v37 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v58), _mm_cvtsi32_si128(v35)).m128i_u64[0];
      if ( v38 )
      {
        v39 = 4LL * (unsigned int)*(v38 - 1);
        if ( v39 <= 4 )
        {
          if ( v39 == 4 )
            *(_DWORD *)(v37 + 8) = *v38;
        }
        else
        {
          memmove((void *)(v37 + 8), v38, v39);
        }
      }
    }
    lpsrca[9] = 0;
    v40 = *((_QWORD *)v21 + 2);
    if ( v40 )
    {
      v41 = *(_DWORD *)(v40 - 4);
      v42 = *(unsigned int *)(v40 - 8);
      v59 = v42;
      v43 = sub_186B270(4 * v42 + 8);
      lpsrca[9] = v43 + 8;
      v44 = *((_DWORD **)v21 + 2);
      *(_QWORD *)v43 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(v41)).m128i_u64[0];
      if ( v44 )
      {
        v45 = 4LL * (unsigned int)*(v44 - 1);
        if ( v45 <= 4 )
        {
          if ( v45 == 4 )
            *(_DWORD *)(v43 + 8) = *v44;
        }
        else
        {
          memmove((void *)(v43 + 8), v44, v45);
        }
      }
    }
    v46 = v23[5];
    ++*((_DWORD *)lpsrca + 8);
    if ( v46 )
    {
      if ( v46[8]-- == 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v46 + 8LL))(v46);
        sub_186B220(v46);
      }
    }
    v23[5] = lpsrca;
  }
  else
  {
    v22(v21, *(_QWORD *)(a1 + 40), lpsrc);
  }
  (**(void (__fastcall ***)(char *))v21)(v21);
  sub_186B220(v21);
LABEL_13:
  v16 = *(_QWORD *)(a1 + 40);
  sub_644EE0(v62);
  return v16;
}

