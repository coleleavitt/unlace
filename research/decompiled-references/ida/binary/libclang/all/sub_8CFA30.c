__int64 __fastcall sub_8CFA30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 result; // rax
  char v12; // [rsp+Eh] [rbp-3Ah]
  char v13; // [rsp+Fh] [rbp-39h]

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_QWORD *)v3;
  v5 = *(_QWORD *)(v3 + 8);
  v13 = *(_BYTE *)(v3 + 16);
  sub_A1A5E0(v2, 24);
  v6 = *(_QWORD *)(a1 + 568);
  v7 = sub_A1A5A0(v6, 24);
  v8 = *(_QWORD *)v7;
  v9 = *(_QWORD *)(v7 + 8);
  v12 = *(_BYTE *)(v7 + 16);
  sub_A1A5E0(v6, 24);
  v10 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)v10 = v4;
  *(_QWORD *)(v10 + 8) = v5;
  *(_BYTE *)(v10 + 16) = v13;
  result = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)result = v8;
  *(_QWORD *)(result + 8) = v9;
  *(_BYTE *)(result + 16) = v12;
  return result;
}

