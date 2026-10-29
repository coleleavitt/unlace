__int64 __fastcall sub_510810(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = a3;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( *(_BYTE *)(a2 + 43) > 1u )
        return result;
      return (int)a3;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) != 8 )
      return (int)a3;
  }
  return result;
}
