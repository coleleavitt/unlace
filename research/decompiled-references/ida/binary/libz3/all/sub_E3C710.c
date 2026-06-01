__int64 __fastcall sub_E3C710(pthread_mutex_t *a1, double *a2, __int64 a3)
{
  pthread_mutex_t *v4; // r13
  double *v5; // r12
  pthread_mutex_t *v6; // rbx
  int v7; // eax
  double v8; // xmm0_8
  double v9; // xmm0_8
  __int64 result; // rax
  pthread_mutex_t *next; // rax
  size_t v12; // rdx
  size_t v13; // r15
  __int64 v14; // rdi
  const char *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  const char *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r15
  unsigned __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rbp
  double na; // [rsp+0h] [rbp-48h]
  size_t n; // [rsp+0h] [rbp-48h]
  size_t nb; // [rsp+0h] [rbp-48h]
  pthread_mutex_t *v28; // [rsp+8h] [rbp-40h]

  v4 = a1 + 5;
  v5 = a2;
  v6 = a1;
  if ( &_pthread_key_create )
  {
    a1 += 5;
    v7 = pthread_mutex_lock(a1);
    if ( v7 )
      goto LABEL_41;
  }
  if ( v6[6].__size[20] )
    goto LABEL_4;
  v6[6].__size[20] = 1;
  if ( (__int64 *)a3 == &v6[7].__align + 4 )
    goto LABEL_4;
  next = (pthread_mutex_t *)v6[7].__list.__next;
  v12 = *(_QWORD *)(a3 + 8);
  if ( next != (pthread_mutex_t *)(&v6[8].__align + 1) )
  {
    v13 = *(&v6[8].__align + 1);
    if ( v13 >= v12 )
      goto LABEL_15;
    if ( (v12 & 0x8000000000000000LL) == 0LL )
    {
      v21 = 2 * v13;
      if ( v12 < v21 )
      {
        v22 = v21 + 1;
        if ( v21 < 0 )
LABEL_37:
          std::__throw_bad_alloc();
LABEL_29:
        n = *(_QWORD *)(a3 + 8);
        next = (pthread_mutex_t *)operator new(v22);
        a1 = (pthread_mutex_t *)v6[7].__list.__next;
        v12 = n;
        if ( &v6[8].__align + 1 != (__int64 *)a1 )
        {
          v28 = next;
          operator delete(a1, *(&v6[8].__align + 1) + 1);
          next = v28;
          v12 = n;
        }
        v6[7].__list.__next = (struct __pthread_internal_list *)next;
        *(&v6[8].__align + 1) = v21;
        goto LABEL_32;
      }
      v21 = *(_QWORD *)(a3 + 8);
LABEL_28:
      v22 = v21 + 1;
      if ( v21 + 1 < 0 )
        goto LABEL_37;
      goto LABEL_29;
    }
    goto LABEL_40;
  }
  if ( v12 > 0xF )
  {
    if ( (v12 & 0x8000000000000000LL) == 0LL )
    {
      v21 = 30;
      if ( v12 >= 0x1E )
        v21 = *(_QWORD *)(a3 + 8);
      goto LABEL_28;
    }
LABEL_40:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_15:
  if ( v12 )
  {
LABEL_32:
    a2 = *(double **)a3;
    if ( v12 == 1 )
    {
      next->__size[0] = *(_BYTE *)a2;
      next = (pthread_mutex_t *)v6[7].__list.__next;
    }
    else
    {
      a1 = next;
      nb = v12;
      memcpy(next, a2, v12);
      next = (pthread_mutex_t *)v6[7].__list.__next;
      v12 = nb;
    }
  }
  v6[8].__align = v12;
  next->__size[v12] = 0;
LABEL_4:
  if ( &_pthread_key_create )
  {
    a1 = v4;
    pthread_mutex_unlock(v4);
  }
  v8 = 100.0 / v5[9];
  if ( &_pthread_key_create )
  {
    a1 = v4;
    na = 100.0 / v5[9];
    v7 = pthread_mutex_lock(v4);
    v8 = na;
    if ( v7 )
LABEL_41:
      std::__throw_system_error(v7);
  }
  v9 = v8 + *(double *)&v6[6].__align;
  --v6[6].__owner;
  *(double *)&v6[6].__align = v9;
  if ( &_pthread_key_create )
  {
    a1 = v4;
    pthread_mutex_unlock(v4);
  }
  result = sub_180B130(a1);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int8)sub_186A530(v9) )
    {
      sub_186A4C0(v9);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v14 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v15 = " :status unknown";
      v16 = sub_180B150(v14, "%");
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *((_DWORD *)&v6[6].__align + 6) )
      {
        sub_180B150(v16, " :status unknown");
        std::__ostream_insert<char,std::char_traits<char>>();
        v24 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v15 = (const char *)*((unsigned int *)&v6[6].__align + 7);
        v16 = v24;
        std::ostream::_M_insert<unsigned long>();
      }
      sub_180B150(v16, v15);
      std::__ostream_insert<char,std::char_traits<char>>();
      v17 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      return sub_186A500(v17, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v18 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v19 = " :status unknown";
      v20 = sub_180B150(v18, "%");
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *((_DWORD *)&v6[6].__align + 6) )
      {
        sub_180B150(v20, " :status unknown");
        std::__ostream_insert<char,std::char_traits<char>>();
        v23 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v19 = (const char *)*((unsigned int *)&v6[6].__align + 7);
        v20 = v23;
        std::ostream::_M_insert<unsigned long>();
      }
      sub_180B150(v20, v19);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

