__int64 __fastcall sub_15E0E0(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 984) )
    return 0;
  if ( *(_QWORD *)(a1 + 480) )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      return *(_QWORD *)(a1 + 848);
  }
  else
  {
    sub_1582F0(a1);
    return sub_15E120();
  }
  return result;
}

