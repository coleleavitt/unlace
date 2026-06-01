_WORD *__fastcall sub_9AA630(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r14
  char v5; // r13
  __int64 v6; // rbp
  __int16 v7; // r12
  __int64 v8; // rax
  _WORD *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 24);
  v3 = *(_QWORD *)v2;
  v4 = *(_QWORD *)(v2 + 8);
  v5 = *(_BYTE *)(v2 + 16);
  sub_A1A5E0(v1, 24);
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_WORD *)sub_A1A5A0(v6, 8);
  sub_A1A5E0(v6, 8);
  v8 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 24);
  *(_QWORD *)v8 = v3;
  *(_QWORD *)(v8 + 8) = v4;
  *(_BYTE *)(v8 + 16) = v5;
  result = (_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = v7;
  return result;
}

