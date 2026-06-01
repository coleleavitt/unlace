void __fastcall sub_8D22C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // [rsp+0h] [rbp-68h]
  unsigned int v11; // [rsp+8h] [rbp-60h]
  _BYTE v12[88]; // [rsp+10h] [rbp-58h] BYREF

  *(_QWORD *)(a1 + 800) = a2;
  v3 = *(_QWORD *)(a1 + 568);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v11 = v5;
  v10 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = sub_A1A5A0(v6, 56);
  sub_A1C070(v12, v7);
  sub_A1A5E0(v6, 56);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v8 + 8) = v11;
  if ( v11 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v10;
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v9, v12);
  sub_A1C0C0(v12);
  if ( v11 > 0x40 )
  {
    if ( v10 )
      operator delete[](v10);
  }
}

