__int64 __fastcall SwiftHashTable::getIndex<SwiftForeignTypeProtocolConformanceLookupKey,SwiftForeignTypeProtocolConformanceLocationKey>(
        unsigned int *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v6; // w0
  __int64 v7; // x22
  int v8; // w23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4

  v6 = SwiftHashTable::hash<SwiftForeignTypeProtocolConformanceLookupKey>((__int64)a1, a2);
  if ( *a1 <= v6 )
  {
    v9 = ((__int64 (*)(void))SwiftHashTable::getIndex<SwiftForeignTypeProtocolConformanceLookupKey,SwiftForeignTypeProtocolConformanceLocationKey>)();
    goto LABEL_10;
  }
  v7 = v6;
  v8 = *((unsigned __int8 *)a1 + a1[5] + v6 + 1056);
  v9 = SwiftHashTable::checkbyte<SwiftForeignTypeProtocolConformanceLookupKey>(a1, a2, a3);
  if ( v8 != (_DWORD)v9 )
    return 0xFFFFFFFFLL;
  v10 = *a1;
  if ( (unsigned int)v10 <= (unsigned int)v7 )
  {
LABEL_10:
    v13 = SwiftHashTable::getIndex<SwiftForeignTypeProtocolConformanceLookupKey,SwiftForeignTypeProtocolConformanceLocationKey>(v9);
    return dyld3::MachOAnalyzer::parseOrgArm64eChainedFixups(v13, v14, v15, v16, v17);
  }
  v11 = *(unsigned int *)((char *)&a1[v7 + 264] + a1[5] + v10);
  if ( (_DWORD)v11 == -1 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)SwiftHashTable::equal<SwiftForeignTypeProtocolConformanceLookupKey,SwiftForeignTypeProtocolConformanceLocationKey>(
                       a1,
                       (char *)a1 + v11,
                       a2,
                       a3) )
    return (unsigned int)v7;
  else
    return 0xFFFFFFFFLL;
}
