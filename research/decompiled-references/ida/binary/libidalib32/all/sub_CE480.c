__int64 __fastcall sub_CE480(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // r12d
  int v6; // ebp
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  int v9; // eax

  if ( dword_2515A4 > 0 && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
    return 0;
  if ( a2 == -2 )
  {
    v5 = dword_251360;
    v9 = dword_251360;
    goto LABEL_14;
  }
  if ( a2 == -1 )
  {
    v5 = dword_25135C;
    v9 = dword_25135C;
LABEL_14:
    v6 = *(_DWORD *)(a1 + 36) & v9;
    if ( !v6 )
      return *(_QWORD *)(a1 + 40);
    goto LABEL_10;
  }
  if ( a2 < 0 )
    return *(_QWORD *)(a1 + 40);
  if ( a2 >= (unsigned __int64)xmmword_251378 )
    return *(_QWORD *)(a1 + 40);
  v4 = qword_251370 + 56LL * a2;
  if ( !v4 )
    return *(_QWORD *)(a1 + 40);
  v5 = *(unsigned __int8 *)(*(_QWORD *)(dbg + 56LL) + 32LL * *(int *)(v4 + 44) + 12);
  v6 = *(_DWORD *)(a1 + 36) & (v5 | dword_25135C);
  if ( !v6 )
    return *(_QWORD *)(a1 + 40);
LABEL_10:
  v7 = qword_2515B0;
  if ( qword_2515B0
    && (v8 = *(_QWORD *)(a1 + 40),
        *(_DWORD *)qword_2515B0 = *(_DWORD *)a1,
        v7[6] = v6,
        *((_QWORD *)v7 + 4) = v8,
        (int)sub_CC780((__int64)v7, 16) > 0) )
  {
    *(_DWORD *)(a1 + 36) &= ~v6;
  }
  else if ( (v6 & v5) != 0 )
  {
    return 0;
  }
  return *(_QWORD *)(a1 + 40);
}

