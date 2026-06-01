__int64 __fastcall sub_EB9D60(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // r10d

  sub_995540(*a1, "aligned");
  sub_EB9C30((const __m128i **)a1, a2, 40);
  if ( *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24) )
  {
    sub_995540(*a1, ": ");
    v2 = sub_EB4C50();
    sub_F07C00(v3, *a1, 0, a1[1], 0, 0, (__int64)"\n", v2);
  }
  return sub_995540(*a1, ")");
}
