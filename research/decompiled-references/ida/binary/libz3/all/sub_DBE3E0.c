__int64 __fastcall sub_DBE3E0(_QWORD *a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rbp
  _QWORD *v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  unsigned int v15; // r15d
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char **exception; // rbx
  __int64 v21[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( a3 )
  {
    v5 = a4;
    v6 = &a4[a3];
    v7 = 1;
    do
    {
      while ( 1 )
      {
        v8 = *v5;
        if ( !(unsigned __int8)sub_15D37A0(a2, *v5) )
          break;
        if ( ++v5 == v6 )
          return v7;
      }
      v9 = (_QWORD *)*a1;
      if ( *a1 )
      {
        v10 = *((_DWORD *)v9 - 1);
        if ( v10 == *((_DWORD *)v9 - 2) )
        {
          v15 = (3 * v10 + 1) >> 1;
          v16 = 8 * v15 + 8;
          if ( 8 * v10 + 8 >= (unsigned int)v16 || v10 >= v15 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v21, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v21);
            sub_233E40((__int64)v21);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v9 - 1, v16);
          v18 = v17[1];
          v9 = v17 + 2;
          *v17 = v15;
          *a1 = v17 + 2;
          LODWORD(v17) = v18;
          v13 = &v9[v18];
          v12 = (_DWORD)v17 + 1;
        }
        else
        {
          v11 = v10;
          v12 = v10 + 1;
          v13 = &v9[v11];
        }
      }
      else
      {
        v19 = (_QWORD *)sub_186B270(0x18u);
        v9 = v19 + 1;
        *v19 = 2;
        v12 = 1;
        *a1 = v9;
        v13 = v9;
      }
      ++v5;
      *v13 = v8;
      v7 = 0;
      *((_DWORD *)v9 - 1) = v12;
    }
    while ( v5 != v6 );
  }
  else
  {
    return 1;
  }
  return v7;
}

