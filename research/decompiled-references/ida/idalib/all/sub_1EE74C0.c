char __fastcall sub_1EE74C0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // r8
  int v18; // edx
  bool v19; // zf
  char v20; // dl

  LODWORD(v6) = sub_1EE7490(*a1);
  *(_DWORD *)a3 = v6;
  *(_DWORD *)(a3 + 4) = v6;
  if ( (((*(_WORD *)(a2 + 18) >> 3) + 74) & 0x1FFu) <= 0x31 )
  {
    v6 = 0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) + 74);
    if ( (v6 & 1) != 0 )
    {
      v7 = *a1;
      v8 = *(unsigned int *)(*a1 + 24);
      v9 = *(_QWORD *)(*a1 + 32);
      v10 = (unsigned int)(v8 + 1);
      LODWORD(v6) = *(_DWORD *)(*a1 + 24);
      v11 = *(_QWORD *)(v9 + 8 * v8);
      *(_DWORD *)(*a1 + 24) = v10;
      v12 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
      if ( (unsigned int)(v12 - 443) <= 4 || (unsigned int)(v12 - 451) <= 0x24 || v12 == 438 || v12 == 449 )
        *(_BYTE *)(a3 + 8) = v11 & 0x7F | *(_BYTE *)(a3 + 8) & 0x80;
      v13 = (unsigned int)(v6 + 2);
      v14 = *(_QWORD *)(v9 + 8 * v10);
      *(_DWORD *)(v7 + 24) = v13;
      v15 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
      if ( (unsigned int)(v15 - 443) <= 4 || (unsigned int)(v15 - 451) <= 0x24 || v15 == 438 || v15 == 449 )
        *(_WORD *)(a3 + 8) = *(_WORD *)(a3 + 8) & 0xFE7F | ((v14 & 3) << 7);
      v16 = (unsigned int)(v6 + 3);
      v17 = *(_QWORD *)(v9 + 8 * v13);
      *(_DWORD *)(v7 + 24) = v16;
      v18 = (*(_WORD *)(a2 + 18) >> 3) & 0x1FF;
      if ( (unsigned int)(v18 - 443) <= 4 || (unsigned int)(v18 - 451) <= 0x24 || v18 == 438 || v18 == 449 )
        *(_BYTE *)(a3 + 9) = *(_BYTE *)(a3 + 9) & 0xF9 | (2 * (v17 & 3));
      v19 = *(_QWORD *)(v9 + 8 * v16) == 0;
      *(_DWORD *)(v7 + 24) = v6 + 4;
      LOBYTE(v6) = !v19;
      if ( (((*(_WORD *)(a2 + 18) >> 3) + 74) & 0x1FFu) <= 0x31
        && ((0x3FFFFFFFFEBE1uLL >> ((unsigned __int8)(*(_WORD *)(a2 + 18) >> 3) + 74)) & 1) != 0 )
      {
        v20 = 8 * v6;
        LOBYTE(v6) = (8 * v6) | *(_BYTE *)(a3 + 9) & 0xF7;
        *(_BYTE *)(a3 + 9) = v20 | *(_BYTE *)(a3 + 9) & 0xF7;
      }
    }
  }
  return v6;
}
