__int64 __fastcall sub_EBB570(__int64 *a1, __int64 a2)
{
  int v2; // eax

  sub_995540(*a1, "doacross(");
  v2 = *(_DWORD *)(a2 + 20);
  if ( v2 == 1 )
  {
    sub_995540(*a1, "sink:");
  }
  else if ( v2 )
  {
    if ( v2 == 2 )
      sub_995540(*a1, "sink: omp_cur_iteration - 1");
    else
      sub_995540(*a1, "source: omp_cur_iteration");
  }
  else
  {
    sub_995540(*a1, "source:");
  }
  sub_EBB450((const __m128i **)a1, a2, 32);
  return sub_995540(*a1, ")");
}
