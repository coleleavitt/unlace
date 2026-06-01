unsigned __int64 __fastcall sub_7A5970(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8

  v2 = (_QWORD *)sub_798D40(a2);
  v3 = sub_7A2260(v2, a1, a2);
  if ( (*(_BYTE *)(a1 + 20) & 0x20) != 0 )
  {
    v4 = 0;
    v5 = (a1 + 8LL * (unsigned __int16)(*(_DWORD *)(a1 + 20) >> 6) + 48 + 4LL * ((*(_BYTE *)(a1 + 23) & 0x10) != 0) + 7)
       & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(a1 + 23) & 8) != 0 )
      v4 = ((*(_BYTE *)(v5 + 1) & 4) != 0) + 1LL;
    if ( ((*(_WORD *)(a1 + 22) >> 6) & 0xF) != 2 )
      __asm { jmp     rdx }
    v10 = v5 + 8 * v4 + 8LL * (*(_WORD *)v5 & 0x3FF);
    v9 = 0;
    if ( (*(_BYTE *)(a1 + 23) & 4) != 0 )
      v9 = (unsigned __int16)(*(_DWORD *)(a1 + 20) >> 6);
    v6 = *(_QWORD *)((v10 + v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    if ( *(_BYTE *)(a1 + 16) != 26
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || !sub_B0D320(a1)) )
    {
LABEL_16:
      v7 = 0;
      if ( (*(_BYTE *)(v2[270] + 89LL) & 1) != 0 )
        goto LABEL_10;
      goto LABEL_17;
    }
    LOBYTE(v6) = (*(_BYTE *)(a1 + 20) >> 2) & 7;
  }
  if ( (v6 & 2) == 0 )
    goto LABEL_16;
  v7 = 2;
  v3 &= ~2uLL;
  if ( (*(_BYTE *)(v2[270] + 89LL) & 1) != 0 )
  {
LABEL_10:
    result = sub_6C4DA0((__int64)v2, v3, 1u);
    goto LABEL_11;
  }
LABEL_17:
  result = sub_6C4160((__int64)v2, v3);
LABEL_11:
  if ( v7 )
    return result & 7 | 2 | result & 0xFFFFFFFFFFFFFFF8LL;
  return result;
}

