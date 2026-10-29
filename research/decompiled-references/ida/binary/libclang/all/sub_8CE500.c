__int64 __fastcall sub_8CE500(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int16 v3; // r15
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  char v8; // r12
  __int64 result; // rax

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_WORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_QWORD *)v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_BYTE *)(v5 + 16);
  sub_A1A5E0(v4, 24);
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v3;
  result = sub_A1A4E0(*(_QWORD *)(a1 + 568), 24);
  *(_QWORD *)result = v6;
  *(_QWORD *)(result + 8) = v7;
  *(_BYTE *)(result + 16) = v8;
  return result;
}

