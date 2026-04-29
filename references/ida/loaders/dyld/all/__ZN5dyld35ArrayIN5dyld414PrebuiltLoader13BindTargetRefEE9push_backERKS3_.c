__int64 *__fastcall dyld3::Array<dyld4::PrebuiltLoader::BindTargetRef>::push_back(__int64 *result, _QWORD *a2)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x9

  v2 = result[2];
  if ( v2 >= result[1] )
    dyld3::Array<dyld4::PrebuiltLoader::BindTargetRef>::push_back();
  v3 = *result;
  result[2] = v2 + 1;
  *(_QWORD *)(v3 + 8 * v2) = *a2;
  return result;
}
