__int64 __fastcall sub_F40DB0(__int64 a1)
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
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rbp
  _BOOL8 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  _QWORD *i; // rbx
  unsigned __int64 v19; // rax
  _BOOL8 v20; // rax
  _BOOL8 v21; // rdx

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
      return (**v8 >> 17) & 1;
  }
  v10 = (v2 & 0x40000000) != 0;
  v11 = (a1 + v3 + ((SBYTE3(v2) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v12 = (a1 + v3 + ((v1 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4 )
  {
    v20 = (*(_BYTE *)(v12 + 1) & 4) != 0;
    v21 = v20 + v10;
    v15 = v20 + 1;
    v13 = (_QWORD *)(v11 + 8 * v21);
    v14 = (_QWORD *)(v12 + 8 * v15);
  }
  else
  {
    v13 = (_QWORD *)(v11 + 8 * v10);
    v14 = (_QWORD *)v12;
    v15 = 0;
  }
  if ( v5 == 2 )
    v14 = (_QWORD *)(v12 + 8 * ((*(_WORD *)v12 & 0x3FF) + v15));
  if ( v14 == v13 )
    return 0;
  v16 = *v13 & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)v16;
  if ( (*(_BYTE *)(*(_QWORD *)v16 + 17LL) & 4) == 0 )
  {
    for ( i = v13 + 1; *(_BYTE *)(v17 + 16) != 38; ++i )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 38 && sub_F3F130(v17) )
        break;
      if ( v14 == i )
        return 0;
      v19 = *i & 0xFFFFFFFFFFFFFFF0LL;
      v17 = *(_QWORD *)v19;
      if ( (*(_BYTE *)(*(_QWORD *)v19 + 17LL) & 4) != 0 )
        break;
    }
  }
  return 1;
}

