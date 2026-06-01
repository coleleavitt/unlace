bool __fastcall sub_7A57A0(_QWORD *a1, __int64 a2)
{
  int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  if ( (unsigned int)sub_780B80((__int64)a1) != 15 )
    return 0;
  if ( (unsigned __int8)sub_7A4F00(a1) )
    return 0;
  if ( sub_780F20((__int64)a1) )
    return 0;
  if ( sub_780E20((__int64)a1) )
    return 0;
  v4 = sub_77F620((__int64)a1);
  if ( v4 - sub_7A55C0(a1) != 1 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[15] + 8LL * sub_780450((__int64)a1)) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 43 )
    return 0;
  v6 = sub_B167E0(v5, a2);
  v7 = sub_798D40((__int64)a1);
  v8 = sub_79A330((__int64)(a1 + 9));
  v9 = v8;
  if ( !v8 )
    BUG();
  v10 = *(_QWORD *)(v8 - 16);
  if ( !v10 )
    v10 = sub_6E8D60(v7, v9 - 64);
  return *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)&byte_8[v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL]
                   & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL]
                                                        & 0xFFFFFFFFFFFFFFF0LL);
}

