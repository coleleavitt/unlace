__int64 __fastcall sub_10C50(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a2 + 12) )
  {
    if ( *(_DWORD *)(a2 + 16) )
    {
      *(_DWORD *)(a1 + 8) = 2;
      return 1;
    }
  }
  return result;
}

