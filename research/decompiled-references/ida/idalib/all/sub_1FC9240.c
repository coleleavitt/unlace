__int64 __fastcall sub_1FC9240(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F9A760((__int64 *)(a1 + 8), (__int64 *)(*(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFF8LL), v2, v3, v4, v5);
  sub_183F100(a1 + 32, *(_QWORD *)(a2 + 32));
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2 + 24) >> 2) & 1);
  *(_DWORD *)(a1 + 224) = 193;
  return result;
}
