char __fastcall sub_1F0940(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx

  v6 = *(_DWORD *)(a1 + 940);
  if ( v6 > 919 )
    return l_equals(a2, a3, *(_QWORD *)(a1 + 728));
  if ( v6 > 740 )
    return (unsigned int)l_compare2(a2, a3, *(_QWORD *)(a1 + 728)) == 0;
  return (unsigned int)l_compare(a2, a3) == 0;
}
