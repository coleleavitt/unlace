__int64 *__fastcall sub_9A5430(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_QWORD *)sub_A1A5A0(v3, 8);
  sub_A1A5E0(v3, 8);
  result = (__int64 *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = v2 & v4;
  return result;
}

