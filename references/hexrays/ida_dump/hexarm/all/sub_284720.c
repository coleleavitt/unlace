__int64 __fastcall sub_284720(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 *v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi

  if ( !a1 || *(_DWORD *)(a1 + 8) != 57 )
  {
    if ( !under_debugger )
      sub_3835A0(50609);
LABEL_18:
    BUG();
  }
  if ( *(_QWORD *)(a1 + 24) == a2 )
  {
    if ( !under_debugger )
      sub_3835A0(50610);
    goto LABEL_18;
  }
  v3 = *(__int64 **)(a1 + 32);
  v4 = v3[1];
  if ( !v4 )
    goto LABEL_12;
  v5 = *v3;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = 72 * v7;
    v9 = v5 + v8;
    if ( a2 == v5 + v8 )
      break;
    v7 = ++v6;
    if ( v6 >= v4 )
      goto LABEL_12;
  }
  if ( a3 )
  {
    *a3 = v6;
    v9 = *v3 + v8;
  }
  if ( !v9 )
  {
LABEL_12:
    if ( !under_debugger )
      sub_3835A0(50611);
    goto LABEL_18;
  }
  return v9;
}
