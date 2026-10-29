__int64 __fastcall sub_1FCA030(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_QWORD *)a2 >> 19) & 1LL);
  *(_DWORD *)(a1 + 224) = 263;
  return result;
}
