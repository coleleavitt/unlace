int *__fastcall sub_9A47C0(__int64 a1)
{
  __int64 v1; // r12
  int v2; // ebp
  int *result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v2 = *(_DWORD *)sub_A1A5A0(v1, 8);
  sub_A1A5E0(v1, 8);
  result = (int *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8);
  *result = ~v2;
  return result;
}

