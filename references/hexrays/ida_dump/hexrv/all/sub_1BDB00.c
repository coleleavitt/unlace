__int64 __fastcall sub_1BDB00(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, __int64 a5, _DWORD *a6, _DWORD *a7)
{
  int v7; // eax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 result; // rax

  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 2 )
    return sub_1BD690(a1, *(_QWORD **)(a2 + 8), a3, a4, a6, a7, 0);
  if ( v7 > 2 )
  {
    if ( (unsigned int)(v7 - 3) <= 3 )
      return 0;
    goto LABEL_20;
  }
  if ( v7 != 1 )
  {
LABEL_20:
    if ( !under_debugger )
      sub_37DDE0(51039);
LABEL_25:
    BUG();
  }
  v8 = *(_QWORD *)(a2 + 8);
  v9 = v8 + (int)a5;
  if ( __CFADD__(v8, (int)a5) )
  {
    if ( !under_debugger )
      sub_37DDE0(52010);
    goto LABEL_25;
  }
  v10 = __CFADD__(a3, a4);
  v11 = a3 + a4;
  if ( v10 )
    sub_1BD8C0(a6, v8, a3, v11, a5, a7);
  v12 = v8;
  if ( a3 >= v8 )
    v12 = a3;
  if ( v11 > v9 )
    v11 = v9;
  result = 0;
  if ( v12 < v11 )
  {
    if ( a7 )
      *a7 = a3 - v12;
    if ( a6 )
      *a6 = v12 - v8;
    return (unsigned int)(v11 - v12);
  }
  return result;
}
