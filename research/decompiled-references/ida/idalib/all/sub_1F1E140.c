__int64 __fastcall sub_1F1E140(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // r12
  bool v6; // bp
  __int64 *v7; // r15
  __int64 v8; // r14
  int v9; // eax
  bool v11; // [rsp+Eh] [rbp-3Ah]
  bool v12; // [rsp+Fh] [rbp-39h]

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(_DWORD *)(a2 + 24);
  v11 = *(_QWORD *)(v2 + 8 * v3) != 0;
  v5 = *(_QWORD *)(v2 + 8LL * (unsigned int)(v4 + 2));
  v12 = *(_QWORD *)(v2 + 8LL * (unsigned int)(v3 + 1)) != 0;
  *(_DWORD *)(a2 + 24) = v4 + 4;
  v6 = *(_QWORD *)(v2 + 8LL * (unsigned int)(v4 + 3)) != 0;
  v7 = sub_1F19370(a2);
  v8 = sub_1EEDED0(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (_QWORD *)(a2 + 32), (_DWORD *)(a2 + 24));
  v9 = sub_1EE7490(a2);
  *(_QWORD *)a1 = v8;
  *(_DWORD *)(a1 + 8) = v9;
  LOBYTE(v9) = *(_BYTE *)(a1 + 12);
  *(_QWORD *)(a1 + 16) = v7;
  *(_BYTE *)(a1 + 12) = (16 * v6) | (4 * (v5 & 3)) | (2 * v12) & 0xE3 | v11 & 0xE3 | v9 & 0xE0;
  return a1;
}
