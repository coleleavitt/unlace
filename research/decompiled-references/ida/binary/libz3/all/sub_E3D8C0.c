__int64 __fastcall sub_E3D8C0(pthread_mutex_t *a1, __int64 *a2, double a3)
{
  pthread_mutex_t *v3; // r12
  pthread_mutex_t *v4; // rbp
  int v5; // eax
  std::thread *v6; // rbx
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rax
  std::thread *v10; // rcx
  _QWORD *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // r8d
  size_t v14; // rdi
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 v18; // r15
  _DWORD *v19; // r14
  _QWORD *v20; // rdx
  std::thread *v21; // rsi
  std::thread *i; // rax
  __int64 v23; // rcx
  std::thread *v24; // rax
  __int64 v25; // rdx
  std::thread *v26; // r13
  std::thread *v27; // r12
  __int64 v28; // r12
  __int64 j; // r15
  struct __pthread_internal_list *prev; // r12
  struct __pthread_internal_list *k; // r15
  int v32; // eax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // r12
  void (__fastcall ***v36)(void *); // r13
  bool v37; // zf
  struct __pthread_internal_list *v38; // rbp
  struct __pthread_internal_list *v39; // r12
  _OWORD *v40; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // r9d
  __int64 v45; // rax
  __int64 v46; // rbp
  void (__fastcall ***v47)(void *); // r12
  unsigned int v48; // ebp
  __int64 v49; // rax
  std::thread *v50; // rdx
  std::thread *v51; // rax
  _QWORD *v53; // rax
  const char *v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rdi
  const char *v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rbx
  void *v61; // r12
  char **v62; // r12
  char **exception; // r12
  __int64 v64; // rdx
  int v65; // [rsp+0h] [rbp-B8h]
  _OWORD v67[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v68; // [rsp+40h] [rbp-78h]
  void *ptr; // [rsp+48h] [rbp-70h]
  __int64 v70; // [rsp+50h] [rbp-68h]
  int v71; // [rsp+58h] [rbp-60h]
  __int128 v72; // [rsp+60h] [rbp-58h]
  int v73; // [rsp+70h] [rbp-48h]

  v3 = a1 + 5;
  v4 = a1;
  if ( &_pthread_key_create )
  {
    a1 += 5;
    v5 = pthread_mutex_lock(a1);
    if ( v5 )
      std::__throw_system_error(v5);
  }
  ++v4[6].__owner;
  if ( &_pthread_key_create )
  {
    a1 = v3;
    pthread_mutex_unlock(v3);
  }
  if ( (unsigned int)sub_180B130(a1) )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v54 = "%";
      v55 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *((_DWORD *)&v4[6].__align + 6) )
      {
        sub_180B150(v55, "%");
        std::__ostream_insert<char,std::char_traits<char>>();
        v59 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v54 = (const char *)*((unsigned int *)&v4[6].__align + 7);
        v55 = v59;
        std::ostream::_M_insert<unsigned long>();
      }
      sub_180B150(v55, v54);
      std::__ostream_insert<char,std::char_traits<char>>();
      v56 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v56, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v57 = "%";
      v58 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *((_DWORD *)&v4[6].__align + 6) )
      {
        sub_180B150(v58, "%");
        std::__ostream_insert<char,std::char_traits<char>>();
        v60 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v57 = (const char *)*((unsigned int *)&v4[6].__align + 7);
        v58 = v60;
        std::ostream::_M_insert<unsigned long>();
      }
      sub_180B150(v58, v57);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v6 = nullptr;
  if ( *((_DWORD *)&v4[1].__align + 6) )
  {
    v7 = 0;
    do
    {
      v11 = (_QWORD *)operator new(0x10u);
      v11[1] = v4;
      *(_QWORD *)&v67[0] = v11;
      *v11 = &off_1C76730;
      std::thread::_M_start_thread();
      if ( *(_QWORD *)&v67[0] )
        (*(void (__fastcall **)(_QWORD, _OWORD *))(**(_QWORD **)&v67[0] + 8LL))(*(_QWORD *)&v67[0], v67);
      if ( v6 )
      {
        v12 = *((_DWORD *)v6 - 1);
        if ( v12 == *((_DWORD *)v6 - 2) )
        {
          v13 = (3 * v12 + 1) >> 1;
          v14 = 8 * v13 + 8;
          v15 = v13;
          if ( 8 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_181416((__int64 *)v67, "Overflow encountered when expanding vector", v64);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v67);
            sub_233E40((__int64)v67);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = sub_186B270(v14);
          v17 = *((unsigned int *)v6 - 1);
          v18 = v16 + 8;
          v19 = (_DWORD *)v16;
          v20 = (_QWORD *)(v16 + 8);
          v21 = (std::thread *)((char *)v6 + 8 * v17);
          *(_DWORD *)(v16 + 4) = v17;
          for ( i = v6; i != v21; *(v20 - 1) = v23 )
          {
            *v20 = 0;
            v23 = *(_QWORD *)i;
            i = (std::thread *)((char *)i + 8);
            ++v20;
            *((_QWORD *)i - 1) = 0;
          }
          v24 = v6;
          if ( (_DWORD)v17 )
          {
            while ( !*(_QWORD *)v24 )
            {
              v24 = (std::thread *)((char *)v24 + 8);
              if ( (std::thread *)((char *)v6 + 8 * v17) == v24 )
                goto LABEL_21;
            }
LABEL_64:
            std::terminate();
          }
LABEL_21:
          sub_186B220((char *)v6 - 8);
          v25 = (unsigned int)v19[1];
          *v19 = v15;
          v6 = (std::thread *)v18;
          v10 = (std::thread *)(v18 + 8 * v25);
          v9 = (unsigned int)(v25 + 1);
        }
        else
        {
          v8 = v12;
          v9 = v12 + 1;
          v10 = (std::thread *)((char *)v6 + 8 * v8);
        }
      }
      else
      {
        v53 = (_QWORD *)sub_186B270(0x18u);
        v6 = (std::thread *)(v53 + 1);
        *v53 = 2;
        v9 = 1;
        v10 = v6;
      }
      ++v7;
      *(_QWORD *)v10 = 0;
      *((_DWORD *)v6 - 1) = v9;
    }
    while ( v7 < *((_DWORD *)&v4[1].__align + 6) );
    v26 = (std::thread *)((char *)v6 + 8 * v9);
    if ( v26 != v6 )
    {
      v27 = v6;
      do
      {
        std::thread::join(v27);
        v27 = (std::thread *)((char *)v27 + 8);
      }
      while ( v26 != v27 );
    }
  }
  v28 = *(&v4[4].__align + 2);
  if ( v28 )
  {
    for ( j = v28 + 8LL * *(unsigned int *)(v28 - 4); j != v28; v28 += 8 )
      (*(void (__fastcall **)(_QWORD, struct __pthread_internal_list **))(**(_QWORD **)(*(_QWORD *)v28 + 56LL) + 16LL))(
        *(_QWORD *)(*(_QWORD *)v28 + 56LL),
        &v4[1].__list.__next);
  }
  prev = v4[4].__list.__prev;
  if ( prev )
  {
    for ( k = (struct __pthread_internal_list *)((char *)prev + 8 * HIDWORD(prev[-1].__next));
          k != prev;
          prev = (struct __pthread_internal_list *)((char *)prev + 8) )
    {
      ((void (__fastcall *)(struct __pthread_internal_list *, struct __pthread_internal_list **))prev->__prev[3].__next->__prev[1].__prev)(
        prev->__prev[3].__next,
        &v4[1].__list.__next);
    }
  }
  sub_1829550(v4->__list.__prev);
  v32 = *((_DWORD *)&v4[6].__align + 8);
  if ( v32 == -1 )
  {
    v62 = (char **)__cxa_allocate_exception(0x28u);
    *v62 = (char *)off_1C63128;
    sub_2333C0(v62 + 1, &v4[7].__align);
    __cxa_throw(v62, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v32 )
  {
    v61 = __cxa_allocate_exception(0x10u);
    sub_182AE00(v61, *((unsigned int *)&v4[6].__align + 8));
    __cxa_throw(v61, (struct type_info *)&`typeinfo for'z3_error, (void (*)(void *))sub_26BEA0);
  }
  v33 = *(&v4[1].__align + 1);
  if ( v33 && (v34 = *(_DWORD *)(v33 - 4)) != 0 )
  {
    v35 = *(_QWORD *)(v33 + 8LL * (unsigned int)(v34 - 1));
    if ( v35 )
      ++*(_DWORD *)(v35 + 16);
    v36 = (void (__fastcall ***)(void *))*a2;
    if ( *a2 )
    {
      v37 = (*((_DWORD *)v36 + 4))-- == 1;
      if ( v37 )
      {
        (**v36)(v36);
        sub_186B220(v36);
      }
    }
    v38 = v4->__list.__prev;
    *a2 = v35;
    v39 = *(struct __pthread_internal_list **)(v35 + 8);
    v68 = 0;
    v67[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v38);
    v67[1] = 0;
    v40 = (_OWORD *)sub_186B270(0x80u);
    ptr = v40;
    *v40 = 0;
    v40[1] = 0;
    v40[2] = 0;
    v40[3] = 0;
    v40[4] = 0;
    v40[5] = 0;
    v40[6] = 0;
    v40[7] = 0;
    v70 = 8;
    v71 = 0;
    v73 = 0;
    v72 = 0;
    if ( v38 != v39 )
    {
      sub_15DA640(DWORD2(v67[0]), v67[0], v41, v42, v43, v44, v65);
      sub_15D2280(*((_QWORD *)&v67[0] + 1), *(_QWORD *)&v67[0]);
    }
    v45 = sub_1377690(*a2, v67);
    v46 = v45;
    if ( v45 )
      ++*(_DWORD *)(v45 + 16);
    v47 = (void (__fastcall ***)(void *))*a2;
    if ( *a2 )
    {
      v37 = (*((_DWORD *)v47 + 4))-- == 1;
      if ( v37 )
      {
        (**v47)(v47);
        sub_186B220(v47);
      }
    }
    *a2 = v46;
    v48 = 1;
    sub_15CE760(v67);
  }
  else
  {
    v48 = -(v4[6].__size[20] == 0);
  }
  if ( v6 )
  {
    v49 = *((unsigned int *)v6 - 1);
    if ( (_DWORD)v49 )
    {
      v50 = (std::thread *)((char *)v6 + 8 * v49);
      v51 = v6;
      while ( !*(_QWORD *)v51 )
      {
        v51 = (std::thread *)((char *)v51 + 8);
        if ( v50 == v51 )
          goto LABEL_54;
      }
      goto LABEL_64;
    }
LABEL_54:
    sub_186B220((char *)v6 - 8);
  }
  return v48;
}

