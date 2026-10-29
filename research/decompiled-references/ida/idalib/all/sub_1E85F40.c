__int64 __fastcall sub_1E85F40(__int64 a1, __int64 a2, int **a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rax
  int v6; // ecx
  unsigned __int8 v7; // dl
  int *v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // r13
  int v14; // r12d
  bool v15; // zf
  char v16; // al
  __int16 v17; // ax
  unsigned __int8 v18; // al
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int64 v22[6]; // [rsp+8h] [rbp-30h] BYREF

  v22[0] = a4;
  v5 = *(_QWORD *)(*(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(unsigned __int8 *)(*(_QWORD *)v5 + 16LL);
  if ( v6 != 43 )
  {
    v7 = v6 - 25;
    if ( v6 == 44 || v7 <= 1u )
    {
      if ( v7 > 1u )
        goto LABEL_6;
      goto LABEL_5;
    }
    if ( (_BYTE)v6 != 13 || ((*(_WORD *)(*(_QWORD *)v5 + 18LL) >> 3) & 0x1FF) != 0x1B3 )
LABEL_5:
      v22[0] = sub_A72DD0(*(_QWORD *)(*(_QWORD *)a2 + 248LL), v22[0]);
  }
LABEL_6:
  v8 = *a3;
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 248LL);
  v10 = sub_F67970(v22, v9);
  v11 = *(_QWORD *)(v22[0] & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(v11 + 16);
  if ( (unsigned int)(v12 - 43) > 1 )
  {
    v21 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v21 > 1 || (v11 = sub_F63050(*(_QWORD *)(v22[0] & 0xFFFFFFFFFFFFFFF0LL), v9, v21, v12)) == 0 )
    {
      v13 = 0;
      goto LABEL_9;
    }
    v12 = *(unsigned __int8 *)(v11 + 16);
  }
  if ( (_BYTE)v12 == 43 )
    goto LABEL_8;
  while ( 1 )
  {
    v15 = (*(_BYTE *)(v11 + 18) & 0x10) == 0;
    v11 = *(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v15 )
      break;
    v20 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 43;
    if ( (unsigned int)v20 > 1 )
      v11 = sub_F63050(v11, v9, v20, v12);
  }
  v13 = 2;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_8:
    v13 = 1;
LABEL_9:
  v14 = *v8;
  v15 = unk_2CD7484 == 0;
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x1A;
  if ( !v15 )
    sub_EE9B50(26);
  v16 = *(_BYTE *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = v10;
  *(_DWORD *)(a1 + 4) = v14;
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 1) = (2 * v13) | v16 & 0xF9;
  v17 = *(_WORD *)(a1 + 1) & 0xF807;
  *(_WORD *)(a1 + 1) = v17;
  *(_BYTE *)(a1 + 2) = HIBYTE(v17) & 0xF7;
  v18 = sub_B62360(a1);
  *(_BYTE *)(a1 + 1) = (v18 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  *(_BYTE *)(a1 + 2) = *(_BYTE *)(a1 + 2) & 0xF8 | (v18 >> 2) & 7;
  return a1;
}
