_DWORD *__fastcall sub_B50B10(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *result; // rax

  v2 = sub_B685F0(a1);
  result = sub_A8FF00(v2, a1, a2, v3, v4, v5);
  *(_WORD *)(a1 + 98) |= 0xFF0u;
  return result;
}

