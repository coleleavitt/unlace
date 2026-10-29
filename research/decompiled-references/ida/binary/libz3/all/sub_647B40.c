__int64 __fastcall sub_647B40(__int64 *a1, unsigned int **a2)
{
  char **exception; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r12
  int v7; // r13d
  unsigned int *v8; // rdx
  unsigned int *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  __int64 v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = *a1;
  if ( !*a1 )
    return 0;
  v5 = *(unsigned int *)(v4 - 4);
  if ( !(_DWORD)v5 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = v6;
    if ( *(_DWORD *)(v4 + 4 * v6) != (_DWORD)v6 )
      break;
    if ( v5 == ++v6 )
      return 0;
  }
  v8 = *a2;
  if ( *a2 )
    goto LABEL_9;
  v16 = (_QWORD *)sub_186B270(0x10u);
  v8 = (unsigned int *)(v16 + 1);
  *v16 = 2;
  v17 = v6;
  *a2 = v8;
  v18 = v8;
  v4 = *a1;
  while ( 1 )
  {
    *v18 = v17;
    v9 = (unsigned int *)(v4 + 4LL * v17);
    ++*(v8 - 1);
    LODWORD(v6) = *v9;
    *v9 = v17;
    result = 1;
    if ( (_DWORD)v6 == v7 )
      break;
LABEL_9:
    v11 = *(v8 - 1);
    if ( (_DWORD)v11 == *(v8 - 2) )
    {
      v12 = (unsigned int)(3 * v11 + 1) >> 1;
      v13 = 4 * v12 + 8;
      if ( 4 * (int)v11 + 8 >= (unsigned int)v13 || (unsigned int)v11 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v19, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v19);
        sub_233E40((__int64)v19);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v8 - 2, v13);
      v8 = v14 + 2;
      *v14 = v12;
      v15 = v14[1];
      *a2 = v8;
      v4 = *a1;
      v18 = &v8[v15];
      v17 = v6;
    }
    else
    {
      v18 = &v8[v11];
      v17 = v6;
    }
  }
  return result;
}

