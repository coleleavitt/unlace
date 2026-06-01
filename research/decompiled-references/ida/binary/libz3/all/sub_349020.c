__int64 __fastcall sub_349020(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rax
  char v7; // cl
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rax
  char v11; // cl
  int v12; // ecx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = *a1;
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    *a1 = 0;
    *a1 = *a2;
    *a2 = 0;
  }
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a1 + 4);
  *((_DWORD *)a1 + 4) = *((_DWORD *)a2 + 4);
  v5 = a2[3];
  *((_DWORD *)a2 + 4) = v4;
  v6 = a1[3];
  a1[3] = v5;
  v7 = *((_BYTE *)a2 + 20);
  a2[3] = v6;
  LOBYTE(v5) = *((_BYTE *)a1 + 20);
  *((_BYTE *)a1 + 20) = v7 & 2 | v5 & 0xFD;
  LOBYTE(v6) = v5 & 2 | *((_BYTE *)a2 + 20) & 0xFD;
  *((_BYTE *)a2 + 20) = v6;
  v8 = *((_BYTE *)a1 + 20);
  *((_BYTE *)a1 + 20) = v6 & 1 | v8 & 0xFE;
  LODWORD(v5) = *((_DWORD *)a2 + 8);
  *((_BYTE *)a2 + 20) = v8 & 1 | *((_BYTE *)a2 + 20) & 0xFE;
  LODWORD(v6) = *((_DWORD *)a1 + 8);
  *((_DWORD *)a1 + 8) = v5;
  v9 = a2[5];
  *((_DWORD *)a2 + 8) = v6;
  v10 = a1[5];
  a1[5] = v9;
  v11 = *((_BYTE *)a2 + 36);
  a2[5] = v10;
  LOBYTE(v9) = *((_BYTE *)a1 + 36);
  *((_BYTE *)a1 + 36) = v11 & 2 | v9 & 0xFD;
  LOBYTE(v10) = v9 & 2 | *((_BYTE *)a2 + 36) & 0xFD;
  *((_BYTE *)a2 + 36) = v10;
  v12 = *((_BYTE *)a1 + 36) & 1;
  *((_BYTE *)a1 + 36) = v10 & 1 | *((_BYTE *)a1 + 36) & 0xFE;
  result = v12 | *((_BYTE *)a2 + 36) & 0xFEu;
  *((_BYTE *)a2 + 36) = v12 | *((_BYTE *)a2 + 36) & 0xFE;
  return result;
}

