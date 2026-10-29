__int64 __fastcall sub_9CD060(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // r12
  unsigned int v5; // r13d
  unsigned int v7; // [rsp+8h] [rbp-30h] BYREF
  unsigned int v8[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = a1[23];
  v3 = *(_DWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = a1[23];
  v7 = v3;
  v5 = *(_DWORD *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  v8[0] = v5;
  return sub_915D40(a1, a2, 0x21u, v8, &v7);
}

