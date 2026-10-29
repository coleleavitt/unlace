void __fastcall sub_C8B380(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rax
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx

  v1 = a1[2];
  *a1 = &off_2B21778;
  *(_QWORD *)(a1[1] + 1488LL) = v1;
  *(_QWORD *)(a1[1] + 1512LL) = a1[3];
  v2 = a1[1];
  operator delete();
  *(_QWORD *)(v2 + 1456) = 0;
  v3 = a1[4];
  *(_QWORD *)(v2 + 1464) = 0;
  *(_DWORD *)(v2 + 1472) = 0;
  *(_QWORD *)(v2 + 1456) = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 10);
  a1[4] = 0;
  *(_DWORD *)(v2 + 1464) = v3;
  v4 = *((_DWORD *)a1 + 11);
  *((_DWORD *)a1 + 10) = 0;
  LODWORD(v3) = *(_DWORD *)(v2 + 1468);
  *(_DWORD *)(v2 + 1468) = v4;
  v5 = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 11) = v3;
  LODWORD(v3) = *(_DWORD *)(v2 + 1472);
  *(_DWORD *)(v2 + 1472) = v5;
  v6 = a1[7];
  *((_DWORD *)a1 + 12) = v3;
  *(_QWORD *)(a1[1] + 1480LL) = v6;
  operator delete();
  operator delete(a1, 0x40u);
}

