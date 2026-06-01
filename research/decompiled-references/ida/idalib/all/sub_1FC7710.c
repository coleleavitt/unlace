__int64 __fastcall sub_1FC7710(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int8 *)(a2 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 154;
  return result;
}
