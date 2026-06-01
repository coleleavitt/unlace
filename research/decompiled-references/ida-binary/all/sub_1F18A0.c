__int64 __fastcall sub_1F18A0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(int *)(a1 + 940) <= 740 )
    return l_compare(a2, a3);
  else
    return l_compare2(a2, a3, *(_QWORD *)(a1 + 728));
}
