char __fastcall sub_1565160(__int64 a1)
{
  __int64 v2; // rdi
  __int16 v3; // si
  char v4; // cl
  unsigned __int64 v5; // rdx
  char result; // al
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // ax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_WORD *)(a1 + 32);
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 56) + 1LL) & 8) == 0 || v3 != 64 )
  {
    v4 = v3 - 63;
    LOBYTE(v5) = 0;
    if ( (unsigned __int16)(v3 - 63) > 0x3Fu )
      goto LABEL_5;
    goto LABEL_4;
  }
  v7 = *(_QWORD *)(v2 + 2944);
  if ( *(unsigned int *)(v2 + 2912) <= v7 )
    v8 = sub_14180A0(v2, 1u);
  else
    v8 = *(_QWORD *)(v2 + 2904) + 24 * v7;
  v9 = *(_WORD *)(v8 + 16);
  if ( v9 == 82 || v9 == 131 )
    return 0;
  v3 = *(_WORD *)(a1 + 32);
  LOBYTE(v5) = 0;
  v4 = v3 - 63;
  if ( (unsigned __int16)(v3 - 63) <= 0x3Fu )
LABEL_4:
    v5 = (0x800000000000000BLL >> v4) & 1;
LABEL_5:
  result = v5 | (v3 == 189);
  if ( !result )
    return (v3 == 22) & (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 3);
  return result;
}
