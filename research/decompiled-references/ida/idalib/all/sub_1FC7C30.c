__int64 __fastcall sub_1FC7C30(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 8), *(_QWORD *)(a1 + 24));
  result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  *(_DWORD *)(a1 + 224) = 162;
  return result;
}
