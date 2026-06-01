_QWORD *__fastcall sub_20A0CC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  _QWORD *result; // rax

  v3 = a1 + 16;
  *(_OWORD *)(v3 - 16) = 0;
  sub_2253560(v3, a2);
  *(_QWORD *)(a1 + 48) = 0;
  result = (_QWORD *)operator new(0x30u);
  result[1] = 0x400000000LL;
  *result = result + 2;
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
