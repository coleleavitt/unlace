__int64 __fastcall sub_1FBB880(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FBAE50((__int64 *)a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 49) >> 5);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 72), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 76), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 97;
  return result;
}
