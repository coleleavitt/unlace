__int64 __fastcall sub_1FC5430(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_1FC2FE0(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(_BYTE *)(a2 + 32) & 1);
  sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 32) & 2) != 0);
  result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(_BYTE *)(a2 + 32) & 4) != 0);
  *(_DWORD *)(a1 + 224) = 333;
  return result;
}
