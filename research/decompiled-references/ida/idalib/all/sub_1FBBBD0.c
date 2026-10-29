__int64 __fastcall sub_1FBBBD0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FBAE50((__int64 *)a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 36), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 40), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 64), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 72), *(_QWORD *)(a1 + 24));
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 80));
  result = sub_183F100(a1 + 32, *(_QWORD *)(a2 + 88));
  *(_DWORD *)(a1 + 224) = 67;
  return result;
}
