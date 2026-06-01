__int64 __fastcall sub_1FBCA90(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  sub_1FBC930(a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  sub_1F9E180(a1 + 8, (__int64 *)(a2 + 80), *(_QWORD *)(a2 + 40), v3, v4, v5);
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 60), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 95;
  return result;
}
