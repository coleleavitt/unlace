__int64 __fastcall sub_7AA6B0(__int64 a1, unsigned int *a2, unsigned int a3, int a4)
{
  char **exception; // rbx
  _DWORD *v7; // rax
  __int64 v8; // rax
  bool v9; // zf
  __int64 (__fastcall *v10)(); // rax
  __int64 v11; // rax
  _QWORD *v12; // rdx
  int v13; // r15d
  __int64 v14; // rax
  unsigned int v15; // r8d
  size_t v16; // rsi
  unsigned int v17; // r14d
  unsigned int *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rax
  int v22; // eax
  _QWORD *v24; // rax
  __int64 v25; // rdi
  __int64 v28; // [rsp+18h] [rbp-60h] BYREF
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !a2 )
  {
    *(_DWORD *)(a1 + 484) = 0x7FFFFFFF;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 104) )
  {
    do
    {
      while ( 1 )
      {
        v10 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 512LL);
        if ( v10 == sub_7AA960 )
          break;
        ((void (__fastcall *)(__int64))v10)(a1);
        v9 = (*(_DWORD *)(a1 + 104))-- == 1;
        if ( v9 )
          goto LABEL_15;
      }
      sub_7E64F0(a1);
      v11 = *(_QWORD *)(a1 + 432);
      if ( v11 )
      {
        v12 = *(_QWORD **)(a1 + 440);
        v13 = *(_DWORD *)(v11 - 4);
        if ( v12 )
          goto LABEL_10;
      }
      else
      {
        v12 = *(_QWORD **)(a1 + 440);
        v13 = 0;
        if ( v12 )
        {
LABEL_10:
          v14 = *((unsigned int *)v12 - 1);
          if ( (_DWORD)v14 == *((_DWORD *)v12 - 2) )
          {
            v15 = (unsigned int)(3 * v14 + 1) >> 1;
            v16 = 4 * v15 + 8;
            v17 = v15;
            if ( 4 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v29, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v29);
              sub_233E40((__int64)v29);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v18 = (unsigned int *)sub_186B300(v12 - 1, v16);
            v12 = v18 + 2;
            *v18 = v17;
            v19 = v18[1];
            *(_QWORD *)(a1 + 440) = v12;
            v7 = (_DWORD *)v12 + v19;
          }
          else
          {
            v7 = (_DWORD *)v12 + v14;
          }
          goto LABEL_5;
        }
      }
      v24 = (_QWORD *)sub_186B270(0x10u);
      v12 = v24 + 1;
      *v24 = 2;
      *(_QWORD *)(a1 + 440) = v24 + 1;
      v7 = v24 + 1;
LABEL_5:
      *v7 = v13;
      v8 = *(_QWORD *)(a1 + 120);
      ++*((_DWORD *)v12 - 1);
      v9 = *(_QWORD *)(a1 + 144) == 0;
      v28 = v8;
      v29[0] = a1 + 112;
      if ( v9 )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(a1 + 152))(a1 + 128, &v28, v29);
      v9 = (*(_DWORD *)(a1 + 104))-- == 1;
    }
    while ( !v9 );
  }
LABEL_15:
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 80) + 480LL))(*(_QWORD *)(a1 + 80), a2);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v20 )
  {
    v21 = *a2;
    if ( (unsigned int)v21 >= *(_DWORD *)(v20 - 4) )
    {
      v22 = 0;
      goto LABEL_19;
    }
    v20 = *(_QWORD *)(v20 + 8 * v21);
  }
  v22 = *(_DWORD *)(v20 + 28);
  if ( v22 == 0x7FFFFFFF )
  {
    sub_16744A0(v29, *(_QWORD *)(a1 + 72));
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 2400LL);
    if ( v25 )
    {
      if ( LODWORD(v29[0]) >= *(_DWORD *)(v25 - 4) )
        v25 = 0;
      else
        v25 = *(_QWORD *)(v25 + 8LL * LODWORD(v29[0]));
    }
    v22 = sub_810FE0(v25, a3, v20);
    *(_DWORD *)(a1 + 488) = a4;
    if ( v22 == 0x7FFFFFFF )
      return 0;
    goto LABEL_20;
  }
LABEL_19:
  *(_DWORD *)(a1 + 488) = a4;
LABEL_20:
  if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * (unsigned int)(2 * v22)) )
  {
    *(_DWORD *)(a1 + 484) = v22;
    *(_DWORD *)(a1 + 488) = a4;
    return 1;
  }
  return 0;
}

