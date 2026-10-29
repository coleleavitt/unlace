__int64 __fastcall sub_9836E0(__int64 a1, int a2)
{
  char **exception; // rbx
  __int64 v5; // rax
  char *v6; // rdx
  unsigned int v7; // ecx
  __int64 v8; // rcx
  char *v9; // rsi
  __int64 v10; // rcx
  char *v11; // rdi
  char *i; // rax
  int v13; // ecx
  int v15; // eax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rax
  unsigned int v19; // r12d
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  unsigned int v22; // ecx
  unsigned int *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *(unsigned int *)(a1 + 256);
  v6 = *(char **)(a1 + 248);
  v7 = v5 - 1;
  v5 *= 24;
  v8 = 3LL * (a2 & v7);
  v9 = &v6[v5];
  v10 = 8 * v8;
  v11 = &v6[v10];
  if ( v10 != v5 )
  {
    for ( i = &v6[v10]; v9 != i; i += 24 )
    {
      v13 = *((_DWORD *)i + 1);
      if ( v13 == 2 )
      {
        if ( *(_DWORD *)i == a2 && *((_DWORD *)i + 2) == a2 )
          return *((_QWORD *)i + 2);
      }
      else if ( !v13 )
      {
        goto LABEL_17;
      }
    }
  }
  for ( ; v11 != v6; v6 += 24 )
  {
    v15 = *((_DWORD *)v6 + 1);
    if ( v15 == 2 )
    {
      if ( a2 == *(_DWORD *)v6 && a2 == *((_DWORD *)v6 + 2) )
      {
        i = v6;
        return *((_QWORD *)i + 2);
      }
    }
    else if ( !v15 )
    {
      break;
    }
  }
LABEL_17:
  v16 = *(_QWORD **)(a1 + 192);
  if ( v16 )
  {
    v17 = *((unsigned int *)v16 - 1);
    if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
    {
      v19 = 3 * v17 + 1;
      v20 = v19 & 0xFFFFFFFE;
      v21 = v19 >> 1;
      v22 = 8 * (v21 + v20) + 8;
      if ( 24 * (int)v17 + 8 >= v22 || (unsigned int)v17 >= v21 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v26, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v26);
        sub_233E40((__int64)v26);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v23 = (unsigned int *)sub_186B300(v16 - 1, v22);
      v16 = v23 + 2;
      *v23 = v21;
      v24 = v23[1];
      *(_QWORD *)(a1 + 192) = v16;
      v18 = &v16[3 * v24];
    }
    else
    {
      v18 = &v16[3 * v17];
    }
  }
  else
  {
    v25 = (_QWORD *)sub_186B270(0x38u);
    *v25 = 2;
    v16 = v25 + 1;
    *(_QWORD *)(a1 + 192) = v25 + 1;
    v18 = v25 + 1;
  }
  *v18 = 2;
  v18[2] = a2;
  ++*((_DWORD *)v16 - 1);
  return 0;
}

