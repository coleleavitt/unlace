void __fastcall sub_DC2790(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rdx
  unsigned int v10; // r12d
  size_t v11; // rsi
  unsigned int *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  char **exception; // rbx
  __int64 v16[7]; // [rsp-38h] [rbp-38h] BYREF

  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 16))-- == 1 )
    {
      v5 = *(_QWORD **)(a1 + 80);
      if ( v5 )
      {
        v6 = *((_DWORD *)v5 - 1);
        if ( v6 == *((_DWORD *)v5 - 2) )
        {
          v10 = (3 * v6 + 1) >> 1;
          v11 = 8 * v10 + 8;
          if ( 8 * v6 + 8 >= (unsigned int)v11 || v6 >= v10 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_DBF430(v16, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v16);
            sub_233E40((__int64)v16);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v12 = (unsigned int *)sub_186B300(v5 - 1, v11);
          v13 = v12[1];
          v5 = v12 + 2;
          *v12 = v10;
          *(_QWORD *)(a1 + 80) = v12 + 2;
          LODWORD(v12) = v13;
          v9 = &v5[v13];
          v8 = (_DWORD)v12 + 1;
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
        v14 = (_QWORD *)sub_186B270(0x18u);
        v5 = v14 + 1;
        *v14 = 2;
        v8 = 1;
        *(_QWORD *)(a1 + 80) = v5;
        v9 = v5;
      }
      *v9 = a2;
      *((_DWORD *)v5 - 1) = v8;
      sub_DE3700(a1);
    }
    else
    {
      sub_DE3700(a1);
    }
  }
}

