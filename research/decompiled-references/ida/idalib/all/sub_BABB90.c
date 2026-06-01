__int64 __fastcall sub_BABB90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax

  v6 = a2;
  v7 = *(_QWORD *)(a1 + 120);
  v8 = a1;
  if ( !v7 )
  {
    a2 = *(_QWORD *)(a1 + 96);
    sub_A794E0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 120);
  }
  v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v9 )
    return 0;
  if ( (*(_BYTE *)(v9 + 72) & 1) != 0 )
    sub_BA8900(a1);
  while ( 1 )
  {
    v10 = *(_QWORD *)(v8 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v8 + 40) & 7) != 0 )
      v10 = 0;
    if ( v6 == v10 )
      break;
    v8 = sub_BAB630(v8, a2, *(_QWORD *)(v8 + 40) & 7LL, a4, a5, a6);
    if ( !v8 )
      return 0;
  }
  return v8;
}
