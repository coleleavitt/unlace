void __fastcall __noreturn sub_44B910(__int64 a1, int a2, int a3, int a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // r13
  _QWORD *v8; // rax
  char v9; // dl
  _QWORD *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // [rsp+18h] [rbp-50h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15[2]; // [rsp+28h] [rbp-40h]

  *(_QWORD *)v15 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 364) = a3;
  v6 = (_DWORD *)(a1 + 16);
  v6[88] = a4;
  v6[89] = (a4 != -1) + 2;
  v6[86] = a2;
  sub_449090((__int64)v6);
  v7 = switch_dbctx(a2);
  v8 = *(_QWORD **)(v7 + 1480);
  v14 = 0;
  sub_6141A0(*v8, 26, &v14, 8);
  *(_DWORD *)(a1 + 456) = HIDWORD(v14) - v14;
  sub_447B10((int *)a1);
  sub_443EC0(a1);
  if ( *(_BYTE *)(a1 + 308) )
  {
    v14 = 0;
    v10 = *(_QWORD **)(v7 + 1480);
    v13 = 0;
    sub_6141A0(*v10, 26, &v13, 8);
    if ( (unsigned int)v13 >= HIDWORD(v13)
      || (unsigned __int8)rangeset_t_has_common(*(_QWORD *)(v7 + 1480) + 1032LL, &v13, 0) )
    {
      sub_365330();
    }
    sub_41E6C0(v7);
    v11 = switch_dbctx(a3);
    sub_6141A0(**(_QWORD **)(v11 + 1480), 26, &v14, 8);
    if ( (unsigned int)v14 >= HIDWORD(v14)
      || (unsigned __int8)rangeset_t_has_common(*(_QWORD *)(v11 + 1480) + 1032LL, &v14, 0) )
    {
      sub_365330();
    }
    if ( (unsigned int)v13 >= HIDWORD(v13)
      || (unsigned __int8)rangeset_t_has_common(*(_QWORD *)(v11 + 1480) + 1032LL, &v13, 0) )
    {
      sub_365330();
    }
    sub_41E6C0(v11);
    if ( (unsigned int)v14 >= HIDWORD(v14)
      || (unsigned __int8)rangeset_t_has_common(*(_QWORD *)(v7 + 1480) + 1032LL, &v14, 0) )
    {
      sub_365330();
    }
  }
  switch_dbctx(a2);
  set_database_flag(4, 1);
  v9 = *(_BYTE *)(a1 + 309);
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 304) - 4) > 1u )
  {
    if ( v9 )
      goto LABEL_4;
  }
  else
  {
    if ( v9 )
    {
LABEL_4:
      sub_4441A0(a1, 0);
      goto LABEL_6;
    }
    set_database_flag(1, 1);
    if ( *(_BYTE *)(a1 + 310) )
      set_database_flag(32, 1);
    if ( *(_BYTE *)(a1 + 311) )
    {
      v12 = switch_dbctx(a3);
      *(_DWORD *)(v12 + 72) |= 0x20u;
    }
  }
LABEL_6:
  sub_44AE40(a1, nullptr);
  if ( *(_BYTE *)(a1 + 304) != 5 )
    sub_375980(0x5Eu, a1 + 344);
  sub_44AF80();
}

