int __fastcall sub_953D90(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  char **exception; // rbx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rax
  __m128i *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r13
  __m128i *v22; // rbx
  unsigned int v23; // r9d
  __int64 v24; // rcx
  __int64 *v25; // r12
  int v26; // esi
  __int64 v27; // r9
  __m128i *v28; // rdi
  __m128i *v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 (__fastcall *v35)(); // rax
  __int64 v36; // rax
  __int64 *v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 *v41; // rdx
  __int64 v42; // rbx
  const int *v43; // rax
  __int64 (__fastcall *v44)(); // rdx
  size_t v45; // rdx
  __int64 (__fastcall *v46)(); // rax
  __int64 (__fastcall *v47)(); // rcx
  const char *v48; // r12
  size_t v49; // rax
  const char *v50; // rdi
  unsigned int v51; // ebx
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rdx
  __m128i *v55; // rax
  int v56; // r10d
  const __m128i *v57; // r15
  __m128i *v58; // r11
  __int64 v59; // rax
  __m128i *v60; // rdx
  __m128i *v61; // rax
  __m128i v62; // xmm0
  _QWORD *v63; // rax
  size_t v65; // [rsp+8h] [rbp-90h]
  unsigned int v66; // [rsp+8h] [rbp-90h]
  int v67; // [rsp+10h] [rbp-88h]
  size_t v68; // [rsp+10h] [rbp-88h]
  int v69; // [rsp+18h] [rbp-80h]
  __int64 v70[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( *((_BYTE *)a1 + 12) )
  {
    v16 = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 2) = v16 - 1;
    if ( v16 )
    {
      do
      {
        v33 = *a1;
        v34 = *(_QWORD *)(*a1 + 1192);
        v35 = *(__int64 (__fastcall **)())(*(_QWORD *)v34 + 152LL);
        if ( v35 == sub_955F70 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v34 + 32) + 24LL))(*(_QWORD *)(v34 + 32));
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v34 + 40) + 24LL))(*(_QWORD *)(v34 + 40));
          sub_AC8640(*(_QWORD *)(v34 + 48));
        }
        else
        {
          ((void (__fastcall *)(_QWORD))v35)(*(_QWORD *)(*a1 + 1192));
        }
        sub_ADBDA0(v33 + 24);
        v32 = *((_DWORD *)a1 + 2);
        *((_DWORD *)a1 + 2) = v32 - 1;
      }
      while ( v32 );
    }
    *((_BYTE *)a1 + 12) = 0;
  }
  v17 = *a1;
  v18 = sub_15CDA70(*a1 + 1128, a2, a3, a4, a5, a6);
  v20 = *(unsigned int *)(v17 + 1112);
  v21 = v18;
  if ( 3 * (int)v20 < (unsigned int)(4 * (*(_DWORD *)(v17 + 1116) + *(_DWORD *)(v17 + 1120))) )
  {
    v67 = 2 * v20;
    v65 = 16LL * (unsigned int)(2 * v20);
    v55 = (__m128i *)sub_186B270(v65);
    v24 = v65;
    v56 = v67;
    v22 = v55;
    v19 = &v55[v65 / 0x10];
    if ( v67 )
    {
      if ( (v65 & 0x10) == 0 || (*v55 = 0, ++v55, v19 != v55) )
      {
        do
        {
          *v55 = 0;
          v55 += 2;
          v55[-1] = 0;
        }
        while ( v19 != v55 );
      }
    }
    v57 = *(const __m128i **)(v17 + 1104);
    v23 = v67 - 1;
    v25 = (__int64 *)v19;
    v58 = (__m128i *)&v57[*(unsigned int *)(v17 + 1112)];
    if ( v57 != v58 )
    {
      do
      {
        while ( v57->m128i_i64[0] <= 1uLL )
        {
          if ( v58 == ++v57 )
            goto LABEL_55;
        }
        v59 = 16LL * (*(_DWORD *)(v57->m128i_i64[0] + 12) & v23);
        v60 = &v22[(unsigned __int64)v59 / 0x10];
        if ( v65 == v59 )
        {
LABEL_59:
          if ( v22 == v60 )
          {
LABEL_69:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v61 = v22;
          while ( v61->m128i_i64[0] )
          {
            if ( v60 == ++v61 )
              goto LABEL_69;
          }
        }
        else
        {
          v61 = &v22[(unsigned __int64)v59 / 0x10];
          while ( v61->m128i_i64[0] )
          {
            if ( v19 == ++v61 )
              goto LABEL_59;
          }
        }
        v62 = _mm_loadu_si128(v57++);
        *v61 = v62;
      }
      while ( v58 != v57 );
LABEL_55:
      v58 = *(__m128i **)(v17 + 1104);
    }
    if ( v58 )
    {
      v69 = v67;
      v68 = v65;
      v66 = v56 - 1;
      sub_186B220(v58);
      v56 = v69;
      v24 = v68;
      v23 = v66;
    }
    *(_QWORD *)(v17 + 1104) = v22;
    *(_DWORD *)(v17 + 1112) = v56;
    *(_DWORD *)(v17 + 1120) = 0;
  }
  else
  {
    v22 = *(__m128i **)(v17 + 1104);
    v23 = v20 - 1;
    v24 = 16 * v20;
    v25 = (__int64 *)((char *)v22->m128i_i64 + v24);
  }
  v26 = *(_DWORD *)(a2 + 12);
  v27 = 16LL * (v26 & v23);
  v28 = &v22[(unsigned __int64)v27 / 0x10];
  if ( v27 != v24 )
  {
    v29 = &v22[(unsigned __int64)v27 / 0x10];
    v30 = nullptr;
    while ( 1 )
    {
      v31 = v29->m128i_i64[0];
      if ( v29->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v31 + 12) == v26 && a2 == v31 )
        {
          v29->m128i_i64[0] = a2;
          v29->m128i_i64[1] = v21;
          goto LABEL_26;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v30 )
            goto LABEL_65;
          v30 = (__int64 *)v29;
          goto LABEL_66;
        }
        v30 = (__int64 *)v29;
      }
      if ( ++v29 == (__m128i *)v25 )
        goto LABEL_21;
    }
  }
  v30 = nullptr;
  while ( 1 )
  {
LABEL_21:
    if ( v28 == v22 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v36 = v22->m128i_i64[0];
    if ( v22->m128i_i64[0] <= 1uLL )
    {
      if ( v36 )
      {
        v30 = (__int64 *)v22;
        goto LABEL_20;
      }
      if ( v30 )
LABEL_65:
        --*(_DWORD *)(v17 + 1120);
      else
        v30 = (__int64 *)v22;
LABEL_66:
      v37 = *(__int64 **)(v17 + 1184);
      *v30 = a2;
      v30[1] = v21;
      ++*(_DWORD *)(v17 + 1116);
      if ( v37 )
        goto LABEL_27;
LABEL_67:
      v63 = (_QWORD *)sub_186B270(0x18u);
      v37 = v63 + 1;
      *v63 = 2;
      v40 = 1;
      *(_QWORD *)(v17 + 1184) = v37;
      v41 = v37;
      goto LABEL_29;
    }
    if ( *(_DWORD *)(v36 + 12) == v26 && a2 == v36 )
      break;
LABEL_20:
    ++v22;
  }
  v22->m128i_i64[0] = a2;
  v22->m128i_i64[1] = v21;
LABEL_26:
  v37 = *(__int64 **)(v17 + 1184);
  if ( !v37 )
    goto LABEL_67;
LABEL_27:
  v38 = *((_DWORD *)v37 - 1);
  if ( v38 == *((_DWORD *)v37 - 2) )
  {
    v51 = (3 * v38 + 1) >> 1;
    v52 = 8 * v51 + 8;
    if ( 8 * v38 + 8 >= (unsigned int)v52 || v38 >= v51 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v70, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v70);
      sub_233E40((__int64)v70);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v53 = (unsigned int *)sub_186B300(v37 - 1, v52);
    v54 = v53[1];
    v37 = (__int64 *)(v53 + 2);
    *(_QWORD *)(v17 + 1184) = v53 + 2;
    *v53 = v51;
    LODWORD(v53) = v54;
    v41 = &v37[v54];
    v40 = (_DWORD)v53 + 1;
  }
  else
  {
    v39 = v38;
    v40 = v38 + 1;
    v41 = &v37[v39];
  }
LABEL_29:
  v42 = *(_QWORD *)(v17 + 1192);
  *v41 = a2;
  *((_DWORD *)v37 - 1) = v40;
  v43 = *(const int **)v42;
  v44 = *(__int64 (__fastcall **)())(*(_QWORD *)v42 + 32LL);
  if ( v44 != sub_956140 )
  {
    LODWORD(v43) = ((__int64 (__fastcall *)(__int64, __int64))v44)(v42, a2);
    return (int)v43;
  }
  v45 = *(_QWORD *)(v42 + 16);
  if ( !*(_BYTE *)(v45 + 215) )
    return (int)v43;
  v46 = *((__int64 (__fastcall **)())v43 + 16);
  v47 = sub_955FC0;
  if ( v46 != sub_955FC0 )
  {
    LODWORD(v43) = ((__int64 (__fastcall *)(__int64, __int64))v46)(v42, a2);
    if ( !(_BYTE)v43 )
      return (int)v43;
LABEL_36:
    *(_BYTE *)(v42 + 72) = 1;
    LODWORD(v43) = sub_AC8B40(
                     *(_QWORD *)(v42 + 48),
                     a2,
                     v45,
                     (_DWORD)v47,
                     (_DWORD)v19,
                     v27,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a12,
                     a13);
    return (int)v43;
  }
  v48 = *(const char **)(v45 + 240);
  if ( !v48 )
    goto LABEL_36;
  v49 = strlen(*(const char **)(v45 + 240));
  v50 = *(const char **)(a2 + 56);
  v45 = v49;
  v43 = &qword_18D6CD0;
  if ( !v50 || (v43 = (const int *)(*(_QWORD *)(a2 + 56) & 7LL), v43 == (int *)((char *)&dword_0 + 1)) )
  {
    if ( v45 )
      return (int)v43;
    goto LABEL_36;
  }
  LODWORD(v43) = strncmp(v50, v48, v45);
  if ( !(_DWORD)v43 )
    goto LABEL_36;
  return (int)v43;
}

