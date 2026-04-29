__int64 __fastcall SwiftHashTable::getIndex<SwiftMetadataProtocolConformanceLocationKey,SwiftMetadataProtocolConformanceLocationKey>(
        unsigned int *a1,
        objc *a2,
        __int64 a3)
{
  unsigned int v6; // w0
  __int64 v7; // x22
  int v8; // w23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x8
  Diagnostics *v13; // x0
  dyld3::FatFile *v14; // x1
  unsigned __int64 v15; // x2
  int v16; // w3
  int v17; // w4
  bool v18; // w5
  dyld3::GradedArchs *v19; // x6

  v6 = SwiftHashTable::hash<SwiftMetadataProtocolConformanceLocationKey>((__int64)a1, a2);
  if ( *a1 <= v6 )
  {
    v9 = SwiftHashTable::getIndex<SwiftMetadataProtocolConformanceLocationKey,SwiftMetadataProtocolConformanceLocationKey>();
    goto LABEL_10;
  }
  v7 = v6;
  v8 = *((unsigned __int8 *)a1 + a1[5] + v6 + 1056);
  v9 = SwiftHashTable::checkbyte<SwiftMetadataProtocolConformanceLocationKey>(a1, a2, a3);
  if ( v8 != (_DWORD)v9 )
    return 0xFFFFFFFFLL;
  v10 = *a1;
  if ( (unsigned int)v10 <= (unsigned int)v7 )
  {
LABEL_10:
    v13 = (Diagnostics *)SwiftHashTable::getIndex<SwiftMetadataProtocolConformanceLocationKey,SwiftMetadataProtocolConformanceLocationKey>(v9);
    return dyld3::MachOFile::compatibleSlice(v13, v14, v15, v16, v17, v18, v19);
  }
  v11 = *(unsigned int *)((char *)&a1[v7 + 264] + a1[5] + v10);
  if ( (_DWORD)v11 == -1 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)SwiftHashTable::equal<SwiftMetadataProtocolConformanceLocationKey,SwiftMetadataProtocolConformanceLocationKey>(
                       a1,
                       (char *)a1 + v11,
                       a2,
                       a3) )
    return (unsigned int)v7;
  else
    return 0xFFFFFFFFLL;
}
