void __fastcall sub_E3CFB0(pthread_mutex_t *a1, __int64 a2, _QWORD *a3)
{
  pthread_mutex_t *v5; // r12
  pthread_mutex_t *v6; // rbx
  double v7; // xmm0_8
  int v8; // eax
  double v9; // xmm0_8
  size_t p_ptr; // rsi
  char *v11; // rdx
  __int64 v12; // rdi
  int v13; // eax
  __int64 next; // r13
  __int64 v15; // r14
  _OWORD *v16; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  void (__fastcall ***v22)(void *); // r15
  _DWORD *v23; // r13
  int v24; // eax
  bool v25; // zf
  _QWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  void (__fastcall ***v32)(void *, size_t, char *); // rbx
  __int64 v33; // rdi
  const char *v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdi
  __int64 v39; // rsi
  struct __pthread_internal_list *v40; // r15
  unsigned int v41; // r15d
  unsigned int *v42; // rax
  __int64 v43; // rcx
  pthread_mutex_t *v44; // r12
  int v45; // eax
  struct __pthread_internal_list *prev; // rbx
  struct __pthread_internal_list *i; // r13
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  struct __pthread_internal_list *v50; // r12
  __int64 v51; // r15
  __int64 v52; // r15
  _QWORD *v53; // rax
  __int64 v54; // r14
  unsigned __int64 v55; // rdi
  struct __pthread_internal_list *v56; // rdi
  char **exception; // r13
  __int64 v58; // rdx
  int v59; // [rsp+0h] [rbp-D8h]
  double v60; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v62[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+40h] [rbp-98h] BYREF
  __int64 v64; // [rsp+48h] [rbp-90h]
  __int128 v65; // [rsp+50h] [rbp-88h]
  __int64 v66; // [rsp+60h] [rbp-78h]
  void *v67; // [rsp+68h] [rbp-70h]
  __int64 v68; // [rsp+70h] [rbp-68h]
  int v69; // [rsp+78h] [rbp-60h]
  __int128 v70; // [rsp+80h] [rbp-58h]
  int v71; // [rsp+90h] [rbp-48h]

  v5 = a1 + 5;
  v6 = a1;
  v7 = 100.0 / *(double *)(a2 + 72);
  if ( &_pthread_key_create )
  {
    a1 += 5;
    v60 = 100.0 / *(double *)(a2 + 72);
    v8 = pthread_mutex_lock(a1);
    v7 = v60;
    if ( v8 )
      std::__throw_system_error(v8);
  }
  v9 = v7 + *(double *)&v6[6].__align;
  --v6[6].__owner;
  *(double *)&v6[6].__align = v9;
  if ( &_pthread_key_create )
  {
    a1 = v5;
    pthread_mutex_unlock(v5);
  }
  if ( !(unsigned int)sub_180B130(a1) )
  {
LABEL_6:
    ptr = nullptr;
    if ( a3 )
      goto LABEL_7;
LABEL_37:
    a3 = *(_QWORD **)(a2 + 56);
    goto LABEL_7;
  }
  if ( !(unsigned __int8)sub_186A530(v9) )
  {
    sub_180B150(a1, a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v37 = std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v38 = sub_180B150(v37, "%");
    std::__ostream_insert<char,std::char_traits<char>>();
    v39 = *((unsigned int *)&v6[6].__align + 6);
    if ( (_DWORD)v39 )
    {
      sub_180B150(v38, v39);
      std::__ostream_insert<char,std::char_traits<char>>();
      v52 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v39 = *((unsigned int *)&v6[6].__align + 7);
      v38 = v52;
      std::ostream::_M_insert<unsigned long>();
    }
    sub_180B150(v38, v39);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_6;
  }
  sub_186A4C0(v9);
  sub_180B150(a1, a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  v33 = std::ostream::_M_insert<double>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_180B150(v33, "%");
  v34 = " :status sat";
  std::__ostream_insert<char,std::char_traits<char>>();
  v35 = *((unsigned int *)&v6[6].__align + 6);
  if ( (_DWORD)v35 )
  {
    sub_180B150(v35, " :status sat");
    std::__ostream_insert<char,std::char_traits<char>>();
    v51 = std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v34 = (const char *)*((unsigned int *)&v6[6].__align + 7);
    v35 = v51;
    std::ostream::_M_insert<unsigned long>();
  }
  sub_180B150(v35, v34);
  std::__ostream_insert<char,std::char_traits<char>>();
  v36 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_186A500(v36, ")\n");
  ptr = nullptr;
  if ( !a3 )
    goto LABEL_37;
LABEL_7:
  p_ptr = (size_t)&ptr;
  (*(void (__fastcall **)(_QWORD *, void **))(*a3 + 32LL))(a3, &ptr);
  if ( ptr )
  {
    v12 = a3[7];
    if ( !v12
      || (p_ptr = (size_t)&ptr, (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 32LL))(v12, &ptr), ptr) )
    {
      if ( &_pthread_key_create )
      {
        v13 = pthread_mutex_lock(v5);
        if ( v13 )
          std::__throw_system_error(v13);
      }
      next = (__int64)v6->__list.__next;
      if ( !next )
      {
        next = sub_186B270(0x3D0u);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 56) + 72LL))(*(_QWORD *)(a2 + 56));
        sub_15DD980(next);
        v40 = v6->__list.__next;
        if ( (struct __pthread_internal_list *)next != v40 )
        {
          if ( v40 )
          {
            sub_15D95C0(v6->__list.__next);
            sub_186B220(v40);
          }
          v6->__list.__next = (struct __pthread_internal_list *)next;
        }
      }
      v63 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 56) + 72LL))(*(_QWORD *)(a2 + 56));
      v15 = v63;
      v64 = next;
      v66 = 0;
      v65 = 0;
      v16 = (_OWORD *)sub_186B270(0x80u);
      v67 = v16;
      *v16 = 0;
      v16[1] = 0;
      v16[2] = 0;
      v16[3] = 0;
      v16[4] = 0;
      v16[5] = 0;
      v16[6] = 0;
      v16[7] = 0;
      v68 = 8;
      v69 = 0;
      v71 = 0;
      v70 = 0;
      if ( v15 != next )
      {
        sub_15DA640(v64, v63, v17, v18, v19, v20, v59);
        sub_15D2280(v64, v63);
      }
      p_ptr = (size_t)&v63;
      v21 = sub_1377690(ptr, &v63);
      v22 = (void (__fastcall ***)(void *))ptr;
      v23 = (_DWORD *)v21;
      if ( v21 )
      {
        v24 = *(_DWORD *)(v21 + 16) + 1;
        v23[4] = v24;
        if ( !v22 )
        {
          ptr = v23;
          goto LABEL_19;
        }
        v25 = (*((_DWORD *)v22 + 4))-- == 1;
        if ( !v25 )
        {
          ptr = v23;
          v24 = v23[4];
LABEL_19:
          v23[4] = v24 + 1;
LABEL_20:
          v26 = (_QWORD *)*(&v6[1].__align + 1);
          if ( v26 )
          {
            v27 = *((_DWORD *)v26 - 1);
            if ( v27 == *((_DWORD *)v26 - 2) )
            {
              v41 = (3 * v27 + 1) >> 1;
              p_ptr = 8 * v41 + 8;
              if ( 8 * v27 + 8 >= (unsigned int)p_ptr || v27 >= v41 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_181416(v62, "Overflow encountered when expanding vector", v58);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v62);
                sub_233E40((__int64)v62);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v42 = (unsigned int *)sub_186B300(v26 - 1, p_ptr);
              v43 = v42[1];
              v26 = v42 + 2;
              *v42 = v41;
              *(&v6[1].__align + 1) = (__int64)(v42 + 2);
              LODWORD(v42) = v43;
              v30 = &v26[v43];
              v29 = (_DWORD)v42 + 1;
            }
            else
            {
              v28 = v27;
              v29 = v27 + 1;
              v30 = &v26[v28];
            }
          }
          else
          {
            v53 = (_QWORD *)sub_186B270(0x18u);
            v26 = v53 + 1;
            *v53 = 2;
            v29 = 1;
            *(&v6[1].__align + 1) = (__int64)v26;
            v30 = v26;
          }
          *v30 = v23;
          *((_DWORD *)v26 - 1) = v29;
          sub_15CE760(&v63);
          if ( &_pthread_key_create )
            pthread_mutex_unlock(v5);
          goto LABEL_28;
        }
      }
      else if ( !ptr || (v25 = *((_DWORD *)ptr + 4) == 1, --*((_DWORD *)ptr + 4), !v25) )
      {
        ptr = nullptr;
        goto LABEL_20;
      }
      (**v22)(v22);
      sub_186B220(v22);
      ptr = v23;
      if ( !v23 )
        goto LABEL_20;
      v24 = v23[4];
      goto LABEL_19;
    }
  }
  v31 = *(&v6[1].__align + 1);
  if ( v31 && *(_DWORD *)(v31 - 4) )
  {
    if ( v6[6].__size[21] )
      return;
    goto LABEL_29;
  }
  v11 = &v6[6].__size[20];
  if ( !v6[6].__size[20] )
  {
    *v11 = 1;
    p_ptr = (size_t)v6[7].__list.__next;
    if ( (__int64 *)p_ptr == &v6[8].__align + 1 || (v49 = *(&v6[8].__align + 1), v49 > 9) )
    {
      if ( (unsigned __int64)"incomplete" < p_ptr || p_ptr + v6[8].__align < (unsigned __int64)"incomplete" )
      {
        v11 = (_BYTE *)(&stru_6560 + 20);
        qmemcpy((void *)p_ptr, "incomplete", 10);
      }
      else
      {
        std::string::_M_replace_cold();
      }
      v50 = v6[7].__list.__next;
    }
    else
    {
      v54 = 2 * v49;
      v55 = 2 * v49 + 1;
      if ( 2 * v49 <= 0xA )
      {
        v54 = 10;
        v55 = 11;
      }
      v50 = (struct __pthread_internal_list *)operator new(v55);
      v56 = v6[7].__list.__next;
      qmemcpy(v50, "incomplete", 10);
      if ( &v6[8].__align + 1 != (__int64 *)v56 )
      {
        p_ptr = *(&v6[8].__align + 1) + 1;
        operator delete(v56, p_ptr);
      }
      v6[7].__list.__next = v50;
      *(&v6[8].__align + 1) = v54;
    }
    v6[8].__align = 10;
    BYTE2(v50->__next) = 0;
  }
LABEL_28:
  if ( !v6[6].__size[21] )
  {
LABEL_29:
    if ( !v6[4].__size[36] )
    {
      v44 = (pthread_mutex_t *)((char *)v6 + 88);
      if ( &_pthread_key_create )
      {
        v45 = pthread_mutex_lock((pthread_mutex_t *)((char *)v6 + 88));
        if ( v45 )
          std::__throw_system_error(v45);
      }
      v6[4].__size[36] = 1;
      std::condition_variable::notify_all((std::condition_variable *)(&v6[3].__align + 1));
      prev = v6[4].__list.__prev;
      if ( prev )
      {
        for ( i = (struct __pthread_internal_list *)((char *)prev + 8 * HIDWORD(prev[-1].__next));
              i != prev;
              prev = (struct __pthread_internal_list *)((char *)prev + 8) )
        {
          v48 = ((__int64 (__fastcall *)(struct __pthread_internal_list *))prev->__prev[3].__next->__prev[4].__next)(prev->__prev[3].__next);
          sub_18295D0(v48);
        }
      }
      if ( &_pthread_key_create )
        pthread_mutex_unlock(v44);
    }
  }
  v32 = (void (__fastcall ***)(void *, size_t, char *))ptr;
  if ( ptr )
  {
    v25 = (*((_DWORD *)ptr + 4))-- == 1;
    if ( v25 )
    {
      (**v32)(v32, p_ptr, v11);
      sub_186B220(v32);
    }
  }
}

