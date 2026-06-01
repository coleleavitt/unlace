void __fastcall sub_9AFB40(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  void *v9; // [rsp+0h] [rbp-68h]
  unsigned int v10; // [rsp+8h] [rbp-60h]
  _BYTE v11[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v10 = v4;
  v9 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v11, v6);
  sub_A1A5E0(v5, 56);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v7 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v9;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v8, v11);
  sub_A1C0C0(v11);
  if ( v10 > 0x40 )
  {
    if ( v9 )
      operator delete[](v9);
  }
}

