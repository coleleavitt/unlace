__int64 __fastcall sub_1FBC020(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax

  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 52), *(_QWORD *)(a1 + 24));
  sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 56), *(_QWORD **)(a1 + 24), v3, v4);
  sub_1F9A760((__int64 *)(a1 + 8), *(__int64 **)(a2 + 64), v5, v6, v7, v8);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a2 + 72));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned __int16 *)(a2 + 74));
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 76) & 3);
  sub_1F952D0((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 80));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 96), *(_QWORD *)(a1 + 24));
  sub_1F952D0((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 88));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 100), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 104), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 112), *(_QWORD *)(a1 + 24));
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 120), *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 66;
  return result;
}
