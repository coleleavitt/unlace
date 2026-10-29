_QWORD *__fastcall Z3_mk_constructor_list(__int64 a1, unsigned int a2, __int64 *a3)
{
  char **exception; // r12
  char v6; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  __int64 v9; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r15
  unsigned int v13; // edx
  _DWORD *v14; // rcx
  __int64 v15; // rax
  unsigned int v17; // r10d
  size_t v18; // rsi
  unsigned int v19; // r13d
  unsigned int *v20; // rax
  __int64 v21; // rax
  int v22; // edx
  _QWORD *v23; // rax
  char v24; // [rsp+7h] [rbp-61h]
  char *v25[11]; // [rsp+10h] [rbp-58h] BYREF

  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v24 = v6;
  if ( v6 )
  {
    sub_2957A0(a1);
    *(_DWORD *)(a1 + 1520) = 0;
    v23 = (_QWORD *)sub_186B270(8u);
    *v23 = 0;
    v8 = v23;
    if ( !a2 )
    {
LABEL_13:
      sub_2BB620(v8);
      byte_1C7EBA0 = 1;
      return v8;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    v7 = (_QWORD *)sub_186B270(8u);
    *v7 = 0;
    v8 = v7;
    if ( !a2 )
      return v8;
  }
  v9 = *a3;
  v10 = (_QWORD *)sub_186B270(0x18u);
  *v10 = 2;
  v11 = v10 + 1;
  v12 = 0;
  v13 = 1;
  *v8 = v11;
  v14 = v11;
  while ( 1 )
  {
    ++v12;
    *v11 = v9;
    *(v14 - 1) = v13;
    if ( (unsigned int)v12 >= a2 )
      break;
    while ( 1 )
    {
      v9 = a3[v12];
      if ( *(v14 - 2) == v13 )
        break;
      v15 = v13;
      ++v12;
      ++v13;
      *(_QWORD *)&v14[2 * v15] = v9;
      *(v14 - 1) = v13;
      if ( (unsigned int)v12 >= a2 )
        goto LABEL_7;
    }
    v17 = (3 * v13 + 1) >> 1;
    v18 = 8 * v17 + 8;
    v19 = v17;
    if ( 8 * v13 + 8 >= (unsigned int)v18 || v13 >= v17 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_A64A2(v25);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v25);
      sub_233E40((__int64)v25);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v20 = (unsigned int *)sub_186B300(v14 - 2, v18);
    v14 = v20 + 2;
    *v20 = v19;
    v21 = v20[1];
    *v8 = v14;
    v22 = v21;
    v11 = &v14[2 * v21];
    v13 = v22 + 1;
  }
LABEL_7:
  if ( v24 )
    goto LABEL_13;
  return v8;
}

