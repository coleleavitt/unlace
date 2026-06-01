__int64 __fastcall sub_8D27A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  __int64 v8; // rdi
  void *v10; // [rsp+0h] [rbp-88h]
  unsigned int v11; // [rsp+8h] [rbp-80h]
  _BYTE v12[56]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+50h] [rbp-38h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 72);
  sub_A1C070(v12, v3);
  v13 = *(_QWORD *)(v3 + 56);
  v14 = *(_DWORD *)(v3 + 64);
  sub_A1A5E0(v2, 72);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 16);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v11 = v6;
  v10 = *(void **)v5;
  sub_A1A5E0(v4, 16);
  v7 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 72);
  sub_A1BFE0(v7, v12);
  *(_QWORD *)(v7 + 56) = v13;
  *(_DWORD *)(v7 + 64) = v14;
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

