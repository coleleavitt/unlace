unsigned __int64 __fastcall sub_1007A80(__int64 a1)
{
  unsigned __int64 result; // rax

  result = 128;
  if ( *(_BYTE *)(a1 + 404) )
  {
    result = *(unsigned int *)(a1 + 400);
    if ( result > 0x800000 )
      return 0x800000;
  }
  return result;
}

