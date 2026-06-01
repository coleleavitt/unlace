void __fastcall sub_9B2D30(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  void *v8; // [rsp+0h] [rbp-78h]
  unsigned int v9; // [rsp+8h] [rbp-70h]
  char v10; // [rsp+Ch] [rbp-6Ch]
  int v11; // [rsp+10h] [rbp-68h]
  _BYTE v12[88]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  v9 = v3;
  v8 = *(void **)v2;
  v10 = *(_BYTE *)(v2 + 12);
  v11 = *(_DWORD *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v12, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v6 + 8) = v9;
  if ( v9 > 0x40 )
    sub_2585B30(v6);
  else
    *(_QWORD *)v6 = v8;
  *(_BYTE *)(v6 + 12) = v10;
  *(_DWORD *)(v6 + 16) = v11;
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v7, v12);
  sub_A1C0C0(v12);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

