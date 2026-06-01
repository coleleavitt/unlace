__int64 __fastcall sub_1FBBF20(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 result; // rax

  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 56), *(_QWORD *)(a1 + 24));
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  sub_1F9E180(a1 + 8, (__int64 *)(a2 + 80), *(_QWORD *)(a2 + 40), v4, v5, v6);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2 + 48) >> 2) & 1);
  v7 = sub_A62AD0(*(_QWORD *)(a1 + 8), a2);
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), v7, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 89;
  return result;
}
