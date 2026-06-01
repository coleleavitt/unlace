__int64 __fastcall sub_751900(int *a1, int *a2)
{
  int v3; // ecx
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
  __int64 result; // rax

  v3 = *a1;
  *a1 = *a2;
  v5 = *((_QWORD *)a2 + 1);
  *a2 = v3;
  v6 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v5;
  *((_QWORD *)a2 + 1) = v6;
  LOBYTE(v5) = *((_BYTE *)a1 + 4);
  *((_BYTE *)a1 + 4) = a2[1] & 2 | v5 & 0xFD;
  LOBYTE(v6) = v5 & 2 | a2[1] & 0xFD;
  *((_BYTE *)a2 + 4) = v6;
  v7 = *((_BYTE *)a1 + 4);
  *((_BYTE *)a1 + 4) = v6 & 1 | v7 & 0xFE;
  LODWORD(v5) = a2[4];
  *((_BYTE *)a2 + 4) = v7 & 1 | a2[1] & 0xFE;
  LODWORD(v6) = a1[4];
  a1[4] = v5;
  v8 = *((_QWORD *)a2 + 3);
  a2[4] = v6;
  v9 = *((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 3) = v8;
  v10 = *((_BYTE *)a2 + 20);
  *((_QWORD *)a2 + 3) = v9;
  LOBYTE(v9) = *((_BYTE *)a1 + 20);
  *((_BYTE *)a1 + 20) = v10 & 2 | v9 & 0xFD;
  LOBYTE(v9) = v9 & 2 | a2[5] & 0xFD;
  *((_BYTE *)a2 + 20) = v9;
  v11 = *((_BYTE *)a1 + 20);
  *((_BYTE *)a1 + 20) = v9 & 1 | v11 & 0xFE;
  LODWORD(v8) = a2[8];
  *((_BYTE *)a2 + 20) = v11 & 1 | a2[5] & 0xFE;
  LODWORD(v9) = a1[8];
  a1[8] = v8;
  v12 = *((_QWORD *)a2 + 5);
  a2[8] = v9;
  v13 = *((_QWORD *)a1 + 5);
  *((_QWORD *)a1 + 5) = v12;
  v14 = *((_BYTE *)a2 + 36);
  *((_QWORD *)a2 + 5) = v13;
  LOBYTE(v13) = *((_BYTE *)a1 + 36);
  *((_BYTE *)a1 + 36) = v14 & 2 | v13 & 0xFD;
  LOBYTE(v13) = v13 & 2 | a2[9] & 0xFD;
  *((_BYTE *)a2 + 36) = v13;
  v15 = a1[9] & 1;
  *((_BYTE *)a1 + 36) = v13 & 1 | a1[9] & 0xFE;
  LODWORD(v12) = a2[12];
  *((_BYTE *)a2 + 36) = v15 | a2[9] & 0xFE;
  LODWORD(v13) = a1[12];
  a1[12] = v12;
  v16 = *((_QWORD *)a2 + 7);
  a2[12] = v13;
  v17 = *((_QWORD *)a1 + 7);
  *((_QWORD *)a1 + 7) = v16;
  v18 = *((_BYTE *)a2 + 52);
  *((_QWORD *)a2 + 7) = v17;
  LOBYTE(v17) = *((_BYTE *)a1 + 52);
  *((_BYTE *)a1 + 52) = v18 & 2 | v17 & 0xFD;
  LOBYTE(v17) = v17 & 2 | a2[13] & 0xFD;
  *((_BYTE *)a2 + 52) = v17;
  v19 = a1[13] & 1;
  *((_BYTE *)a1 + 52) = v17 & 1 | a1[13] & 0xFE;
  *((_BYTE *)a2 + 52) = v19 | a2[13] & 0xFE;
  LODWORD(v17) = a2[16];
  result = *((unsigned __int8 *)a2 + 68);
  a1[16] = v17;
  *((_BYTE *)a1 + 68) = result;
  return result;
}

