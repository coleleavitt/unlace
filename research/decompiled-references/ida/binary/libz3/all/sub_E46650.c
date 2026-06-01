__int64 __fastcall sub_E46650(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  sub_E5E9C0(a1, a2);
  result = sub_1859610(a2, "unsat_core", 0);
  *(_BYTE *)(a1 + 202) |= result;
  return result;
}

