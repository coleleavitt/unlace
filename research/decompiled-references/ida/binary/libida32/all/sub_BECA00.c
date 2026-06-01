__int64 __fastcall sub_BECA00(_QWORD **a1, _QWORD *a2, __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int16 v5; // cx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax

  if ( !*a2 )
    return 0;
  if ( (*a2 & 3LL) != 1 )
    return 0;
  v3 = *a2 & 0xFFFFFFFFFFFFFFFCLL;
  v4 = v3;
  if ( !v3 )
    return 0;
  v5 = *(_WORD *)v3 & 0x1FF;
  if ( v5 == 37 )
  {
    sub_A89F70(*a1, **(_QWORD **)(v3 + 16), a3, 0, nullptr);
    v7 = a3[1];
    v8 = *a3;
    *((_DWORD *)a3 + 12) = 1;
    a3[5] = v7;
    a3[4] = v8;
    return 1;
  }
  if ( v5 != 9 )
  {
    if ( v5 != 18 )
      return 0;
    if ( *(char *)(v3 + 2) >= 0 )
      return 0;
    v4 = *(_QWORD *)(v3 + 16);
    if ( !v4 )
      return 0;
  }
  v10 = *(_DWORD *)(v4 + 16) * ((*(_WORD *)(v4 + 2) >> 6) & 7u);
  a3[4] = v4 + 4LL * *(unsigned int *)(v4 + 4) + 20;
  a3[5] = v10;
  *((_DWORD *)a3 + 12) = (*(_WORD *)(v4 + 2) >> 6) & 7;
  return 1;
}

