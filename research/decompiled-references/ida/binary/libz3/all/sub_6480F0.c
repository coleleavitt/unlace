void __fastcall sub_6480F0(unsigned int **a1, _QWORD *a2, _QWORD *a3)
{
  char **exception; // rbx
  unsigned int *v4; // rbx
  unsigned int *i; // r13
  _DWORD *v8; // rax
  int v9; // ebp
  _QWORD *v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *a1;
  if ( *a1 )
  {
    for ( i = &v4[*(v4 - 1)]; i != v4; ++v4 )
    {
      v9 = *(_DWORD *)(*a2 + 4LL * *v4);
      if ( v9 != -1 )
      {
        v10 = (_QWORD *)*a3;
        if ( *a3 )
        {
          v11 = *((unsigned int *)v10 - 1);
          if ( (_DWORD)v11 == *((_DWORD *)v10 - 2) )
          {
            v12 = (unsigned int)(3 * v11 + 1) >> 1;
            v13 = 4 * v12 + 8;
            if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v17, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v17);
              sub_233E40((__int64)v17);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v14 = (unsigned int *)sub_186B300(v10 - 1, v13);
            v10 = v14 + 2;
            *v14 = v12;
            v15 = v14[1];
            *a3 = v10;
            v8 = (_DWORD *)v10 + v15;
          }
          else
          {
            v8 = (_DWORD *)v10 + v11;
          }
        }
        else
        {
          v16 = (_QWORD *)sub_186B270(0x10u);
          v10 = v16 + 1;
          *v16 = 2;
          *a3 = v16 + 1;
          v8 = v16 + 1;
        }
        *v8 = v9;
        ++*((_DWORD *)v10 - 1);
      }
    }
  }
}

