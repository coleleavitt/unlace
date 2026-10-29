__int64 __fastcall sub_C8B000(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rax
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = &off_2B21778;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1488LL) = v1;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1512LL) = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 8);
  operator delete();
  *(_QWORD *)(v2 + 1456) = 0;
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 1464) = 0;
  *(_DWORD *)(v2 + 1472) = 0;
  *(_QWORD *)(v2 + 1456) = v3;
  LODWORD(v3) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(v2 + 1464) = v3;
  v4 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  LODWORD(v3) = *(_DWORD *)(v2 + 1468);
  *(_DWORD *)(v2 + 1468) = v4;
  v5 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 44) = v3;
  LODWORD(v3) = *(_DWORD *)(v2 + 1472);
  *(_DWORD *)(v2 + 1472) = v5;
  v6 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 48) = v3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1480LL) = v6;
  return operator delete();
}

