__int64 __fastcall sub_9A98C0(__int64 a1)
{
  __int64 v1; // rbp
  __int16 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE v7[104]; // [rsp+0h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_WORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v7, v4);
  sub_A1A5E0(v3, 56);
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v2;
  v5 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
  sub_A1BFE0(v5, v7);
  return sub_A1C0C0(v7);
}

