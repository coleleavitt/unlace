__int64 __fastcall sub_EE880(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // ecx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx

  v7 = *(_DWORD *)(a1 + 280) & 0x100;
  if ( v7 )
    return 0;
  if ( *(_DWORD *)(a5 + 4) >= *(_DWORD *)(*(_QWORD *)(a2 + 112) + 88LL) )
    return 0;
  v8 = *(_QWORD *)(a1 + 32);
  if ( !v8 )
    return 0;
  v9 = 0;
  do
  {
    if ( a5 == *(_QWORD *)(a1 + 24) + 80 * v9 )
      break;
    v9 = ++v7;
  }
  while ( v7 < v8 );
  if ( v8 == v9 || *(_DWORD *)(a1 + 8) >= v7 )
    return 0;
  else
    return sub_EE250(a1, a3, a4, v7);
}
