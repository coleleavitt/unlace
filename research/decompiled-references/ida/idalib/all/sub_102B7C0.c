unsigned __int64 __fastcall sub_102B7C0(__int64 a1)
{
  unsigned __int64 result; // rax

  result = 128;
  if ( *(_BYTE *)(a1 + 404) )
  {
    result = *(unsigned int *)(a1 + 400);
    if ( result > (unsigned __int64)&loc_800000 )
      return (unsigned __int64)&loc_800000;
  }
  return result;
}
