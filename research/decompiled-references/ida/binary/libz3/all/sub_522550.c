__int64 __fastcall sub_522550(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char *a6,
        __m128 a7,
        __int64 a8)
{
  char **exception; // r12
  char **v9; // r12
  __m128i *v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // r13
  int v14; // r10d
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  __int32 v19; // r12d
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rax
  __m128i *v23; // rcx
  __m128i *v24; // rax
  __m128i *v25; // rdx
  __int32 v26; // esi
  _QWORD *v27; // rbx
  unsigned int v28; // r15d
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 result; // rax
  __m128i *v32; // r13
  __m128i *v33; // r12
  unsigned __int32 v34; // r14d
  __int64 v35; // rax
  __int64 v36; // r15
  _QWORD *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 *v41; // rcx
  __int32 v42; // esi
  __m128 *v43; // rax
  unsigned int v44; // r9d
  __m128 *v45; // r10
  __m128 *v46; // rdx
  const __m128i *v47; // r11
  const __m128i *v48; // r13
  __int64 v49; // rax
  __m128 *v50; // rdx
  __m128 *v51; // rax
  __m128 *v52; // rdx
  unsigned int v53; // ecx
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // r12
  _QWORD *v57; // rax
  unsigned int v58; // edx
  unsigned int v59; // ecx
  unsigned int v60; // r14d
  unsigned int *v61; // rax
  unsigned int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  size_t v66; // [rsp+10h] [rbp-D0h]
  int v71; // [rsp+40h] [rbp-A0h]
  unsigned __int64 v72; // [rsp+48h] [rbp-98h]
  size_t v74; // [rsp+58h] [rbp-88h]
  __m128 *v75; // [rsp+58h] [rbp-88h]
  unsigned int v76; // [rsp+60h] [rbp-80h]
  int v77; // [rsp+64h] [rbp-7Ch]
  unsigned int v78; // [rsp+64h] [rbp-7Ch]
  __int64 v79; // [rsp+68h] [rbp-78h]
  unsigned int v80; // [rsp+68h] [rbp-78h]
  unsigned int v81; // [rsp+68h] [rbp-78h]
  __m128 *v82; // [rsp+70h] [rbp-70h]
  unsigned int v83; // [rsp+70h] [rbp-70h]
  __m128i *ptr; // [rsp+78h] [rbp-68h]
  __int64 v85[10]; // [rsp+90h] [rbp-50h] BYREF

  v10 = (__m128i *)sub_186B270(0xC0u);
  v11 = *(_DWORD *)(a2 + 64);
  ptr = v10;
  v10->m128i_i64[0] = 0;
  v10[1].m128i_i64[1] = 0;
  v10[3].m128i_i64[0] = 0;
  v10[4].m128i_i64[1] = 0;
  v10[6].m128i_i64[0] = 0;
  v10[7].m128i_i64[1] = 0;
  v10[9].m128i_i64[0] = 0;
  v10[10].m128i_i64[1] = 0;
  v12 = *(_DWORD *)(a2 + 68);
  if ( v12 == v11 )
    return sub_186B220(ptr);
  v13 = 8;
  if ( v11 >= v12 )
    goto LABEL_20;
  v14 = 0;
  v77 = 0;
  v13 = 8;
  v79 = a2 + 8LL * v11;
  v72 = a2 + 8 * (v11 + (unsigned __int64)(v12 - 1 - v11)) + 8;
  do
  {
    v15 = *(_QWORD *)(v79 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    v16 = *(unsigned int *)(v15 + 24);
    if ( !(_DWORD)v16 )
      goto LABEL_19;
    v17 = v15 + 8 * v16;
    do
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v15 + 32);
        if ( *(_WORD *)(v18 + 4) == 1 )
          break;
LABEL_6:
        v15 += 8LL;
        if ( v15 == v17 )
          goto LABEL_19;
      }
      v19 = *(_DWORD *)(v18 + 16);
      if ( 3 * (int)v13 >= (unsigned int)(4 * (v14 + v77)) )
      {
        v20 = v13 - 1;
        v21 = 24LL * (unsigned int)v13;
        v82 = (__m128 *)&ptr->m128i_i8[v21];
        goto LABEL_10;
      }
      v74 = 24LL * (unsigned int)(2 * v13);
      v43 = (__m128 *)sub_186B270(v74);
      v44 = 2 * v13;
      v21 = v74;
      v45 = v43;
      if ( 2 * (_DWORD)v13 )
      {
        v46 = &v43[3 * (v13 & 0x7FFFFFFE)];
        do
        {
          v43->m128_u64[0] = 0;
          v43 += 3;
          v43[-2].m128_u64[1] = 0;
        }
        while ( v46 != v43 );
        v20 = v44 - 1;
        v47 = (__m128i *)((char *)ptr + 24 * v13);
        v82 = (__m128 *)((char *)v45 + v74);
LABEL_66:
        v48 = ptr;
        do
        {
          while ( v48->m128i_i32[1] != 2 )
          {
            v48 = (const __m128i *)((char *)v48 + 24);
            if ( v48 == v47 )
              goto LABEL_75;
          }
          v49 = 24LL * (v48->m128i_i32[0] & (unsigned int)v20);
          v50 = (__m128 *)((char *)v45 + v49);
          if ( v74 == v49 )
          {
LABEL_78:
            if ( v45 == v50 )
            {
LABEL_87:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v51 = v45;
            while ( v51->m128_i32[1] )
            {
              v51 = (__m128 *)((char *)v51 + 24);
              if ( v50 == v51 )
                goto LABEL_87;
            }
            v52 = v82;
          }
          else
          {
            v51 = (__m128 *)((char *)v45 + v49);
            while ( v51->m128_i32[1] )
            {
              v51 = (__m128 *)((char *)v51 + 24);
              if ( v51 == v82 )
                goto LABEL_78;
            }
            v52 = v82;
          }
          a7 = (__m128)_mm_loadu_si128(v48);
          v82 = v52;
          v48 = (const __m128i *)((char *)v48 + 24);
          *v51 = a7;
          v51[1].m128_u64[0] = v48[-1].m128i_u64[1];
        }
        while ( v48 != v47 );
        goto LABEL_75;
      }
      v82 = v43;
      v20 = -1;
      v47 = (__m128i *)((char *)ptr + 24 * v13);
      if ( v47 != ptr )
        goto LABEL_66;
LABEL_75:
      if ( ptr )
      {
        v76 = v44;
        v66 = v74;
        v71 = v20;
        v75 = v45;
        sub_186B220(ptr);
        v45 = v75;
        v20 = v71;
        v21 = v66;
        v44 = v76;
      }
      ptr = (__m128i *)v45;
      v13 = v44;
      v14 = 0;
LABEL_10:
      v22 = 24LL * (v19 & (unsigned int)v20);
      v23 = (__m128i *)((char *)ptr + v22);
      if ( v22 == v21 )
      {
        v25 = nullptr;
LABEL_49:
        v24 = ptr;
        if ( v23 == ptr )
        {
LABEL_58:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        while ( 1 )
        {
          v42 = v24->m128i_i32[1];
          if ( v42 != 2 )
            break;
          if ( v19 == v24->m128i_i32[0] )
          {
            if ( v19 == v24->m128i_i32[2] )
              goto LABEL_18;
            v24 = (__m128i *)((char *)v24 + 24);
            if ( v23 == v24 )
              goto LABEL_58;
          }
          else
          {
LABEL_53:
            v24 = (__m128i *)((char *)v24 + 24);
            if ( v23 == v24 )
              goto LABEL_58;
          }
        }
        if ( !v42 )
          goto LABEL_59;
        v25 = v24;
        goto LABEL_53;
      }
      v24 = (__m128i *)((char *)ptr + v22);
      v25 = nullptr;
      while ( 1 )
      {
        v26 = v24->m128i_i32[1];
        if ( v26 == 2 )
          break;
        if ( !v26 )
        {
LABEL_59:
          if ( v25 )
            --v14;
          else
            v25 = v24;
          v25->m128i_i32[2] = v19;
          v25[1].m128i_i64[0] = v18;
          v25->m128i_i32[1] = 2;
          v25->m128i_i32[0] = v19;
          ++v77;
          goto LABEL_6;
        }
        v25 = v24;
LABEL_14:
        v24 = (__m128i *)((char *)v24 + 24);
        if ( v24 == (__m128i *)v82 )
          goto LABEL_49;
      }
      if ( v19 != v24->m128i_i32[0] || v19 != v24->m128i_i32[2] )
        goto LABEL_14;
LABEL_18:
      v15 += 8LL;
      v24->m128i_i32[2] = v19;
      v24[1].m128i_i64[0] = v18;
      v24->m128i_i32[1] = 2;
    }
    while ( v15 != v17 );
LABEL_19:
    v79 += 8;
  }
  while ( v72 != v79 );
LABEL_20:
  v27 = nullptr;
  v28 = 0;
  v29 = *(_QWORD *)(a5 + 8);
  if ( !v29 )
  {
    result = 3 * v13;
    v32 = (__m128i *)((char *)ptr + 24 * v13);
    if ( ptr != v32 )
      goto LABEL_25;
    if ( !ptr )
      return result;
    return sub_186B220(ptr);
  }
  while ( v28 < *(_DWORD *)(v29 - 4) )
  {
    while ( 1 )
    {
      v30 = *(_QWORD *)(v29 + 8LL * v28);
      if ( *(_WORD *)(v30 + 4) != 1 )
        goto LABEL_23;
      v81 = *(_DWORD *)(v30 + 16);
      v56 = v81 >> 5;
      if ( !v27 )
      {
        v83 = v56 + 1;
        v57 = (_QWORD *)sub_186B270(0x10u);
        *v57 = 2;
        v78 = 0;
        v27 = v57 + 1;
        goto LABEL_95;
      }
      v78 = *((_DWORD *)v27 - 1);
      if ( (unsigned int)v56 < v78 )
        break;
      v83 = v56 + 1;
LABEL_95:
      while ( 1 )
      {
        v62 = *((_DWORD *)v27 - 2);
        if ( v62 >= v83 )
          break;
        v58 = (3 * v62 + 1) >> 1;
        v59 = 4 * v58 + 8;
        v60 = v58;
        if ( 4 * v62 + 8 >= v59 || v62 >= v58 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v85, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v85);
          sub_233E40((__int64)v85);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v61 = (unsigned int *)sub_186B300(v27 - 1, v59);
        *v61 = v60;
        v27 = v61 + 2;
      }
      *((_DWORD *)v27 - 1) = v83;
      v63 = 4LL * v83;
      v64 = 4LL * v78;
      v29 = *(_QWORD *)(a5 + 8);
      if ( v64 != v63 )
        memset((char *)v27 + v64, 0, v63 - v64);
      *((_DWORD *)v27 + (unsigned int)v56) |= 1 << v81;
      if ( !v29 )
        goto LABEL_24;
LABEL_23:
      if ( ++v28 >= *(_DWORD *)(v29 - 4) )
        goto LABEL_24;
    }
    ++v28;
    *((_DWORD *)v27 + v56) |= 1 << v81;
  }
LABEL_24:
  result = 3 * v13;
  v32 = (__m128i *)((char *)ptr + 24 * v13);
  if ( ptr != v32 )
  {
LABEL_25:
    v33 = ptr;
    while ( v33->m128i_i32[1] != 2 )
    {
      v33 = (__m128i *)((char *)v33 + 24);
      if ( v33 == v32 )
        goto LABEL_43;
    }
    if ( v33 != v32 )
    {
      do
      {
        v34 = v33->m128i_u32[2];
        v35 = v34 >> 5;
        if ( !v27 || (unsigned int)v35 >= *((_DWORD *)v27 - 1) || (*((_DWORD *)v27 + v35) & (1 << v34)) == 0 )
        {
          v36 = v33[1].m128i_i64[0];
          if ( v36 )
            ++*(_DWORD *)(v36 + 8);
          v37 = *(_QWORD **)(a5 + 8);
          if ( v37 )
          {
            v38 = *((_DWORD *)v37 - 1);
            if ( v38 == *((_DWORD *)v37 - 2) )
            {
              v53 = (3 * v38 + 1) >> 1;
              v54 = 8 * v53 + 8;
              if ( 8 * v38 + 8 >= (unsigned int)v54 || v38 >= v53 )
              {
                v9 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v85, "Overflow encountered when expanding vector");
                *v9 = (char *)off_1C63128;
                sub_2333C0(v9 + 1, v85);
                sub_233E40((__int64)v85);
                __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v80 = (3 * v38 + 1) >> 1;
              v55 = (unsigned int *)sub_186B300(v37 - 1, v54);
              v37 = v55 + 2;
              *(_QWORD *)(a5 + 8) = v55 + 2;
              *v55 = v80;
              LODWORD(v55) = v55[1];
              v41 = &v37[(unsigned int)v55];
              v40 = (_DWORD)v55 + 1;
            }
            else
            {
              v39 = v38;
              v40 = v38 + 1;
              v41 = &v37[v39];
            }
          }
          else
          {
            v65 = (_QWORD *)sub_186B270(0x18u);
            *v65 = 2;
            v37 = v65 + 1;
            *(_QWORD *)(a5 + 8) = v65 + 1;
            v41 = v65 + 1;
            v40 = 1;
          }
          *v41 = v36;
          *((_DWORD *)v37 - 1) = v40;
          v85[0] = sub_15D1F10(v36);
          sub_521C80(a1, a2, *(double *)a7.m128_u64, v34, a3, *a4, v85, a4, a6, a8);
        }
        result = (__int64)&v33[1].m128i_i64[1];
        if ( &v33[1].m128i_u64[1] == (unsigned __int64 *)v32 )
          break;
        while ( 1 )
        {
          v33 = (__m128i *)result;
          if ( *(_DWORD *)(result + 4) == 2 )
            break;
          result += 24;
          if ( v32 == (__m128i *)result )
            goto LABEL_43;
        }
      }
      while ( (__m128i *)result != v32 );
    }
  }
LABEL_43:
  if ( ptr )
    result = sub_186B220(ptr);
  if ( v27 )
    return sub_186B220(v27 - 1);
  return result;
}

