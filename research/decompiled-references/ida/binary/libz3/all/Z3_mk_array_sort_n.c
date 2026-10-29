__int64 __fastcall Z3_mk_array_sort_n(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  char **v4; // r12
  char **exception; // r12
  __int64 *v6; // rbp
  char v7; // al
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int8 v10; // dl
  __m128i *v11; // rax
  __m128i *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r14d
  size_t v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  __m128i *v19; // rdx
  _DWORD *v20; // r13
  const __m128i *v21; // rax
  const __m128i *v22; // rcx
  bool v23; // zf
  __int64 v24; // r12
  __m128i *v25; // r15
  __m128i *v26; // r12
  __m128i *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // r12
  __int64 v32; // rax
  unsigned __int64 *v33; // r13
  __m128i *v34; // rbp
  __m128i *v35; // rdi
  unsigned int v37; // r13d
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // rcx
  _DWORD *v41; // r12
  __m128i *v42; // r14
  __int64 v43; // rax
  const __m128i *v44; // rcx
  const __m128i *v45; // rax
  __m128i *v46; // rdx
  __m128i *v47; // r15
  __m128i *v48; // rbp
  __m128i *v49; // rdi
  __int64 v50; // rax
  __int8 v51; // dl
  __m128i *v52; // rax
  _QWORD *v53; // rax
  __int64 *v54; // [rsp+8h] [rbp-A0h]
  __int64 v55; // [rsp+10h] [rbp-98h]
  char v57; // [rsp+27h] [rbp-81h]
  __m128i v59; // [rsp+40h] [rbp-68h] BYREF
  __int64 v60[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a3;
  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v57 = v7;
  if ( v7 )
    sub_2952D0(a1, a2, a3, a4);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    v8 = *v6;
    v59.m128i_i8[8] = 1;
    v59.m128i_i64[0] = v8;
    v9 = (_QWORD *)sub_186B270(0x28u);
    *v9 = 2;
    v10 = v59.m128i_i8[8];
    v11 = (__m128i *)(v9 + 1);
    v54 = &v6[a2];
    v12 = v11;
LABEL_5:
    *v11 = _mm_load_si128(&v59);
    if ( !v10 )
    {
      v59.m128i_i32[0] = 0;
      goto LABEL_7;
    }
    while ( 1 )
    {
      v59.m128i_i32[0] = 0;
      v59.m128i_i8[8] = 0;
LABEL_7:
      ++v12[-1].m128i_i32[3];
      ++v6;
      sub_15D0DF0(&v59);
      if ( v6 == v54 )
        break;
      v13 = *v6;
      v59.m128i_i8[8] = 1;
      v59.m128i_i64[0] = v13;
      v14 = v12[-1].m128i_u32[3];
      if ( (_DWORD)v14 == v12[-1].m128i_i32[2] )
      {
        v15 = (unsigned int)(3 * v14 + 1) >> 1;
        v16 = 16 * v15 + 8;
        if ( 16 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v60, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = sub_186B270(v16);
        v18 = v12[-1].m128i_u32[3];
        v19 = (__m128i *)(v17 + 8);
        v20 = (_DWORD *)v17;
        v55 = v17 + 8;
        *(_DWORD *)(v17 + 4) = v18;
        v21 = v12;
        v22 = &v12[v18];
        if ( v22 != v12 )
        {
          do
          {
            v23 = v21->m128i_i8[8] == 0;
            *v19 = _mm_loadu_si128(v21);
            v21->m128i_i32[0] = 0;
            if ( !v23 )
              v21->m128i_i8[8] = 0;
            ++v21;
            ++v19;
          }
          while ( v22 != v21 );
        }
        v24 = v12[-1].m128i_u32[3];
        if ( (_DWORD)v24 )
        {
          v25 = v12;
          v26 = &v12[v24];
          do
          {
            v27 = v25++;
            sub_15D0DF0(v27);
          }
          while ( v26 != v25 );
        }
        sub_186B220(&v12[-1].m128i_u64[1]);
        v28 = (unsigned int)v20[1];
        v12 = (__m128i *)v55;
        *v20 = v15;
        v10 = v59.m128i_i8[8];
        v11 = (__m128i *)(v55 + 16 * v28);
        goto LABEL_5;
      }
      v12[v14] = _mm_load_si128(&v59);
    }
    v59.m128i_i8[8] = 1;
    v59.m128i_i64[0] = a4;
    v29 = v12[-1].m128i_u32[3];
    if ( (_DWORD)v29 != v12[-1].m128i_i32[2] )
    {
      v12[v29] = _mm_load_si128(&v59);
      v30 = v12[-1].m128i_i32[3] + 1;
LABEL_23:
      v59.m128i_i32[0] = 0;
      v59.m128i_i8[8] = 0;
      goto LABEL_24;
    }
    v37 = (unsigned int)(3 * v29 + 1) >> 1;
    v38 = 16 * v37 + 8;
    if ( 16 * (int)v29 + 8 >= v38 || (unsigned int)v29 >= v37 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v60, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v60);
      sub_233E40((__int64)v60);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v39 = sub_186B270(v38);
    v40 = v12[-1].m128i_u32[3];
    v41 = (_DWORD *)v39;
    v42 = (__m128i *)(v39 + 8);
    *(_DWORD *)(v39 + 4) = v40;
    v43 = v40;
    v44 = &v12[v40];
    if ( v44 != v12 )
    {
      v45 = v12;
      v46 = v42;
      do
      {
        v23 = v45->m128i_i8[8] == 0;
        *v46 = _mm_loadu_si128(v45);
        v45->m128i_i32[0] = 0;
        if ( !v23 )
          v45->m128i_i8[8] = 0;
        ++v45;
        ++v46;
      }
      while ( v44 != v45 );
      v43 = v12[-1].m128i_u32[3];
    }
    if ( (_DWORD)v43 )
    {
      v47 = v12;
      v48 = &v12[v43];
      do
      {
        v49 = v47++;
        sub_15D0DF0(v49);
      }
      while ( v48 != v47 );
    }
    sub_186B220(&v12[-1].m128i_u64[1]);
    v50 = (unsigned int)v41[1];
    v51 = v59.m128i_i8[8];
    *v41 = v37;
    v12 = v42;
    v52 = &v42[v50];
  }
  else
  {
    v59.m128i_i8[8] = 1;
    v59.m128i_i64[0] = a4;
    v53 = (_QWORD *)sub_186B270(0x28u);
    v12 = (__m128i *)(v53 + 1);
    v51 = 1;
    *v53 = 2;
    v52 = (__m128i *)(v53 + 1);
  }
  *v52 = _mm_load_si128(&v59);
  v30 = v12[-1].m128i_i32[3] + 1;
  if ( v51 )
    goto LABEL_23;
  v59.m128i_i32[0] = 0;
LABEL_24:
  v12[-1].m128i_i32[3] = v30;
  sub_15D0DF0(&v59);
  v31 = sub_15D2CD0(*(_QWORD *)(a1 + 232), *(unsigned int *)(a1 + 1440), 0, v12[-1].m128i_u32[3], v12);
  sub_251FD0(a1, v31);
  if ( v57 )
  {
    sub_2BB620(v31);
    v32 = v12[-1].m128i_u32[3];
    v33 = &v12[-1].m128i_u64[1];
    if ( !(_DWORD)v32 )
    {
      sub_186B220(&v12[-1].m128i_u64[1]);
LABEL_48:
      byte_1C7EBA0 = 1;
      return v31;
    }
  }
  else
  {
    v32 = v12[-1].m128i_u32[3];
    v33 = &v12[-1].m128i_u64[1];
    if ( !(_DWORD)v32 )
    {
      sub_186B220(&v12[-1].m128i_u64[1]);
      return v31;
    }
  }
  v34 = &v12[v32];
  do
  {
    v35 = v12++;
    sub_15D0DF0(v35);
  }
  while ( v34 != v12 );
  sub_186B220(v33);
  if ( v57 )
    goto LABEL_48;
  return v31;
}

