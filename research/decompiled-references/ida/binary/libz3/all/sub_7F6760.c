__int64 __fastcall sub_7F6760(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rdx
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *(_QWORD **)(a1 + 8);
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 == *((_DWORD *)v5 - 2) )
    {
      v11 = (3 * v6 + 1) >> 1;
      v12 = 8 * v11 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v12 || v6 >= v11 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v16, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v13 = (unsigned int *)sub_186B300(v5 - 1, v12);
      v14 = v13[1];
      v5 = v13 + 2;
      *v13 = v11;
      *(_QWORD *)(a1 + 8) = v13 + 2;
      LODWORD(v13) = v14;
      v9 = &v5[v14];
      v8 = (_DWORD)v13 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v5[v7];
    }
  }
  else
  {
    v15 = (_QWORD *)sub_186B270(0x18u);
    v5 = v15 + 1;
    *v15 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 8) = v5;
    v9 = v5;
  }
  *v9 = a2;
  *((_DWORD *)v5 - 1) = v8;
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 32LL))(a2, a1);
}

