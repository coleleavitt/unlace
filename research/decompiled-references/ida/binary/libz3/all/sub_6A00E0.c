__int64 __fastcall sub_6A00E0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // eax
  _QWORD *v7; // rdi
  __int32 v8; // r13d
  __int64 v9; // r14
  int *v10; // r14
  int v11; // eax
  int v12; // r15d
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int32 *v15; // rax
  __int64 v16; // rcx
  __m128i *v17; // rbx
  unsigned int v18; // r10d
  __int64 v19; // rcx
  __m128i *v20; // r14
  int v21; // esi
  __int64 v22; // r10
  __m128i *v23; // rdi
  __m128i *v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // ebx
  unsigned int v29; // edx
  size_t v30; // rsi
  unsigned int v31; // r15d
  unsigned int *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rsi
  void *v36; // rdi
  _QWORD *v38; // rax
  unsigned int v39; // ebx
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r14
  __m128i *v44; // rbx
  unsigned int v45; // r10d
  __int64 v46; // rcx
  __m128i *v47; // r14
  __int64 v48; // r10
  __m128i *v49; // rsi
  __m128i *v50; // rax
  __m128i *v51; // rcx
  int v52; // edx
  __int32 v53; // eax
  __m128i *v54; // rax
  int v55; // r8d
  __m128i *v56; // rdx
  const __m128i *v57; // r15
  __m128i *v58; // r11
  __int64 v59; // rax
  __m128i *v60; // rdx
  __m128i *v61; // rax
  __m128i v62; // xmm0
  __m128i *v63; // rax
  int v64; // r9d
  __m128i *v65; // r8
  const __m128i *v66; // r15
  __m128i *v67; // r11
  __int64 v68; // rax
  __m128i *v69; // rdx
  __m128i *v70; // rax
  __m128i v71; // xmm0
  _QWORD *v72; // rax
  char **exception; // rbp
  __int64 v74; // [rsp-8h] [rbp-A8h]
  unsigned int v75; // [rsp+10h] [rbp-90h]
  unsigned int v76; // [rsp+10h] [rbp-90h]
  size_t v77; // [rsp+10h] [rbp-90h]
  unsigned int v78; // [rsp+10h] [rbp-90h]
  size_t v79; // [rsp+18h] [rbp-88h]
  int v80; // [rsp+18h] [rbp-88h]
  size_t v81; // [rsp+18h] [rbp-88h]
  int v82; // [rsp+20h] [rbp-80h]
  int v83; // [rsp+20h] [rbp-80h]
  unsigned int v84; // [rsp+44h] [rbp-5Ch] BYREF
  __int64 v85[11]; // [rsp+48h] [rbp-58h] BYREF

  sub_786C50(a1 + 4544, *(_QWORD *)(a1 + 8), a1 + 4360, a1 + 96, a1 + 4648, a1 + 4504, 1);
  v6 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))sub_7883D0)(a1 + 4544, a2, v4, v5, v74);
  v7 = *(_QWORD **)(a1 + 4536);
  v84 = v6;
  v8 = v6;
  v9 = v6 >> 5;
  if ( v7 )
  {
    v75 = *((_DWORD *)v7 - 1);
    if ( (unsigned int)v9 >= v75 )
    {
      v28 = v9 + 1;
      goto LABEL_28;
    }
    v10 = (int *)v7 + v9;
    v11 = *v10;
    v12 = 1 << v8;
    if ( ((1 << v8) & *v10) != 0 )
      goto LABEL_35;
  }
  else
  {
    v28 = v9 + 1;
    v38 = (_QWORD *)sub_186B270(0x10u);
    v75 = 0;
    v7 = v38 + 1;
    *v38 = 2;
    *(_QWORD *)(a1 + 4536) = v38 + 1;
LABEL_28:
    while ( 1 )
    {
      v33 = *((_DWORD *)v7 - 2);
      if ( v33 >= v28 )
        break;
      v29 = (3 * v33 + 1) >> 1;
      v30 = 4 * v29 + 8;
      v31 = v29;
      if ( 4 * v33 + 8 >= (unsigned int)v30 || v33 >= v29 )
        goto LABEL_121;
      v32 = (unsigned int *)sub_186B300(v7 - 1, v30);
      v7 = v32 + 2;
      *v32 = v31;
      *(_QWORD *)(a1 + 4536) = v32 + 2;
    }
    *((_DWORD *)v7 - 1) = v28;
    v34 = 4LL * v28;
    v10 = (int *)v7 + v9;
    v35 = 4LL * v75;
    v12 = 1 << v8;
    if ( v35 != v34 )
      memset((char *)v7 + v35, 0, v34 - v35);
    v11 = *v10;
  }
  v13 = *(_QWORD **)(a1 + 4528);
  *v10 = v11 | v12;
  if ( v13 )
  {
    v14 = *((unsigned int *)v13 - 1);
    if ( (_DWORD)v14 == *((_DWORD *)v13 - 2) )
    {
      v39 = (unsigned int)(3 * v14 + 1) >> 1;
      v40 = 4 * v39 + 8;
      if ( 4 * (int)v14 + 8 >= (unsigned int)v40 || (unsigned int)v14 >= v39 )
      {
LABEL_121:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v13 - 1, v40);
      v13 = v41 + 2;
      *v41 = v39;
      v42 = v41[1];
      *(_QWORD *)(a1 + 4528) = v13;
      v15 = (__int32 *)v13 + v42;
    }
    else
    {
      v15 = (__int32 *)v13 + v14;
    }
  }
  else
  {
    v72 = (_QWORD *)sub_186B270(0x10u);
    v13 = v72 + 1;
    *v72 = 2;
    *(_QWORD *)(a1 + 4528) = v72 + 1;
    v15 = (__int32 *)(v72 + 1);
  }
  *v15 = v8;
  ++*((_DWORD *)v13 - 1);
  v16 = *(unsigned int *)(a1 + 4512);
  if ( 3 * (int)v16 < (unsigned int)(4 * (*(_DWORD *)(a1 + 4516) + *(_DWORD *)(a1 + 4520))) )
  {
    v80 = 2 * v16;
    v77 = 16LL * (unsigned int)(2 * v16);
    v63 = (__m128i *)sub_186B270(v77);
    v19 = v77;
    v64 = v80;
    v17 = v63;
    v65 = &v63[v77 / 0x10];
    if ( v80 )
    {
      do
      {
        v63->m128i_i64[0] = 0;
        ++v63;
        v63[-1].m128i_i32[2] = -2;
      }
      while ( v63 != v65 );
    }
    v66 = *(const __m128i **)(a1 + 4504);
    v18 = v80 - 1;
    v20 = v65;
    v67 = (__m128i *)&v66[*(unsigned int *)(a1 + 4512)];
    if ( v66 != v67 )
    {
      do
      {
        while ( v66->m128i_i64[0] <= 1uLL )
        {
          if ( v67 == ++v66 )
            goto LABEL_89;
        }
        v68 = 16LL * (*(_DWORD *)(v66->m128i_i64[0] + 12) & v18);
        v69 = &v17[(unsigned __int64)v68 / 0x10];
        if ( v77 == v68 )
        {
LABEL_93:
          if ( v17 == v69 )
          {
LABEL_110:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v70 = v17;
          while ( v70->m128i_i64[0] )
          {
            if ( v69 == ++v70 )
              goto LABEL_110;
          }
        }
        else
        {
          v70 = &v17[(unsigned __int64)v68 / 0x10];
          while ( v70->m128i_i64[0] )
          {
            if ( v65 == ++v70 )
              goto LABEL_93;
          }
        }
        v71 = _mm_loadu_si128(v66++);
        *v70 = v71;
      }
      while ( v67 != v66 );
LABEL_89:
      v67 = *(__m128i **)(a1 + 4504);
    }
    if ( v67 )
    {
      v83 = v80;
      v81 = v77;
      v78 = v64 - 1;
      sub_186B220(v67);
      v64 = v83;
      v19 = v81;
      v18 = v78;
    }
    *(_QWORD *)(a1 + 4504) = v17;
    *(_DWORD *)(a1 + 4512) = v64;
    *(_DWORD *)(a1 + 4520) = 0;
  }
  else
  {
    v17 = *(__m128i **)(a1 + 4504);
    v18 = v16 - 1;
    v19 = 16 * v16;
    v20 = (__m128i *)((char *)v17 + v19);
  }
  v21 = *(_DWORD *)(a2 + 12);
  v22 = 16LL * (v21 & v18);
  v23 = &v17[(unsigned __int64)v22 / 0x10];
  if ( v22 != v19 )
  {
    v24 = &v17[(unsigned __int64)v22 / 0x10];
    v25 = nullptr;
    while ( 1 )
    {
      v26 = v24->m128i_i64[0];
      if ( v24->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v26 + 12) == v21 && a2 == v26 )
        {
          v24->m128i_i64[0] = a2;
          v24->m128i_i32[2] = v8;
          goto LABEL_43;
        }
      }
      else
      {
        if ( !v26 )
        {
          if ( v25 )
            goto LABEL_100;
          v25 = v24;
          goto LABEL_101;
        }
        v25 = v24;
      }
      if ( ++v24 == v20 )
        goto LABEL_20;
    }
  }
  v25 = nullptr;
  while ( 1 )
  {
LABEL_20:
    if ( v23 == v17 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v27 = v17->m128i_i64[0];
    if ( v17->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v27 + 12) == v21 && a2 == v27 )
    {
      v17->m128i_i64[0] = a2;
      v17->m128i_i32[2] = v8;
      goto LABEL_43;
    }
LABEL_19:
    ++v17;
  }
  if ( v27 )
  {
    v25 = v17;
    goto LABEL_19;
  }
  if ( v25 )
LABEL_100:
    --*(_DWORD *)(a1 + 4520);
  else
    v25 = v17;
LABEL_101:
  v25->m128i_i64[0] = a2;
  v25->m128i_i32[2] = v8;
  ++*(_DWORD *)(a1 + 4516);
LABEL_43:
  v43 = *(unsigned int *)(a1 + 4488);
  if ( 3 * (int)v43 < (unsigned int)(4 * (*(_DWORD *)(a1 + 4492) + *(_DWORD *)(a1 + 4496))) )
  {
    v79 = 24LL * (unsigned int)(2 * v43);
    v54 = (__m128i *)sub_186B270(v79);
    v55 = 2 * v43;
    v46 = v79;
    v44 = v54;
    if ( 2 * (_DWORD)v43 )
    {
      v56 = &v54[3 * (v43 & 0x7FFFFFFF)];
      do
      {
        v54->m128i_i64[0] = 0;
        v54 += 3;
        v54[-2].m128i_i64[1] = 0;
      }
      while ( v56 != v54 );
    }
    v57 = *(const __m128i **)(a1 + 4480);
    v45 = v55 - 1;
    v47 = (__m128i *)((char *)v44 + v79);
    v58 = (__m128i *)((char *)v57 + 24 * *(unsigned int *)(a1 + 4488));
    if ( v57 != v58 )
    {
      do
      {
        while ( v57->m128i_i32[1] != 2 )
        {
          v57 = (const __m128i *)((char *)v57 + 24);
          if ( v58 == v57 )
            goto LABEL_74;
        }
        v59 = 24LL * (v57->m128i_i32[0] & v45);
        v60 = (__m128i *)((char *)v44 + v59);
        if ( v79 == v59 )
        {
LABEL_103:
          if ( v44 == v60 )
          {
LABEL_113:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v61 = v44;
          while ( v61->m128i_i32[1] )
          {
            v61 = (__m128i *)((char *)v61 + 24);
            if ( v60 == v61 )
              goto LABEL_113;
          }
        }
        else
        {
          v61 = (__m128i *)((char *)v44 + v59);
          while ( v61->m128i_i32[1] )
          {
            v61 = (__m128i *)((char *)v61 + 24);
            if ( v47 == v61 )
              goto LABEL_103;
          }
        }
        v62 = _mm_loadu_si128(v57);
        v57 = (const __m128i *)((char *)v57 + 24);
        *v61 = v62;
        v61[1].m128i_i64[0] = v57[-1].m128i_i64[1];
      }
      while ( v58 != v57 );
LABEL_74:
      v58 = *(__m128i **)(a1 + 4480);
    }
    if ( v58 )
    {
      v82 = v55;
      v76 = v55 - 1;
      sub_186B220(v58);
      v55 = v82;
      v46 = v79;
      v45 = v76;
    }
    *(_QWORD *)(a1 + 4480) = v44;
    *(_DWORD *)(a1 + 4488) = v55;
    *(_DWORD *)(a1 + 4496) = 0;
  }
  else
  {
    v44 = *(__m128i **)(a1 + 4480);
    v45 = v43 - 1;
    v46 = 24 * v43;
    v47 = (__m128i *)((char *)v44 + 24 * v43);
  }
  v48 = v8 & v45;
  v49 = (__m128i *)((char *)v44 + 24 * v48);
  if ( 24 * v48 != v46 )
  {
    v50 = (__m128i *)((char *)v44 + 24 * v48);
    v51 = nullptr;
    while ( 1 )
    {
      v52 = v50->m128i_i32[1];
      if ( v52 == 2 )
      {
        if ( v50->m128i_i32[0] == v8 && v50->m128i_i32[2] == v8 )
        {
          v50->m128i_i32[2] = v8;
          v50[1].m128i_i64[0] = a2;
          v50->m128i_i32[1] = 2;
          goto LABEL_35;
        }
      }
      else
      {
        if ( !v52 )
        {
          if ( v51 )
            goto LABEL_33;
          v51 = v50;
          goto LABEL_34;
        }
        v51 = v50;
      }
      v50 = (__m128i *)((char *)v50 + 24);
      if ( v50 == v47 )
        goto LABEL_57;
    }
  }
  v51 = nullptr;
LABEL_57:
  while ( 2 )
  {
    if ( v49 == v44 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v53 = v44->m128i_i32[1];
    if ( v53 == 2 )
    {
      if ( v44->m128i_i32[0] == v8 && v44->m128i_i32[2] == v8 )
      {
        v44->m128i_i32[2] = v8;
        v44[1].m128i_i64[0] = a2;
        v44->m128i_i32[1] = 2;
        goto LABEL_35;
      }
      goto LABEL_56;
    }
    if ( v53 )
    {
      v51 = v44;
LABEL_56:
      v44 = (__m128i *)((char *)v44 + 24);
      continue;
    }
    break;
  }
  if ( v51 )
LABEL_33:
    --*(_DWORD *)(a1 + 4496);
  else
    v51 = v44;
LABEL_34:
  v51->m128i_i32[2] = v8;
  v51[1].m128i_i64[0] = a2;
  v51->m128i_i32[1] = 2;
  v51->m128i_i32[0] = v8;
  ++*(_DWORD *)(a1 + 4492);
LABEL_35:
  v36 = *(void **)(a1 + 624);
  if ( v36 )
    v36 = __dynamic_cast(
            v36,
            (const struct __class_type_info *)&`typeinfo for'sat::extension,
            (const struct __class_type_info *)&`typeinfo for'euf::solver,
            0);
  return sub_79B170(v36, 1, &v84);
}

