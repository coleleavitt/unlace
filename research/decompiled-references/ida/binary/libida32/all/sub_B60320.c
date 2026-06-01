__int64 __fastcall sub_B60320(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  __int64 v8; // r8
  unsigned __int8 v9; // al
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v13; // rdi

  if ( !a3 )
  {
    if ( (*(_BYTE *)(a2 + 8) & 0x7Fu) - 18 > 0x3F )
      return 17;
    v6 = sub_B68470(a2);
    goto LABEL_19;
  }
  v6 = a3;
  v7 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( v7 == 43 )
  {
    v10 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v10 = (_QWORD *)*v10;
    v11 = sub_B6AD60(v10);
    if ( (*(_BYTE *)(v11 + 8) & 0x7Fu) - 18 > 0x3F )
      return 17;
    v6 = sub_B68470(v11);
    if ( !v6 )
      return 17;
LABEL_20:
    v7 = *(_BYTE *)(v6 + 28) & 0x7F;
    goto LABEL_4;
  }
  if ( v7 == 84 )
  {
    v13 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v13 = *(_QWORD *)v13;
    if ( (*(_BYTE *)(v13 + 8) & 0x7Fu) - 18 > 0x3F )
      return 17;
    v6 = sub_B68470(v13);
LABEL_19:
    if ( !v6 )
      return 17;
    goto LABEL_20;
  }
LABEL_4:
  if ( (unsigned int)v7 - 40 <= 6 && sub_F34140(*(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL)) )
    v9 = sub_B60000(a1, v6, a4, 1u, v8);
  else
    v9 = sub_B5D9A0(a1, v6, a4);
  if ( (v9 & 7) == 0 )
LABEL_25:
    BUG();
  if ( (v9 & 7u) <= 3 )
    return 17;
  if ( (v9 & 7) == 7 )
    goto LABEL_25;
  return (8 * ((v9 >> 3) & 3)) & 0xDB | 4 | v9 & 0x20u;
}

