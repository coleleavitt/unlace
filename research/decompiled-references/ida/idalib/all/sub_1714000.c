char __fastcall sub_1714000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  int v8; // edx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int16 v15; // dx
  unsigned __int8 v16; // al
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rdi
  char v20; // al
  char result; // al
  _QWORD *v22; // rdx

  v6 = a2;
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  v8 = v7;
  if ( (unsigned int)v7 - 53 <= 1 || (v9 = a2, v10 = (v7 + 52) & 0x7F, (unsigned __int8)v10 <= 1u) )
  {
    v9 = sub_B72ED0(a2);
    v7 = *(_BYTE *)(v9 + 28) & 0x7F;
    v8 = v7;
  }
  v11 = (unsigned int)(v8 - 58);
  if ( (unsigned int)v11 <= 9 )
    return 0;
  if ( v7 == 20 )
  {
    v12 = *(_QWORD *)(v9 + 120);
    if ( !v12 )
    {
      a2 = *(_QWORD *)(v9 + 96);
      sub_A794E0((__int64 *)(a2 + 88), a2, v11, v10, a5, a6);
      v12 = *(_QWORD *)(v9 + 120);
    }
    v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v13 || !*v13 )
      return 0;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 232LL);
  if ( (*(_BYTE *)(v14 + 1) & 8) != 0 )
  {
    v15 = 2106;
  }
  else
  {
    if ( (*(_BYTE *)(v14 + 2) & 4) != 0 && (*(_BYTE *)(v9 + 28) & 0x7F) == 0x32 )
      goto LABEL_13;
    v15 = 2080;
  }
  if ( (*(_WORD *)(v9 + 30) & (unsigned __int16)v15) == 0 )
    return 0;
LABEL_13:
  v16 = *(_BYTE *)(v6 + 28) & 0x7F;
  v17 = v16;
  if ( ((v16 + 52) & 0x7Fu) <= 1 || (unsigned int)v16 - 53 <= 1 )
  {
    v6 = sub_B72ED0(v6);
    v17 = *(_BYTE *)(v6 + 28) & 0x7F;
  }
  v18 = (unsigned int)(v17 - 26);
  if ( (unsigned int)v18 > 0x1A )
    return 0;
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(_BYTE *)(v19 + 16);
  if ( v20 == 13 )
    return (((*(_WORD *)(v19 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
  if ( v20 != 47 )
    return v20 == 10;
  v22 = sub_F60F10(v19, a2, v18, v10, a5, a6);
  result = 1;
  if ( (*((_BYTE *)v22 + 74) & 1) == 0 )
    return (v22[16] & 0xFFFFFFFFFFFFFFF8LL) != 0;
  return result;
}
