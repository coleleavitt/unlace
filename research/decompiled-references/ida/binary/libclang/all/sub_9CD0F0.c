__int64 __fastcall sub_9CD0F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // r12
  void *v5; // r13
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  void *v8; // [rsp+8h] [rbp-30h] BYREF

  v2 = a1[23];
  v3 = *(_QWORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = a1[23];
  v7 = v3;
  v5 = *(void **)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  v8 = v5;
  return sub_916120(a1, a2, 0x41u, &v8, &v7);
}

