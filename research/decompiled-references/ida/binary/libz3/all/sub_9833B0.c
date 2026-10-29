__int64 __fastcall sub_9833B0(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  int v3; // r8d
  __int64 v6; // rax
  __int64 *v7; // rcx
  int v8; // edx
  __int64 v9; // rdx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 *i; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v19; // rax
  unsigned int v20; // r12d
  unsigned int v21; // ecx
  unsigned int v22; // r12d
  unsigned int v23; // ecx
  unsigned int *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a2;
  v6 = *(unsigned int *)(a1 + 208);
  v7 = *(__int64 **)(a1 + 200);
  v8 = v6 - 1;
  v6 *= 16;
  v9 = (unsigned int)a2 & v8;
  v10 = (__int64 *)((char *)v7 + v6);
  v11 = 16 * v9;
  v12 = &v7[(unsigned __int64)v11 / 8];
  if ( v11 != v6 )
  {
    for ( i = &v7[(unsigned __int64)v11 / 8]; v10 != i; i += 2 )
    {
      v14 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( v3 == (_DWORD)v14 && a2 == v14 )
          return i[1];
      }
      else if ( !v14 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v12 != v7; v7 += 2 )
  {
    v19 = *v7;
    if ( (unsigned __int64)*v7 > 1 )
    {
      if ( a2 == v19 && v3 == (_DWORD)v19 )
      {
        i = v7;
        return i[1];
      }
    }
    else if ( !v19 )
    {
      break;
    }
  }
LABEL_8:
  v15 = *(_QWORD **)(a1 + 192);
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 == *((_DWORD *)v15 - 2) )
    {
      v20 = 3 * v16 + 1;
      v21 = v20 & 0xFFFFFFFE;
      v22 = v20 >> 1;
      v23 = 8 * (v22 + v21) + 8;
      if ( 24 * (int)v16 + 8 >= v23 || (unsigned int)v16 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v27, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v27);
        sub_233E40((__int64)v27);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int *)sub_186B300(v15 - 1, v23);
      v15 = v24 + 2;
      *v24 = v22;
      v25 = v24[1];
      *(_QWORD *)(a1 + 192) = v15;
      v17 = &v15[3 * v25];
    }
    else
    {
      v17 = &v15[3 * v16];
    }
  }
  else
  {
    v26 = (_QWORD *)sub_186B270(0x38u);
    *v26 = 2;
    v15 = v26 + 1;
    *(_QWORD *)(a1 + 192) = v26 + 1;
    v17 = v26 + 1;
  }
  *(_DWORD *)v17 = 0;
  v17[1] = a2;
  ++*((_DWORD *)v15 - 1);
  return 0;
}

