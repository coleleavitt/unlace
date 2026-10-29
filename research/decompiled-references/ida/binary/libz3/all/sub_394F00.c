void __fastcall sub_394F00(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 *v5; // rbx
  _QWORD *v6; // rdi
  __int64 *v7; // r13
  __int64 v8; // rdx
  int v9; // eax
  unsigned int *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  char **exception; // rbx
  __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = a4;
  v6 = *(_QWORD **)(a1 + 48);
  if ( v6 )
  {
    *((_DWORD *)v6 - 1) = 0;
    if ( a3 )
    {
      v7 = &a4[a3];
      do
      {
        v12 = *((_DWORD *)v6 - 1);
        if ( v12 == *((_DWORD *)v6 - 2) )
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
          v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
          v16 = v15[1];
          v6 = v15 + 2;
          *v15 = v13;
          *(_QWORD *)(a1 + 48) = v15 + 2;
          v10 = &v15[2 * v16 + 2];
          v9 = v16 + 1;
        }
        else
        {
          v8 = v12;
          v9 = v12 + 1;
          v10 = (unsigned int *)&v6[v8];
        }
LABEL_5:
        v11 = *v5++;
        *(_QWORD *)v10 = v11;
        *((_DWORD *)v6 - 1) = v9;
      }
      while ( v7 != v5 );
    }
  }
  else if ( a3 )
  {
    v7 = &a4[a3];
    v17 = (_QWORD *)sub_186B270(0x18u);
    v6 = v17 + 1;
    *v17 = 2;
    v9 = 1;
    *(_QWORD *)(a1 + 48) = v6;
    v10 = (unsigned int *)v6;
    goto LABEL_5;
  }
  ++*(_DWORD *)(a1 + 32);
}

