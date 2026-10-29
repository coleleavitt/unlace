__int64 __fastcall sub_13D1580(__int64 a1)
{
  unsigned int i; // edx
  __int64 v2; // rcx
  __int64 result; // rax
  char v4; // si
  unsigned int v5; // edx

  for ( i = 0; ; ++i )
  {
    v2 = *(unsigned __int8 *)(a1 + i);
    if ( (byte_2411740[2 * v2] & 7) == 0 )
      return 0;
    result = i + 1;
    if ( (_BYTE)v2 == 10 || (_BYTE)v2 == 13 )
      break;
  }
  v4 = *(_BYTE *)(a1 + (unsigned int)result);
  if ( v4 == 10 || v4 == 13 )
  {
    v5 = i + 2;
    if ( (_BYTE)v2 != v4 )
      return v5;
  }
  return result;
}
