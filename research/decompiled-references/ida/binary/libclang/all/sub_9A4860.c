_BYTE *__fastcall sub_9A4860(__int64 a1)
{
  __int64 v1; // r12
  char v2; // bl
  _BYTE *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_BYTE *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  result = (_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = ~v2;
  return result;
}

