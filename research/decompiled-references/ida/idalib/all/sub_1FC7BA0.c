__int64 __fastcall sub_1FC7BA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 8));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 16));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 32));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 40));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 4), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 52), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 160;
  return result;
}
