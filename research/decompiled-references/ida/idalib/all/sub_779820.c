__int64 __fastcall sub_779820(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi

  v2 = *a2;
  if ( *a2 == -1 )
    return -1;
  if ( !v2 )
    return -1;
  if ( v2 >= *(_QWORD *)(a1 + 56) )
    return -1;
  v5 = *(_QWORD *)(a1 + 48);
  v6 = v5 + 176 * v2;
  if ( (*(_BYTE *)(v6 + 168) & 2) != 0 )
    return -1;
  v3 = *(_QWORD *)(v6 + 160);
  v7 = 176 * v3 + v5;
  v8 = *(_QWORD *)(v7 + 24);
  v9 = v8 + 9LL * *(_QWORD *)(v7 + 32);
  if ( v9 == v8 )
  {
LABEL_12:
    if ( !under_debugger )
      interr(1790);
    BUG();
  }
  v10 = 0;
  while ( !*(_BYTE *)(v8 + 8) || v2 != *(_QWORD *)v8 )
  {
    v8 += 9;
    ++v10;
    if ( v8 == v9 )
      goto LABEL_12;
  }
  return v3;
}
