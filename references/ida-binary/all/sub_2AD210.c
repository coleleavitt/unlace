__int64 __fastcall user_graph_place_t__::vfunc_8(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = sub_2AD180(a2, *(_DWORD *)(a1 + 12));
  v3 = 0;
  if ( v2 != -1 )
  {
    *(_DWORD *)(a1 + 12) = v2;
    return 1;
  }
  return v3;
}
