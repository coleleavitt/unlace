__int64 __fastcall sub_2B3870(unsigned int a1, __int64 *a2, __int64 a3)
{
  char **exception; // rbx
  __int64 *v4; // r13
  __int64 *v6; // rbp
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  _QWORD *v18; // rax
  __int64 v19[9]; // [rsp+2h] [rbp-48h] BYREF

  if ( a1 )
  {
    v4 = &a2[a1];
    v6 = a2;
    while ( 1 )
    {
      v10 = *v6;
      if ( *(_WORD *)(*v6 + 4) )
        return 0;
      v11 = *(_QWORD **)(a3 + 8);
      ++*(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      v12 = *((_DWORD *)v11 - 1);
      if ( v12 == *((_DWORD *)v11 - 2) )
      {
        v13 = (3 * v12 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v12 + 8 >= (unsigned int)v14 || v12 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v19, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v19);
          sub_233E40((__int64)v19);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++v6;
        v15 = (unsigned int *)sub_186B300(v11 - 1, v14);
        v16 = v15[1];
        *v15 = v13;
        *(_QWORD *)(a3 + 8) = v15 + 2;
        *(_QWORD *)&v15[2 * v16 + 2] = v10;
        v15[1] = v16 + 1;
        if ( v4 == v6 )
          return 1;
      }
      else
      {
        v7 = v12;
        v8 = v12 + 1;
        v9 = &v11[v7];
LABEL_4:
        ++v6;
        *v9 = v10;
        *((_DWORD *)v11 - 1) = v8;
        if ( v4 == v6 )
          return 1;
      }
    }
    v18 = (_QWORD *)sub_186B270(0x18u);
    v11 = v18 + 1;
    *v18 = 2;
    v8 = 1;
    *(_QWORD *)(a3 + 8) = v11;
    v9 = v11;
    goto LABEL_4;
  }
  return 1;
}

