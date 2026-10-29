unsigned __int64 __fastcall sub_ECBB70(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v8; // r15
  bool v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  char v13; // al
  __int64 v15; // rax
  int v17; // [rsp+8h] [rbp-40h]
  int v18; // [rsp+8h] [rbp-40h]
  int v19; // [rsp+Ch] [rbp-3Ch]
  int v20; // [rsp+Ch] [rbp-3Ch]

  v8 = a2 != 0;
  v9 = a3 != 0;
  v10 = 8LL * ((a2 != 0) + (a3 != 0) + 2) + 24;
  v11 = a1[294];
  a1[304] += v10;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v10 + v12 && v11 )
  {
    a1[294] = v10 + v12;
  }
  else
  {
    v20 = a6;
    v18 = a5;
    v15 = sub_962430((__int64)(a1 + 294), v10, v10, 3, a5, a6);
    LODWORD(a6) = v20;
    LODWORD(a5) = v18;
    v12 = v15;
  }
  v19 = a6;
  v17 = a5;
  sub_EC5910((_WORD *)v12, 131);
  v13 = *(_BYTE *)(v12 + 1);
  *(_QWORD *)(v12 + 8) = 0;
  *(_DWORD *)(v12 + 20) = v19;
  *(_DWORD *)(v12 + 16) = v17;
  *(_BYTE *)(v12 + 1) = (4 * v9) & 0xF7 | (2 * v8) & 0xF7 | v13 & 0xF1;
  *(_QWORD *)(v12 + 8LL * (((*(_QWORD *)v12 & 0x200) != 0) + ((*(_QWORD *)v12 & 0x400) != 0)) + 24) = a4;
  *(_QWORD *)(v12 + 8LL * (((*(_QWORD *)v12 & 0x200) != 0) + (unsigned int)((*(_QWORD *)v12 & 0x400) != 0) + 1) + 24) = 0;
  if ( a2 )
    *(_QWORD *)(v12 + 24) = a2;
  if ( a3 )
    sub_ECBAB0((_WORD *)v12, a1, a3);
  *(_DWORD *)(v12 + 4) = 0;
  return v12;
}

