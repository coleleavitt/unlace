__int64 __fastcall sub_1FCA440(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 2) >> 3) & 3);
  v4 = *(_QWORD *)(a2 + 16);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v4);
  v5 = sub_EEC8C0(a2, v4, a3);
  sub_1F6F5B0(*(_QWORD **)(a1 + 16), v5, *(_QWORD *)(a1 + 24));
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 40), v6, v7, v8, v9);
  result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  *(_DWORD *)(a1 + 224) = 282;
  return result;
}
