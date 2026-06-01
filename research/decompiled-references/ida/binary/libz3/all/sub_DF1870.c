void __fastcall sub_DF1870(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  unsigned int v5; // ebx
  _QWORD *v6; // rdx
  _QWORD *v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  _QWORD *v11; // rdi
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18; // rdx
  __int64 v19[9]; // [rsp-48h] [rbp-48h] BYREF

  v2 = *a2;
  if ( *a2 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= *(_DWORD *)(v2 - 4) )
        break;
      v6 = *(_QWORD **)(a1 + 160);
      v7 = (_QWORD *)(v2 + 8LL * v5);
      if ( v6 )
      {
        v8 = *((_DWORD *)v6 - 1);
        if ( v8 == *((_DWORD *)v6 - 2) )
        {
          v12 = (3 * v8 + 1) >> 1;
          v13 = 8 * v12 + 8;
          if ( 8 * v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_17BA1E(v19, "Overflow encountered when expanding vector", v18);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = (unsigned int *)sub_186B300(v6 - 1, v13);
          v15 = v14[1];
          v6 = v14 + 2;
          *v14 = v12;
          *(_QWORD *)(a1 + 160) = v14 + 2;
          LODWORD(v14) = v15;
          v11 = &v6[v15];
          v2 = *a2;
          v10 = (_DWORD)v14 + 1;
        }
        else
        {
          v9 = v8;
          v10 = v8 + 1;
          v11 = &v6[v9];
        }
      }
      else
      {
        v16 = (_QWORD *)sub_186B270(0x18u);
        v6 = v16 + 1;
        *v16 = 2;
        v10 = 1;
        *(_QWORD *)(a1 + 160) = v6;
        v11 = v6;
        v2 = *a2;
      }
      ++v5;
      *v11 = *v7;
      *((_DWORD *)v6 - 1) = v10;
    }
    while ( v2 );
  }
}

