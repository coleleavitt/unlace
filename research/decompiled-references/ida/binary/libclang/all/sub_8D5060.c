void __fastcall sub_8D5060(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rbp
  __int64 v9; // rdi
  void *v10; // [rsp+0h] [rbp-48h]
  unsigned int v11; // [rsp+8h] [rbp-40h]
  void *v12; // [rsp+10h] [rbp-38h]
  unsigned int v13; // [rsp+18h] [rbp-30h]
  char v14; // [rsp+1Ch] [rbp-2Ch]
  int v15; // [rsp+20h] [rbp-28h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v13 = v4;
  v12 = *(void **)v3;
  v14 = *(_BYTE *)(v3 + 12);
  v15 = *(_DWORD *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 568);
  v6 = sub_A1A5A0(v5, 16);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v11 = v7;
  v10 = *(void **)v6;
  sub_A1A5E0(v5, 16);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v8 + 8) = v13;
  if ( v13 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v12;
  *(_BYTE *)(v8 + 12) = v14;
  *(_DWORD *)(v8 + 16) = v15;
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v9 + 8) = v11;
  if ( v11 > 0x40 )
    sub_2585B30(v9);
  else
    *(_QWORD *)v9 = v10;
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  if ( v13 > 0x40 )
  {
    if ( v12 )
      operator delete[](v12);
  }
}

