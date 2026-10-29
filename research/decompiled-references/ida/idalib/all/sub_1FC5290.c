__int64 __fastcall sub_1FC5290(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 28) & 1);
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 28) & 2) != 0);
  *(_DWORD *)(a1 + 224) = 246;
  return result;
}
