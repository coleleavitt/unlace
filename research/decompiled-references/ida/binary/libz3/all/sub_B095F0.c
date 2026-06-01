_QWORD *__fastcall sub_B095F0(__int64 a1, __int64 *a2)
{
  char **exception; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // r14
  int v5; // eax
  _QWORD *v6; // rdx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // r12
  unsigned int v12; // eax
  unsigned int v13; // r15d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v18; // rax
  __int64 v19[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = *a2;
  v4 = (_QWORD *)sub_186B270(0x18u);
  *v4 = &off_1C56D78;
  v5 = *(_DWORD *)(v3 + 24);
  v4[1] = v3;
  v4[2] = 0;
  if ( v5 )
  {
    v6 = nullptr;
    v7 = 0;
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL)
                                  + 8LL * **(unsigned int **)(v3 + 8LL * v7 + 32))
                      + 8LL);
      if ( v6 )
      {
        v12 = *((_DWORD *)v6 - 1);
        if ( v12 == *((_DWORD *)v6 - 2) )
        {
          v13 = (3 * v12 + 1) >> 1;
          v14 = 16 * v13 + 8;
          if ( 16 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(v19, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v19);
            sub_233E40((__int64)v19);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
          v16 = v15[1];
          v6 = v15 + 2;
          *v15 = v13;
          v4[2] = v15 + 2;
          LODWORD(v15) = v16;
          v10 = &v6[2 * v16];
          v9 = (_DWORD)v15 + 1;
        }
        else
        {
          v8 = v12;
          v9 = v12 + 1;
          v10 = &v6[2 * v8];
        }
      }
      else
      {
        v18 = (_QWORD *)sub_186B270(0x28u);
        v6 = v18 + 1;
        *v18 = 2;
        v9 = 1;
        v4[2] = v6;
        v10 = v6;
      }
      *(_BYTE *)v10 = 0;
      ++v7;
      v10[1] = v11;
      *((_DWORD *)v6 - 1) = v9;
    }
    while ( v7 < *(_DWORD *)(v3 + 24) );
  }
  return v4;
}

