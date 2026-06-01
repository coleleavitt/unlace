__int64 __fastcall sub_6B4A50(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v5; // rax
  _BYTE *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  _BYTE *v11; // rdx
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  char **exception; // rbx
  __int64 v18; // [rsp+8h] [rbp-40h] BYREF
  __int64 v19[7]; // [rsp+10h] [rbp-38h] BYREF

  v18 = a2;
  if ( a3 )
  {
    v5 = sub_6A98D0(*(_QWORD **)(a1 + 56), *(_DWORD *)(a1 + 64), a2);
    if ( v5 )
      return v5[1];
  }
  else
  {
    v5 = sub_6A98D0(*(_QWORD **)(a1 + 80), *(_DWORD *)(a1 + 88), a2);
    if ( v5 )
      return v5[1];
  }
  sub_6ACBA0((_QWORD *)(a1 + 136), &v18);
  v7 = *(_BYTE **)(a1 + 144);
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v12 = (3 * v8 + 1) >> 1;
      v13 = v12 + 8;
      if ( v8 + 8 >= (unsigned int)v13 || v8 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_6A99E0(v19, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v7 - 8, v13);
      v15 = v14[1];
      v7 = v14 + 2;
      *v14 = v12;
      *(_QWORD *)(a1 + 144) = v14 + 2;
      LODWORD(v14) = v15;
      v11 = &v7[v15];
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
    v16 = (_QWORD *)sub_186B270(0xAu);
    v7 = v16 + 1;
    *v16 = 2;
    v10 = 1;
    *(_QWORD *)(a1 + 144) = v7;
    v11 = v7;
  }
  *v11 = a3;
  *((_DWORD *)v7 - 1) = v10;
  return 0;
}

