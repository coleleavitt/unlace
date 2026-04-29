__int64 *__fastcall dyld3::Array<unsigned char>::push_back(__int64 *result, char *a2)
{
  unsigned __int64 v2; // x8
  char v3; // w9
  __int64 v4; // x10

  v2 = result[2];
  if ( v2 >= result[1] )
    dyld3::Array<unsigned char>::push_back();
  v3 = *a2;
  v4 = *result;
  result[2] = v2 + 1;
  *(_BYTE *)(v4 + v2) = v3;
  return result;
}
