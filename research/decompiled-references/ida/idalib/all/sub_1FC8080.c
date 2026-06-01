__int64 __fastcall sub_1FC8080(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 8), *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 32) & 1);
  *(_DWORD *)(a1 + 224) = 387;
  return result;
}
