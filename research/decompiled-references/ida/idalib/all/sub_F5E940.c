__int64 __fastcall sub_F5E940(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_WORD *)(a1 + 18) >> 3;
  switch ( v1 )
  {
    case '&':
      return 256;
    case 'Y':
      return 257;
    case '\'':
      return 258;
  }
  result = 0;
  if ( v1 == 40 )
    return 259;
  return result;
}
