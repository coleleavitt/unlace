unsigned __int64 __fastcall sub_795E0(__int64 a1, unsigned __int8 a2)
{
  if ( *(_DWORD *)(a1 + 48) > 3u )
    return sub_794C0((_QWORD *)a1);
  if ( (unsigned __int8)is_cvt64() )
    return (int)sub_792E0((_QWORD *)a1) - (unsigned __int64)a2;
  return sub_79300(a1) - a2;
}
