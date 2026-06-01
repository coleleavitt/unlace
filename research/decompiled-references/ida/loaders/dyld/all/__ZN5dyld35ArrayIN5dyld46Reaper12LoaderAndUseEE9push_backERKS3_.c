__n128 __fastcall dyld3::Array<dyld4::Reaper::LoaderAndUse>::push_back(__int64 *a1, __n128 *a2)
{
  unsigned __int64 v2; // x8
  __int64 v3; // x9
  __n128 result; // q0

  v2 = a1[2];
  if ( v2 >= a1[1] )
    dyld3::Array<dyld4::Reaper::LoaderAndUse>::push_back();
  v3 = *a1;
  a1[2] = v2 + 1;
  result = *a2;
  *(__n128 *)(v3 + 16 * v2) = *a2;
  return result;
}
