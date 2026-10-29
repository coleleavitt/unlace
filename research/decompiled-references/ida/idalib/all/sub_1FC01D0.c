__int64 __fastcall sub_1FC01D0(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax

  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  sub_1F85840(
    *(_QWORD *)(a1 + 16),
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL,
    *(_QWORD **)(a1 + 24),
    v3,
    v4);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 60), *(_QWORD *)(a1 + 24));
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 64), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 96;
  return result;
}
