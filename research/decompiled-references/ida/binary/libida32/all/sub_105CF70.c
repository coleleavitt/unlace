void *__fastcall sub_105CF70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *result; // rax

  result = sub_100B2E0(a1, a2, a3, a4);
  *(_BYTE *)(a3 + 20) &= ~0x10u;
  return result;
}

