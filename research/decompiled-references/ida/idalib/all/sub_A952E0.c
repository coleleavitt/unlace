__int64 __fastcall sub_A952E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  if ( a3 == a2 )
    return 1;
  if ( *(_QWORD *)(a3 + 40) == *(_QWORD *)(a2 + 40) )
    return sub_A949D0(a1, a2, a3);
  return 0;
}
