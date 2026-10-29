_DWORD *__fastcall sub_77D6A0(__int64 a1, int a2)
{
  __int64 v2; // rax
  _DWORD *result; // rax

  v2 = sub_798D40(a1);
  result = sub_6D4000(v2, a1, a2);
  *(_WORD *)(a1 + 98) |= 0xFF0u;
  return result;
}

