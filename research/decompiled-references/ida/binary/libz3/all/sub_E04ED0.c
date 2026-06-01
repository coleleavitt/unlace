_QWORD *__fastcall sub_E04ED0(__int64 a1, char *a2)
{
  _QWORD *exception; // rbx
  char **v3; // rbp
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdi
  size_t v9; // rax
  _QWORD *v10; // rax
  _QWORD *result; // rax
  size_t v12; // rax
  size_t v13; // r8
  _QWORD *v14; // rdi
  size_t v15; // r12
  unsigned __int64 v16; // rax
  char *v17; // rdi
  size_t v18; // rbp
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  void *v21; // r13
  unsigned __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r12
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  void *v27; // rdi
  _QWORD *v28; // [rsp+10h] [rbp-58h] BYREF
  size_t v29; // [rsp+18h] [rbp-50h]
  _QWORD v30[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid stream name");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  sub_DFA4F0(a1);
  if ( !strcmp(a2, "stdout") )
  {
    sub_DF6470((size_t *)(a1 + 40), 0, *(_QWORD *)(a1 + 48), "stdout", 6u);
    *(_QWORD *)(a1 + 72) = &std::cout;
    return &std::cout;
  }
  else if ( !strcmp(a2, "stderr") )
  {
    v20 = *(_QWORD *)(a1 + 40);
    v21 = (void *)(a1 + 56);
    if ( v20 == a1 + 56 || (v22 = *(_QWORD *)(a1 + 56), v22 > 5) )
    {
      if ( (unsigned __int64)"stderr" < v20 || v20 + *(_QWORD *)(a1 + 48) < (unsigned __int64)"stderr" )
      {
        *(_DWORD *)v20 = 1701082227;
        *(_WORD *)(v20 + 4) = 29298;
        v23 = *(_QWORD *)(a1 + 40);
      }
      else
      {
        std::string::_M_replace_cold();
        v23 = *(_QWORD *)(a1 + 40);
      }
    }
    else
    {
      v24 = 2 * v22;
      v25 = 2 * v22 + 1;
      if ( 2 * v22 <= 6 )
      {
        v24 = 6;
        v25 = 7;
      }
      v26 = operator new(v25);
      v27 = *(void **)(a1 + 40);
      *(_DWORD *)v26 = 1701082227;
      v23 = v26;
      *(_WORD *)(v26 + 4) = 29298;
      if ( v21 != v27 )
        operator delete(v27, *(_QWORD *)(a1 + 56) + 1LL);
      *(_QWORD *)(a1 + 40) = v23;
      *(_QWORD *)(a1 + 56) = v24;
    }
    result = &std::cerr;
    *(_QWORD *)(a1 + 48) = 6;
    *(_BYTE *)(v23 + 6) = 0;
    *(_QWORD *)(a1 + 72) = &std::cerr;
  }
  else
  {
    v5 = sub_186B270(0x200u);
    std::ios_base::ios_base((std::ios_base *)(v5 + 248));
    *(_OWORD *)(v5 + 480) = 0;
    *(_OWORD *)(v5 + 496) = 0;
    *(_QWORD *)(v5 + 248) = (char *)&`vtable for'std::ios + 16;
    *(_WORD *)(v5 + 472) = 0;
    *(_QWORD *)(v5 + 464) = 0;
    v6 = `VTT for'std::ofstream[1];
    v7 = `VTT for'std::ofstream[2];
    v8 = *(_QWORD *)(v6 - 24);
    *(_QWORD *)v5 = v6;
    *(_QWORD *)(v5 + v8) = v7;
    std::ios::init();
    *(_QWORD *)v5 = (char *)&`vtable for'std::ofstream + 24;
    *(_QWORD *)(v5 + 248) = (char *)&`vtable for'std::ofstream + 64;
    std::filebuf::basic_filebuf();
    std::ios::init();
    std::filebuf::open();
    std::ios::clear();
    *(_QWORD *)(a1 + 72) = v5;
    v9 = strlen(a2);
    sub_DF6470((size_t *)(a1 + 40), 0, *(_QWORD *)(a1 + 48), a2, v9);
    v10 = *(_QWORD **)(a1 + 72);
    *(_BYTE *)(a1 + 80) = 1;
    result = (_QWORD *)*(unsigned int *)((char *)v10 + *(_QWORD *)(*v10 - 24LL) + 32);
    if ( ((unsigned __int8)result & 1) != 0 || ((unsigned __int8)result & 5) != 0 )
    {
      sub_DFA4F0(a1);
      sub_DF63A0((__int64 *)&v28, "failed to set output stream '");
      v12 = strlen(a2);
      v13 = v12;
      if ( 0x7FFFFFFFFFFFFFFFLL - v29 >= v12 )
      {
        v14 = v28;
        v15 = v12 + v29;
        if ( v28 == v30 )
          v16 = 15;
        else
          v16 = v30[0];
        if ( v16 < v15 )
        {
          sub_23A830(&v28, v29, 0, a2, v13);
          v14 = v28;
        }
        else if ( v13 )
        {
          v17 = (char *)v28 + v29;
          if ( v13 == 1 )
            *v17 = *a2;
          else
            memcpy(v17, a2, v13);
          v14 = v28;
        }
        v29 = v15;
        *((_BYTE *)v14 + v15) = 0;
        v18 = v29;
        if ( v29 != 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v28 == v30 )
            v19 = 15;
          else
            v19 = v30[0];
          if ( v19 >= v29 + 1 )
            *((_BYTE *)v28 + v29) = 39;
          else
            sub_23A830(&v28, v29, 0, "'", 1u);
          v29 = v18 + 1;
          *((_BYTE *)v28 + v18 + 1) = 0;
          v3 = (char **)__cxa_allocate_exception(0x30u);
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v28);
          v3[5] = (char *)-1LL;
          *v3 = (char *)off_1C64218;
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
        }
        std::__throw_length_error("basic_string::append");
      }
      std::__throw_length_error("basic_string::append");
    }
  }
  return result;
}

