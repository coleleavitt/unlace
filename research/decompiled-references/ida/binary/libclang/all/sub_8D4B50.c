__int64 __fastcall sub_8D4B50(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r12
  __int64 v8; // rbx
  void *v10; // [rsp+0h] [rbp-98h]
  unsigned int v11; // [rsp+8h] [rbp-90h]
  char v12; // [rsp+Ch] [rbp-8Ch]
  int v13; // [rsp+10h] [rbp-88h]
  _BYTE v14[56]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+60h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v14, v3);
  v15 = *(_QWORD *)(v3 + 56);
  v16 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v11 = v6;
  v10 = *(void **)v5;
  v12 = *(_BYTE *)(v5 + 12);
  v13 = *(_DWORD *)(v5 + 16);
  sub_A1A5E0(v4, 24);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v7, v14);
  *(_QWORD *)(v7 + 56) = v15;
  *(_DWORD *)(v7 + 64) = v16;
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_DWORD *)(v8 + 8) = v11;
  if ( v11 > 0x40 )
    sub_2585B30(v8);
  else
    *(_QWORD *)v8 = v10;
  *(_BYTE *)(v8 + 12) = v12;
  *(_DWORD *)(v8 + 16) = v13;
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return sub_A1C0C0(v14);
}

