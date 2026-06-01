bool __fastcall sub_7A6630(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rax

  if ( !sub_7805A0(a1) || sub_780E20(a1) )
    return 0;
  v2 = **(_QWORD **)(a1 + 120);
  v3 = sub_798D40(a1);
  v4 = *(_QWORD *)&byte_8[*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0LL] | *(_QWORD *)(v2 + 48) & 7LL;
  v5 = *(_QWORD *)(sub_79A2E0(a1 + 72) + 16);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v5 & 4) != 0 )
    v6 = (_QWORD *)*v6;
  if ( v6 )
    v6 -= 8;
  v7 = sub_6E8EE0(v3, (unsigned __int64)v6);
  return (*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] | v7 & 7) == (*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL)
                                                                    & 0xFFFFFFFFFFFFFFF0LL);
}

