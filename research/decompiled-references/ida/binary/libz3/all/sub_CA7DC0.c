_DWORD *__fastcall sub_CA7DC0(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *result; // rax
  _DWORD *v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  int v7; // edi
  int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rsi
  char v11; // r10
  char v12; // r10
  __int64 v13; // rdi
  __int64 v14; // rsi
  char v15; // r10
  char v16; // r10
  __int64 v17; // rdx

  result = a3;
  v4 = a1;
  v5 = a2 - (_QWORD)a1;
  v6 = 0xCCCCCCCCCCCCCCCDLL * ((a2 - (__int64)a1) >> 3);
  if ( a2 - (__int64)a1 > 0 )
  {
    do
    {
      v7 = *v4;
      v8 = *a3;
      v4 += 10;
      a3 += 10;
      *(a3 - 10) = v7;
      v9 = *((_QWORD *)v4 - 4);
      *(v4 - 10) = v8;
      v10 = *((_QWORD *)a3 - 4);
      *((_QWORD *)a3 - 4) = v9;
      v11 = *((_BYTE *)v4 - 36);
      *((_QWORD *)v4 - 4) = v10;
      LOBYTE(v10) = *((_BYTE *)a3 - 36);
      *((_BYTE *)a3 - 36) = v11 & 2 | v10 & 0xFD;
      LOBYTE(v10) = v10 & 2 | *(_BYTE *)(v4 - 9) & 0xFD;
      *((_BYTE *)v4 - 36) = v10;
      v12 = *((_BYTE *)a3 - 36);
      *((_BYTE *)a3 - 36) = v10 & 1 | v12 & 0xFE;
      LODWORD(v9) = *(v4 - 6);
      *((_BYTE *)v4 - 36) = v12 & 1 | *(_BYTE *)(v4 - 9) & 0xFE;
      LODWORD(v10) = *(a3 - 6);
      *(a3 - 6) = v9;
      v13 = *((_QWORD *)v4 - 2);
      *(v4 - 6) = v10;
      v14 = *((_QWORD *)a3 - 2);
      *((_QWORD *)a3 - 2) = v13;
      v15 = *((_BYTE *)v4 - 20);
      *((_QWORD *)v4 - 2) = v14;
      LOBYTE(v14) = *((_BYTE *)a3 - 20);
      *((_BYTE *)a3 - 20) = v15 & 2 | v14 & 0xFD;
      LOBYTE(v14) = v14 & 2 | *(_BYTE *)(v4 - 5) & 0xFD;
      *((_BYTE *)v4 - 20) = v14;
      v16 = *(_BYTE *)(a3 - 5) & 1;
      *((_BYTE *)a3 - 20) = v14 & 1 | *(_BYTE *)(a3 - 5) & 0xFE;
      *((_BYTE *)v4 - 20) = v16 | *(_BYTE *)(v4 - 5) & 0xFE;
      *((_QWORD *)a3 - 1) = *((_QWORD *)v4 - 1);
      --v6;
    }
    while ( v6 );
    v17 = v5 - 40;
    if ( !v5 )
      v17 = 0;
    return (_DWORD *)((char *)result + v17 + 40);
  }
  return result;
}

