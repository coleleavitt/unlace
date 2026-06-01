void __fastcall sub_2FFBA0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 (__fastcall *v4)(); // rax
  void *v5; // r14
  char v6; // dl
  int v7; // edi
  char v8; // si
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // r8
  __int64 v13; // rax
  void *v14; // rbx
  int v15; // [rsp+0h] [rbp-48h] BYREF
  char v16; // [rsp+4h] [rbp-44h]
  __int64 v17; // [rsp+8h] [rbp-40h]
  int v18; // [rsp+10h] [rbp-38h] BYREF
  char v19; // [rsp+14h] [rbp-34h]
  __int64 v20; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    sub_2FF6B0(v2);
    v3 = *(_QWORD *)(a1 + 24);
    v4 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 32LL);
    if ( v4 == sub_304180 )
    {
      v16 &= 0xFCu;
      v19 &= 0xFCu;
      v15 = 0;
      v5 = qword_1C7F2C0;
      v17 = 0;
      v18 = 1;
      v20 = 0;
      if ( (*(_BYTE *)(v3 + 108) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v15, v3 + 104);
      else
        v15 = *(_DWORD *)(v3 + 104);
      if ( (*(_BYTE *)(v3 + 124) & 1) != 0 )
      {
        sub_182C690(v5, &v18, v3 + 120);
        v6 = v19;
        v7 = v18;
        v8 = v19 & 1;
      }
      else
      {
        v6 = v19;
        v7 = *(_DWORD *)(v3 + 120);
        v8 = 0;
      }
    }
    else
    {
      ((void (__fastcall *)(int *, _QWORD))v4)(&v15, *(_QWORD *)(a1 + 24));
      v6 = v19;
      v7 = v18;
      v8 = v19 & 1;
    }
    v9 = v15;
    v15 = *(_DWORD *)(a1 + 112);
    v10 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = v9;
    v11 = v17;
    v17 = v10;
    LOBYTE(v10) = *(_BYTE *)(a1 + 116);
    *(_QWORD *)(a1 + 120) = v11;
    LOBYTE(v11) = v16 & 1;
    v12 = v10 & 0xFC | v16 & 2;
    v16 = v10 & 1 | v16 & 0xFC | v10 & 2;
    LODWORD(v10) = *(_DWORD *)(a1 + 128);
    *(_BYTE *)(a1 + 116) = v12 | v11;
    v18 = v10;
    v13 = *(_QWORD *)(a1 + 136);
    *(_QWORD *)(a1 + 136) = v20;
    v20 = v13;
    LOBYTE(v13) = *(_BYTE *)(a1 + 132);
    *(_DWORD *)(a1 + 128) = v7;
    v19 = v6 & 0xFC | v13 & 3;
    *(_BYTE *)(a1 + 132) = v13 & 0xFC | v8 | v6 & 2;
    v14 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v15);
    sub_182CBA0(v14, &v18);
  }
}

