void __fastcall __noreturn sub_787480(_BYTE *a1, size_t a2)
{
  __int64 v2; // r14
  size_t v4; // rbx
  _BYTE *v5; // rax
  size_t v6; // r14
  __int64 v7; // rdx
  char **exception; // rbx
  unsigned __int64 v9; // rdi
  _BYTE *v10; // r12
  _QWORD *v11; // r15
  size_t v12; // r15
  unsigned __int64 v13; // rdi
  char *v14; // rax
  _QWORD *v15; // r8
  char *v16; // rbp
  _QWORD *v17; // [rsp+8h] [rbp-80h]
  char *v18[4]; // [rsp+10h] [rbp-78h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  _QWORD v21[9]; // [rsp+40h] [rbp-48h] BYREF

  v2 = a2 + 9;
  LOBYTE(v21[0]) = 0;
  src = v21;
  n = 0;
  if ( a2 + 9 > 0xF )
  {
    if ( v2 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( (unsigned __int64)v2 <= 0x1D )
    {
      v2 = 30;
      v9 = 31;
    }
    else
    {
      v9 = a2 + 10;
      if ( (__int64)(a2 + 10) < 0 )
        std::__throw_bad_alloc();
    }
    v10 = (_BYTE *)operator new(v9);
    v11 = src;
    *v10 = *(_BYTE *)src;
    if ( v11 != v21 )
      operator delete(v11, v21[0] + 1LL);
    src = v10;
    v21[0] = v2;
    if ( 0x7FFFFFFFFFFFFFFFLL - n <= 8 )
      std::__throw_length_error("basic_string::append");
  }
  sub_2B33E0((__int64)&src, "operator ", 9u);
  if ( 0x7FFFFFFFFFFFFFFFLL - n < a2 )
    std::__throw_length_error("basic_string::append");
  sub_2B33E0((__int64)&src, a1, a2);
  v4 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 0x3A )
    std::__throw_length_error("basic_string::append");
  v5 = src;
  v6 = n + 59;
  if ( src == v21 )
  {
    v7 = 15;
  }
  else
  {
    v7 = v21[0];
    if ( v21[0] >= v6 )
    {
      qmemcpy((char *)src + n, " not supported, apply simplifier before invoking translator", 0x3Bu);
      goto LABEL_7;
    }
  }
  if ( (v6 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_create");
  v12 = 2 * v7;
  if ( v6 < 2 * v7 )
  {
    v13 = v12 + 1;
    if ( (v7 & 0x4000000000000000LL) == 0 )
      goto LABEL_19;
  }
  else
  {
    v12 = n + 59;
    v13 = n + 60;
    if ( (__int64)(n + 60) >= 0 )
    {
LABEL_19:
      v14 = (char *)operator new(v13);
      v15 = src;
      v16 = v14;
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          *v14 = *(_BYTE *)src;
        }
        else
        {
          v17 = src;
          memcpy(v14, src, v4);
          v15 = v17;
        }
      }
      qmemcpy(&v16[v4], " not supported, apply simplifier before invoking translator", 0x3Bu);
      if ( v15 != v21 )
        operator delete(v15, v21[0] + 1LL);
      src = v16;
      v5 = v16;
      v21[0] = v12;
LABEL_7:
      n = v4 + 59;
      v5[v4 + 59] = 0;
      sub_2333C0(v18, &src);
      sub_233E40((__int64)&src);
      exception = (char **)__cxa_allocate_exception(0x28u);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, v18);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
  }
  std::__throw_bad_alloc();
}

