__int64 __fastcall sub_8360E0(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned __int8 **v12; // rax
  unsigned __int8 **v13; // rbp

  v3 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v3 != 38 && v3 != 44 )
    return 1;
  v4 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
  {
    v4 = *(_QWORD *)(v4 + 8);
    if ( !v4 )
      return 1;
  }
  else if ( !v4 )
  {
    return 1;
  }
  v5 = *(_BYTE *)(sub_79C2A0(v4) + 8) & 0x7F;
  if ( (unsigned __int8)v5 > 0x10u )
  {
    if ( (((_BYTE)v5 + 96) & 0x7Fu) <= 5 )
      goto LABEL_7;
    return 1;
  }
  v6 = 65922;
  if ( !_bittest64(&v6, v5) )
    return 1;
LABEL_7:
  if ( (*(_BYTE *)(a2 + 96) & 7) != 2 && ((*(_BYTE *)(a2 + 96) & 7) != 0 || ((*(_BYTE *)(a2 + 96) >> 3) & 3) != 2) )
    return 1;
  if ( (*(_BYTE *)(a2 + 28) & 0x7D) != 0x29 )
  {
    v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v9 = *(_QWORD *)(v9 + 8);
    v10 = *(_BYTE *)(sub_79C2A0(v9) + 8) & 0x7F;
    if ( !v10 || v10 == 22 )
      return 1;
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x29 )
    {
      v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v11 = *(_QWORD *)v11;
      if ( ((*(_BYTE *)(v11 + 8) + 72) & 0x7Fu) <= 3 )
        return 1;
    }
  }
  v7 = sub_788D80((_QWORD *)a2, *(_QWORD *)(a1 + 16));
  if ( (_BYTE)v7 )
    return 1;
  v12 = (unsigned __int8 **)sub_A2E050(a1, *(unsigned int *)(a2 + 24), 2281, 0);
  v13 = v12;
  if ( v12 )
  {
    sub_823450(v12, (*(_BYTE *)(a2 + 96) & 0x18) != 0);
    sub_8356A0(v13, a2, 0xAu);
  }
  return v7;
}

