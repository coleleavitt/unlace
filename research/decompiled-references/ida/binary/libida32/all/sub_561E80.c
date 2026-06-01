__int64 __fastcall sub_561E80(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbp

  v2 = (__int64 *)(a1 + 24);
  v3 = (v2[1] == 0) + v2[1] - 1;
  sub_357460(v2);
  return (*(_QWORD *)(a1 + 32) == 0) + *(_QWORD *)(a1 + 32) - 1LL - v3;
}

