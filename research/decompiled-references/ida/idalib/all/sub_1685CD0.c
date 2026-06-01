__int64 __fastcall sub_1685CD0(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9

  v3 = (unsigned int)sub_BF9EA0((__int64 *)a2);
  v4 = sub_BFE3C0(a2);
  sub_16841F0(a1, *(_QWORD **)(a2 + 24), (v3 << 32) | v4, 0, v5, v6, a3);
  return 1;
}
