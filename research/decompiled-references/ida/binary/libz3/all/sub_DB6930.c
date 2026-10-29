void __fastcall sub_DB6930(__int64 a1, unsigned int ***a2, _QWORD *a3)
{
  char **exception; // rbx
  unsigned int **v4; // rbx
  unsigned int **i; // r12
  unsigned int *v7; // rbp
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int **v12; // rcx
  unsigned int v13; // r15d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *a2;
  if ( *a2 )
  {
    for ( i = &v4[*((unsigned int *)v4 - 1)]; i != v4; *((_DWORD *)v8 - 1) = v11 )
    {
      while ( 1 )
      {
        v7 = *v4;
        if ( !(unsigned __int8)sub_DB6200(a1 + 256, *v4) )
          break;
        if ( i == ++v4 )
          return;
      }
      v8 = (_QWORD *)*a3;
      if ( *a3 )
      {
        v9 = *((_DWORD *)v8 - 1);
        if ( v9 == *((_DWORD *)v8 - 2) )
        {
          v13 = (3 * v9 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v18, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v18);
            sub_233E40((__int64)v18);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v8 - 1, v14);
          v16 = v15[1];
          v8 = v15 + 2;
          *v15 = v13;
          *a3 = v15 + 2;
          LODWORD(v15) = v16;
          v12 = (unsigned int **)&v8[v16];
          v11 = (_DWORD)v15 + 1;
        }
        else
        {
          v10 = v9;
          v11 = v9 + 1;
          v12 = (unsigned int **)&v8[v10];
        }
      }
      else
      {
        v17 = (_QWORD *)sub_186B270(0x18u);
        v8 = v17 + 1;
        *v17 = 2;
        v11 = 1;
        *a3 = v8;
        v12 = (unsigned int **)v8;
      }
      ++v4;
      *v12 = v7;
    }
  }
}

