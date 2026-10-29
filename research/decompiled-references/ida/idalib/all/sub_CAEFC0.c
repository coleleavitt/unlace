void __fastcall sub_CAEFC0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rax
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx

  v1 = a1[2];
  *a1 = &off_2B4B638;
  *(_QWORD *)(a1[1] + 712LL) = v1;
  *(_QWORD *)(a1[1] + 736LL) = a1[3];
  v2 = a1[1];
  operator delete(*(_QWORD *)(v2 + 680), 16LL * *(unsigned int *)(v2 + 696), 8);
  *(_QWORD *)(v2 + 680) = 0;
  v3 = a1[4];
  *(_QWORD *)(v2 + 688) = 0;
  *(_DWORD *)(v2 + 696) = 0;
  *(_QWORD *)(v2 + 680) = v3;
  LODWORD(v3) = *((_DWORD *)a1 + 10);
  a1[4] = 0;
  *(_DWORD *)(v2 + 688) = v3;
  v4 = *((_DWORD *)a1 + 11);
  *((_DWORD *)a1 + 10) = 0;
  LODWORD(v3) = *(_DWORD *)(v2 + 692);
  *(_DWORD *)(v2 + 692) = v4;
  v5 = *((_DWORD *)a1 + 12);
  *((_DWORD *)a1 + 11) = v3;
  LODWORD(v3) = *(_DWORD *)(v2 + 696);
  *(_DWORD *)(v2 + 696) = v5;
  v6 = a1[7];
  *((_DWORD *)a1 + 12) = v3;
  *(_QWORD *)(a1[1] + 704LL) = v6;
  operator delete(a1[4], 16LL * *((unsigned int *)a1 + 12), 8);
  operator delete(a1, 0x40u);
}
