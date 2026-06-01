void __fastcall sub_647A70(unsigned int a1, int a2, _QWORD *a3)
{
  char **exception; // rbx
  int v4; // r13d
  unsigned int v5; // ebp
  _DWORD *v6; // rdi
  __int64 v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r12d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rax
  __int64 v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a1 + a2;
  if ( a1 < a1 + a2 )
  {
    v5 = a1;
    v6 = (_DWORD *)*a3;
    if ( *a3
      || (v8 = sub_186B270(0x10u),
          v6 = (_DWORD *)(v8 + 8),
          *(_QWORD *)v8 = 2,
          *a3 = v8 + 8,
          *(_DWORD *)(v8 + 8) = v5,
          ++v5,
          ++*(_DWORD *)(v8 + 4),
          v5 != v4) )
    {
      do
      {
        v10 = (unsigned int)*(v6 - 1);
        if ( (_DWORD)v10 == *(v6 - 2) )
        {
          v11 = (unsigned int)(3 * v10 + 1) >> 1;
          v12 = 4 * v11 + 8;
          if ( 4 * (int)v10 + 8 >= (unsigned int)v12 || (unsigned int)v10 >= v11 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v15, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v15);
            sub_233E40((__int64)v15);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v13 = (unsigned int *)sub_186B300(v6 - 2, v12);
          v6 = v13 + 2;
          *v13 = v11;
          v14 = v13[1];
          *a3 = v6;
          v9 = &v6[v14];
        }
        else
        {
          v9 = &v6[v10];
        }
        *v9 = v5++;
        ++*(v6 - 1);
      }
      while ( v5 != v4 );
    }
  }
}

