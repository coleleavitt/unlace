__int64 __fastcall sub_9E1010(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // r13
  __int64 v5; // rax
  unsigned int v6; // ebx
  char v8; // [rsp+Fh] [rbp-69h] BYREF
  _BYTE v9[104]; // [rsp+10h] [rbp-68h] BYREF

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_BYTE *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v8 = v3;
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v9, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9593B0(a1, a2, &v8, (__int64)v9, 1);
  sub_A1C0C0(v9);
  return v6;
}

