void __fastcall sub_8D3BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int16 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbx
  void *v8; // [rsp+0h] [rbp-38h]
  unsigned int v9; // [rsp+8h] [rbp-30h]
  char v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+10h] [rbp-28h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_WORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v9 = v6;
  v8 = *(void **)v5;
  v10 = *(_BYTE *)(v5 + 12);
  v11 = *(_DWORD *)(v5 + 16);
  sub_A1A5E0(v4, 24);
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v3;
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v7 + 8) = v9;
  if ( v9 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v8;
  *(_BYTE *)(v7 + 12) = v10;
  *(_DWORD *)(v7 + 16) = v11;
  if ( v9 > 0x40 )
  {
    if ( v8 )
      operator delete[](v8);
  }
}

