__int64 __fastcall sub_86D480(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 result; // rax
  _QWORD *v14; // rdx
  unsigned int v15; // ebp
  size_t v16; // rsi
  unsigned int *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a3 + 40);
  v6 = *(_QWORD *)(a3 + 32);
  if ( v5 )
    *(_QWORD *)(v5 + 32) = v6;
  else
    *(_QWORD *)(a2 + 8) = v6;
  if ( v6 )
    *(_QWORD *)(v6 + 40) = v5;
  v7 = *(_QWORD *)(a1 + 80);
  v8 = (_QWORD *)sub_180C100(v7 + 2144, 24);
  v9 = *(_QWORD **)(v7 + 2128);
  v10 = v8;
  *v8 = off_1C556B0;
  v8[1] = a2;
  v8[2] = a3;
  if ( v9 )
  {
    v11 = *((_DWORD *)v9 - 1);
    if ( v11 == *((_DWORD *)v9 - 2) )
    {
      v15 = (3 * v11 + 1) >> 1;
      v16 = 8 * v15 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v16 || v11 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v20, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v20);
        sub_233E40((__int64)v20);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v17 = (unsigned int *)sub_186B300(v9 - 1, v16);
      v18 = v17[1];
      v9 = v17 + 2;
      *(_QWORD *)(v7 + 2128) = v17 + 2;
      *v17 = v15;
      LODWORD(v17) = v18;
      v14 = &v9[v18];
      result = (unsigned int)((_DWORD)v17 + 1);
    }
    else
    {
      v12 = v11;
      result = v11 + 1;
      v14 = &v9[v12];
    }
  }
  else
  {
    v19 = (_QWORD *)sub_186B270(0x18u);
    v9 = v19 + 1;
    *v19 = 2;
    result = 1;
    *(_QWORD *)(v7 + 2128) = v9;
    v14 = v9;
  }
  *v14 = v10;
  *((_DWORD *)v9 - 1) = result;
  return result;
}

