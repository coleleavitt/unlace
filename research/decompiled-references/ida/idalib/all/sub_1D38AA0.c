unsigned __int64 __fastcall sub_1D38AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  char v6; // r12
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rsi
  _BOOL8 v12; // rax
  __int64 v13; // rdi
  char v14; // dl
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  char v17; // al
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax

  v4 = a3;
  v6 = a4;
  v8 = (__int64 *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *v8;
  if ( *(_BYTE *)(*v8 + 16) != 26 )
    v9 = sub_F63050(*v8, a2, a3, a4);
  v10 = *(_QWORD *)(v9 + 16);
  if ( (v10 & 0x1000000) == 0 )
  {
    if ( *(_BYTE *)(v9 + 16) == 26
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && sub_F63050(v9, a2, a3, v10) )
    {
      v21 = *(_BYTE *)(v9 + 18) >> 5;
    }
    else
    {
      v21 = 0;
    }
    goto LABEL_25;
  }
  v11 = *(unsigned __int16 *)(v9 + 22);
  v12 = (v10 & 0x40000000) != 0;
  v13 = 8 * v11 + 48;
  v14 = *(_BYTE *)(v9 + 19);
  v15 = (v9 + v13 + ((SBYTE3(v10) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v14 & 0x40) != 0 )
  {
    v16 = v15 + 8 * (((*(_BYTE *)(((v9 + v13 + ((v14 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0) + v12);
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
  v18 = v16 + 8LL * (*(_WORD *)((v9 + ((v14 >> 5) & 4) + v13 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
  if ( (v10 & 0x20000000) != 0 )
    v18 += v11;
  a3 = v4 & 7;
  v19 = *(_QWORD *)((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v21 = (unsigned int)v19;
LABEL_25:
    v22 = (unsigned int)v21 | v4 & 7 | v4 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_14;
  }
  v20 = v19 | a3;
  v21 = v4 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v4 & 8) != 0 )
  {
    v20 |= *(__int64 *)((char *)&qword_18 + (v4 & 0xFFFFFFFFFFFFFFF0LL));
    v21 = *(_QWORD *)v21;
  }
  v22 = sub_A70C40(a1, v21, v20);
LABEL_14:
  v23 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v23 + 16) != 26 )
    v23 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), v21, a3, v10);
  if ( ((*(_BYTE *)(v23 + 18) >> 3) & 3) == 2 )
    return sub_A72DD0(a1, v22);
  if ( !v6 )
    return sub_A73030(a1, v22, 1u);
  v24 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v24 + 16) != 26 )
    v24 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), v21, a3, v10);
  if ( (*(_BYTE *)(v24 + 18) & 0x18) == 0 )
    return sub_A72DD0(a1, v22);
  else
    return sub_A73030(a1, v22, 1u);
}
