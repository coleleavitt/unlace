__int64 __fastcall sub_BEF5F0(_QWORD **a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int16 v11; // dx

  v2 = *a2;
  if ( !*a2 )
    goto LABEL_7;
  if ( (v2 & 3) == 0 )
  {
    v3 = v2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v3 )
      return sub_A8CEB0(*a1, v3, 0);
    goto LABEL_7;
  }
  if ( (*a2 & 3) != 1 || (v5 = v2 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
LABEL_7:
    v6 = sub_A2B7D0((__int64)a2);
    return sub_BEE7F0(*a1, v6, 3, v7);
  }
  v8 = *a1;
  v9 = sub_BD7CB0(v5);
  v11 = *(_WORD *)v9 & 0x1FF;
  if ( v11 == 71 )
    return sub_A8CEB0(v8, *(_QWORD *)(v9 + 16), 1);
  if ( v11 == 46 )
    return sub_A8CEB0(v8, *(_QWORD *)(v9 + 24), 1);
  return sub_BEE7F0(v8, *(_QWORD *)(v9 + 8), 3, v10);
}

