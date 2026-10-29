__int64 __fastcall sub_1FBBD90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  sub_1FBBC70((__int64 *)a1, a2);
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 48), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 52), *(_QWORD *)(a1 + 24));
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64));
  v3 = sub_B99AD0(a2);
  sub_1F92A90(*(_QWORD *)(a1 + 16), v3, *(_QWORD *)(a1 + 24));
  v4 = sub_B8C1B0(*(_QWORD *)(a2 + 80));
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), v4, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 94;
  return result;
}
