void __fastcall sub_8D3EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  char v6; // r12
  __int64 v7; // rbp
  void *v8; // [rsp+0h] [rbp-38h]
  unsigned int v9; // [rsp+8h] [rbp-30h]
  char v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+10h] [rbp-28h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v9 = v4;
  v8 = *(void **)v3;
  v10 = *(_BYTE *)(v3 + 12);
  v11 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = *(_BYTE *)sub_A1A5A0(v5, 8);
  sub_A1A5E0(v5, 8);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v7 + 8) = v9;
  if ( v9 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v8;
  *(_BYTE *)(v7 + 12) = v10;
  *(_DWORD *)(v7 + 16) = v11;
  *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v6;
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

