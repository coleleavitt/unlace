__int64 __fastcall sub_C4E060(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rcx
  char v7; // di
  __int64 v8; // rsi
  __int64 v9; // rcx
  char v10; // di
  char v11; // di
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // di
  char v15; // di
  __int64 v16; // rsi
  __int64 v17; // rcx
  char v18; // di
  char v19; // di

  result = a2;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v4 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(result + 8) = v4;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(result + 16) = v6;
  LOBYTE(v5) = *(_BYTE *)(a1 + 12);
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(result + 12) & 2 | v5 & 0xFD;
  LOBYTE(v6) = v5 & 2 | *(_BYTE *)(result + 12) & 0xFD;
  *(_BYTE *)(result + 12) = v6;
  v7 = *(_BYTE *)(a1 + 12);
  *(_BYTE *)(a1 + 12) = v6 & 1 | v7 & 0xFE;
  LODWORD(v5) = *(_DWORD *)(result + 24);
  *(_BYTE *)(result + 12) = v7 & 1 | *(_BYTE *)(result + 12) & 0xFE;
  LODWORD(v6) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v5;
  v8 = *(_QWORD *)(result + 32);
  *(_DWORD *)(result + 24) = v6;
  v9 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v8;
  v10 = *(_BYTE *)(result + 28);
  *(_QWORD *)(result + 32) = v9;
  LOBYTE(v9) = *(_BYTE *)(a1 + 28);
  *(_BYTE *)(a1 + 28) = v10 & 2 | v9 & 0xFD;
  LOBYTE(v9) = v9 & 2 | *(_BYTE *)(result + 28) & 0xFD;
  *(_BYTE *)(result + 28) = v9;
  v11 = *(_BYTE *)(a1 + 28);
  *(_BYTE *)(a1 + 28) = v9 & 1 | v11 & 0xFE;
  LODWORD(v8) = *(_DWORD *)(result + 40);
  *(_BYTE *)(result + 28) = v11 & 1 | *(_BYTE *)(result + 28) & 0xFE;
  LODWORD(v9) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v8;
  v12 = *(_QWORD *)(result + 48);
  *(_DWORD *)(result + 40) = v9;
  v13 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v12;
  v14 = *(_BYTE *)(result + 44);
  *(_QWORD *)(result + 48) = v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 44);
  *(_BYTE *)(a1 + 44) = v14 & 2 | v13 & 0xFD;
  LOBYTE(v13) = v13 & 2 | *(_BYTE *)(result + 44) & 0xFD;
  *(_BYTE *)(result + 44) = v13;
  v15 = *(_BYTE *)(a1 + 44) & 1;
  *(_BYTE *)(a1 + 44) = v13 & 1 | *(_BYTE *)(a1 + 44) & 0xFE;
  LODWORD(v12) = *(_DWORD *)(result + 56);
  *(_BYTE *)(result + 44) = v15 | *(_BYTE *)(result + 44) & 0xFE;
  LODWORD(v13) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = v12;
  v16 = *(_QWORD *)(result + 64);
  *(_DWORD *)(result + 56) = v13;
  v17 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v16;
  v18 = *(_BYTE *)(result + 60);
  *(_QWORD *)(result + 64) = v17;
  LOBYTE(v17) = *(_BYTE *)(a1 + 60);
  *(_BYTE *)(a1 + 60) = v18 & 2 | v17 & 0xFD;
  LOBYTE(v17) = v17 & 2 | *(_BYTE *)(result + 60) & 0xFD;
  *(_BYTE *)(result + 60) = v17;
  v19 = *(_BYTE *)(a1 + 60) & 1;
  *(_BYTE *)(a1 + 60) = v17 & 1 | *(_BYTE *)(a1 + 60) & 0xFE;
  *(_BYTE *)(result + 60) = v19 | *(_BYTE *)(result + 60) & 0xFE;
  return result;
}

