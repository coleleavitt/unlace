__int64 __fastcall sub_1F6A0A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 13208);
  if ( !v2 )
    return sub_1F6A0E0();
  if ( v2 <= 2 )
    return sub_1F645A0(a1, a2);
  if ( v2 == 3 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 13072))-- - 8);
  else
    return sub_1F6A0E0();
}
