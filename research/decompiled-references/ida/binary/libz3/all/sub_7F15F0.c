void __fastcall sub_7F15F0(__int64 a1, unsigned int a2)
{
  char **exception; // rbx
  unsigned int v3; // r12d
  __int64 v5; // rax
  _QWORD *v6; // rdx
  int v7; // r13d
  _QWORD *v8; // rax
  _DWORD *i; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r14d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20[9]; // [rsp+2h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = a2;
    if ( !*(_DWORD *)(a1 + 32) )
      goto LABEL_18;
    v5 = *(_QWORD *)(a1 + 16);
    v6 = *(_QWORD **)(a1 + 24);
    if ( v5 )
      v7 = *(_DWORD *)(v5 - 4);
    else
      v7 = 0;
    if ( v6 )
      goto LABEL_10;
    v8 = (_QWORD *)sub_186B270(0x10u);
    v6 = v8 + 1;
    *v8 = 2;
    *(_QWORD *)(a1 + 24) = v8 + 1;
    for ( i = v8 + 1; ; i = (_DWORD *)v6 + v16 )
    {
      *i = v7;
      ++*((_DWORD *)v6 - 1);
      v10 = (*(_DWORD *)(a1 + 32))-- == 1;
      if ( v10 )
        break;
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1 + 16);
        v7 = v11 ? *(_DWORD *)(v11 - 4) : 0;
LABEL_10:
        v12 = *((unsigned int *)v6 - 1);
        if ( (_DWORD)v12 == *((_DWORD *)v6 - 2) )
          break;
        *((_DWORD *)v6 + v12) = v7;
        ++*((_DWORD *)v6 - 1);
        v10 = (*(_DWORD *)(a1 + 32))-- == 1;
        if ( v10 )
          goto LABEL_12;
      }
      v13 = (unsigned int)(3 * v12 + 1) >> 1;
      v14 = 4 * v13 + 8;
      if ( 4 * (int)v12 + 8 >= (unsigned int)v14 || (unsigned int)v12 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v20, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
      v6 = v15 + 2;
      *v15 = v13;
      v16 = v15[1];
      *(_QWORD *)(a1 + 24) = v6;
    }
LABEL_12:
    if ( *(_BYTE *)(a1 + 8) )
    {
LABEL_18:
      v17 = *(_QWORD *)(a1 + 40);
      v18 = a2 >> 1;
      if ( !v17 || (unsigned int)v18 >= *(_DWORD *)(v17 - 4) || !*(_BYTE *)(v17 + v18) )
      {
        sub_7F1380((_QWORD *)a1, a2);
        v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 3288LL) + 4LL * a2);
        if ( v19 == -1 )
        {
          v3 = a2 ^ 1;
          goto LABEL_23;
        }
        if ( v19 == 1 )
LABEL_23:
          sub_7F0DF0(a1, v3);
      }
    }
  }
}

