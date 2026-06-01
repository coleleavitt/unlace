__int64 __fastcall sub_9B2B10(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v9; // [rsp+0h] [rbp-78h]
  unsigned int v10; // [rsp+8h] [rbp-70h]
  char v11; // [rsp+Ch] [rbp-6Ch]
  int v12; // [rsp+10h] [rbp-68h]
  _BYTE v13[88]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v13, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v10 = v5;
  v9 = *(void **)v4;
  v11 = *(_BYTE *)(v4 + 12);
  v12 = *(_DWORD *)(v4 + 16);
  sub_A1A5E0(v3, 24);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v6, v13);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v7 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v9;
  *(_BYTE *)(v7 + 12) = v11;
  *(_DWORD *)(v7 + 16) = v12;
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return sub_A1C0C0(v13);
}

