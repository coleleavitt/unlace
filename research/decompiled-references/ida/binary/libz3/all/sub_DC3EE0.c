void __fastcall sub_DC3EE0(_QWORD *a1)
{
  _QWORD *exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // r15
  __int64 *v21; // rbp
  unsigned __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( *((_DWORD *)a1 + 356) == 9
    || (sub_DC0980(a1), *((_DWORD *)a1 + 356) != 4)
    || (v3 = a1[6], v3 == a1[254])
    || v3 == a1[220] )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid function declaration, symbol expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v27[0] = a1[6];
  sub_DC0980(a1);
  v4 = sub_DC07A0(a1)[1];
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v6 = 0;
  sub_DBF660((__int64)a1, "Parsing function declaration. Expecting sort list '('");
  while ( *((_DWORD *)a1 + 356) != 2 )
  {
    ++v6;
    sub_DC3500(a1, "Parsing function declaration. Expecting sort list '('");
  }
  sub_DC0980(a1);
  sub_DC3500(a1, "Invalid function declaration");
  v7 = *a1;
  sub_DFBCB0(*a1);
  v8 = *(_QWORD *)(v7 + 296);
  v9 = *a1;
  v26 = v8;
  sub_DFBCB0(*a1);
  v10 = *(_QWORD *)(v9 + 296);
  v11 = sub_DC07A0(a1)[1];
  v12 = 0x7FFFFFFF8LL;
  if ( v11 )
    v12 = 8LL * (unsigned int)(*(_DWORD *)(v11 - 4) - 1);
  v13 = *(_QWORD *)(v11 + v12);
  v14 = sub_DC07A0(a1);
  v15 = 8LL * v5;
  v16 = sub_15E3510(v10, v27, v6, v15 + v14[1], v13, 0);
  v17 = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v18 = sub_DC07A0(a1);
  v19 = v18[1];
  v20 = v18;
  if ( v19 )
  {
    v21 = (__int64 *)(v19 + v15);
    v22 = v19 + 8LL * *(unsigned int *)(v19 - 4);
    if ( (unsigned __int64)v21 >= v22 )
      goto LABEL_22;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = *v20;
          v25 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( (unsigned __int64)++v21 >= v22 )
          goto LABEL_21;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( (unsigned __int64)v21 < v22 );
LABEL_21:
    v19 = v20[1];
    if ( v19 )
LABEL_22:
      *(_DWORD *)(v19 - 4) = v5;
  }
  sub_E06850(*a1, v17 + 16, v17);
  sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid function declaration, ')' expected");
  if ( *(_BYTE *)(*a1 + 258LL) )
    sub_DBF4C0((_QWORD *)*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  if ( v17 )
  {
    v25 = (*(_DWORD *)(v17 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v26, v17);
  }
}

