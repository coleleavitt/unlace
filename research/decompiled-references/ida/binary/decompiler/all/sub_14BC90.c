_BOOL8 __fastcall sub_14BC90(__int64 a1)
{
  _DWORD *v2; // rdi
  __int64 v4; // r8
  int v5; // r9d

  v2 = *(_DWORD **)(a1 + 32);
  return *v2 == 2
      || (unsigned __int8)sub_11E2A0((__int64)v2)
      || sub_118D20(*(_QWORD *)(a1 + 40), 0, 0, *(_QWORD *)(a1 + 32), v4, v5);
}
