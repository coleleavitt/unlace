__int64 __fastcall sub_7376A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp

  v2 = *(_QWORD *)(a1 + 16);
  sub_18183E0(a2, "unsat bv bounds", **(unsigned int **)(v2 + 784));
  sub_18183E0(a2, "bv singletons", *(unsigned int *)(*(_QWORD *)(v2 + 784) + 4LL));
  return sub_18183E0(a2, "bv reduces", *(unsigned int *)(*(_QWORD *)(v2 + 784) + 8LL));
}

