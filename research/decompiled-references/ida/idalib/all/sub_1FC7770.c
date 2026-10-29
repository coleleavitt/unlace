__int64 __fastcall sub_1FC7770(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_DWORD *)a2 >> 9);
  sub_1F9DE20((__int64 *)(a1 + 8), (__int64 *)(a2 + 16), *(_DWORD *)a2 >> 9);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 8));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 155;
  return result;
}
