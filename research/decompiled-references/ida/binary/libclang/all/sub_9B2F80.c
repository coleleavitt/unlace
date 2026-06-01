void __fastcall sub_9B2F80(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rbx
  void *v8; // [rsp+0h] [rbp-98h]
  unsigned int v9; // [rsp+8h] [rbp-90h]
  char v10; // [rsp+Ch] [rbp-8Ch]
  int v11; // [rsp+10h] [rbp-88h]
  _BYTE v12[56]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]

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
  v5 = sub_A1A5A0(v4, 72);
  sub_A1C070(v12, v5);
  v13 = *(_QWORD *)(v5 + 56);
  v14 = *(_DWORD *)(v5 + 64);
  sub_A1A5E0(v4, 72);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_DWORD *)(v6 + 8) = v9;
  if ( v9 > 0x40 )
    sub_2585B30(v6);
  else
    *(_QWORD *)v6 = v8;
  *(_BYTE *)(v6 + 12) = v10;
  *(_DWORD *)(v6 + 16) = v11;
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 72);
  sub_A1BFE0(v7, v12);
  *(_QWORD *)(v7 + 56) = v13;
  *(_DWORD *)(v7 + 64) = v14;
  sub_A1C0C0(v12);
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

