_BOOL8 __fastcall sub_5A7FA0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  _BOOL8 result; // rax

  if ( a3 > 3 )
  {
    if ( !under_debugger )
      interr(2127);
    BUG();
  }
  if ( a3 == 3 )
  {
    v4 = **(unsigned int **)(a1 + 48);
    v5 = **(unsigned int **)(a2 + 48);
  }
  else
  {
    v4 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 4 * a3);
    v5 = *(unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * a3);
  }
  if ( !(_DWORD)v5 || (_DWORD)v5 == 255 )
    return (_DWORD)v4 != (_DWORD)v5;
  v6 = *(int *)(a2 + 12);
  v7 = *(int *)(a1 + 12);
  if ( (_DWORD)v6 == 2 || (_DWORD)v7 == (_DWORD)v6 )
    sub_5A7A60(a1, a2, v5, a4, v7, v4);
  v8 = 48 * v6;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  v10 = v9 + v8 + 632;
  v11 = *(_QWORD *)(v9 + v8 + 640);
  if ( !v11 )
    return 1;
  v12 = v10;
  do
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v11 + 16);
      v14 = *(_QWORD *)(v11 + 24);
      if ( *(_DWORD *)(v11 + 32) >= (int)v5 )
        break;
      v11 = *(_QWORD *)(v11 + 24);
      if ( !v14 )
        goto LABEL_13;
    }
    v12 = v11;
    v11 = *(_QWORD *)(v11 + 16);
  }
  while ( v13 );
LABEL_13:
  result = 1;
  if ( v10 != v12 && *(_DWORD *)(v12 + 32) <= (int)v5 )
  {
    LODWORD(v5) = *(_DWORD *)(*(_QWORD *)(v9 + 600) + 12LL * *(_QWORD *)(v12 + 40) + 4 * v7);
    if ( (_DWORD)v5 )
      return (_DWORD)v4 != (_DWORD)v5;
  }
  return result;
}
