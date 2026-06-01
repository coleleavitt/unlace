__int64 __fastcall sub_7B5880(_QWORD *a1, unsigned int a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  char **exception; // rbx
  __int64 v7; // rdx
  _QWORD *v10; // rdx
  int *v11; // r13
  __int64 v12; // rdi
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22[9]; // [rsp+0h] [rbp-48h] BYREF

  v10 = (_QWORD *)a1[2];
  if ( v10 )
  {
    *((_DWORD *)v10 - 1) = 0;
    v11 = &a3[a2];
    if ( a2 )
    {
      do
      {
        v20 = *((unsigned int *)v10 - 1);
        v18 = (_DWORD *)v10 + v20;
        if ( (_DWORD)v20 == *((_DWORD *)v10 - 2) )
        {
          v14 = (unsigned int)(3 * v20 + 1) >> 1;
          v15 = 4 * v14 + 8;
          if ( 4 * (int)v20 + 8 >= (unsigned int)v15 || (unsigned int)v20 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_113C8C(v22, "Overflow encountered when expanding vector", v7);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v22);
            sub_233E40((__int64)v22);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (unsigned int *)sub_186B300(v10 - 1, v15);
          v10 = v16 + 2;
          *v16 = v14;
          v17 = v16[1];
          a1[2] = v10;
          v18 = (_DWORD *)v10 + v17;
        }
LABEL_7:
        v19 = *a3++;
        *v18 = v19;
        ++*((_DWORD *)v10 - 1);
      }
      while ( v11 != a3 );
    }
  }
  else if ( a2 )
  {
    v11 = &a3[a2];
    v21 = (_QWORD *)sub_186B270(0x10u);
    v10 = v21 + 1;
    *v21 = 2;
    a1[2] = v21 + 1;
    v18 = v21 + 1;
    goto LABEL_7;
  }
  v12 = *(_QWORD *)(*a1 + 24LL);
  v22[1] = 0;
  v22[0] = 0xFFFFFFFF00000001LL;
  return sub_11C4C20(v12, a2, v10, v22, a5, a6);
}

