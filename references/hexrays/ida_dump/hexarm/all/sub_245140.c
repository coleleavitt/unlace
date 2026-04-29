__int64 __fastcall sub_245140(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx

  v2 = j__qalloc_or_throw(64);
  *(_QWORD *)(v2 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)v2 = -1;
  *(_QWORD *)(v2 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  v3 = *a1;
  *a1 = -1;
  v4 = *(_DWORD *)(v2 + 8);
  *(_QWORD *)v2 = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v4;
  v5 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v2 + 8) = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v5;
  v6 = *(_QWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 12) = v3;
  v7 = a1[3];
  a1[3] = v6;
  v8 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 24) = v7;
  v9 = a1[4];
  a1[4] = v8;
  v10 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 32) = v9;
  v11 = a1[5];
  a1[5] = v10;
  v12 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v2 + 40) = v11;
  v13 = a1[6];
  a1[6] = v12;
  LODWORD(v12) = *(_DWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 48) = v13;
  LODWORD(v13) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a1 + 14) = v12;
  *(_DWORD *)(v2 + 56) = v13;
  *((_DWORD *)a1 + 2) = 48;
  v14 = *(_QWORD *)v2;
  a1[3] = v2;
  *a1 = v14;
  return copy_tinfo_t(a1 + 6, a2);
}
