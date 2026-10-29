__int64 __fastcall sub_9E10B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v9; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-80h]
  char v11; // [rsp+Ch] [rbp-7Ch]
  int v12; // [rsp+10h] [rbp-78h]
  _BYTE v13[104]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  v9 = *(void **)v3;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v11 = v4;
  v12 = v3;
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v13, v6);
  sub_A1A5E0(v5, 56);
  v7 = sub_959AC0(a1, a2, (__int64)&v9, (__int64)v13, 1);
  sub_A1C0C0(v13);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return v7;
}

