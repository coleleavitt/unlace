__int64 __fastcall SwiftHashTable::getPotentialTarget<SwiftTypeProtocolConformanceLocationKey,SwiftTypeProtocolConformanceLocationKey>(
        unsigned int *a1)
{
  unsigned int v2; // w0
  __int64 v3; // x8
  unsigned int *v4; // x8
  int Potential; // w0
  objc *v7; // x1

  v2 = ((__int64 (*)(void))SwiftHashTable::getIndex<SwiftTypeProtocolConformanceLocationKey,SwiftTypeProtocolConformanceLocationKey>)();
  if ( v2 == -1 )
  {
    v4 = a1 + 4;
    return *v4;
  }
  v3 = *a1;
  if ( (unsigned int)v3 > v2 )
  {
    v4 = (unsigned int *)((char *)&a1[v2 + 264] + a1[5] + v3);
    return *v4;
  }
  Potential = SwiftHashTable::getPotentialTarget<SwiftTypeProtocolConformanceLocationKey,SwiftTypeProtocolConformanceLocationKey>();
  return SwiftHashTable::hash<SwiftMetadataProtocolConformanceLocationKey>(Potential, v7);
}
