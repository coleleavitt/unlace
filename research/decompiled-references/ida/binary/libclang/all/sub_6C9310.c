__int64 __fastcall sub_6C9310(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // rax

  v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 33 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      return 0;
    v5 = sub_B0D320(v5);
    if ( !v5 )
      return 0;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 34 > 1 )
  {
    v6 = sub_B0D320(v6);
    if ( *(_BYTE *)(v6 + 19) >> 2 )
      goto LABEL_4;
    return 0;
  }
  if ( !(*(_BYTE *)(v6 + 19) >> 2) )
    return 0;
LABEL_4:
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v7 + 16) != 13 )
    return 0;
  if ( ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) != 0x1E8 )
    return 0;
  v9 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 33 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
      return 0;
    v9 = sub_B0D320(v9);
    if ( !v9 )
      return 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 34 > 1 )
  {
    v14 = sub_B0D320(v10);
    v12 = v14 + 8 * ((*(_BYTE *)(v14 + 19) >> 2) + (unsigned __int64)((*(_WORD *)(v14 + 18) >> 3) & 0x7F)) + 48;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v10 + 16) - 34 > 1 )
      v10 = sub_B0D320(v10);
    v11 = (*(_WORD *)(v10 + 18) >> 3) & 0x7F;
  }
  else
  {
    v11 = (*(_WORD *)(v10 + 18) >> 3) & 0x7F;
    v12 = v10 + 8 * (v11 + (*(_BYTE *)(v10 + 19) >> 2)) + 48;
  }
  v13 = (_QWORD *)(v10 + 8 * v11 + 48);
  if ( (_QWORD *)v12 != v13 )
  {
    while ( (unsigned __int8)sub_7BC360(a3, *v13, 0, 0) )
    {
      if ( (_QWORD *)v12 == ++v13 )
        return 1;
    }
    return 0;
  }
  return 1;
}

