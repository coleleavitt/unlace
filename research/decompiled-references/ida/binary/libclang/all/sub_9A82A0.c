_DWORD *__fastcall sub_9A82A0(__int64 a1)
{
  __int64 v1; // rbp
  __int16 v2; // r13
  __int64 v3; // rbp
  int v4; // r12d
  _DWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_WORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_DWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v2;
  result = (_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = v4;
  return result;
}

