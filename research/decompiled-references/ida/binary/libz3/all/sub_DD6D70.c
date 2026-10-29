__int64 __fastcall sub_DD6D70(_QWORD **a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r14
  _QWORD *exception; // r13
  __int64 *v10; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11[2]; // [rsp+10h] [rbp-58h] BYREF
  int v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[56]; // [rsp+30h] [rbp-38h] BYREF

  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
  v1 = (__int64)*a1;
  sub_DFBCB0(*a1);
  v2 = *(_QWORD *)(v1 + 296);
  v3 = (__int64)*a1;
  v11[1] = 0;
  v10 = nullptr;
  v11[0] = v2;
  sub_DFBCB0(v3);
  v4 = *(_QWORD *)(v3 + 296);
  *(_QWORD *)v12 = 0;
  v13 = v4;
  sub_DD0A60((__int64)v14, (__int64 *)a1, (__int64 *)v12, (__int64)v11, (unsigned int **)&v10);
  v5 = *(_QWORD *)v12;
  v6 = v13;
  sub_E06850(*a1, *(_QWORD *)v12 + 16LL, *(_QWORD *)v12);
  sub_DD6780(a1, v5, (__int64)v11, &v10);
  if ( *((_DWORD *)a1 + 356) != 2 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid function/constant definition, ')' expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( !*((_BYTE *)*a1 + 258) || (sub_DBF4C0(*a1), *((_DWORD *)a1 + 356) != 9) )
    sub_DC0980(a1);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 8))-- == 1 )
      sub_15D7BC0(v6, v5);
  }
  if ( v10 )
    sub_186B220(v10 - 1);
  return sub_2334C0(v11);
}

