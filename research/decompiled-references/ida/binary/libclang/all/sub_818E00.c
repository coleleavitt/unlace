bool __fastcall sub_818E00(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rbx
  bool result; // al
  bool v4; // bp
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx

  v1 = sub_80F310(a1);
  if ( (*(_WORD *)v1 & 0x1FF) != 0x48 )
    return 0;
  v2 = *(_QWORD *)(v1 + 16);
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 38 > 6 )
    return 0;
  if ( (*(_BYTE *)(v2 + 96) & 7) != 5 )
    return 0;
  v4 = *(_BYTE *)(v2 + 29) & 1;
  if ( !v4 )
    return 0;
  v5 = sub_79A2B0(v2);
  v6 = *v5;
  v7 = *v5 + 8LL * *((unsigned int *)v5 + 2);
  if ( v6 < v7 )
  {
    while ( *(_WORD *)(*(_QWORD *)v6 + 32LL) != 131 )
    {
      v6 += 8LL;
      if ( v7 == v6 )
        return 0;
    }
  }
  else
  {
    if ( v6 == v7 )
      return 0;
    while ( *(_WORD *)(*(_QWORD *)v7 + 32LL) != 131 )
    {
      v7 += 8LL;
      if ( v6 == v7 )
        return 0;
    }
  }
  if ( v6 == v7 )
    return 0;
  result = (*(_BYTE *)(v2 + 28) & 0x7F) != 38 && (*(_BYTE *)(v2 + 28) & 0x7F) != 44;
  if ( !result )
  {
    v8 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v2 + 16) & 4) != 0 )
      v8 = *(_QWORD *)(v8 + 8);
    result = v4;
    if ( v8 )
    {
      v9 = *(_BYTE *)(sub_79C2A0(v8) + 8) & 0x7F;
      if ( (unsigned __int8)v9 > 0x10u )
        return (((_BYTE)v9 + 96) & 0x7Fu) > 5;
      v10 = 65922;
      if ( !_bittest64(&v10, v9) )
        return (((_BYTE)v9 + 96) & 0x7Fu) > 5;
      return 0;
    }
  }
  return result;
}

