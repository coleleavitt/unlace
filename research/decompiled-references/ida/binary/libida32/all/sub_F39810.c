__int64 __fastcall sub_F39810(__int64 a1)
{
  char v1; // al
  __int64 v2; // r11
  __int64 v3; // r9
  char v4; // r8
  unsigned __int8 v5; // si
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _DWORD **v8; // r10
  _BOOL8 v10; // rdx
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 *v14; // rcx
  _BOOL8 v15; // rdx
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 *v18; // rdx
  _BOOL8 v19; // rcx

  v1 = *(_BYTE *)(a1 + 19);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 8LL * *(unsigned __int16 *)(a1 + 22) + 48;
  v4 = v1 & 0x40;
  v5 = ((unsigned __int8)v1 >> 1) & 0xF;
  if ( (unsigned int)v5 - 6 <= 2 )
  {
    v6 = (v2 & 0x40000000) != 0;
    v7 = (a1 + v3 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v4 )
      v6 += (*(_BYTE *)(((a1 + v3 + ((v1 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v8 = (_DWORD **)(v7 + 8 * v6);
    if ( v5 == 2 )
      v8 = (_DWORD **)(v7 + 8 * ((*(_WORD *)((a1 + v3 + ((v1 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF) + v6));
    if ( *v8 )
      return (**v8 >> 15) & 1;
  }
  v10 = (v2 & 0x40000000) != 0;
  v11 = (a1 + v3 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v12 = (a1 + v3 + ((v1 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
  {
    v19 = (*(_BYTE *)(v12 + 1) & 4) != 0;
    v13 = (__int64 *)(v11 + 8 * (v19 + v10));
    v15 = v19 + 1;
    v14 = (__int64 *)(v12 + 8 * (v19 + 1));
  }
  else
  {
    v13 = (__int64 *)(v11 + 8 * v10);
    v14 = (__int64 *)v12;
    v15 = 0;
  }
  if ( v5 == 2 )
    v14 = (__int64 *)(v12 + 8 * ((*(_WORD *)v12 & 0x3FF) + v15));
  if ( v14 == v13 )
    return 0;
  v16 = *v13;
  v17 = v13 + 1;
  if ( (*(_BYTE *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) == 0 )
  {
    while ( 1 )
    {
      v18 = v17;
      if ( v17 == v14 )
        break;
      ++v17;
      if ( (*(_BYTE *)(*(_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
        return 1;
    }
    return 0;
  }
  return 1;
}

