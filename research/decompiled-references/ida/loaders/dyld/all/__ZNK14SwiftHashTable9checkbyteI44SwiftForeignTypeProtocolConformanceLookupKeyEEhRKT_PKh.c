__int64 __fastcall SwiftHashTable::checkbyte<SwiftForeignTypeProtocolConformanceLookupKey>(__int64 a1, __int64 a2)
{
  return *(_BYTE *)(a2 + 8) & 0x1F | (32 * (**(_BYTE **)a2 & 7u));
}
