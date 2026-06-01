__int64 __fastcall sub_5D0780(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx

  v2 = a1[16];
  v3 = a1[13];
  v4 = *(_QWORD *)(v2 + 120);
  *(_QWORD *)(v2 + 120) = *(_QWORD *)(v3 + 120);
  v5 = *(_DWORD *)(v3 + 112);
  *(_QWORD *)(v3 + 120) = v4;
  LODWORD(v4) = *(_DWORD *)(v2 + 112);
  *(_DWORD *)(v2 + 112) = v5;
  *(_DWORD *)(v3 + 112) = v4;
  *(_BYTE *)(v2 + 186) |= 0xAu;
  *(_QWORD *)(v2 + 40) |= 0x800uLL;
  v6 = a1[13];
  *(_QWORD *)(v2 + 48) = v6;
  *(_DWORD *)(v2 + 188) = *(_DWORD *)(v6 + 188);
  sub_5D05F0(a1, v2);
  v7 = getinf(57);
  v8 = a1[15];
  if ( (v7 & 0xF) != 6 && *(_BYTE *)(v2 + 185) && (*(_BYTE *)(v8 + 186) & 0xF) == 0xA )
    return set_qerrno(1288, v2);
  *(_BYTE *)(v8 + 185) = *(_BYTE *)(a1[13] + 185LL);
  v9 = a1[15];
  if ( !v9 )
    v9 = a1[13];
  sub_5C7B30(v9, (_QWORD *)a1[16]);
  v10 = a1[55];
  v11 = *(_QWORD *)(a1[54] + 8 * v10 - 8);
  if ( v10 )
    a1[55] = v10 - 1;
  a1[16] = v11;
  return 0;
}

