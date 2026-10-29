void __fastcall sub_8D4C90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // rbx
  void *v9; // [rsp+0h] [rbp-98h]
  unsigned int v10; // [rsp+8h] [rbp-90h]
  char v11; // [rsp+Ch] [rbp-8Ch]
  int v12; // [rsp+10h] [rbp-88h]
  _BYTE v13[56]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+60h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  v9 = *(void **)v3;
  v11 = *(_BYTE *)(v3 + 12);
  v12 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = sub_A1A5A0(v5, 72);
  sub_A1C070(v13, v6);
  v14 = *(_QWORD *)(v6 + 56);
  v15 = *(_DWORD *)(v6 + 64);
  sub_A1A5E0(v5, 72);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v7 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v9;
  *(_BYTE *)(v7 + 12) = v11;
  *(_DWORD *)(v7 + 16) = v12;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v8, v13);
  *(_QWORD *)(v8 + 56) = v14;
  *(_DWORD *)(v8 + 64) = v15;
  sub_A1C0C0(v13);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

