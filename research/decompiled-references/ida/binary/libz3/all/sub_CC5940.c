__int64 __fastcall sub_CC5940(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  sub_1863170(a1 + 24, a2);
  v2 = *(_QWORD *)(a1 + 16);
  sub_14B5FE0(v2 + 48, a1 + 24);
  result = sub_1859960(a1 + 24, "recover_01_max_bits", 10);
  *(_DWORD *)(v2 + 68) = result;
  return result;
}

