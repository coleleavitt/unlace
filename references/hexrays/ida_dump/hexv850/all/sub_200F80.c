__int64 __fastcall sub_200F80(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 result; // rax
  int v9; // esi
  _QWORD *v10; // rdi
  __int64 v11; // r14
  int v12; // edx
  _DWORD *v13; // rdx
  __int64 v14; // r9
  int v15; // edx

  v6 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 40) = 58;
  v7 = *(_QWORD *)(v6 + 8);
  if ( *(_DWORD *)(a3 + 44) == -1 )
  {
    result = sub_1FE320(a1, a2, a3);
    if ( (_DWORD)result )
      goto LABEL_11;
  }
  result = sub_200E50(a1, a2, a3);
  if ( (_DWORD)result )
    goto LABEL_11;
  v9 = *(_DWORD *)(a1 + 44);
  if ( v9 == -1 )
    goto LABEL_11;
  v10 = *(_QWORD **)(a1 + 64);
  v11 = *v10 + 104LL * v9;
  if ( v9 < (int)v7 || *(_QWORD *)(a1 + 96) || !a2 )
    goto LABEL_7;
  v13 = *(_DWORD **)a3;
  v14 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 != v14 )
  {
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 56) + 64LL) - 1 != *v13 )
    {
      if ( (_DWORD *)v14 == ++v13 )
        goto LABEL_20;
    }
    if ( v13 != (_DWORD *)v14 )
      goto LABEL_7;
  }
LABEL_20:
  if ( (*(_BYTE *)(v11 + 27) & 2) != 0 )
  {
LABEL_7:
    v12 = *(_DWORD *)(a1 + 40);
    switch ( v12 )
    {
      case 58:
        goto LABEL_11;
      case 20:
        result = sub_1FE140(a1, a3, *v10 + 104LL * v9);
        goto LABEL_11;
      case 26:
        sub_1FE290(a1, *v10 + 104LL * v9);
        *(_DWORD *)(v11 + 24) |= 0x400u;
        result = 0;
        goto LABEL_11;
    }
    if ( !under_debugger )
      sub_37CFE0(0);
LABEL_30:
    BUG();
  }
  if ( v9 != v10[1] - 1LL )
  {
    if ( !under_debugger )
      sub_37CFE0(52929);
    goto LABEL_30;
  }
  sub_1EFD40(*(_QWORD *)(a1 + 56), v9);
  v15 = *(_DWORD *)(a3 + 44);
  result = 0;
  if ( *(_DWORD *)(a1 + 44) == v15 && v15 != -1 )
  {
    *(_BYTE *)(a3 + 48) &= ~2u;
    *(_DWORD *)(a3 + 44) = -1;
    sub_1024A0(*(_QWORD *)(a1 + 56), a3, *(_QWORD *)(a1 + 72), *(_QWORD **)(a1 + 80));
    result = 0;
  }
  *(_DWORD *)(a1 + 40) = 58;
LABEL_11:
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 44) = -1;
  return result;
}
