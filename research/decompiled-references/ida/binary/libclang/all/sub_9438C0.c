__int64 __fastcall sub_9438C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  void *v10; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v11; // [rsp+8h] [rbp-B0h]
  _BYTE v12[48]; // [rsp+10h] [rbp-A8h] BYREF
  int v13; // [rsp+40h] [rbp-78h]
  _BYTE v14[104]; // [rsp+50h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 16);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v11 = v4;
  v10 = *(void **)v3;
  sub_A1A5E0(v2, 16);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v12, v6);
  sub_A1A5E0(v5, 56);
  if ( !v13 )
  {
    sub_8E54E0((__int64)v14, (__int64)v12);
    sub_A1C200(v12, v14, v9);
    sub_A1C0C0(v14);
  }
  v7 = sub_943380(a1, a2, (__int64)&v10, (__int64)v12, 1);
  sub_A1C0C0(v12);
  if ( v11 > 0x40 && v10 )
    operator delete[](v10);
  return v7;
}

