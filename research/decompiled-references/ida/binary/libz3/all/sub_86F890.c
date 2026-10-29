unsigned int *__fastcall sub_86F890(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char **exception; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r15
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  unsigned int *result; // rax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+Ch] [rbp-6Ch]
  __int64 v26[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = a3 >> 1;
  if ( a3 >> 1 == (unsigned int)sub_86EFE0(a1) >> 1 )
    return sub_86F240(a1, a2, a4);
  v8 = *(_QWORD *)(a1 + 624);
  if ( !v8 || v7 >= *(_DWORD *)(v8 - 4) || (v9 = *(_QWORD *)(v8 + 8LL * v7)) == 0 )
    v9 = sub_86D5A0(a1, v7);
  if ( *(_QWORD *)(v9 + 16) )
    sub_80EF10(a1, v9, a2, a4);
  v10 = *(_QWORD *)(a1 + 80);
  v11 = (_QWORD *)sub_180C100(v10 + 2144, 16);
  v12 = *(_QWORD **)(v10 + 2128);
  v13 = v11;
  *v11 = off_1C55660;
  v11[1] = v9;
  if ( v12 )
  {
    v14 = *((_DWORD *)v12 - 1);
    if ( v14 == *((_DWORD *)v12 - 2) )
    {
      v21 = (3 * v14 + 1) >> 1;
      v22 = 8 * v21 + 8;
      if ( 8 * v14 + 8 >= (unsigned int)v22 || v14 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (3 * v14 + 1) >> 1;
      v23 = (unsigned int *)sub_186B300(v12 - 1, v22);
      v12 = v23 + 2;
      *(_QWORD *)(v10 + 2128) = v23 + 2;
      *v23 = v25;
      LODWORD(v23) = v23[1];
      v17 = &v12[(unsigned int)v23];
      v16 = (_DWORD)v23 + 1;
    }
    else
    {
      v15 = v14;
      v16 = v14 + 1;
      v17 = &v12[v15];
    }
  }
  else
  {
    v24 = (_QWORD *)sub_186B270(0x18u);
    v12 = v24 + 1;
    *v24 = 2;
    v16 = 1;
    *(_QWORD *)(v10 + 2128) = v12;
    v17 = v12;
  }
  *v17 = v13;
  *((_DWORD *)v12 - 1) = v16;
  v18 = sub_7E4EC0(a1);
  result = (unsigned int *)sub_180C100(v18, 16);
  v20 = *(_QWORD *)(v9 + 16);
  *result = a2;
  result[1] = a4;
  *((_QWORD *)result + 1) = v20;
  *(_QWORD *)(v9 + 16) = result;
  return result;
}

