_QWORD *__fastcall sub_BA8690(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbx
  _QWORD *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 *v11; // rdx
  _QWORD *result; // rax
  unsigned int v13; // r12d
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = sub_B39350(a2, *(_DWORD *)(a1 + 8));
  v4 = sub_163B0D0(a1 + 88, *(unsigned int *)(*(_QWORD *)(a1 + 208) + 4LL * v3));
  v5 = *(_QWORD *)(a1 + 520);
  v6 = v4;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v7 = *(_QWORD **)(v5 + 184);
  if ( v7 )
  {
    v8 = *((_DWORD *)v7 - 1);
    if ( v8 == *((_DWORD *)v7 - 2) )
    {
      v13 = (3 * v8 + 1) >> 1;
      v14 = 8 * v13 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v14 || v8 >= v13 )
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
      *(_QWORD *)(v5 + 184) = v15 + 2;
      *v15 = v13;
      LODWORD(v15) = v16;
      v11 = &v7[v16];
      v10 = (_DWORD)v15 + 1;
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
    v17 = (_QWORD *)sub_186B270(0x18u);
    v7 = v17 + 1;
    *v17 = 2;
    v10 = 1;
    *(_QWORD *)(v5 + 184) = v7;
    v11 = v7;
  }
  *v11 = v6;
  *((_DWORD *)v7 - 1) = v10;
  result = (_QWORD *)sub_186B270(0x10u);
  *result = off_1C559A8;
  result[1] = v6;
  return result;
}

