void __fastcall sub_DB60E0(__int64 a1, __int64 a2, int a3)
{
  char **exception; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rax
  int v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rbp
  unsigned __int32 v11; // r12d
  char v12; // al
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18[7]; // [rsp+10h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 20) = a3;
  v5 = *(_QWORD **)(a1 + 56);
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 == *((_DWORD *)v5 - 2) )
    {
      v13 = (unsigned int)(3 * v6 + 1) >> 1;
      v14 = 16 * v13 + 8;
      if ( 16 * (int)v6 + 8 >= (unsigned int)v14 || (unsigned int)v6 >= v13 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v18, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v18);
        sub_233E40((__int64)v18);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v15 = (unsigned int *)sub_186B300(v5 - 1, v14);
      v5 = v15 + 2;
      *v15 = v13;
      v16 = v15[1];
      *(_QWORD *)(a1 + 56) = v5;
      v7 = &v5[2 * v16];
    }
    else
    {
      v7 = &v5[2 * v6];
    }
  }
  else
  {
    v17 = (_QWORD *)sub_186B270(0x28u);
    v5 = v17 + 1;
    *v17 = 2;
    *(_QWORD *)(a1 + 56) = v17 + 1;
    v7 = v17 + 1;
  }
  *v7 = a2;
  *((_DWORD *)v7 + 2) = 0;
  ++*((_DWORD *)v5 - 1);
  while ( v5 )
  {
    v8 = *((_DWORD *)v5 - 1);
    if ( !v8 )
      break;
    v9 = &v5[2 * (unsigned int)(v8 - 1)];
    v10 = *v9;
    v11 = *((_DWORD *)v9 + 2);
    v12 = sub_DB5C80(a1, *v9, v11);
    v5 = *(_QWORD **)(a1 + 56);
    if ( v12 )
    {
      --*((_DWORD *)v5 - 1);
      sub_DB2F80(a1, v10, v11);
      v5 = *(_QWORD **)(a1 + 56);
    }
  }
  sub_DB0C60(a1);
}

