__int64 __fastcall sub_101FB80(__int64 a1, int a2)
{
  if ( (unsigned int)(a2 + 1) <= 1 )
    return *(_QWORD *)(a1 + 184);
  if ( a2 < 0 )
    return sub_101FA20(a1, (unsigned int)(-2 - a2), nullptr);
  return *(_QWORD *)(a1 + 184) + 24LL * (unsigned int)a2;
}
