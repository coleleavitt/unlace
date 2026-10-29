unsigned __int64 __fastcall sub_BEC760(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 1) & 6) != 0 )
    return sub_A4F2F0(a1, *(_QWORD *)(a2 + 8), 1u);
  else
    return *(_QWORD *)(a2 + 8);
}

