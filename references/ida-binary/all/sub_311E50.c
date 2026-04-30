__int64 __fastcall sub_311E50(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  if ( !*(_QWORD *)a2 )
    return 7;
  v2 = *(_DWORD *)(a2 + 8);
  result = 6;
  if ( v2 != -1 )
  {
    result = 2;
    if ( v2 == 27 )
    {
      result = 3;
      if ( *(_QWORD *)(a2 + 176) )
        return 7;
    }
  }
  return result;
}
