void __fastcall sub_8D4A30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  void *v9; // [rsp+0h] [rbp-78h]
  unsigned int v10; // [rsp+8h] [rbp-70h]
  char v11; // [rsp+Ch] [rbp-6Ch]
  int v12; // [rsp+10h] [rbp-68h]
  _BYTE v13[88]; // [rsp+20h] [rbp-58h] BYREF

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
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v13, v6);
  sub_A1A5E0(v5, 56);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v7 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v9;
  *(_BYTE *)(v7 + 12) = v11;
  *(_DWORD *)(v7 + 16) = v12;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v8, v13);
  sub_A1C0C0(v13);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

