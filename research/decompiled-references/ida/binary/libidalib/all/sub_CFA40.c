__int64 __fastcall sub_CFA40(__int64 a1, int a2)
{
  __int64 v4; // rax
  int v5; // r12d
  int v6; // ebp
  _DWORD *v7; // rdi
  __int64 v8; // rdx
  int v9; // eax

  if ( dword_25274C > 0 && (*(_BYTE *)(dbg + 32LL) & 0x40) != 0 )
    return 0;
  if ( a2 == -2 )
  {
    v5 = dword_2524EC;
    v9 = dword_2524EC;
    goto LABEL_14;
  }
  if ( a2 == -1 )
  {
    v5 = dword_2524E8;
    v9 = dword_2524E8;
LABEL_14:
    v6 = *(_DWORD *)(a1 + 36) & v9;
    if ( !v6 )
      return *(_QWORD *)(a1 + 40);
    goto LABEL_10;
  }
  if ( a2 < 0 )
    return *(_QWORD *)(a1 + 40);
  if ( a2 >= (unsigned __int64)xmmword_2524F8 )
    return *(_QWORD *)(a1 + 40);
  v4 = qword_2524F0 + 56LL * a2;
  if ( !v4 )
    return *(_QWORD *)(a1 + 40);
  v5 = *(unsigned __int8 *)(*(_QWORD *)(dbg + 56LL) + 32LL * *(int *)(v4 + 44) + 12);
  v6 = *(_DWORD *)(a1 + 36) & (v5 | dword_2524E8);
  if ( !v6 )
    return *(_QWORD *)(a1 + 40);
LABEL_10:
  v7 = qword_252758;
  if ( qword_252758
    && (v8 = *(_QWORD *)(a1 + 40),
        *(_DWORD *)qword_252758 = *(_DWORD *)a1,
        v7[8] = v6,
        *((_QWORD *)v7 + 5) = v8,
        (int)sub_CDCF0((__int64)v7, 16) > 0) )
  {
    *(_DWORD *)(a1 + 36) &= ~v6;
  }
  else if ( (v6 & v5) != 0 )
  {
    return 0;
  }
  return *(_QWORD *)(a1 + 40);
}

