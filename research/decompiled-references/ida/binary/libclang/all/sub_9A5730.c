_WORD *__fastcall sub_9A5730(__int64 a1)
{
  __int64 v1; // rbp
  __int16 v2; // r13
  __int64 v3; // r12
  _WORD *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_WORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  LOWORD(v1) = *(_WORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  result = (_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = v2 + v1;
  return result;
}

