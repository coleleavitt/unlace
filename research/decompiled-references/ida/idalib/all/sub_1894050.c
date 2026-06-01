__int64 __fastcall sub_1894050(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 26) != 1 )
    return 1;
  if ( (unsigned __int8)sub_19D0180(
                          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 736LL),
                          *(_QWORD *)(a2 + 40),
                          *(_QWORD *)(a1 + 24)) )
    *(_BYTE *)(a1 + 41) = 1;
  return 1;
}
