__int64 __fastcall sub_CA8B50(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r8
  int v8; // edi
  int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // r11
  char v13; // r11
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v16; // r11
  char v17; // r11
  __int64 v18; // r9

  result = a3;
  v4 = a2;
  v5 = a2 - a1;
  v6 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - a1) >> 3);
  v7 = v6;
  if ( a2 - a1 > 0 )
  {
    do
    {
      v8 = *(_DWORD *)(v4 - 40);
      v9 = *(_DWORD *)(a3 - 40);
      v4 -= 40;
      a3 -= 40;
      *(_DWORD *)a3 = v8;
      v10 = *(_QWORD *)(v4 + 8);
      *(_DWORD *)v4 = v9;
      v11 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v10;
      v12 = *(_BYTE *)(v4 + 4);
      *(_QWORD *)(v4 + 8) = v11;
      LOBYTE(v11) = *(_BYTE *)(a3 + 4);
      *(_BYTE *)(a3 + 4) = v12 & 2 | v11 & 0xFD;
      LOBYTE(v11) = v11 & 2 | *(_BYTE *)(v4 + 4) & 0xFD;
      *(_BYTE *)(v4 + 4) = v11;
      v13 = *(_BYTE *)(a3 + 4);
      *(_BYTE *)(a3 + 4) = v11 & 1 | v13 & 0xFE;
      LODWORD(v10) = *(_DWORD *)(v4 + 16);
      *(_BYTE *)(v4 + 4) = v13 & 1 | *(_BYTE *)(v4 + 4) & 0xFE;
      LODWORD(v11) = *(_DWORD *)(a3 + 16);
      *(_DWORD *)(a3 + 16) = v10;
      v14 = *(_QWORD *)(v4 + 24);
      *(_DWORD *)(v4 + 16) = v11;
      v15 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(a3 + 24) = v14;
      v16 = *(_BYTE *)(v4 + 20);
      *(_QWORD *)(v4 + 24) = v15;
      LOBYTE(v15) = *(_BYTE *)(a3 + 20);
      *(_BYTE *)(a3 + 20) = v16 & 2 | v15 & 0xFD;
      LOBYTE(v15) = v15 & 2 | *(_BYTE *)(v4 + 20) & 0xFD;
      *(_BYTE *)(v4 + 20) = v15;
      v17 = *(_BYTE *)(a3 + 20) & 1;
      *(_BYTE *)(a3 + 20) = v15 & 1 | *(_BYTE *)(a3 + 20) & 0xFE;
      *(_BYTE *)(v4 + 20) = v17 | *(_BYTE *)(v4 + 20) & 0xFE;
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(v4 + 32);
      --v7;
    }
    while ( v7 );
    v18 = -40LL * (v6 - 1);
    if ( !v5 )
      v18 = 0;
    return result + v18 - 40;
  }
  return result;
}

