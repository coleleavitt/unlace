__int64 __fastcall sub_BAC6C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax

  v6 = *(_QWORD *)(a1 + 120);
  if ( v6 )
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      return 0;
  }
  else
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v7 )
      return 0;
  }
  v8 = *(_QWORD *)v7;
  if ( !*(_QWORD *)v7 )
    return 0;
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
    sub_BA8900(a1);
  v9 = sub_B8C330(a1);
  return sub_A85A20(v9, v8);
}
