void __fastcall sub_9C58C0(__int64 a1, int a2, unsigned int *a3)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rcx
  unsigned int *v5; // rbx
  unsigned int *v6; // r13
  _QWORD *v7; // rax
  unsigned int *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  char **exception; // rbx
  __int64 v15[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_QWORD **)(a1 + 8);
  if ( a2 )
  {
    v4 = (_QWORD *)*v3;
    v5 = a3;
    v6 = &a3[a2];
    if ( *v3 )
      goto LABEL_5;
    v7 = (_QWORD *)sub_186B270(0x10u);
    v4 = v7 + 1;
    *v7 = 2;
    *v3 = v7 + 1;
    v8 = (unsigned int *)(v7 + 1);
    while ( 1 )
    {
      v9 = *v5++;
      *v8 = v9;
      ++*((_DWORD *)v4 - 1);
      if ( v6 == v5 )
        break;
LABEL_5:
      v10 = *((unsigned int *)v4 - 1);
      v8 = (unsigned int *)v4 + v10;
      if ( (_DWORD)v10 == *((_DWORD *)v4 - 2) )
      {
        v11 = (unsigned int)(3 * v10 + 1) >> 1;
        v12 = 4 * v11 + 8;
        if ( 4 * (int)v10 + 8 >= (unsigned int)v12 || (unsigned int)v10 >= v11 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_98B3B0(v15, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v15);
          sub_233E40((__int64)v15);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v13 = (unsigned int *)sub_186B300(v4 - 1, v12);
        v4 = v13 + 2;
        *v3 = v13 + 2;
        *v13 = v11;
        v8 = &v13[v13[1] + 2];
      }
    }
  }
}

