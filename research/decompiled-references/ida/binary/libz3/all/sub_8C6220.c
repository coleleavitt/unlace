__int64 __fastcall sub_8C6220(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rdi
  unsigned int v5; // r12d
  __int64 **v6; // rdx
  int v7; // eax
  unsigned int v9; // r13d
  size_t v10; // rsi
  unsigned int *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rax
  char **exception; // rbx
  __int64 v15; // rdx
  __int64 v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 - 1);
    if ( v5 == *((_DWORD *)v4 - 2) )
    {
      v9 = (3 * v5 + 1) >> 1;
      v10 = 8 * v9 + 8;
      if ( 8 * v5 + 8 >= (unsigned int)v10 || v5 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v16, "Overflow encountered when expanding vector", v15);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v16);
        sub_233E40((__int64)v16);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = (unsigned int *)sub_186B300(v4 - 1, v10);
      v12 = v11[1];
      v4 = v11 + 2;
      *v11 = v9;
      *(_QWORD *)(a1 + 32) = v11 + 2;
      LODWORD(v11) = v12;
      v6 = (__int64 **)&v4[v12];
      v7 = (_DWORD)v11 + 1;
    }
    else
    {
      v6 = (__int64 **)&v4[v5];
      v7 = v5 + 1;
    }
  }
  else
  {
    v5 = 0;
    v13 = (_QWORD *)sub_186B270(0x18u);
    v4 = v13 + 1;
    *v13 = 2;
    v7 = 1;
    *(_QWORD *)(a1 + 32) = v4;
    v6 = (__int64 **)v4;
  }
  *v6 = a2;
  *((_DWORD *)v4 - 1) = v7;
  sub_8C57C0(a1 + 208, v5);
  sub_B66EF0(*(_QWORD *)(a1 + 16), a2, a1, v5);
  sub_89B910(a1, *a2);
  return v5;
}

