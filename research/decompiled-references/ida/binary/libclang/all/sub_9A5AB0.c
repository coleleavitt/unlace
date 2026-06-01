_DWORD *__fastcall sub_9A5AB0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // r13d
  __int64 v3; // r12
  _DWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_DWORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  LODWORD(v1) = *(_DWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  result = (_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = v2 | v1;
  return result;
}

