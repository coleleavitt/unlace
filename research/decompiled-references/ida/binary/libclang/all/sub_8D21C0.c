__int64 __fastcall sub_8D21C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdi
  void *v10; // [rsp+0h] [rbp-68h]
  unsigned int v11; // [rsp+8h] [rbp-60h]
  _BYTE v12[88]; // [rsp+10h] [rbp-58h] BYREF

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 56);
  sub_A1C070(v12, v3);
  sub_A1A5E0(v2, 56);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v11 = v6;
  v10 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
  sub_A1BFE0(v7, v12);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 16);
  *(_DWORD *)(v8 + 8) = v11;
  if ( v11 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v10;
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return sub_A1C0C0(v12);
}

