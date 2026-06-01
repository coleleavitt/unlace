unsigned __int64 __fastcall sub_BB03E0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // r9d
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rdx

  v4 = *(_DWORD *)(a3 + 12);
  v7 = (*(_DWORD *)(a4 + 12) - v4) ^ (v4 << 8);
  v8 = ((v7 ^ ((v4 - v7) << 16)) + v7 - v4) ^ ((v4 - v7) << 10);
  v9 = 24LL * a2;
  v10 = 3LL * (v8 & (a2 - 1));
  v11 = a1 + v9;
  v12 = 8 * v10;
  v13 = a1 + v12;
  if ( v12 != v9 )
  {
    for ( result = a1 + v12; v11 != result; result += 24LL )
    {
      v15 = *(_QWORD *)(result + 8);
      if ( v15 > 1 )
      {
        if ( *(_DWORD *)result == v8 && v15 == a3 && *(_QWORD *)(result + 16) == a4 )
          return result;
      }
      else if ( !v15 )
      {
        return v15;
      }
    }
  }
  if ( v13 == a1 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(a1 + 8);
      if ( v15 > 1 )
        break;
      if ( !v15 )
        return v15;
      a1 += 24;
      if ( v13 == a1 )
        return 0;
    }
    if ( *(_DWORD *)a1 == v8 && v15 == a3 && *(_QWORD *)(a1 + 16) == a4 )
      break;
    a1 += 24;
    if ( v13 == a1 )
      return 0;
  }
  return a1;
}

