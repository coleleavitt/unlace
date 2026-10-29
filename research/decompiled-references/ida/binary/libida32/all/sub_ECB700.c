unsigned __int64 __fastcall sub_ECB700(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v6; // r15d
  bool v10; // bp
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  char v14; // r8
  __int64 v15; // rdx
  __int16 v16; // ax
  int v18; // [rsp+Ch] [rbp-3Ch]

  v6 = a6;
  v10 = a3 != 0;
  v18 = a5;
  v11 = 8LL * ((a3 != 0) + 2) + 4LL * (a3 != 0) + 24;
  v12 = a1[294];
  a1[304] += v11;
  v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v11 + v13 && v12 )
    a1[294] = v11 + v13;
  else
    v13 = sub_962430((__int64)(a1 + 294), v11, v11, 3, a5, a6);
  sub_EC5910((_WORD *)v13, 133);
  v14 = *(_BYTE *)(v13 + 1);
  *(_DWORD *)(v13 + 4) = a4;
  *(_DWORD *)(v13 + 8) = v6;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = a2;
  *(_BYTE *)(v13 + 1) = (2 * v10) | v14 & 0xFD;
  v15 = *(_QWORD *)v13;
  *(_QWORD *)(v13 + 8LL * ((unsigned int)((*(_QWORD *)v13 & 0x200) != 0) + 1) + 24) = 0;
  if ( a3 )
  {
    v16 = *(_WORD *)v13 >> 9;
    *(_QWORD *)(v13 + 8LL * ((v15 & 0x200) != 0) + 24) = a3;
    *(_DWORD *)(v13 + 8LL * ((v16 & 1) + 2) + 24) = v18;
  }
  return v13;
}

