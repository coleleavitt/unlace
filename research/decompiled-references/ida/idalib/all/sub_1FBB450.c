__int64 __fastcall sub_1FBB450(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FBAE50((__int64 *)a1, a2);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFFCLL);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2 + 40) >> 1) & 1);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 48));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 121;
  return result;
}
