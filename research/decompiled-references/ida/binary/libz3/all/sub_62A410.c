__int64 __fastcall sub_62A410(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 60))-- == 1 )
      return sub_62A330(a2, *a1);
  }
  return result;
}

