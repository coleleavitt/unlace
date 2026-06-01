__int64 __fastcall sub_BAD170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 120);
  if ( !v6 )
  {
    sub_A794E0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v6 = *(_QWORD *)(a1 + 120);
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v7 )
    return 0;
  if ( (*(_BYTE *)(v7 + 72) & 1) != 0 )
  {
    sub_BA8900(a1);
    v7 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  result = *(_QWORD *)(v7 + 56);
  if ( !result )
    return 0;
  while ( *(char *)(result + 28) < 0 || (*(_BYTE *)(result + 8) & 6) != 0 )
  {
    result = *(_QWORD *)(result + 128);
    if ( !result )
      return 0;
  }
  return result;
}
