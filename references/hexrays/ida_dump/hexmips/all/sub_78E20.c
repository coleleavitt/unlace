unsigned __int64 __fastcall sub_78E20(__int64 a1, unsigned __int8 a2)
{
  if ( *(_DWORD *)(a1 + 48) > 3u )
    return sub_78D00((_QWORD *)a1);
  if ( (unsigned __int8)is_cvt64() )
    return (int)sub_78B20((_QWORD *)a1) - (unsigned __int64)a2;
  return sub_78B40(a1) - a2;
}
