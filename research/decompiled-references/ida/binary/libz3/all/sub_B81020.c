_DWORD *__fastcall sub_B81020(__int64 a1, int a2, char a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rdx
  unsigned int v8; // ecx
  __int64 v9; // rcx
  _DWORD *v10; // rsi
  __int64 v11; // rcx
  _DWORD *v12; // r8
  _DWORD *v13; // rax
  int v14; // ecx
  _QWORD *v15; // rdi
  __int64 v16; // r12
  __int64 v17; // rax
  _DWORD *result; // rax
  int v19; // eax
  unsigned int v20; // ebp
  size_t v21; // rsi
  unsigned int *v22; // rax
  _DWORD *v23; // rdi
  __int64 v24; // rax
  _QWORD *v25; // rax
  char **exception; // rbx
  __int64 v27[7]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *(unsigned int *)(a1 + 1392);
  v7 = *(_DWORD **)(a1 + 1384);
  ++*(_DWORD *)(a1 + 100);
  v8 = v6 - 1;
  v6 *= 16;
  v9 = a2 & v8;
  v10 = (_DWORD *)((char *)v7 + v6);
  v11 = 16 * v9;
  v12 = &v7[(unsigned __int64)v11 / 4];
  if ( v11 == v6 )
  {
LABEL_12:
    while ( v12 != v7 )
    {
      v19 = v7[1];
      if ( v19 == 2 )
      {
        if ( a2 == *v7 && a2 == v7[2] )
        {
          v13 = v7;
          goto LABEL_8;
        }
      }
      else if ( !v19 )
      {
        break;
      }
      v7 += 4;
    }
LABEL_24:
    BUG();
  }
  v13 = &v7[(unsigned __int64)v11 / 4];
  while ( 1 )
  {
    v14 = v13[1];
    if ( v14 != 2 )
    {
      if ( !v14 )
        goto LABEL_24;
      goto LABEL_4;
    }
    if ( a2 == *v13 && a2 == v13[2] )
      break;
LABEL_4:
    v13 += 4;
    if ( v10 == v13 )
      goto LABEL_12;
  }
LABEL_8:
  v15 = *(_QWORD **)(a1 + 1368);
  v16 = (unsigned int)v13[3];
  *(_BYTE *)(*(_QWORD *)(a1 + 1360) + 16 * v16 + 4) = a3;
  if ( v15 )
  {
    v17 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v17 != *((_DWORD *)v15 - 2) )
    {
      result = (_DWORD *)v15 + v17;
      goto LABEL_11;
    }
    v20 = (unsigned int)(3 * v17 + 1) >> 1;
    v21 = 4 * v20 + 8;
    if ( 4 * (int)v17 + 8 >= (unsigned int)v21 || (unsigned int)v17 >= v20 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_B75C60(v27, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v27);
      sub_233E40((__int64)v27);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v22 = (unsigned int *)sub_186B300(v15 - 1, v21);
    *v22 = v20;
    v23 = v22 + 2;
    v24 = v22[1];
    *(_QWORD *)(a1 + 1368) = v23;
    result = &v23[v24];
    *result = v16;
    ++*(v23 - 1);
  }
  else
  {
    v25 = (_QWORD *)sub_186B270(0x10u);
    v15 = v25 + 1;
    *v25 = 2;
    *(_QWORD *)(a1 + 1368) = v25 + 1;
    result = v25 + 1;
LABEL_11:
    *result = v16;
    ++*((_DWORD *)v15 - 1);
  }
  return result;
}

