__int64 __fastcall sub_4C7260(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax

  if ( !a2 )
    return 0;
  if ( a3 < (unsigned __int64)sub_4C6A30(a1) >> 2 )
  {
    v5 = 4 * a3;
    v6 = sub_4C6AC0(a1, v5);
    *(_QWORD *)(a2 + 1048) = node2ea(v6);
    v7 = sub_4C6AC0(a1, v5 + 1);
    *(_QWORD *)(a2 + 1064) = node2ea(v7);
    v8 = sub_4C6AC0(a1, v5 + 2);
    *(_WORD *)(a2 + 1058) = v8;
    *(_WORD *)(a2 + 1056) = HIWORD(v8);
    *(_DWORD *)(a2 + 1060) = sub_4C6AC0(a1, v5 + 3);
    return 1;
  }
  else
  {
    *(_QWORD *)(a2 + 1048) = -1;
    *(_QWORD *)(a2 + 1064) = -1;
    *(_QWORD *)(a2 + 1056) = 0;
    return 0;
  }
}
