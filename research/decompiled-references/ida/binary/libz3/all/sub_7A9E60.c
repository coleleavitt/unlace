__int64 __fastcall sub_7A9E60(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 result; // rax
  _DWORD *v5; // rax
  __int64 v6; // rax
  bool v7; // zf
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  int v11; // r15d
  __int64 v12; // rax
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // [rsp+0h] [rbp-80h] BYREF
  __int64 v22; // [rsp+8h] [rbp-78h] BYREF
  __int64 v23; // [rsp+10h] [rbp-70h] BYREF
  __int64 v24; // [rsp+18h] [rbp-68h] BYREF
  __int64 v25; // [rsp+20h] [rbp-60h] BYREF
  __int64 v26[11]; // [rsp+28h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 304);
  if ( !result )
    return result;
  if ( !*(_DWORD *)(a1 + 104) )
    goto LABEL_16;
  do
  {
    while ( 1 )
    {
      v8 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 512LL);
      if ( v8 == sub_7AA960 )
        break;
      ((void (__fastcall *)(__int64))v8)(a1);
      v7 = (*(_DWORD *)(a1 + 104))-- == 1;
      if ( v7 )
        goto LABEL_15;
    }
    sub_7E64F0(a1);
    v9 = *(_QWORD *)(a1 + 432);
    if ( v9 )
    {
      v10 = *(_QWORD **)(a1 + 440);
      v11 = *(_DWORD *)(v9 - 4);
      if ( !v10 )
        goto LABEL_19;
    }
    else
    {
      v10 = *(_QWORD **)(a1 + 440);
      v11 = 0;
      if ( !v10 )
      {
LABEL_19:
        v20 = (_QWORD *)sub_186B270(0x10u);
        v10 = v20 + 1;
        *v20 = 2;
        *(_QWORD *)(a1 + 440) = v20 + 1;
        v5 = v20 + 1;
        goto LABEL_5;
      }
    }
    v12 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
    {
      v13 = (unsigned int)(3 * v12 + 1) >> 1;
      v14 = 4 * v13 + 8;
      if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v10 - 1, v14);
      v10 = v15 + 2;
      *v15 = v13;
      v16 = v15[1];
      *(_QWORD *)(a1 + 440) = v10;
      v5 = (_DWORD *)v10 + v16;
    }
    else
    {
      v5 = (_DWORD *)v10 + v12;
    }
LABEL_5:
    *v5 = v11;
    v6 = *(_QWORD *)(a1 + 120);
    ++*((_DWORD *)v10 - 1);
    v7 = *(_QWORD *)(a1 + 144) == 0;
    v25 = v6;
    v26[0] = a1 + 112;
    if ( v7 )
      goto LABEL_21;
    (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(a1 + 152))(a1 + 128, &v25, v26);
    v7 = (*(_DWORD *)(a1 + 104))-- == 1;
  }
  while ( !v7 );
LABEL_15:
  result = *(_QWORD *)(a1 + 304);
LABEL_16:
  v17 = *(_QWORD *)(a1 + 88);
  v18 = **(_QWORD **)(v17 + 8LL * *(unsigned int *)(a2 + 8));
  v19 = **(_QWORD **)(v17 + 8LL * *(unsigned int *)(a2 + 4));
  v21 = *(_QWORD *)(a1 + 120);
  v22 = a1 + 112;
  v23 = v19;
  v24 = v18;
  if ( !result )
LABEL_21:
    std::__throw_bad_function_call();
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 312))(
           a1 + 288,
           &v21,
           &v22,
           &v23,
           &v24);
}

