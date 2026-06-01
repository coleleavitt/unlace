__int64 __fastcall sub_426330(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 result; // rax
  bool v11; // zf
  unsigned int v12; // r12d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *(_QWORD **)(a1 + 16);
  if ( v5 )
  {
    v6 = *((_DWORD *)v5 - 1);
    if ( v6 == *((_DWORD *)v5 - 2) )
    {
      v12 = (3 * v6 + 1) >> 1;
      v13 = 8 * v12 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v13 || v6 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v17, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v17);
        sub_233E40((__int64)v17);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v5 - 1, v13);
      v15 = v14[1];
      v5 = v14 + 2;
      *v14 = v12;
      *(_QWORD *)(a1 + 16) = v14 + 2;
      LODWORD(v14) = v15;
      v9 = &v5[v15];
      v8 = (_DWORD)v14 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v5[v7];
    }
  }
  else
  {
    v16 = (_QWORD *)sub_186B270(0x18u);
    v5 = v16 + 1;
    *v16 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 16) = v5;
    v9 = v5;
  }
  *v9 = a2;
  *((_DWORD *)v5 - 1) = v8;
  result = (unsigned int)(*(_DWORD *)(a1 + 44) + 1);
  v11 = *(_BYTE *)(a1 + 48) == 0;
  *(_DWORD *)(a2 + 44) = result;
  if ( !v11 )
  {
    result = *(_QWORD *)(a1 + 8);
    for ( *(_BYTE *)(a1 + 48) = 0; result; result = *(_QWORD *)(result + 8) )
    {
      if ( !*(_BYTE *)(result + 48) )
        break;
      *(_BYTE *)(result + 48) = 0;
    }
  }
  return result;
}

