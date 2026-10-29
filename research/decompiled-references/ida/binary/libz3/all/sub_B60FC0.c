int __fastcall sub_B60FC0(__int64 a1, __m128i a2, __m128 a3)
{
  char **v3; // r14
  char **exception; // r12
  __int64 *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r14
  __m128i *v8; // r13
  pthread_mutex_t *v9; // rcx
  __m128 *v10; // rsi
  unsigned __int32 v11; // r15d
  unsigned __int64 v12; // r12
  unsigned int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  __int64 *v16; // rdi
  __m128i *v17; // rdi
  unsigned __int32 v18; // eax
  unsigned int v19; // eax
  __int64 v20; // r12
  __int64 v21; // rsi
  int v22; // eax
  int v23; // edx
  unsigned int *v24; // rax
  pthread_mutex_t *v25; // rdi
  bool v26; // zf
  __int64 *v27; // rbp
  __int64 *v28; // r12
  __int64 v29; // rsi
  unsigned int v30; // r8d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rsi
  int v34; // eax
  _QWORD *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rdx
  unsigned __int64 v40; // r15
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdi
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  __int64 *v51; // rdx
  __int64 v52; // r15
  __m128i *v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // r15
  __int64 v56; // rdi
  _DWORD *v57; // rcx
  unsigned int *v58; // r14
  unsigned int *v59; // r15
  __int64 *v60; // rbp
  __int64 *v61; // r12
  __int64 v62; // rsi
  _QWORD *v63; // rax
  __m128i *v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // r15
  unsigned int v67; // edx
  unsigned int v68; // ecx
  unsigned int *v69; // rax
  __int64 v70; // r15
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // r15
  _QWORD *v74; // rbx
  __int64 align; // [rsp+8h] [rbp-A0h]
  pthread_mutex_t *mutex; // [rsp+10h] [rbp-98h]
  pthread_mutex_t *mutexa; // [rsp+10h] [rbp-98h]
  unsigned int mutexb; // [rsp+10h] [rbp-98h]
  pthread_mutex_t *mutexc; // [rsp+10h] [rbp-98h]
  unsigned int v81; // [rsp+18h] [rbp-90h]
  int v82; // [rsp+18h] [rbp-90h]
  unsigned int v83; // [rsp+1Ch] [rbp-8Ch]
  __m128i v84; // [rsp+40h] [rbp-68h] BYREF
  __m128i v85[5]; // [rsp+50h] [rbp-58h] BYREF

  v5 = nullptr;
  v6 = *(_QWORD *)(a1 + 16);
  v83 = *(_DWORD *)(a1 + 8);
  v7 = *(_QWORD *)(**(_QWORD **)v6 + 8LL * v83);
  v8 = *(__m128i **)(**(_QWORD **)(v6 + 8) + 8LL * v83);
  v9 = (pthread_mutex_t *)(**(_QWORD **)(v6 + 16) + 16LL * v83);
  v10 = (__m128 *)*(&v9->__align + 1);
  align = v9->__align;
  if ( v10 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= v10[-1].m128_i32[3] )
        break;
      v12 = v10->m128_u64[v11];
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      if ( v5 )
      {
        v13 = *((_DWORD *)v5 - 1);
        if ( v13 == *((_DWORD *)v5 - 2) )
        {
          v30 = (3 * v13 + 1) >> 1;
          v31 = 8 * v30 + 8;
          if ( 8 * v13 + 8 >= (unsigned int)v31 || v13 >= v30 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v85[0].m128i_i64, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v85);
            sub_233E40((__int64)v85);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v81 = (3 * v13 + 1) >> 1;
          mutex = v9;
          v32 = (unsigned int *)sub_186B300(v5 - 1, v31);
          v33 = v32[1];
          v5 = (__int64 *)(v32 + 2);
          v9 = mutex;
          *v32 = v81;
          v16 = (__int64 *)&v32[2 * v33 + 2];
          v15 = v33 + 1;
          v10 = (__m128 *)*(&mutex->__align + 1);
        }
        else
        {
          v14 = v13;
          v15 = v13 + 1;
          v16 = &v5[v14];
        }
      }
      else
      {
        mutexa = v9;
        v63 = (_QWORD *)sub_186B270(0x18u);
        v9 = mutexa;
        v16 = v63 + 1;
        *v63 = 2;
        v15 = 1;
        v5 = v16;
        v10 = (__m128 *)*(&mutexa->__align + 1);
      }
      *v16 = v12;
      ++v11;
      *((_DWORD *)v5 - 1) = v15;
    }
    while ( v10 );
  }
  v17 = *(__m128i **)(v7 + 112);
  v18 = **(_DWORD **)(v6 + 32);
  if ( v18 > **(_DWORD **)(v6 + 24) )
    v18 = **(_DWORD **)(v6 + 24);
  v17[33].m128i_i32[0] = v18;
  v19 = **(_DWORD **)(v6 + 40);
  if ( !v19
    || v19 % v17[34].m128i_i32[1]
    || (sub_B1DC60((__m128 *)&v84, v7),
        v10 = (__m128 *)&v84,
        v17 = v85,
        sub_B1DD90(v85, v84.m128i_i64, 0x7D0u, a2, a3),
        (v20 = v85[0].m128i_i64[0]) == 0) )
  {
    v20 = 0;
    if ( !(unsigned int)sub_180B130(v17) )
      goto LABEL_15;
    goto LABEL_71;
  }
  v47 = 214013 * *(_DWORD *)(v7 + 7504) + 2531011;
  *(_DWORD *)(v7 + 7504) = v47;
  if ( (v47 & 0x10000) != 0 )
    goto LABEL_66;
  v10 = nullptr;
  v17 = v8;
  v72 = sub_15E1A70((int)v8);
  if ( v72 )
  {
    ++*(_DWORD *)(v72 + 8);
    v26 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v26 )
    {
      v10 = (__m128 *)v20;
      v17 = v8;
      mutexc = (pthread_mutex_t *)v72;
      sub_15D7BC0(v8, v20);
      v72 = (__int64)mutexc;
    }
    v20 = v72;
LABEL_66:
    ++*(_DWORD *)(v20 + 8);
    goto LABEL_67;
  }
  v26 = (*(_DWORD *)(v20 + 8))-- == 1;
  if ( v26 )
  {
    v10 = (__m128 *)v20;
    v17 = v8;
    sub_15D7BC0(v8, v20);
  }
  v20 = 0;
LABEL_67:
  if ( v5 )
  {
    v48 = *((_DWORD *)v5 - 1);
    if ( v48 == *((_DWORD *)v5 - 2) )
    {
      v67 = (3 * v48 + 1) >> 1;
      v68 = 8 * v67 + 8;
      if ( 8 * v48 + 8 >= v68 || v48 >= v67 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v85[0].m128i_i64, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v85);
        sub_233E40((__int64)v85);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v10 = (__m128 *)v68;
      v17 = (__m128i *)(v5 - 1);
      mutexb = (3 * v48 + 1) >> 1;
      v69 = (unsigned int *)sub_186B300(v5 - 1, v68);
      v5 = (__int64 *)(v69 + 2);
      *v69 = mutexb;
      LODWORD(v69) = v69[1];
      v51 = &v5[(unsigned int)v69];
      v50 = (_DWORD)v69 + 1;
    }
    else
    {
      v49 = v48;
      v50 = v48 + 1;
      v51 = &v5[v49];
    }
  }
  else
  {
    v17 = (__m128i *)&qword_18;
    v74 = (_QWORD *)sub_186B270(0x18u);
    *v74 = 2;
    v50 = 1;
    v5 = v74 + 1;
    v51 = v5;
  }
  *v51 = v20;
  *((_DWORD *)v5 - 1) = v50;
  if ( !(unsigned int)sub_180B130(v17) )
    goto LABEL_16;
LABEL_71:
  if ( (unsigned __int8)sub_186A530(*(double *)a2.m128i_i64) )
  {
    sub_186A4C0(*(double *)a2.m128i_i64);
    v52 = sub_180B150(v17, v10);
    std::__ostream_insert<char,std::char_traits<char>>();
    v53 = (__m128i *)v83;
    v54 = v52;
    std::ostream::operator<<();
    if ( **(_DWORD **)(v6 + 40) )
    {
      v71 = sub_180B150(v52, v83);
      std::__ostream_insert<char,std::char_traits<char>>();
      v54 = v71;
      v53 = (__m128i *)**(unsigned int **)(v6 + 40);
      std::ostream::_M_insert<unsigned long>();
    }
    if ( v20 )
    {
      v55 = sub_180B150(v54, v53);
      std::__ostream_insert<char,std::char_traits<char>>();
      v53 = v8;
      v54 = v55;
      sub_1648CA0(v55, v8, v20, 3);
    }
    v56 = sub_180B150(v54, v53);
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_186A500(v56, ")\n");
    if ( !v5 )
      goto LABEL_77;
LABEL_16:
    v21 = *((unsigned int *)v5 - 1);
    goto LABEL_17;
  }
  sub_180B150(v17, v10);
  std::__ostream_insert<char,std::char_traits<char>>();
  v64 = (__m128i *)v83;
  std::ostream::operator<<();
  v65 = **(unsigned int **)(v6 + 40);
  if ( (_DWORD)v65 )
  {
    v70 = sub_180B150(v65, v83);
    std::__ostream_insert<char,std::char_traits<char>>();
    v65 = v70;
    v64 = (__m128i *)**(unsigned int **)(v6 + 40);
    std::ostream::_M_insert<unsigned long>();
  }
  if ( v20 )
  {
    v66 = sub_180B150(v65, v64);
    std::__ostream_insert<char,std::char_traits<char>>();
    v64 = v8;
    v65 = v66;
    sub_1648CA0(v66, v8, v20, 3);
  }
  sub_180B150(v65, v64);
  std::__ostream_insert<char,std::char_traits<char>>();
LABEL_15:
  if ( v5 )
    goto LABEL_16;
LABEL_77:
  v21 = 0;
LABEL_17:
  v22 = sub_8FD5F0(v7, v21, v5, 1u, a2, a3);
  v23 = v22;
  if ( !v22 )
  {
    LODWORD(v24) = *(_DWORD *)(v7 + 10324);
    if ( (unsigned int)v24 < **(_DWORD **)(v6 + 32) )
    {
      if ( (unsigned int)v24 >= **(_DWORD **)(v6 + 24) )
        goto LABEL_21;
      v25 = *(pthread_mutex_t **)(v6 + 56);
      if ( !&_pthread_key_create )
      {
LABEL_20:
        v24 = *(unsigned int **)(v6 + 64);
        if ( *v24 != -1 )
          goto LABEL_21;
        goto LABEL_100;
      }
    }
    else
    {
      v25 = *(pthread_mutex_t **)(v6 + 56);
      if ( !&_pthread_key_create )
        goto LABEL_20;
    }
LABEL_38:
    v82 = v23;
    v34 = pthread_mutex_lock(v25);
    if ( v34 )
      std::__throw_system_error(v34);
    v24 = *(unsigned int **)(v6 + 64);
    v23 = v82;
    if ( *v24 != -1 )
    {
      if ( !v82 )
        goto LABEL_41;
      goto LABEL_79;
    }
    goto LABEL_100;
  }
  if ( v22 == -1 )
  {
    v35 = *(_QWORD **)(v7 + 9376);
    if ( v35 )
    {
      v36 = *((unsigned int *)v35 - 1);
      if ( (_DWORD)v36 )
      {
        v37 = &v35[v36];
        while ( *v35 != v20 )
        {
          if ( ++v35 == v37 )
            goto LABEL_37;
        }
        if ( (unsigned int)sub_180B130(v7) )
        {
          if ( (unsigned __int8)sub_186A530(*(double *)a2.m128i_i64) )
          {
            sub_186A4C0(*(double *)a2.m128i_i64);
            sub_180B150(v7, v21);
            std::__ostream_insert<char,std::char_traits<char>>();
            v38 = std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1648CA0(v38, v8, v20, 3);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_186A500(v38, ")");
          }
          else
          {
            sub_180B150(v7, v21);
            std::__ostream_insert<char,std::char_traits<char>>();
            v73 = std::ostream::operator<<();
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1648CA0(v73, v8, v20, 3);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        v39 = *(_QWORD *)(v7 + 9376);
        v40 = *(_QWORD *)(v7 + 9368);
        if ( v39 )
          v41 = *(unsigned int *)(v39 - 4);
        else
          v41 = 0;
        v42 = sub_15EC1C0(*(_QWORD *)(v7 + 9368), v41);
        v84 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)v40);
        if ( v42 )
          ++*(_DWORD *)(v42 + 8);
        sub_15EC330(v85, &v84);
        LODWORD(v24) = sub_8F8A20(v7);
        v43 = v85[0].m128i_i64[0];
        if ( v85[0].m128i_i64[0] )
        {
          v44 = v85[0].m128i_i64[1];
          v26 = (*(_DWORD *)(v85[0].m128i_i64[0] + 8))-- == 1;
          if ( v26 )
            LODWORD(v24) = sub_15D7BC0(v44, v43);
        }
        v45 = v84.m128i_i64[0];
        if ( v84.m128i_i64[0] )
        {
          v46 = v84.m128i_u64[1];
          v26 = (*(_DWORD *)(v84.m128i_i64[0] + 8))-- == 1;
          if ( v26 )
            LODWORD(v24) = sub_15D7BC0(v46, v45);
        }
        goto LABEL_21;
      }
    }
  }
LABEL_37:
  v25 = *(pthread_mutex_t **)(v6 + 56);
  if ( &_pthread_key_create )
    goto LABEL_38;
  v24 = *(unsigned int **)(v6 + 64);
  if ( *v24 != -1 )
  {
LABEL_79:
    v57 = *(_DWORD **)(v6 + 72);
    if ( !*v57 )
    {
      *v24 = v83;
      *v57 = v23;
      goto LABEL_81;
    }
LABEL_41:
    if ( &_pthread_key_create )
      LODWORD(v24) = pthread_mutex_unlock(v25);
LABEL_21:
    if ( v20 )
    {
      v26 = (*(_DWORD *)(v20 + 8))-- == 1;
      if ( v26 )
        LODWORD(v24) = sub_15D7BC0(v8, v20);
    }
    if ( v5 )
    {
      v27 = v5;
      v28 = &v5[*((unsigned int *)v5 - 1)];
      if ( v5 < v28 )
      {
        do
        {
          while ( 1 )
          {
            v29 = *v27;
            if ( *v27 )
            {
              v26 = (*(_DWORD *)(v29 + 8))-- == 1;
              if ( v26 )
                break;
            }
            if ( ++v27 >= v28 )
              goto LABEL_31;
          }
          ++v27;
          sub_15D7BC0(align, v29);
        }
        while ( v27 < v28 );
      }
LABEL_31:
      LODWORD(v24) = sub_186B220(v5 - 1);
    }
    return (int)v24;
  }
LABEL_100:
  *v24 = v83;
  **(_DWORD **)(v6 + 72) = v23;
  **(_BYTE **)(v6 + 80) = 1;
LABEL_81:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(v25);
  v24 = **(unsigned int ***)(v6 + 8);
  if ( v24 )
  {
    v58 = &v24[2 * *(v24 - 1)];
    if ( v24 != v58 )
    {
      v59 = **(unsigned int ***)(v6 + 8);
      do
      {
        if ( v8 != *(__m128i **)v59 )
          LODWORD(v24) = sub_18295D0(*(_QWORD *)v59);
        v59 += 2;
      }
      while ( v58 != v59 );
    }
  }
  if ( v20 )
  {
    v26 = (*(_DWORD *)(v20 + 8))-- == 1;
    if ( v26 )
      LODWORD(v24) = sub_15D7BC0(v8, v20);
  }
  if ( v5 )
  {
    v60 = v5;
    v61 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 < v61 )
    {
      do
      {
        while ( 1 )
        {
          v62 = *v60;
          if ( *v60 )
          {
            v26 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v26 )
              break;
          }
          if ( ++v60 >= v61 )
            goto LABEL_99;
        }
        ++v60;
        sub_15D7BC0(align, v62);
      }
      while ( v60 < v61 );
    }
LABEL_99:
    LODWORD(v24) = sub_186B220(v5 - 1);
  }
  return (int)v24;
}

