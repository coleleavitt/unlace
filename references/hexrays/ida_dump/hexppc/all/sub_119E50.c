__int64 __fastcall sub_119E50(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // cl
  char v4; // si
  char v5; // cl
  __int16 v6; // si
  __int16 v7; // cx
  int v8; // esi
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx

  result = a2;
  v3 = *(_BYTE *)(a1 + 32);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
  v4 = *(_BYTE *)(a2 + 33);
  *(_BYTE *)(result + 32) = v3;
  v5 = *(_BYTE *)(a1 + 33);
  *(_BYTE *)(a1 + 33) = v4;
  v6 = *(_WORD *)(result + 34);
  *(_BYTE *)(result + 33) = v5;
  v7 = *(_WORD *)(a1 + 34);
  *(_WORD *)(a1 + 34) = v6;
  v8 = *(_DWORD *)(result + 36);
  *(_WORD *)(result + 34) = v7;
  v9 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 36) = v8;
  v10 = *(_QWORD *)(result + 40);
  *(_DWORD *)(result + 36) = v9;
  v11 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v10;
  LOBYTE(v10) = *(_BYTE *)(result + 48);
  *(_QWORD *)(result + 40) = v11;
  LOBYTE(v11) = *(_BYTE *)(a1 + 48);
  *(_BYTE *)(a1 + 48) = v10;
  LOBYTE(v10) = *(_BYTE *)(result + 49);
  *(_BYTE *)(result + 48) = v11;
  LOBYTE(v11) = *(_BYTE *)(a1 + 49);
  *(_BYTE *)(a1 + 49) = v10;
  LOWORD(v10) = *(_WORD *)(result + 50);
  *(_BYTE *)(result + 49) = v11;
  LOWORD(v11) = *(_WORD *)(a1 + 50);
  *(_WORD *)(a1 + 50) = v10;
  *(_WORD *)(result + 50) = v11;
  LODWORD(v11) = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(result + 52);
  v12 = *(_QWORD *)(result + 56);
  *(_DWORD *)(result + 52) = v11;
  v13 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = v12;
  LOBYTE(v12) = *(_BYTE *)(result + 64);
  *(_QWORD *)(result + 56) = v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 64);
  *(_BYTE *)(a1 + 64) = v12;
  LOBYTE(v12) = *(_BYTE *)(result + 65);
  *(_BYTE *)(result + 64) = v13;
  LOBYTE(v13) = *(_BYTE *)(a1 + 65);
  *(_BYTE *)(a1 + 65) = v12;
  LOWORD(v12) = *(_WORD *)(result + 66);
  *(_BYTE *)(result + 65) = v13;
  LOWORD(v13) = *(_WORD *)(a1 + 66);
  *(_WORD *)(a1 + 66) = v12;
  LODWORD(v12) = *(_DWORD *)(result + 68);
  *(_WORD *)(result + 66) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a1 + 68) = v12;
  v14 = *(_QWORD *)(result + 72);
  *(_DWORD *)(result + 68) = v13;
  v15 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v14;
  LODWORD(v14) = *(_DWORD *)result;
  *(_QWORD *)(result + 72) = v15;
  LODWORD(v15) = *(_DWORD *)a1;
  *(_DWORD *)a1 = v14;
  *(_DWORD *)result = v15;
  v16 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(result + 24);
  LODWORD(v14) = *(_DWORD *)(result + 4);
  *(_QWORD *)(result + 24) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = v14;
  *(_DWORD *)(result + 4) = v16;
  return result;
}
