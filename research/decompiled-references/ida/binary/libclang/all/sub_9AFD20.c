__int64 __fastcall sub_9AFD20(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rdi
  void *v9; // [rsp+0h] [rbp-68h]
  unsigned int v10; // [rsp+8h] [rbp-60h]
  _BYTE v11[88]; // [rsp+10h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v11, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 16);
  v5 = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v10 = v5;
  v9 = *(void **)v4;
  sub_A1A5E0(v3, 16);
  v6 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v6, v11);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
  *(_DWORD *)(v7 + 8) = v10;
  if ( v10 > 0x40 )
    sub_2585B30(v7);
  else
    *(_QWORD *)v7 = v9;
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return sub_A1C0C0(v11);
}

