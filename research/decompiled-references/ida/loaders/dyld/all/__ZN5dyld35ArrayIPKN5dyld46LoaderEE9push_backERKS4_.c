__int64 *__fastcall dyld3::Array<dyld4::Loader const*>::push_back(__int64 *result, __int64 *a2)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x10

  v2 = result[2];
  if ( v2 >= result[1] )
    dyld3::Array<dyld4::Loader const*>::push_back();
  v3 = *a2;
  v4 = *result;
  result[2] = v2 + 1;
  *(_QWORD *)(v4 + 8 * v2) = v3;
  return result;
}
