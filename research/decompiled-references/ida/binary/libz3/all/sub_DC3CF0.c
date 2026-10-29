void __fastcall sub_DC3CF0(_QWORD *a1)
{
  _QWORD *exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  _QWORD v18[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *((_DWORD *)a1 + 356) == 9
    || (sub_DC0980(a1), *((_DWORD *)a1 + 356) != 4)
    || (v3 = a1[6], v3 == a1[254])
    || v3 == a1[220] )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid constant declaration, symbol expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v18[0] = a1[6];
  sub_DC0980(a1);
  sub_DC3500(a1, "Invalid constant declaration");
  v4 = *a1;
  sub_DFBCB0(*a1);
  v5 = *(_QWORD *)(v4 + 296);
  v6 = *a1;
  sub_DFBCB0(*a1);
  v7 = *(_QWORD *)(v6 + 296);
  v8 = sub_DC07A0(a1)[1];
  v9 = 0x7FFFFFFF8LL;
  if ( v8 )
    v9 = 8LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
  v10 = sub_15E3510(v7, v18, 0, 0, *(_QWORD *)(v8 + v9), 0);
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = sub_DC07A0(a1);
  v13 = v12[1];
  v14 = (unsigned int)(*(_DWORD *)(v13 - 4) - 1);
  v15 = *(_QWORD *)(v13 + 8 * v14);
  *(_DWORD *)(v13 - 4) = v14;
  if ( v15 )
  {
    v16 = *v12;
    v17 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v16, v15);
  }
  sub_E06850(*a1, v11 + 16, v11);
  sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid constant declaration, ')' expected");
  if ( *(_BYTE *)(*a1 + 258LL) )
    sub_DBF4C0((_QWORD *)*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  if ( v11 )
  {
    v17 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v5, v11);
  }
}

