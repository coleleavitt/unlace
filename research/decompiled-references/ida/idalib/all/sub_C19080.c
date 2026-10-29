__int64 __fastcall sub_C19080(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int8 v5; // cl
  unsigned int v6; // r12d
  unsigned __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int8 **v11; // rax
  unsigned __int8 **v12; // rbp

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v2 != 40 && v2 != 46 )
    return 1;
  v3 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    v3 = *(_QWORD *)(v3 + 8);
    if ( !v3 )
      return 1;
  }
  else if ( !v3 )
  {
    return 1;
  }
  v5 = *(_BYTE *)(sub_B8EAA0(v3) + 8) & 0x7F;
  if ( v5 <= 0x12u )
  {
    if ( ((1LL << v5) & 0x40182) != 0 )
      goto LABEL_7;
    return 1;
  }
  if ( ((v5 + 94) & 0x7Fu) > 5 )
    return 1;
LABEL_7:
  if ( (*(_BYTE *)(a2 + 96) & 7) != 2 && ((*(_BYTE *)(a2 + 96) & 7) != 0 || ((*(_BYTE *)(a2 + 96) >> 3) & 3) != 2) )
    return 1;
  if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v8 = *(_QWORD *)(v8 + 8);
    v9 = *(_BYTE *)(sub_B8EAA0(v8) + 8) & 0x7F;
    if ( !v9 || v9 == 24 )
      return 1;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    {
      v10 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v10 = *(_QWORD *)v10;
      if ( ((*(_BYTE *)(v10 + 8) + 70) & 0x7Fu) <= 3 )
        return 1;
    }
  }
  v6 = sub_B7D2B0(a2, *(_QWORD *)(a1 + 16));
  if ( (_BYTE)v6 )
    return 1;
  v11 = (unsigned __int8 **)sub_E33B30(a1, *(unsigned int *)(a2 + 24), 2483, 0);
  v12 = v11;
  if ( v11 )
  {
    sub_C11320(v11, (*(_BYTE *)(a2 + 96) & 0x18) != 0);
    sub_AE9DF0(v12, a2, 0xAu);
  }
  return v6;
}
