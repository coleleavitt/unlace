void __fastcall sub_835320(__int64 a1, __int64 *a2)
{
  int v3; // r12d
  __int64 v4; // r13
  char v5; // bp
  void *v6; // rdi

  *(_DWORD *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 4) &= ~1u;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 20) = 1;
  *(_DWORD *)a1 = 2;
  v3 = *((_DWORD *)a2 + 2);
  v4 = *a2;
  v5 = *((_BYTE *)a2 + 12);
  *((_DWORD *)a2 + 2) = 0;
  if ( *(_DWORD *)(a1 + 16) > 0x40u )
  {
    v6 = *(void **)(a1 + 8);
    if ( v6 )
      operator delete[](v6);
  }
  *(_QWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 16) = v3;
  *(_BYTE *)(a1 + 20) = v5;
}

