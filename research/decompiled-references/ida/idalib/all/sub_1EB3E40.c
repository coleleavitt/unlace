unsigned __int64 __fastcall sub_1EB3E40(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx
  bool v4; // zf

  v1 = *a1 & 0xFFFFFFFFFFFFFFFCLL;
  result = 0;
  if ( (*a1 & 2) != 0 )
  {
    if ( !*(_DWORD *)(v1 + 8) )
      return result;
    a1 = *(unsigned __int64 **)v1;
  }
  else if ( !v1 )
  {
    return result;
  }
  result = *a1;
  if ( *a1 )
  {
    v3 = result & 0xFFFFFFFFFFFFFFF8LL;
    v4 = (result & 4) == 0;
    result = 0;
    if ( !v4 )
      return v3;
  }
  return result;
}
