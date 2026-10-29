__int64 __fastcall sub_18BB090(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax

  if ( !a2[1] )
    return 0;
  v2 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*a2 & 7) != 0 )
    v2 = 0;
  if ( *(_QWORD *)(a1 + 56) == v2 )
    return sub_1A69F70();
  else
    return 0;
}
