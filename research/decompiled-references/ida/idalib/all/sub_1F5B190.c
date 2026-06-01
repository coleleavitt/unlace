__int64 __fastcall sub_1F5B190(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  bool v8; // zf
  int v9; // r12d
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _DWORD *v19; // rbp

  sub_1F58FC0((__int64 *)a1, a2);
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5);
  *(_DWORD *)(a1 + 20) = 6;
  *(_BYTE *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 16) = v6;
  *(_WORD *)(a2 + 2) = *(_WORD *)(a2 + 2) & 0xFE07 | (8 * (v6 & 0x3F));
  v7 = *(_DWORD *)(a1 + 20);
  v8 = (*(_DWORD *)(a1 + 16) & (1 << v7)) == 0;
  v9 = *(_DWORD *)(a1 + 16) & (1 << v7);
  *(_DWORD *)(a1 + 20) = v7 + 1;
  *(_BYTE *)(a2 + 3) = (2 * !v8) | *(_BYTE *)(a2 + 3) & 0xFD;
  v10 = *(_DWORD *)(a1 + 20);
  v8 = ((1 << v10) & *(_DWORD *)(a1 + 16)) == 0;
  *(_DWORD *)(a1 + 20) = v10 + 1;
  *(_BYTE *)(a2 + 3) = (4 * !v8) | *(_BYTE *)(a2 + 3) & 0xFB;
  v11 = *(_QWORD *)a1;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v13 = *(unsigned int *)(v12 + 13072);
  LODWORD(v6) = *(_DWORD *)(v12 + 13072) - 2;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8 * v13 - 8);
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 13064) + 8LL * (unsigned int)(v13 - 1) - 8);
  *(_DWORD *)(v12 + 13072) = v6;
  *(_QWORD *)(a2 + 24) = v14;
  result = sub_1EE7490(v11);
  *(_DWORD *)(a2 + 4) = result;
  if ( v9 )
  {
    v16 = *(_QWORD *)a1;
    v17 = *(unsigned int *)(*(_QWORD *)a1 + 24LL);
    *(_DWORD *)(v16 + 24) = v17 + 1;
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v17);
    result = 48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x77 )
      result = 32;
    v19 = (_DWORD *)(result + a2);
    *v19 = HIDWORD(v18);
    v19[1] = v18;
  }
  return result;
}
