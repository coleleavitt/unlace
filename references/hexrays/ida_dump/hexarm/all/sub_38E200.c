__int64 __fastcall sub_38E200(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rsi
  __int64 v4; // rsi
  int v5; // eax

  if ( *(_DWORD *)a2 != 1 )
    return 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( *(int *)(v3 + 8) > 69 )
    return 0;
  v4 = sub_257130(a1 + 16, v3);
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC520u, 0, a3);
    BUG();
  }
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 == 57 )
      return v4;
    if ( v5 != 48 && v5 != 51 )
      break;
    v4 = sub_257130(a1 + 16, v4);
  }
  return 0;
}
