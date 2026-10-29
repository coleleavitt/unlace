_BYTE *__fastcall sub_8CCBB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // rbp
  char v5; // r12
  _BYTE *result; // rax

  *(_QWORD *)(a1 + 800) = a2;
  v2 = *(_QWORD *)(a1 + 568);
  v3 = *(_BYTE *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 568);
  v5 = *(_BYTE *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v3;
  result = (_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
  *result = v5;
  return result;
}

