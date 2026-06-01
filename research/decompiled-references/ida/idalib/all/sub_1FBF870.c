__int64 __fastcall sub_1FBF870(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  sub_1FBF770(a1, a2, a3, a4, a5, a6);
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 80), *(_QWORD *)(a1 + 24));
  sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 88), *(_QWORD *)(a1 + 24));
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 96) & 1);
  *(_DWORD *)(a1 + 224) = 93;
  return result;
}
