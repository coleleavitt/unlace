void __fastcall __noreturn sub_C71A6(char *s)
{
  _QWORD *exception; // r13
  __int64 v2; // rdx
  size_t v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  _BYTE *v8; // rbp
  _BYTE *v9; // rax
  _QWORD *v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  _BYTE *v13; // rbp
  _BYTE *v14; // [rsp+8h] [rbp-80h]
  void *v15; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-70h]
  _QWORD v17[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v18[88]; // [rsp+30h] [rbp-58h] BYREF

  exception = __cxa_allocate_exception(0x28u);
  sub_C7126((__int64 *)&v15, "unsupported parameter ", v2);
  v3 = strlen(s);
  v4 = v16;
  v5 = v3;
  if ( 0x7FFFFFFFFFFFFFFFLL - v16 < v3 )
    std::__throw_length_error("basic_string::append");
  v6 = v3 + v16;
  v7 = 15;
  if ( v15 != v17 )
    v7 = v17[0];
  if ( v7 < v6 )
  {
    if ( v6 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v11 = 2 * v7;
    v12 = v5 + v16;
    if ( v6 < v11 )
    {
      v12 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
        v12 = v11;
    }
    if ( v12 + 1 < 0 )
      std::__throw_bad_alloc();
    v9 = (_BYTE *)operator new(v12 + 1);
    v10 = v15;
    if ( !v4 )
      goto LABEL_26;
    if ( v4 == 1 )
      *v9 = *(_BYTE *)v15;
    else
      qmemcpy(v9, v15, v4);
    if ( v5 )
    {
LABEL_26:
      v13 = &v9[v4];
      if ( v5 == 1 )
        *v13 = *s;
      else
        qmemcpy(v13, s, v5);
    }
    if ( v10 != v17 )
    {
      v14 = v9;
      operator delete(v10, v17[0] + 1LL);
      v9 = v14;
    }
    v15 = v9;
    v17[0] = v12;
  }
  else if ( v5 )
  {
    v8 = (char *)v15 + v16;
    if ( v5 == 1 )
      *v8 = *s;
    else
      qmemcpy(v8, s, v5);
  }
  v16 = v6;
  *((_BYTE *)v15 + v6) = 0;
  sub_2333C0(v18, &v15);
  *exception = off_1C63128;
  sub_2333C0(exception + 1, v18);
  sub_233E40(v18);
  sub_233E40(&v15);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, sub_230E50);
}

