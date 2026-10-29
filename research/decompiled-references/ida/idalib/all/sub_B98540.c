unsigned __int64 __fastcall sub_B98540(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  _BOOL8 v12; // rax
  __int64 v13; // r8
  char v14; // dl
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r9
  char v17; // al
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned __int64 result; // rax

  v3 = sub_B8C330(a2);
  v7 = sub_B96100(v3, a1, a2, v4, v5, v6);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = v7;
  if ( (v9 & 0x1000000) != 0 )
  {
    v11 = *(unsigned __int16 *)(a1 + 22);
    v12 = (v9 & 0x40000000) != 0;
    v13 = 8 * v11 + 48;
    v14 = *(_BYTE *)(a1 + 19);
    v15 = (a1 + v13 + ((SBYTE3(v9) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v14 & 0x40) != 0 )
    {
      v16 = v15 + 8 * (((*(_BYTE *)(((a1 + v13 + ((v14 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v12);
      v17 = ((unsigned __int8)v14 >> 1) & 0xF;
      if ( v17 != 2 )
LABEL_4:
        __asm { jmp     rdx }
    }
    else
    {
      v16 = v15 + 8 * v12;
      v17 = ((unsigned __int8)v14 >> 1) & 0xF;
      if ( v17 != 2 )
        goto LABEL_4;
    }
    v18 = v16 + 8LL * (*(_WORD *)((a1 + v13 + ((v14 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    v19 = v18 + v11;
    if ( (v9 & 0x20000000) != 0 )
      v18 = v19;
    v20 = *(_QWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 2LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 16) != 26
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 || !sub_F63050(
                                                                                                 a1,
                                                                                                 v7,
                                                                                                 v8,
                                                                                                 v9)) )
    {
      v20 = 0;
      goto LABEL_11;
    }
    v20 = (*(_BYTE *)(a1 + 18) >> 5) & 2;
  }
  if ( v20 )
    v10 &= ~2uLL;
LABEL_11:
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 2320) + 89LL) & 1) != 0 )
    result = sub_A73030(v3, v10, 1u);
  else
    result = sub_A70010(v3, v10);
  if ( v20 )
    return result & 7 | 2 | result & 0xFFFFFFFFFFFFFFF8LL;
  return result;
}
