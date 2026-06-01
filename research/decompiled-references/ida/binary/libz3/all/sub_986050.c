__int64 __fastcall sub_986050(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  char v5; // al
  _QWORD *v7; // rdi
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // eax
  _QWORD *v12; // rdx
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)(a1 + 176) = a3;
  if ( (v5 & 1) == 0 )
  {
    v7 = *(_QWORD **)(a1 + 88);
    *(_BYTE *)(a2 + 8) = v5 | 1;
    if ( v7 )
    {
      v9 = *((_DWORD *)v7 - 1);
      if ( v9 == *((_DWORD *)v7 - 2) )
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
        v15 = (unsigned int *)sub_186B300(v7 - 1, v14);
        v16 = v15[1];
        v7 = v15 + 2;
        *v15 = v13;
        *(_QWORD *)(a1 + 88) = v15 + 2;
        LODWORD(v15) = v16;
        v12 = &v7[v16];
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
      *(_QWORD *)(a1 + 88) = v7;
      v12 = v7;
    }
    *v12 = a2;
    *((_DWORD *)v7 - 1) = v11;
  }
  sub_984990(a1);
  return sub_9827B0(a1, 0);
}

