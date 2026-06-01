__int64 __fastcall sub_BBBC00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  _DWORD *v5; // rax
  int v6; // edx
  __int64 v7; // rsi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  if ( qword_1C7ED88 != *(_QWORD *)(v2 + 8984) )
    return 1;
  v3 = *(unsigned __int8 *)(v2 + 2416);
  if ( (_BYTE)v3 )
    return 1;
  if ( *(_WORD *)(a2 + 4) )
    return v3;
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v5 )
    return v3;
  v6 = *(_DWORD *)(a1 + 1744);
  if ( v6 != *v5 )
    return v3;
  if ( v5[1] != 42 || *(_DWORD *)(a2 + 24) != 1 )
    goto LABEL_9;
  v9 = *(_QWORD *)(a2 + 32);
  if ( *(_WORD *)(v9 + 4) || (v10 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL)) == nullptr || v6 != *v10 || v10[1] != 43 )
  {
    if ( !(unsigned __int8)sub_BBB240(a1, (unsigned int *)a2) )
    {
      if ( *(_WORD *)(a2 + 4) )
        return v3;
      v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v5 )
        return v3;
      v6 = *(_DWORD *)(a1 + 1744);
      goto LABEL_23;
    }
    return 1;
  }
LABEL_23:
  if ( *v5 != v6 )
    return v3;
LABEL_9:
  if ( v5[1] != 43 )
    return v3;
  if ( *(_DWORD *)(a2 + 24) != 1 )
    return v3;
  v7 = *(_QWORD *)(a2 + 32);
  if ( !*(_WORD *)(v7 + 4) )
  {
    v8 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL);
    if ( v8 )
    {
      if ( *v8 == v6 && v8[1] == 42 )
        return v3;
    }
  }
  return sub_BBB240(a1, (unsigned int *)v7);
}

