_QWORD *__fastcall sub_4C5DA0(__int64 a1, int a2, __int64 *a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  _QWORD *v6; // rbp
  __int64 *v7; // r12
  _QWORD *v8; // rax
  unsigned int v9; // ecx
  _QWORD *v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r13d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = (_QWORD *)sub_186B270(0x10u);
  *v6 = &off_1C4ED90;
  v6[1] = 0;
  if ( a2 )
  {
    v7 = &a3[a2];
    v8 = (_QWORD *)sub_186B270(0x18u);
    v9 = 1;
    *v8 = 2;
    v10 = v8 + 1;
    v6[1] = v10;
    v11 = v10;
    while ( 1 )
    {
      v12 = *a3++;
      *v10 = v12;
      *(v11 - 1) = v9;
      if ( v7 == a3 )
        break;
      if ( *(v11 - 2) == v9 )
      {
        v14 = (3 * v9 + 1) >> 1;
        v15 = 8 * v14 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v15 || v9 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_DFB18(v20, "Overflow encountered when expanding vector", v4);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v20);
          sub_233E40((__int64)v20);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v11 - 2, v15);
        v11 = v16 + 2;
        *v16 = v14;
        v17 = v16[1];
        v6[1] = v11;
        v18 = v17;
        v10 = &v11[2 * v17];
        v9 = v18 + 1;
      }
      else
      {
        v13 = v9++;
        v10 = &v11[2 * v13];
      }
    }
  }
  return v6;
}

