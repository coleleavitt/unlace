__int64 __fastcall sub_9DEA90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r13d
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  unsigned int v9; // [rsp+Ch] [rbp-ACh] BYREF
  _BYTE v10[48]; // [rsp+10h] [rbp-A8h] BYREF
  int v11; // [rsp+40h] [rbp-78h]
  _BYTE v12[104]; // [rsp+50h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v9 = v3;
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v10, v5);
  sub_A1A5E0(v4, 56);
  if ( !v11 )
  {
    sub_8E54E0((__int64)v12, (__int64)v10);
    sub_A1C200(v10, v12, v8);
    sub_A1C0C0(v12);
  }
  v6 = sub_941420(a1, a2, &v9, (__int64)v10, 1);
  sub_A1C0C0(v10);
  return v6;
}

