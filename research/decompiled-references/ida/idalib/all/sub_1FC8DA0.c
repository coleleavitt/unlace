__int64 __fastcall sub_1FC8DA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_DWORD *)a2 >> 19) & 1);
  *(_DWORD *)(a1 + 224) = 229;
  return result;
}
