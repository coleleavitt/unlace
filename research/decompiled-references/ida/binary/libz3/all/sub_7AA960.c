__int64 __fastcall sub_7AA960(__int64 a1)
{
  char **exception; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rdi
  int v5; // r12d
  __int64 v6; // rax
  _DWORD *v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  unsigned int v11; // ebp
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  sub_7E64F0(a1);
  v3 = *(_QWORD *)(a1 + 432);
  if ( v3 )
  {
    v4 = *(_QWORD **)(a1 + 440);
    v5 = *(_DWORD *)(v3 - 4);
    if ( v4 )
      goto LABEL_3;
LABEL_11:
    v15 = (_QWORD *)sub_186B270(0x10u);
    v4 = v15 + 1;
    *v15 = 2;
    *(_QWORD *)(a1 + 440) = v15 + 1;
    v7 = v15 + 1;
    goto LABEL_5;
  }
  v4 = *(_QWORD **)(a1 + 440);
  v5 = 0;
  if ( !v4 )
    goto LABEL_11;
LABEL_3:
  v6 = *((unsigned int *)v4 - 1);
  if ( (_DWORD)v6 == *((_DWORD *)v4 - 2) )
  {
    v11 = (unsigned int)(3 * v6 + 1) >> 1;
    v12 = 4 * v11 + 8;
    if ( 4 * (int)v6 + 8 >= (unsigned int)v12 || (unsigned int)v6 >= v11 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v17, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v17);
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v13 = (unsigned int *)sub_186B300(v4 - 1, v12);
    v4 = v13 + 2;
    *v13 = v11;
    v14 = v13[1];
    *(_QWORD *)(a1 + 440) = v4;
    v7 = (_DWORD *)v4 + v14;
  }
  else
  {
    v7 = (_DWORD *)v4 + v6;
  }
LABEL_5:
  *v7 = v5;
  v8 = *(_QWORD *)(a1 + 120);
  ++*((_DWORD *)v4 - 1);
  v9 = *(_QWORD *)(a1 + 144) == 0;
  v16 = v8;
  v17[0] = a1 + 112;
  if ( v9 )
    std::__throw_bad_function_call();
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(a1 + 152))(a1 + 128, &v16, v17);
}

