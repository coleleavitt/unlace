__int64 __fastcall sub_3711B0(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rdi
  int v6; // r13d
  __int64 v7; // rax
  _DWORD *v8; // rax
  unsigned int v10; // r12d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  char **exception; // rbx
  __int64 v16; // rdx
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  sub_180C250(a1 + 128);
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    v5 = *(_QWORD **)(a1 + 120);
    v6 = *(_DWORD *)(v4 - 4);
    if ( v5 )
      goto LABEL_3;
LABEL_10:
    v14 = (_QWORD *)sub_186B270(0x10u);
    v5 = v14 + 1;
    *v14 = 2;
    *(_QWORD *)(a1 + 120) = v14 + 1;
    v8 = v14 + 1;
    goto LABEL_5;
  }
  v5 = *(_QWORD **)(a1 + 120);
  v6 = 0;
  if ( !v5 )
    goto LABEL_10;
LABEL_3:
  v7 = *((unsigned int *)v5 - 1);
  if ( (_DWORD)v7 == *((_DWORD *)v5 - 2) )
  {
    v10 = (unsigned int)(3 * v7 + 1) >> 1;
    v11 = 4 * v10 + 8;
    if ( 4 * (int)v7 + 8 >= (unsigned int)v11 || (unsigned int)v7 >= v10 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_C281C(v17, "Overflow encountered when expanding vector", v16);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v17);
      sub_233E40((__int64)v17);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v12 = (unsigned int *)sub_186B300(v5 - 1, v11);
    v5 = v12 + 2;
    *v12 = v10;
    v13 = v12[1];
    *(_QWORD *)(a1 + 120) = v5;
    v8 = (_DWORD *)v5 + v13;
  }
  else
  {
    v8 = (_DWORD *)v5 + v7;
  }
LABEL_5:
  *v8 = v6;
  ++*((_DWORD *)v5 - 1);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 200LL))(*(_QWORD *)(a1 + 24), a2);
}

