__int64 __fastcall sub_1FCA4C0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_DWORD *)(a2 + 4) & 0x7FFFFFFF);
  v4 = *(_QWORD *)a2 >> 63;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  v5 = sub_EEC8C0(a2, v4, a3);
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), v5, *(_QWORD *)(a1 + 24));
  result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  *(_DWORD *)(a1 + 224) = 277;
  return result;
}
