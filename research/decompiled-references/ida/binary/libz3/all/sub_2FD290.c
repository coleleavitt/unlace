void __fastcall sub_2FD290(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v4; // ebp
  __int64 v5; // rbx
  _QWORD *v6; // rdx
  unsigned int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  _QWORD *v10; // rsi
  unsigned int v11; // r13d
  size_t v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rax
  char **exception; // rbx
  __int64 v17[9]; // [rsp-48h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v4 = 0;
    do
    {
      if ( v4 >= *(_DWORD *)(v2 - 4) )
        break;
      v5 = *(_QWORD *)(v2 + 8LL * v4);
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      v6 = *(_QWORD **)(a1 + 8);
      if ( v6 )
      {
        v7 = *((_DWORD *)v6 - 1);
        if ( v7 == *((_DWORD *)v6 - 2) )
        {
          v11 = (3 * v7 + 1) >> 1;
          v12 = 8 * v11 + 8;
          if ( 8 * v7 + 8 >= (unsigned int)v12 || v7 >= v11 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_2EB560(v17, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v17);
            sub_233E40((__int64)v17);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v13 = (unsigned int *)sub_186B300(v6 - 1, v12);
          v14 = v13[1];
          v6 = v13 + 2;
          *v13 = v11;
          *(_QWORD *)(a1 + 8) = v13 + 2;
          LODWORD(v13) = v14;
          v10 = &v6[v14];
          v2 = *(_QWORD *)(a2 + 8);
          v9 = (_DWORD)v13 + 1;
        }
        else
        {
          v8 = v7;
          v9 = v7 + 1;
          v10 = &v6[v8];
        }
      }
      else
      {
        v15 = (_QWORD *)sub_186B270(0x18u);
        v6 = v15 + 1;
        *v15 = 2;
        v9 = 1;
        *(_QWORD *)(a1 + 8) = v6;
        v10 = v6;
        v2 = *(_QWORD *)(a2 + 8);
      }
      *v10 = v5;
      ++v4;
      *((_DWORD *)v6 - 1) = v9;
    }
    while ( v2 );
  }
}

