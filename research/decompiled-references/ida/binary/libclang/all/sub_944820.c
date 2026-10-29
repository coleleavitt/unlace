__int64 __fastcall sub_944820(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  void *v10; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-C0h]
  char v12; // [rsp+Ch] [rbp-BCh]
  int v13; // [rsp+10h] [rbp-B8h]
  _BYTE v14[48]; // [rsp+20h] [rbp-A8h] BYREF
  int v15; // [rsp+50h] [rbp-78h]
  _BYTE v16[104]; // [rsp+60h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v11 = v4;
  v10 = *(void **)v3;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v12 = v4;
  v13 = v3;
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v14, v6);
  sub_A1A5E0(v5, 56);
  if ( !v15 )
  {
    sub_8E54E0((__int64)v16, (__int64)v14);
    sub_A1C200(v14, v16, v9);
    sub_A1C0C0(v16);
  }
  v7 = sub_944110(a1, a2, (__int64)&v10, (__int64)v14, 1);
  sub_A1C0C0(v14);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return v7;
}

