void __fastcall sub_2F1180(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rcx
  unsigned int v5; // ebp
  __int64 v6; // rbx
  _QWORD *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  _QWORD *v11; // rsi
  unsigned int v12; // r13d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17[9]; // [rsp-48h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 728);
  if ( v3 )
  {
    v5 = 0;
    do
    {
      if ( v5 >= *(_DWORD *)(v3 - 4) )
        break;
      v6 = *(_QWORD *)(v3 + 8LL * v5);
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      v7 = *(_QWORD **)(a2 + 8);
      if ( v7 )
      {
        v8 = *((_DWORD *)v7 - 1);
        if ( v8 == *((_DWORD *)v7 - 2) )
        {
          v12 = (3 * v8 + 1) >> 1;
          v13 = 8 * v12 + 8;
          if ( 8 * v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_2EB560(v17, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v17);
            sub_233E40((__int64)v17);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v14 = (unsigned int *)sub_186B300(v7 - 1, v13);
          v15 = v14[1];
          v7 = v14 + 2;
          *v14 = v12;
          *(_QWORD *)(a2 + 8) = v14 + 2;
          LODWORD(v14) = v15;
          v11 = &v7[v15];
          v3 = *(_QWORD *)(a1 + 728);
          v10 = (_DWORD)v14 + 1;
        }
        else
        {
          v9 = v8;
          v10 = v8 + 1;
          v11 = &v7[v9];
        }
      }
      else
      {
        v16 = (_QWORD *)sub_186B270(0x18u);
        v7 = v16 + 1;
        *v16 = 2;
        v10 = 1;
        *(_QWORD *)(a2 + 8) = v7;
        v11 = v7;
        v3 = *(_QWORD *)(a1 + 728);
      }
      *v11 = v6;
      ++v5;
      *((_DWORD *)v7 - 1) = v10;
    }
    while ( v3 );
  }
}

