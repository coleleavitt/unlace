__int64 __fastcall sub_767100(__int64 a1)
{
  __int64 *v1; // r8
  __int64 *v2; // r11
  __int64 v3; // r9
  unsigned __int8 *v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 *v7; // rax
  __int64 *v8; // r8
  __int64 *v9; // r11
  char v10; // r10
  __int64 v11; // r9

  v1 = *(__int64 **)(a1 + 16);
  v2 = &v1[*(_QWORD *)(a1 + 24)];
  if ( v2 == v1 )
    return 1;
  while ( 1 )
  {
    v3 = *v1;
    if ( *(_BYTE *)(*v1 + 12) != 2 )
      return 0;
    if ( (*(_BYTE *)(v3 + 13) & 2) == 0 )
      break;
    if ( (*(_BYTE *)(v3 + 13) & 4) == 0 )
      return 0;
    if ( ++v1 == v2 )
      return 1;
  }
LABEL_7:
  v5 = *(unsigned __int8 **)(v3 + 16);
  v6 = (__int64)&v5[*(_QWORD *)(v3 + 24)];
  v7 = sub_766E50(v5, v6);
  LOBYTE(v7) = v10 & 0xF9 | (4 * (v6 == (_QWORD)v7) + 2);
  *(_BYTE *)(v11 + 13) = (_BYTE)v7;
  if ( ((unsigned __int8)v7 & 4) == 0 )
    return 0;
  while ( 1 )
  {
    if ( ++v8 == v9 )
      return 1;
    v3 = *v8;
    if ( *(_BYTE *)(*v8 + 12) != 2 )
      return 0;
    if ( (*(_BYTE *)(v3 + 13) & 2) == 0 )
      goto LABEL_7;
    if ( (*(_BYTE *)(v3 + 13) & 4) == 0 )
      return 0;
  }
}

