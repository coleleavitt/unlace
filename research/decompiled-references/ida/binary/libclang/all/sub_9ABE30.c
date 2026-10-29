__int64 __fastcall sub_9ABE30(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 result; // rax
  char v11; // [rsp+Eh] [rbp-3Ah]
  char v12; // [rsp+Fh] [rbp-39h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(v2 + 8);
  v12 = *(_BYTE *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 24);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(v6 + 8);
  v11 = *(_BYTE *)(v6 + 16);
  sub_A1A5E0(v5, 24);
  v9 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v9 = v3;
  *(_QWORD *)(v9 + 8) = v4;
  *(_BYTE *)(v9 + 16) = v12;
  result = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)result = v7;
  *(_QWORD *)(result + 8) = v8;
  *(_BYTE *)(result + 16) = v11;
  return result;
}

