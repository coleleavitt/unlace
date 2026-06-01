_DWORD *__fastcall sub_B16010(int *a1, _DWORD *a2)
{
  _DWORD *result; // rax
  int v3; // ecx
  int v5; // esi
  int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // rcx
  char v9; // di
  __int64 v10; // rsi
  __int64 v11; // rcx
  char v12; // di
  char v13; // di

  result = a2;
  v3 = *a1;
  *a1 = *a2;
  v5 = a2[2];
  *result = v3;
  v6 = a1[2];
  a1[2] = v5;
  v7 = *((_QWORD *)result + 2);
  result[2] = v6;
  v8 = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 2) = v7;
  *((_QWORD *)result + 2) = v8;
  LOBYTE(v7) = *((_BYTE *)a1 + 12);
  *((_BYTE *)a1 + 12) = result[3] & 2 | v7 & 0xFD;
  LOBYTE(v8) = v7 & 2 | result[3] & 0xFD;
  *((_BYTE *)result + 12) = v8;
  v9 = *((_BYTE *)a1 + 12);
  *((_BYTE *)a1 + 12) = v8 & 1 | v9 & 0xFE;
  LODWORD(v7) = result[6];
  *((_BYTE *)result + 12) = v9 & 1 | result[3] & 0xFE;
  LODWORD(v8) = a1[6];
  a1[6] = v7;
  v10 = *((_QWORD *)result + 4);
  result[6] = v8;
  v11 = *((_QWORD *)a1 + 4);
  *((_QWORD *)a1 + 4) = v10;
  v12 = *((_BYTE *)result + 28);
  *((_QWORD *)result + 4) = v11;
  LOBYTE(v10) = *((_BYTE *)a1 + 28);
  *((_BYTE *)a1 + 28) = v12 & 2 | v10 & 0xFD;
  LOBYTE(v11) = v10 & 2 | result[7] & 0xFD;
  *((_BYTE *)result + 28) = v11;
  v13 = a1[7] & 1;
  *((_BYTE *)a1 + 28) = v11 & 1 | a1[7] & 0xFE;
  *((_BYTE *)result + 28) = v13 | result[7] & 0xFE;
  return result;
}

