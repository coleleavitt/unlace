__int64 __fastcall sub_C96990(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r15
  char v13; // bl
  __int64 v14; // rdx
  char v15; // bp
  __int64 v16; // rcx
  char v17; // si
  char v18; // bp
  unsigned __int8 v19; // al
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v26; // [rsp+18h] [rbp-40h]
  __int64 v27; // [rsp+18h] [rbp-40h]

  v8 = a4 != 0;
  v9 = 8LL * (a4 != 0) + 32;
  v10 = a1[294];
  a1[304] += v9;
  v11 = v9 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= v11 && v10 )
  {
    a1[294] = v11;
    v12 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v12 = sub_986170((__int64)(a1 + 294), v9, v9, 3, a5, a6);
  }
  v13 = (*(_BYTE *)(sub_B74740(a3) + 1) >> 3) & 7;
  v15 = (*(_BYTE *)(sub_B74740(a3) + 1) >> 1) & 3;
  if ( (*(_BYTE *)(a3 + 97) & 6) == 2 )
  {
    v16 = *(_QWORD *)(a3 + 48);
    v21 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 43;
    if ( (unsigned int)v22 <= 1
      || (v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43,
          (unsigned int)v22 <= 1)
      && (v27 = *(_QWORD *)(a3 + 48),
          v21 = sub_F63050(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), v22, v14, v16),
          v16 = v27,
          v21) )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v21 + 32);
        if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
          break;
        v21 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
        v23 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 43;
        if ( (unsigned int)v23 > 1 )
          v21 = sub_F63050(v21, v22, v14, v23);
      }
    }
  }
  else
  {
    v16 = *(_QWORD *)(sub_B74740(a3) + 8);
  }
  *(_WORD *)v12 = *(_WORD *)v12 & 0xFE00 | 0x70;
  if ( unk_2CD7484 )
  {
    v26 = v16;
    sub_EE9B50(112);
    v16 = v26;
  }
  *(_QWORD *)(v12 + 8) = v16;
  v17 = 2 * (v15 & 3);
  v18 = *(_BYTE *)(v12 + 1);
  *(_QWORD *)(v12 + 16) = a3;
  *(_BYTE *)(v12 + 1) = (8 * (v13 & 7)) | v17 | v18 & 1;
  *(_QWORD *)(v12 + 24) = a5;
  *(_DWORD *)(v12 + 4) = a2;
  *(_BYTE *)(v12 + 2) = (8 * v8) | *(_BYTE *)(v12 + 2) & 0xF0;
  if ( a4 )
    *(_QWORD *)(v12 + 32) = a4;
  v19 = sub_B65560(v12);
  *(_BYTE *)(v12 + 1) = (v19 << 6) | *(_BYTE *)(v12 + 1) & 0x3F;
  *(_BYTE *)(v12 + 2) = *(_BYTE *)(v12 + 2) & 0xF8 | (v19 >> 2) & 7;
  return v12;
}
