__int64 __fastcall sub_435610(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // r14d
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 result; // rax
  _QWORD *v12; // rcx
  unsigned int v13; // ebx
  size_t v14; // rsi
  unsigned int *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  __int64 *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdi
  _QWORD *v22; // rax
  __int64 v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD **)(a1 + 216);
  if ( v6 )
  {
    v7 = *((unsigned int *)v6 - 1);
    v8 = *(_DWORD *)(a1 + 224);
    if ( v8 >= (unsigned int)v7 )
    {
LABEL_3:
      if ( a2 )
        ++*(_DWORD *)(a2 + 8);
      v9 = *((_DWORD *)v6 - 1);
      if ( v9 == *((_DWORD *)v6 - 2) )
      {
        v13 = (3 * v9 + 1) >> 1;
        v14 = 8 * v13 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v14 || v9 >= v13 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_D0F44(v23, "Overflow encountered when expanding vector", v3);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v23);
          sub_233E40((__int64)v23);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v6 - 1, v14);
        v16 = v15[1];
        v6 = v15 + 2;
        *v15 = v13;
        *(_QWORD *)(a1 + 216) = v15 + 2;
        LODWORD(v15) = v16;
        v12 = &v6[v16];
        result = (unsigned int)((_DWORD)v15 + 1);
      }
      else
      {
        v10 = v9;
        result = v9 + 1;
        v12 = &v6[v10];
      }
      goto LABEL_7;
    }
    v17 = (unsigned __int64)&v6[v7];
    v18 = &v6[v8];
    if ( (unsigned __int64)v18 >= v17 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v19 = *v18;
        if ( *v18 )
        {
          v20 = *(_QWORD *)(a1 + 208);
          if ( (*(_DWORD *)(v19 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v18 >= v17 )
          goto LABEL_17;
      }
      sub_15D7BC0(v20, v19);
      ++v18;
    }
    while ( (unsigned __int64)v18 < v17 );
LABEL_17:
    v6 = *(_QWORD **)(a1 + 216);
    if ( v6 )
    {
LABEL_18:
      *((_DWORD *)v6 - 1) = v8;
      goto LABEL_3;
    }
  }
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v22 = (_QWORD *)sub_186B270(0x18u);
  v6 = v22 + 1;
  *v22 = 2;
  result = 1;
  *(_QWORD *)(a1 + 216) = v6;
  v12 = v6;
LABEL_7:
  *v12 = a2;
  *((_DWORD *)v6 - 1) = result;
  *(_DWORD *)(a1 + 224) = result;
  return result;
}

