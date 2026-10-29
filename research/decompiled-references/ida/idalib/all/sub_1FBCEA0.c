__int64 __fastcall sub_1FBCEA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  sub_1FBCB60((__int64 *)a1, a2);
  sub_1F80F20(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 72), *(_QWORD *)(a1 + 24), v2, v3, v4);
  result = sub_1F80F20(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 80), *(_QWORD *)(a1 + 24), v5, v6, v7);
  *(_DWORD *)(a1 + 224) = 69;
  return result;
}
