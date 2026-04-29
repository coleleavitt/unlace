__int64 __fastcall sub_22D80(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = sub_71FC0(a2, 1);
  *(_DWORD *)(a1 + 40) |= 1 << result;
  return result;
}
