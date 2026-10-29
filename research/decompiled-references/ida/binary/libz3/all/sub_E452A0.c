__int64 __fastcall sub_E452A0(__int64 a1, __m128i a2)
{
  pthread_mutex_t *v2; // r14
  __int64 v3; // rbp
  __int64 result; // rax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // edx
  char *v10; // rcx
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  char **v15; // rcx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // r12d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // r15
  __int64 v28; // rcx
  char **v29; // rdx
  char **v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  int v33; // r12d
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r15
  char *v42; // rdi
  void (__fastcall ***v43)(void *); // r13
  bool v44; // zf
  __int64 *v45; // r13
  __int64 *v46; // r12
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 *v49; // r13
  __int64 *v50; // r12
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 *v53; // r15
  __int64 v54; // rax
  __int64 *v55; // r13
  __int64 *v56; // r12
  __int64 *v57; // rbp
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 *v60; // r12
  __int64 *v61; // rbp
  __int64 v62; // rsi
  __int64 v63; // rdi
  void *v64; // r13
  _QWORD *v65; // rax
  int v66; // r12d
  int v67; // eax
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // r9d
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // r15
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // r12
  __int64 v79; // r15
  char **exception; // r15
  __int64 v81; // rdx
  int v82; // [rsp+0h] [rbp-A8h]
  pthread_mutex_t *v83; // [rsp+8h] [rbp-A0h]
  char *ptr; // [rsp+10h] [rbp-98h]
  __int64 v85; // [rsp+18h] [rbp-90h]
  __int64 v86; // [rsp+18h] [rbp-90h]
  char *v87; // [rsp+20h] [rbp-88h]
  void *v88; // [rsp+28h] [rbp-80h]
  __int64 v89; // [rsp+30h] [rbp-78h]
  int v90[2]; // [rsp+40h] [rbp-68h]
  int v91[2]; // [rsp+40h] [rbp-68h]
  int v92[2]; // [rsp+40h] [rbp-68h]
  int v93[2]; // [rsp+40h] [rbp-68h]
  int v94; // [rsp+48h] [rbp-60h]
  int v95; // [rsp+48h] [rbp-60h]
  pthread_mutex_t *mutex[2]; // [rsp+50h] [rbp-58h] BYREF
  int v97; // [rsp+60h] [rbp-48h]
  int v98; // [rsp+68h] [rbp-40h]
  int v99; // [rsp+70h] [rbp-38h]
  __int64 v100; // [rsp+78h] [rbp-30h]
  int v101; // [rsp+80h] [rbp-28h]
  int v102; // [rsp+88h] [rbp-20h]
  int v103; // [rsp+90h] [rbp-18h]
  void *v104; // [rsp+98h] [rbp-10h]

  v2 = (pthread_mutex_t *)(a1 + 88);
  v3 = a1;
  v83 = (pthread_mutex_t *)(a1 + 196);
LABEL_2:
  while ( 1 )
  {
    result = (unsigned __int8)v83->__size[0];
    if ( (_BYTE)result )
      return result;
    while ( 1 )
    {
      if ( &_pthread_key_create )
      {
        v5 = pthread_mutex_lock(v2);
        if ( v5 )
          std::__throw_system_error(v5);
      }
      ++*(_DWORD *)(v3 + 192);
      if ( &_pthread_key_create )
      {
        pthread_mutex_unlock(v2);
        v6 = pthread_mutex_lock(v2);
        if ( v6 )
          std::__throw_system_error(v6);
      }
      v7 = *(_QWORD *)(v3 + 176);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 - 4);
        if ( v8 )
          break;
      }
      if ( &_pthread_key_create )
        pthread_mutex_unlock(v2);
LABEL_15:
      mutex[0] = v2;
      LOBYTE(mutex[1]) = 0;
      if ( &_pthread_key_create )
      {
        v16 = pthread_mutex_lock(v2);
        if ( v16 )
          std::__throw_system_error(v16);
      }
      LOBYTE(mutex[1]) = 1;
      if ( !v83->__size[0] )
        std::condition_variable::wait();
      if ( !LOBYTE(mutex[1]) || !mutex[0] )
        goto LABEL_20;
      if ( &_pthread_key_create )
      {
        pthread_mutex_unlock(mutex[0]);
LABEL_20:
        if ( &_pthread_key_create )
        {
          v17 = pthread_mutex_lock(v2);
          if ( v17 )
            std::__throw_system_error(v17);
        }
      }
      --*(_DWORD *)(v3 + 192);
      if ( !&_pthread_key_create )
        goto LABEL_2;
      pthread_mutex_unlock(v2);
      result = (unsigned __int8)v83->__size[0];
      if ( (_BYTE)result )
        return result;
    }
    v9 = v8 - 1;
    v10 = *(char **)(v7 + 8LL * v9);
    *(_DWORD *)(v7 - 4) = v9;
    v11 = *(_QWORD **)(v3 + 184);
    ptr = v10;
    if ( v11 )
    {
      v12 = *((_DWORD *)v11 - 1);
      if ( v12 == *((_DWORD *)v11 - 2) )
      {
        v18 = (3 * v12 + 1) >> 1;
        v19 = 8 * v18 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v19 || v12 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_181416((__int64 *)mutex, "Overflow encountered when expanding vector", v81);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, mutex);
          sub_233E40((__int64)mutex);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = (unsigned int *)sub_186B300(v11 - 1, v19);
        v21 = v20[1];
        v11 = v20 + 2;
        *v20 = v18;
        *(_QWORD *)(v3 + 184) = v20 + 2;
        LODWORD(v20) = v21;
        v15 = (char **)&v11[v21];
        v14 = (_DWORD)v20 + 1;
      }
      else
      {
        v13 = v12;
        v14 = v12 + 1;
        v15 = (char **)&v11[v13];
      }
    }
    else
    {
      v65 = (_QWORD *)sub_186B270(0x18u);
      v11 = v65 + 1;
      *(_QWORD *)(v3 + 184) = v65 + 1;
      *v65 = 2;
      v15 = (char **)(v65 + 1);
      v14 = 1;
    }
    *v15 = ptr;
    *((_DWORD *)v11 - 1) = v14;
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v2);
    if ( !ptr )
      goto LABEL_15;
    if ( &_pthread_key_create )
    {
      v22 = pthread_mutex_lock(v2);
      if ( v22 )
        std::__throw_system_error(v22);
    }
    --*(_DWORD *)(v3 + 192);
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v2);
    sub_E42280((pthread_mutex_t *)v3, ptr, a2);
    v23 = *((_QWORD *)ptr + 7);
    if ( &_pthread_key_create )
    {
      v24 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 200));
      if ( v24 )
        std::__throw_system_error(v24);
    }
    v85 = v3 + 72;
    v25 = v3 + 72;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 16LL))(v23, v3 + 72);
    if ( &_pthread_key_create )
    {
      pthread_mutex_unlock((pthread_mutex_t *)(v3 + 200));
      v26 = pthread_mutex_lock(v2);
      if ( v26 )
        std::__throw_system_error(v26);
    }
    v27 = *(_QWORD *)(v3 + 184);
    if ( !v27 )
    {
      v75 = *(_QWORD *)(v3 + 176);
      if ( !v75 || !*(_DWORD *)(v75 - 4) )
        goto LABEL_55;
      goto LABEL_56;
    }
    v28 = *(unsigned int *)(v27 - 4);
    v29 = (char **)(v27 + 8 * v28);
    v25 = (8 * v28) >> 3;
    if ( !((8 * v28) >> 5) )
    {
      v30 = *(char ***)(v3 + 184);
LABEL_152:
      switch ( v25 )
      {
        case 2LL:
          goto LABEL_156;
        case 3LL:
          if ( ptr == *v30 )
            goto LABEL_49;
          ++v30;
LABEL_156:
          if ( ptr == *v30 )
            goto LABEL_49;
          ++v30;
          break;
        case 1LL:
          break;
        default:
LABEL_147:
          v31 = *(_QWORD *)(v3 + 176);
          if ( v31 )
            goto LABEL_53;
          goto LABEL_54;
      }
      if ( ptr == *v30 )
        goto LABEL_49;
      v31 = *(_QWORD *)(v3 + 176);
      if ( !v31 )
        goto LABEL_54;
LABEL_53:
      if ( !*(_DWORD *)(v31 - 4) )
        goto LABEL_54;
      goto LABEL_56;
    }
    v25 = (__int64)ptr;
    v30 = *(char ***)(v3 + 184);
    while ( ptr != *v30 )
    {
      if ( ptr == v30[1] )
      {
        if ( v29 != ++v30 )
          goto LABEL_50;
        goto LABEL_147;
      }
      if ( ptr == v30[2] )
      {
        v30 += 2;
        break;
      }
      if ( ptr == v30[3] )
      {
        v30 += 3;
        break;
      }
      v30 += 4;
      if ( v30 == (char **)(v27 + 32 * ((8 * v28) >> 5)) )
      {
        v25 = v29 - v30;
        goto LABEL_152;
      }
    }
LABEL_49:
    if ( v29 == v30 )
      goto LABEL_147;
LABEL_50:
    v25 = (__int64)(v30 + 1);
    if ( v29 != v30 + 1 )
    {
      LODWORD(v87) = *(_DWORD *)(v27 - 4);
      memmove(v30, (const void *)v25, (char *)(v29 - 1) - (char *)v30);
      LODWORD(v28) = (_DWORD)v87;
    }
    v31 = *(_QWORD *)(v3 + 176);
    LODWORD(v28) = v28 - 1;
    *(_DWORD *)(v27 - 4) = v28;
    if ( v31 )
      goto LABEL_53;
LABEL_54:
    if ( !(_DWORD)v28 )
    {
LABEL_55:
      v83->__size[0] = 1;
      std::condition_variable::notify_all((std::condition_variable *)(v3 + 128));
    }
LABEL_56:
    if ( &_pthread_key_create )
      pthread_mutex_unlock(v2);
    v32 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)ptr + 7) + 72LL))(*((_QWORD *)ptr + 7));
    if ( !(unsigned __int8)sub_18290A0(v32) && !v83->__size[0] )
    {
      if ( &_pthread_key_create )
      {
        v76 = pthread_mutex_lock(v2);
        if ( v76 )
          std::__throw_system_error(v76);
      }
      v83->__size[0] = 1;
      v32 = v3 + 128;
      std::condition_variable::notify_all((std::condition_variable *)(v3 + 128));
      v77 = *(_QWORD *)(v3 + 184);
      if ( v77 )
      {
        v78 = v77 + 8LL * *(unsigned int *)(v77 - 4);
        if ( v77 != v78 )
        {
          v79 = *(_QWORD *)(v3 + 184);
          do
          {
            v32 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v79 + 56LL) + 72LL))(*(_QWORD *)(*(_QWORD *)v79 + 56LL));
            sub_18295D0(v32);
            v79 += 8;
          }
          while ( v78 != v79 );
        }
      }
      if ( &_pthread_key_create )
      {
        v32 = (__int64)v2;
        pthread_mutex_unlock(v2);
      }
    }
    if ( (unsigned int)sub_180B130(v32) > 1 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)a2.m128i_i64) )
      {
        sub_186A4C0(*(double *)a2.m128i_i64);
        v33 = sub_180B150(v32, v25);
        *(_OWORD *)mutex = 0;
        if ( &_pthread_key_create )
        {
          v34 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 200));
          if ( v34 )
            std::__throw_system_error(v34);
        }
        v94 = *(_DWORD *)(v3 + 264);
        *(_QWORD *)v90 = *(_QWORD *)(v3 + 240);
        sub_1817FC0(mutex, v85);
        if ( &_pthread_key_create )
          pthread_mutex_unlock((pthread_mutex_t *)(v3 + 200));
        sub_1817280(
          (int)mutex,
          v33,
          v35,
          v36,
          v37,
          v38,
          v82,
          v83,
          (int)ptr,
          v85,
          (int)v87,
          v88,
          v89,
          (int)mutex,
          v90[0],
          v94,
          (__int64)mutex[0],
          (__int64)mutex[1],
          v97,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104);
        if ( &_pthread_key_create )
        {
          v39 = pthread_mutex_lock(v2);
          if ( v39 )
            std::__throw_system_error(v39);
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v40 = *(_QWORD *)(v3 + 176);
        if ( v40 )
        {
          v89 = v40 + 8LL * *(unsigned int *)(v40 - 4);
          if ( v40 != v89 )
          {
            v41 = *(_QWORD *)(v3 + 176);
            v87 = ":depth ";
            do
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              v88 = (void *)std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<double>();
              std::__ostream_insert<char,std::char_traits<char>>();
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v41 += 8;
            }
            while ( v89 != v41 );
          }
        }
        if ( &_pthread_key_create )
          pthread_mutex_unlock(v2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        a2 = (__m128i)*(unsigned __int64 *)v91;
        std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v42 = (char *)std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( mutex[1] )
        {
          v42 = &mutex[1][-1].__size[32];
          sub_186B220(&mutex[1][-1].__align + 4);
        }
        if ( mutex[0] )
        {
          v42 = &mutex[0][-1].__size[32];
          sub_186B220(&mutex[0][-1].__align + 4);
        }
        sub_186A500(v42, ")\n");
      }
      else
      {
        v66 = sub_180B150(v32, v25);
        *(_OWORD *)mutex = 0;
        if ( &_pthread_key_create )
        {
          v67 = pthread_mutex_lock((pthread_mutex_t *)(v3 + 200));
          if ( v67 )
            std::__throw_system_error(v67);
        }
        v95 = *(_DWORD *)(v3 + 264);
        *(_QWORD *)v92 = *(_QWORD *)(v3 + 240);
        sub_1817FC0(mutex, v85);
        if ( &_pthread_key_create )
          pthread_mutex_unlock((pthread_mutex_t *)(v3 + 200));
        sub_1817280(
          (int)mutex,
          v66,
          v68,
          v69,
          v70,
          v71,
          v82,
          v83,
          (int)ptr,
          v85,
          (int)v87,
          v88,
          v89,
          (int)mutex,
          v92[0],
          v95,
          (__int64)mutex[0],
          (__int64)mutex[1],
          v97,
          v98,
          v99,
          v100,
          v101,
          v102,
          v103,
          v104);
        if ( &_pthread_key_create )
        {
          v72 = pthread_mutex_lock(v2);
          if ( v72 )
            std::__throw_system_error(v72);
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v73 = *(_QWORD *)(v3 + 176);
        if ( v73 )
        {
          v89 = v73 + 8LL * *(unsigned int *)(v73 - 4);
          if ( v73 != v89 )
          {
            v74 = *(_QWORD *)(v3 + 176);
            v87 = ":depth ";
            do
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              v88 = (void *)std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<double>();
              std::__ostream_insert<char,std::char_traits<char>>();
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v74 += 8;
            }
            while ( v89 != v74 );
          }
        }
        if ( &_pthread_key_create )
          pthread_mutex_unlock(v2);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        a2 = (__m128i)*(unsigned __int64 *)v93;
        std::ostream::_M_insert<double>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( mutex[1] )
          sub_186B220(&mutex[1][-1].__align + 4);
        if ( mutex[0] )
          sub_186B220(&mutex[0][-1].__align + 4);
      }
    }
    v43 = *((void (__fastcall ****)(void *))ptr + 7);
    if ( v43 )
    {
      v44 = (*((_DWORD *)v43 + 12))-- == 1;
      if ( v44 )
      {
        (**v43)(v43);
        sub_186B220(v43);
      }
    }
    sub_18572D0(ptr + 48);
    v45 = *((__int64 **)ptr + 5);
    if ( v45 )
    {
      v46 = &v45[*((unsigned int *)v45 - 1)];
      if ( v45 >= v46 )
        goto LABEL_91;
      do
      {
        while ( 1 )
        {
          v47 = *v45;
          if ( *v45 )
          {
            v48 = *((_QWORD *)ptr + 4);
            v44 = (*(_DWORD *)(v47 + 8))-- == 1;
            if ( v44 )
              break;
          }
          if ( ++v45 >= v46 )
            goto LABEL_90;
        }
        sub_15D7BC0(v48, v47);
        ++v45;
      }
      while ( v45 < v46 );
LABEL_90:
      v45 = *((__int64 **)ptr + 5);
      if ( v45 )
LABEL_91:
        sub_186B220(v45 - 1);
    }
    v49 = *((__int64 **)ptr + 3);
    if ( v49 )
    {
      v50 = &v49[*((unsigned int *)v49 - 1)];
      if ( v49 >= v50 )
        goto LABEL_100;
      do
      {
        while ( 1 )
        {
          v51 = *v49;
          if ( *v49 )
          {
            v52 = *((_QWORD *)ptr + 2);
            v44 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v44 )
              break;
          }
          if ( ++v49 >= v50 )
            goto LABEL_99;
        }
        sub_15D7BC0(v52, v51);
        ++v49;
      }
      while ( v49 < v50 );
LABEL_99:
      v49 = *((__int64 **)ptr + 3);
      if ( v49 )
LABEL_100:
        sub_186B220(v49 - 1);
    }
    v53 = *((__int64 **)ptr + 1);
    if ( v53 )
    {
      v54 = *((unsigned int *)v53 - 1);
      if ( (_DWORD)v54 )
      {
        v86 = v3;
        v55 = &v53[4 * v54];
        do
        {
          v56 = (__int64 *)v53[3];
          if ( v56 )
          {
            v57 = &v56[*((unsigned int *)v56 - 1)];
            if ( v56 >= v57 )
              goto LABEL_112;
            do
            {
              while ( 1 )
              {
                v58 = *v56;
                if ( *v56 )
                {
                  v59 = v53[2];
                  v44 = (*(_DWORD *)(v58 + 8))-- == 1;
                  if ( v44 )
                    break;
                }
                if ( ++v56 >= v57 )
                  goto LABEL_111;
              }
              sub_15D7BC0(v59, v58);
              ++v56;
            }
            while ( v56 < v57 );
LABEL_111:
            v56 = (__int64 *)v53[3];
            if ( v56 )
LABEL_112:
              sub_186B220(v56 - 1);
          }
          v60 = (__int64 *)v53[1];
          if ( v60 )
          {
            v61 = &v60[*((unsigned int *)v60 - 1)];
            if ( v60 >= v61 )
              goto LABEL_121;
            do
            {
              while ( 1 )
              {
                v62 = *v60;
                if ( *v60 )
                {
                  v63 = *v53;
                  v44 = (*(_DWORD *)(v62 + 8))-- == 1;
                  if ( v44 )
                    break;
                }
                if ( ++v60 >= v61 )
                  goto LABEL_120;
              }
              sub_15D7BC0(v63, v62);
              ++v60;
            }
            while ( v60 < v61 );
LABEL_120:
            v60 = (__int64 *)v53[1];
            if ( v60 )
LABEL_121:
              sub_186B220(v60 - 1);
          }
          v53 += 4;
        }
        while ( v53 != v55 );
        v3 = v86;
        v53 = *((__int64 **)ptr + 1);
      }
      sub_186B220(v53 - 1);
    }
    v64 = *(void **)ptr;
    if ( *(_QWORD *)ptr )
    {
      sub_15D95C0(*(_QWORD *)ptr);
      sub_186B220(v64);
    }
    sub_186B220(ptr);
  }
}

