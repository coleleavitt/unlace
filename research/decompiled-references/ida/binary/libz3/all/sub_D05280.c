__int64 __fastcall sub_D05280(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  __int64 v5; // rdi
  unsigned int v6; // eax
  unsigned int v9; // r13d
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rax
  char **exception; // r13
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 8) += 2;
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 - 4);
    if ( v6 == *(_DWORD *)(v5 - 8) )
    {
      v9 = (3 * v6 + 1) >> 1;
      v10 = 8 * v9 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v10 || v6 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D03640(v15, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v15);
        sub_233E40((__int64)v15);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B300((void *)(v5 - 8), v10);
      v12 = v11[1];
      *v11 = v9;
      *(_QWORD *)(a1 + 56) = v11 + 2;
      *(_QWORD *)&v11[2 * v12 + 2] = a2;
      v11[1] = v12 + 1;
    }
    else
    {
      *(_QWORD *)(v5 + 8LL * v6) = a2;
      *(_DWORD *)(v5 - 4) = v6 + 1;
    }
  }
  else
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    v13[1] = a2;
    *(_QWORD *)(a1 + 56) = v13 + 1;
    *v13 = 0x100000002LL;
  }
  if ( (*(_DWORD *)(a2 + 8))-- == 1 )
    sub_15D7BC0(v4, a2);
  return 1;
}

