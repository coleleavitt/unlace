__int64 __fastcall sub_1FBBEA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 result; // rax

  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 60), *(_QWORD *)(a1 + 24));
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 64), v3, v4, v5, v6);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
  v7 = sub_A62B50(*(_QWORD *)(a1 + 8), a2);
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), v7, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 90;
  return result;
}
