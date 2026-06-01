__int64 __fastcall sub_1FBC960(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  sub_1FA0F80(a1 + 8, *(unsigned int **)(a2 + 56));
  sub_1FBC930(a1, a2);
  sub_1F952D0((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 104));
  v2 = sub_BB2580(a2);
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), v2, *(_QWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 224) = 138;
  return result;
}
