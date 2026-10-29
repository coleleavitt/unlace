__int64 __fastcall sub_8E4E90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a1;
  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 8))-- == 1 )
      return sub_15D7BC0(a2, a1);
  }
  return result;
}

