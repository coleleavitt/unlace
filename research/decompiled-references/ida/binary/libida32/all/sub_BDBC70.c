char __fastcall sub_BDBC70(unsigned __int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rbx
  char result; // al
  unsigned __int64 *v9; // rax
  __int64 *v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // cl

  v2 = (unsigned __int16 *)sub_BD7DA0(a1);
  v6 = *v2;
  LOWORD(v6) = v6 & 0x1FF;
  if ( (_WORD)v6 != 71 )
    return 0;
  v7 = *((_QWORD *)v2 + 2);
  if ( (*(_BYTE *)(v7 + 28) & 0x7Fu) - 40 > 6 || (*(_BYTE *)(v7 + 96) & 7) != 5 || (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return 0;
  v9 = sub_B68690(v7, a2, v6, v3, v4, v5);
  v10 = (__int64 *)*v9;
  v11 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( *v9 < v11 )
  {
    v12 = *v9;
    while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 139 )
    {
      v12 += 8LL;
      if ( v11 == v12 )
        return 0;
    }
    if ( v11 != v12 )
      goto LABEL_19;
    return 0;
  }
  if ( v10 == (__int64 *)v11 )
    return 0;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 139 )
  {
LABEL_19:
    result = (*(_BYTE *)(v7 + 28) & 0x7F) != 46 && (*(_BYTE *)(v7 + 28) & 0x7F) != 40;
    if ( !result )
    {
      v15 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
        v15 = *(_QWORD *)(v15 + 8);
      result = 1;
      if ( v15 )
      {
        v16 = *(_BYTE *)(sub_B6AD60(v15) + 8) & 0x7F;
        if ( v16 > 0x12u )
          return ((v16 + 94) & 0x7Fu) > 5;
        else
          return ((1LL << v16) & 0x40182) == 0;
      }
    }
    return result;
  }
  v13 = (__int64 *)(v11 + 8);
  while ( v13 != v10 )
  {
    v14 = *v13++;
    if ( *(_WORD *)(v14 + 36) == 139 )
      goto LABEL_19;
  }
  return 0;
}

