char *__fastcall dyld4::ProcessConfig::PathOverrides::processVersionedPaths(_QWORD *a1)
{
  char *v2; // x0
  char *result; // x0

  v2 = (char *)a1[4];
  if ( (unsigned __int64)v2 | a1[11] )
    dyld4::ProcessConfig::PathOverrides::forEachInColonList(v2);
  result = (char *)a1[5];
  if ( (unsigned __int64)result | a1[10] )
    return (char *)dyld4::ProcessConfig::PathOverrides::forEachInColonList(result);
  return result;
}
