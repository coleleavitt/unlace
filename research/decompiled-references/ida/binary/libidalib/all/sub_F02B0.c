__int64 __fastcall sub_F02B0(__int64 a1)
{
  __int64 v1; // rsi

  v1 = *(_QWORD *)(a1 + 24);
  if ( !dbg || v1 == -1 )
    return 0;
  if ( !dword_25274C )
    return sub_EDA00(v1);
  if ( dword_25274C >= 0 )
    return 0;
  return sub_D5CF0(dword_252588, v1, *(_BYTE *)(a1 + 12), 0);
}

