__int64 __fastcall SwiftHashTable::getPotentialTarget<SwiftMetadataProtocolConformanceLocationKey,SwiftMetadataProtocolConformanceLocationKey>(
        unsigned int *a1)
{
  unsigned int v2; // w0
  __int64 v3; // x8
  unsigned int *v4; // x8
  const char *Potential; // x0
  stat *v7; // x1

  v2 = SwiftHashTable::getIndex<SwiftMetadataProtocolConformanceLocationKey,SwiftMetadataProtocolConformanceLocationKey>();
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
  Potential = (const char *)SwiftHashTable::getPotentialTarget<SwiftMetadataProtocolConformanceLocationKey,SwiftMetadataProtocolConformanceLocationKey>();
  return stat(Potential, v7);
}
