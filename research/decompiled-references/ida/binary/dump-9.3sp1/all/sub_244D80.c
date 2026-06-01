__int64 __fastcall sub_244D80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx

  v4 = j__qalloc_or_throw(64, a2, a3, a4);
  *(_QWORD *)(v4 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)v4 = -1;
  *(_QWORD *)(v4 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 56) = 0;
  v5 = *a1;
  *a1 = -1;
  v6 = *(_DWORD *)(v4 + 8);
  *(_QWORD *)v4 = v5;
  LODWORD(v5) = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 2) = v6;
  v7 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 8) = v5;
  LODWORD(v5) = *((_DWORD *)a1 + 3);
  *((_DWORD *)a1 + 3) = v7;
  v8 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 12) = v5;
  v9 = a1[3];
  a1[3] = v8;
  v10 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(v4 + 24) = v9;
  v11 = a1[4];
  a1[4] = v10;
  v12 = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(v4 + 32) = v11;
  v13 = a1[5];
  a1[5] = v12;
  v14 = *(_QWORD *)(v4 + 48);
  *(_QWORD *)(v4 + 40) = v13;
  v15 = a1[6];
  a1[6] = v14;
  LODWORD(v14) = *(_DWORD *)(v4 + 56);
  *(_QWORD *)(v4 + 48) = v15;
  LODWORD(v15) = *((_DWORD *)a1 + 14);
  *((_DWORD *)a1 + 14) = v14;
  *(_DWORD *)(v4 + 56) = v15;
  *((_DWORD *)a1 + 2) = 48;
  v16 = *(_QWORD *)v4;
  a1[3] = v4;
  *a1 = v16;
  return copy_tinfo_t();
}
