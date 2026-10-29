__int64 __fastcall sub_1FC2690(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // eax
  char v7; // cl
  int v8; // eax
  unsigned __int8 v9; // dl
  __int64 v10; // rsi
  int v11; // edx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  sub_1FC23C0((unsigned int *)(a1 + 232));
  v4 = *(_DWORD *)(a1 + 236);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 232) | (((*(_DWORD *)a2 >> 14) & 0x1F) << *(_DWORD *)(a1 + 236));
  *(_DWORD *)(a1 + 236) = v4 + 5;
  *(_DWORD *)(a1 + 232) = v6;
  v7 = v4 + 7;
  v8 = v6 | (((*(_BYTE *)(a2 + 1) >> 1) & 3) << (v4 + 5));
  *(_DWORD *)(a1 + 236) = v4 + 7;
  *(_DWORD *)(a1 + 232) = v8;
  v9 = *(_BYTE *)(a2 + 1);
  *(_DWORD *)(a1 + 236) = v4 + 10;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = ((v9 >> 3) & 7) << v7;
  v12 = *(_QWORD **)(a1 + 24);
  *(_DWORD *)(a1 + 232) = v11 | v8;
  return sub_1F85840(v5, v10, *(_QWORD *)(a2 + 8), v12, v13, v14);
}
