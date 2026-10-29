bool __fastcall sub_7A5660(_QWORD *a1)
{
  int v3; // ebp
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rax

  if ( (unsigned int)sub_780B80((__int64)a1) != 15 )
    return 0;
  if ( (unsigned __int8)sub_7A4F00(a1) )
    return 0;
  if ( sub_780F20((__int64)a1) )
    return 0;
  if ( sub_780E20((__int64)a1) )
    return 0;
  v3 = sub_77F620((__int64)a1);
  if ( v3 - sub_7A55C0(a1) != 1 )
    return 0;
  v4 = *(_QWORD *)(*(_QWORD *)(a1[15] + 8LL * sub_780450((__int64)a1)) + 48LL);
  v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v5 + 16) == 42
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 && (v5 = sub_B0D320(v5)) != 0 )
  {
    v4 = sub_6B2590(v5);
  }
  v6 = sub_798D40((__int64)a1);
  v7 = *(_QWORD *)(sub_79A2E0((__int64)(a1 + 9)) + 16);
  v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v7 & 4) != 0 )
    v8 = (_QWORD *)*v8;
  if ( !v8 )
    BUG();
  v9 = *(v8 - 2);
  if ( !v9 )
    v9 = sub_6E8D60(v6, (__int64)(v8 - 8));
  return *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL]
                   & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL]
                                                        & 0xFFFFFFFFFFFFFFF0LL);
}

