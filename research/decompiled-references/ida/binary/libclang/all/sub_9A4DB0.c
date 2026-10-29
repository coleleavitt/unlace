_BYTE *__fastcall sub_9A4DB0(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // r13
  __int64 v3; // r12
  _BYTE *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_BYTE *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  LOBYTE(v1) = *(_BYTE *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  result = (_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = v1 - v2;
  return result;
}

