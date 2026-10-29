void __fastcall sub_DC1700(_QWORD *a1)
{
  _QWORD *exception; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned int v15; // [rsp+Ch] [rbp-2Ch]
  _QWORD v16[4]; // [rsp+18h] [rbp-20h] BYREF

  if ( *((_DWORD *)a1 + 356) == 9
    || (sub_DC0980(a1), *((_DWORD *)a1 + 356) != 4)
    || (v3 = a1[6], v3 == a1[254])
    || v3 == a1[220] )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid sort declaration, symbol expected");
    goto LABEL_3;
  }
  v4 = *a1;
  v16[0] = a1[6];
  if ( sub_DF89E0(v4, v16) )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid sort declaration, sort already declared/defined");
LABEL_3:
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  if ( *((_DWORD *)a1 + 356) == 9 )
  {
LABEL_9:
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid sort declaration, arity (<numeral>) or ')' expected");
    goto LABEL_3;
  }
  sub_DC0980(a1);
  v5 = *((_DWORD *)a1 + 356);
  if ( v5 == 2 )
  {
    v6 = *a1;
    v7 = *(_QWORD *)(*a1 + 312LL);
    if ( !v7 )
    {
      sub_DFBCB0(*a1);
      v7 = *(_QWORD *)(v6 + 312);
    }
    v8 = sub_DE1720(v7, 0, v16, 0);
    sub_DFAB80(*a1, v8 + 24, v8);
  }
  else
  {
    if ( v5 != 6 )
      goto LABEL_9;
    v9 = sub_DC09F0((__int64)a1);
    v10 = *a1;
    v11 = v9;
    v12 = *(_QWORD *)(*a1 + 312LL);
    if ( !v12 )
    {
      v15 = v9;
      sub_DFBCB0(*a1);
      v12 = *(_QWORD *)(v10 + 312);
      v11 = v15;
    }
    v13 = sub_DE1720(v12, v11, v16, 0);
    sub_DFAB80(*a1, v13 + 24, v13);
    v14 = *((unsigned int *)a1 + 356);
    if ( (_DWORD)v14 != 9 )
    {
      sub_DC0980(a1);
      v14 = *((unsigned int *)a1 + 356);
    }
    sub_DBF590(v14, (__int64)"invalid sort declaration, ')' expected");
  }
  if ( *(_BYTE *)(*a1 + 258LL) )
    sub_DBF4C0((_QWORD *)*a1);
  if ( *((_DWORD *)a1 + 356) != 9 )
    sub_DC0980(a1);
}

