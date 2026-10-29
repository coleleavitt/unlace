__int64 __fastcall sub_9E0E90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v9; // [rsp+0h] [rbp-78h] BYREF
  unsigned int v10; // [rsp+8h] [rbp-70h]
  _BYTE v11[104]; // [rsp+10h] [rbp-68h] BYREF

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
  v7 = sub_958680(a1, a2, (__int64)&v9, (__int64)v11, 1);
  sub_A1C0C0(v11);
  if ( v10 > 0x40 && v9 )
    operator delete[](v9);
  return v7;
}

