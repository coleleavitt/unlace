__int64 *__fastcall sub_DD4160(_QWORD **a1)
{
  _QWORD *exception; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 *result; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdi
  int v19[2]; // [rsp+8h] [rbp-20h] BYREF

  if ( *((_DWORD *)a1 + 356) == 9 || (sub_DC0980(a1), *((_DWORD *)a1 + 356) != 4) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid constant definition, symbol expected");
    goto LABEL_3;
  }
  *(_QWORD *)v19 = a1[6];
  sub_DC0980(a1);
  sub_DC3500(a1, "Invalid constant definition");
  sub_DD2CA0(a1);
  v3 = sub_DC2710(a1)[1];
  v4 = 0x7FFFFFFF8LL;
  if ( v3 )
    v4 = 8LL * (unsigned int)(*(_DWORD *)(v3 - 4) - 1);
  v5 = sub_15D1F10(*(_QWORD *)(v3 + v4));
  v6 = sub_DC07A0(a1);
  v7 = 0x7FFFFFFF8LL;
  v8 = v6[1];
  if ( v8 )
    v7 = 8LL * (unsigned int)(*(_DWORD *)(v8 - 4) - 1);
  if ( v5 != *(_QWORD *)(v8 + v7) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid constant definition, sort mismatch");
LABEL_3:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  v9 = (__int64)*a1;
  v10 = sub_DC2710(a1)[1];
  v11 = 0x7FFFFFFF8LL;
  if ( v10 )
    v11 = 8LL * (unsigned int)(*(_DWORD *)(v10 - 4) - 1);
  sub_E09200(v9, v19, 0, 0, *(_QWORD *)(v10 + v11));
  sub_DBF590(*((unsigned int *)a1 + 356), (__int64)"invalid constant definition, ')' expected");
  v12 = sub_DC2710(a1);
  sub_39BF70(v12);
  result = sub_DC07A0(a1);
  v14 = result[1];
  v15 = (unsigned int)(*(_DWORD *)(v14 - 4) - 1);
  v16 = *(_QWORD *)(v14 + 8 * v15);
  *(_DWORD *)(v14 - 4) = v15;
  if ( v16 )
  {
    v17 = *result;
    if ( (*(_DWORD *)(v16 + 8))-- == 1 )
      result = (__int64 *)sub_15D7BC0(v17, v16);
  }
  if ( *((_BYTE *)*a1 + 258) )
    result = (__int64 *)sub_DBF4C0(*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    return (__int64 *)sub_DC0980(a1);
  return result;
}

