__int64 __fastcall sub_C8B0F0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rax
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = &off_2B21698;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 712LL) = v1;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 736LL) = *(_QWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 8);
  operator delete();
  *(_QWORD *)(v2 + 680) = 0;
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 688) = 0;
  *(_DWORD *)(v2 + 696) = 0;
  *(_QWORD *)(v2 + 680) = v3;
  LODWORD(v3) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(v2 + 688) = v3;
  v4 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  LODWORD(v3) = *(_DWORD *)(v2 + 692);
  *(_DWORD *)(v2 + 692) = v4;
  v5 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 44) = v3;
  LODWORD(v3) = *(_DWORD *)(v2 + 696);
  *(_DWORD *)(v2 + 696) = v5;
  v6 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 48) = v3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 704LL) = v6;
  return operator delete();
}

