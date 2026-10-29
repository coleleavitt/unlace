_QWORD *__fastcall sub_20D7740(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = 0;
  sub_20D1ED0((_QWORD *)a2, 9u, "template<");
  sub_20D6480((_QWORD *)(a1 + 24), a2);
  result = sub_20D1ED0((_QWORD *)a2, 0xBu, "> typename ");
  *(_DWORD *)(a2 + 40) = v2;
  return result;
}
