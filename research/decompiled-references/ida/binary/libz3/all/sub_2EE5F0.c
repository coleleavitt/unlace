void __fastcall sub_2EE5F0(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v3; // rcx
  unsigned int v6; // ebx
  _QWORD *v7; // rdx
  _QWORD *v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  _QWORD *v12; // rdi
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18[9]; // [rsp-48h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 768);
  if ( v3 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v3 - 4) )
        break;
      v7 = (_QWORD *)*a2;
      v8 = (_QWORD *)(v3 + 8LL * v6);
      if ( *a2 )
      {
        v9 = *((_DWORD *)v7 - 1);
        if ( v9 == *((_DWORD *)v7 - 2) )
        {
          v13 = (3 * v9 + 1) >> 1;
          v14 = 8 * v13 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_2EB560(v18, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v18);
            sub_233E40((__int64)v18);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v7 - 1, v14);
          v16 = v15[1];
          v7 = v15 + 2;
          *v15 = v13;
          *a2 = v15 + 2;
          LODWORD(v15) = v16;
          v12 = &v7[v16];
          v3 = *(_QWORD *)(a1 + 768);
          v11 = (_DWORD)v15 + 1;
        }
        else
        {
          v10 = v9;
          v11 = v9 + 1;
          v12 = &v7[v10];
        }
      }
      else
      {
        v17 = (_QWORD *)sub_186B270(0x18u);
        v7 = v17 + 1;
        *v17 = 2;
        v11 = 1;
        *a2 = v7;
        v12 = v7;
        v3 = *(_QWORD *)(a1 + 768);
      }
      ++v6;
      *v12 = *v8;
      *((_DWORD *)v7 - 1) = v11;
    }
    while ( v3 );
  }
}

