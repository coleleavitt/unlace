unsigned __int64 __fastcall sub_C0B960(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  __int16 v7; // r14
  __int16 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // bp
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  char v16; // al
  unsigned __int8 v17; // al
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]
  __int64 v21; // [rsp+0h] [rbp-48h]
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+8h] [rbp-40h]

  v7 = a4;
  v8 = a5;
  if ( a5 == -1 )
  {
    v10 = a1[2329];
    v11 = 0;
  }
  else
  {
    v9 = a3[a5];
    v10 = *(_QWORD *)(v9 + 8);
    v11 = (*(_BYTE *)(v9 + 1) >> 1) & 3;
  }
  v12 = a1[294];
  v13 = 8 * a4 + 8;
  v14 = 8 * a4 + 24;
  a1[304] += v14;
  v15 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v14 + v15 && v12 )
  {
    a1[294] = v14 + v15;
  }
  else
  {
    v21 = v10;
    v23 = a2;
    v19 = sub_986170((__int64)(a1 + 294), v14, 8 * a4 + 24, 3, v10, a2);
    a2 = v23;
    v10 = v21;
    v15 = v19;
  }
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x11;
  if ( unk_2CD7484 )
  {
    v22 = a2;
    v20 = v10;
    sub_EE9B50(17);
    a2 = v22;
    v10 = v20;
  }
  v16 = *(_BYTE *)(v15 + 1);
  *(_QWORD *)(v15 + 8) = v10;
  *(_WORD *)(v15 + 4) = v7 + 1;
  *(_WORD *)(v15 + 6) = v8 + 1;
  *(_BYTE *)(v15 + 1) = v16 & 0xF9 | (2 * (v11 & 3));
  *(_QWORD *)(v15 + 16) = a2;
  *(_WORD *)(v15 + 1) &= 0xF807u;
  if ( v13 != 8 )
    memmove((void *)(v15 + 24), a3, v13 - 8);
  v17 = sub_B64B30(v15);
  *(_BYTE *)(v15 + 1) = (v17 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v17 >> 2) & 7;
  return v15;
}
