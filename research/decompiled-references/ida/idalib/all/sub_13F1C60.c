__int64 *__fastcall sub_13F1C60(__int64 *a1)
{
  __int64 *result; // rax
  char v2; // di

  result = a1;
  v2 = 0;
  do
  {
    if ( (*((_BYTE *)result + 12) & 3) == 0 )
      break;
    if ( (*((_BYTE *)result + 12) & 3) != 1 && !v2 )
      v2 = 1;
    result = (__int64 *)*result;
  }
  while ( result );
  return result;
}
