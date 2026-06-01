__int64 *__fastcall sub_9A4770(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rbp
  __int64 *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_QWORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  result = (__int64 *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = ~v2;
  return result;
}

