__int64 __fastcall sub_DC6AF0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r13d
  __int64 v3; // rax
  int v4; // r14d
  int v5; // eax
  _QWORD *exception; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  char v9; // r12
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1656);
  if ( v1 )
    v2 = *(_DWORD *)(v1 - 4);
  else
    v2 = 0;
  v3 = sub_DC2710((_QWORD *)a1)[1];
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = *(_DWORD *)(a1 + 1424);
  if ( v5 == 4 )
  {
    v8 = *(_QWORD *)(a1 + 48);
    v9 = 0;
    sub_DC0980(a1);
  }
  else
  {
    if ( v5 == 9 )
      goto LABEL_7;
    sub_DC0980(a1);
    if ( *(_DWORD *)(a1 + 1424) != 4 )
      goto LABEL_7;
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 == *(_QWORD *)(a1 + 2032) )
    {
      v9 = 0;
      v8 = sub_DC5A40(a1);
      goto LABEL_14;
    }
    if ( v7 != *(_QWORD *)(a1 + 1760) )
    {
LABEL_7:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid qualified/indexed identifier, '_' or 'as' expected");
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
    }
    sub_DC0980(a1);
    if ( *(_DWORD *)(a1 + 1424) == 4 )
    {
      v8 = *(_QWORD *)(a1 + 48);
      sub_DC0980(a1);
    }
    else
    {
      sub_DBF660(a1, "invalid (indexed) identifier, '(_' or symbol expected");
      v8 = sub_DC5A40(a1);
    }
    v9 = 1;
    sub_DC3500((_QWORD *)a1, "Invalid qualified identifier");
    sub_DBF8C0(a1, "invalid qualified identifier, ')' expected");
  }
LABEL_14:
  result = sub_1875960(a1 + 1440, 48, 0);
  *(_DWORD *)result = 0;
  *(_QWORD *)(result + 8) = v8;
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)(result + 20) = v2;
  *(_BYTE *)(result + 24) = v9;
  ++*(_DWORD *)(a1 + 1624);
  return result;
}

