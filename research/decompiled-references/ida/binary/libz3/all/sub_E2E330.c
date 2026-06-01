void __fastcall __noreturn sub_E2E330(_QWORD *a1, const char *a2)
{
  char *v3; // r15
  size_t v4; // rax
  char *v5; // rdi
  size_t v6; // rbp
  size_t v7; // r14
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  _BYTE *v10; // r12
  char *v11; // rdi
  _QWORD *exception; // rax

  v3 = (char *)(a1 + 41);
  v4 = strlen(a2);
  v5 = (char *)a1[39];
  v6 = v4;
  if ( v5 == v3 )
  {
    if ( v4 > 0xF )
    {
      if ( v4 > 0x1D )
      {
        v8 = v4;
        v10 = (_BYTE *)operator new(v4 + 1);
      }
      else
      {
        v8 = 30;
        v10 = (_BYTE *)operator new(0x1Fu);
      }
      goto LABEL_6;
    }
  }
  else
  {
    v7 = a1[41];
    if ( v7 < v4 )
    {
      v8 = 2 * v7;
      if ( v4 < v8 )
      {
        v9 = v8 + 1;
        if ( v8 < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v9 = v4 + 1;
        v8 = v4;
      }
      v10 = (_BYTE *)operator new(v9);
      if ( v6 == 1 )
      {
        *v10 = *a2;
        goto LABEL_7;
      }
LABEL_6:
      memcpy(v10, a2, v6);
LABEL_7:
      v11 = (char *)a1[39];
      if ( v3 != v11 )
        operator delete(v11, a1[41] + 1LL);
      a1[39] = v10;
      v5 = v10;
      a1[41] = v8;
      goto LABEL_10;
    }
  }
  if ( a2 < v5 || &v5[a1[40]] < a2 )
  {
    if ( v4 )
    {
      if ( v4 == 1 )
        *v5 = *a2;
      else
        memcpy(v5, a2, v4);
      v5 = (char *)a1[39];
    }
  }
  else
  {
    std::string::_M_replace_cold();
    v5 = (char *)a1[39];
  }
LABEL_10:
  a1[40] = v6;
  v5[v6] = 0;
  exception = __cxa_allocate_exception(8u);
  *exception = &off_1C76478;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'check_logic::imp::failed, (void (*)(void *))sub_E2DA50);
}

