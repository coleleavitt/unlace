_DWORD *__fastcall sub_B3A0B0(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v5; // rax
  int v6; // edx
  _DWORD *v7; // rbx
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // al
  bool v12; // r13
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  __int16 v16; // r13
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // rax

  v5 = (_DWORD *)sub_186B270((unsigned int)(8 * *(_DWORD *)(a3 + 24) + 112));
  v6 = *(_DWORD *)(a3 + 24);
  v7 = v5;
  v8 = *(_WORD *)(a3 + 4) == 0;
  memset(v5, 0, 0x70u);
  v9 = qword_1C7ED50;
  v7[16] = -1;
  *(_QWORD *)v7 = a3;
  *((_QWORD *)v7 + 11) = v9;
  *((_QWORD *)v7 + 1) = v7;
  *((_QWORD *)v7 + 2) = v7;
  v7[8] = 1;
  v7[10] = -1;
  if ( v8 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( !v10 )
      goto LABEL_6;
    v11 = 0;
    if ( !*(_DWORD *)v10 )
      v11 = *(_DWORD *)(v10 + 4) == 2;
    *((_BYTE *)v7 + 44) = (16 * v11) | v7[11] & 0xEF;
    if ( v6 != 2 )
      goto LABEL_6;
  }
  else if ( v6 != 2 || (v10 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 24LL)) == 0 )
  {
LABEL_6:
    v12 = 0;
    goto LABEL_7;
  }
  v12 = (*(_BYTE *)(v10 + 17) & 8) != 0;
LABEL_7:
  v13 = sub_15D2CB0(a1, a3);
  v14 = *(unsigned int *)(a3 + 24);
  *((_BYTE *)v7 + 53) = -1;
  v15 = 0;
  v16 = v7[11] & 0xF89F | (v13 << 6) & 0x760 | (32 * v12) & 0x260 | 0x500;
  v17 = v14;
  v18 = 8 * v14;
  *((_WORD *)v7 + 22) = v16;
  if ( v17 )
  {
    do
    {
      v19 = *(_QWORD *)(*a2 + 8LL * **(unsigned int **)(a3 + v15 + 32));
      *(_QWORD *)&v7[v15 / 4 + 28] = v19;
      v15 += 8LL;
      *(_BYTE *)(*(_QWORD *)(v19 + 8) + 45LL) = *(_BYTE *)(*(_QWORD *)(v19 + 8) + 45LL) & 0xF9 | 4;
    }
    while ( v18 != v15 );
  }
  return v7;
}

