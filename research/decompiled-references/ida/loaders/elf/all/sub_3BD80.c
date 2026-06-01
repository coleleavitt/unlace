__int64 __fastcall sub_3BD80(__int64 a1, int a2, bool *a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // edi

  if ( !*(_BYTE *)(a1 + 168) )
  {
    sub_30AC0();
LABEL_16:
    if ( under_debugger )
      BUG();
    interr(20056);
    return sub_3BE10();
  }
  if ( a3 )
    *a3 = 0;
  if ( !a2 )
    goto LABEL_16;
  result = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40) << 6;
  v5 = result + v4;
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    if ( *(_DWORD *)(result + 44) == a2 )
    {
      v6 = *(_DWORD *)(result + 4);
      if ( v6 == 9 || v6 == 4 )
        break;
    }
    result += 64;
    if ( result == v5 )
      return 0;
  }
  if ( a3 )
    *a3 = v6 == 4;
  return result;
}

