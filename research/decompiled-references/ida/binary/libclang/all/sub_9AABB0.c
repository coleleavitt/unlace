__int64 __fastcall sub_9AABB0(__int64 a1)
{
  __int64 v1; // rbp
  __int16 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r13
  char v7; // r12
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_WORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 24);
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_BYTE *)(v4 + 16);
  sub_A1A5E0(v3, 24);
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v2;
  result = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)result = v5;
  *(_QWORD *)(result + 8) = v6;
  *(_BYTE *)(result + 16) = v7;
  return result;
}

