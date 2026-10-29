__int64 __fastcall sub_1FCA910(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(a2 + 36));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 48));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 32), *(_QWORD *)(a1 + 24));
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 295;
  return result;
}
