unsigned __int64 __fastcall sub_B723C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  _BOOL8 v12; // rax
  __int64 v13; // rdi
  char v14; // dl
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  char v17; // al
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  _QWORD *v22; // rsi
  int v24; // eax

  v7 = a2;
  v8 = *(_QWORD *)(a3 + 48);
  if ( v8 )
  {
    v9 = v8 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    a2 = a3;
    v9 = sub_A56D30(a1, a3, a3, a4, a5, a6);
  }
  v10 = *(_QWORD *)(v7 + 16);
  if ( (v10 & 0x1000000) == 0 )
  {
    if ( *(_BYTE *)(v7 + 16) == 26
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_F3F310(v7, a2, a3, v10) )
    {
      v24 = *(_BYTE *)(v7 + 18) >> 5;
    }
    else
    {
      v24 = 0;
    }
    return v9 & 0xFFFFFFFFFFFFFFF8LL | v9 & 7 | (unsigned int)v24;
  }
  v11 = *(unsigned __int16 *)(v7 + 22);
  v12 = (v10 & 0x40000000) != 0;
  v13 = 8 * v11 + 48;
  v14 = *(_BYTE *)(v7 + 19);
  v15 = (v7 + v13 + ((SBYTE3(v10) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14 & 0x40) != 0 )
  {
    v16 = v15 + 8 * (((*(_BYTE *)(((v7 + v13 + ((v14 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v12);
    v17 = ((unsigned __int8)v14 >> 1) & 0xF;
    if ( v17 != 2 )
LABEL_6:
      __asm { jmp     rdx }
  }
  else
  {
    v16 = v15 + 8 * v12;
    v17 = ((unsigned __int8)v14 >> 1) & 0xF;
    if ( v17 != 2 )
      goto LABEL_6;
  }
  v18 = v16 + 8LL * (*(_WORD *)((v7 + v13 + ((v14 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  v19 = v18 + v11;
  if ( (v10 & 0x20000000) != 0 )
    v18 = v19;
  v20 = *(_QWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v20 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v24 = *(_QWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    return v9 & 0xFFFFFFFFFFFFFFF8LL | v9 & 7 | (unsigned int)v24;
  }
  v21 = v9 & 7 | v20;
  v22 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v9 & 8) != 0 )
  {
    v21 |= *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL));
    v22 = (_QWORD *)*v22;
  }
  return sub_A4CF00(a1, (__int64)v22, v21);
}

