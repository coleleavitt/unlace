__int64 __fastcall SwiftHashTable::hash<SwiftTypeProtocolConformanceLocationKey>(__int64 a1, objc *this)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x0
  int v6; // w9
  unsigned int v7; // w9

  v4 = objc::lookup8(this, (const unsigned __int8 *)&dword_8, *(_QWORD *)(a1 + 24));
  v5 = objc::lookup8((objc *)((char *)this + 8), (const unsigned __int8 *)&dword_8, *(_QWORD *)(a1 + 24));
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 == 64 )
    v7 = 0;
  else
    v7 = (v5 ^ v4) >> v6;
  return v7 ^ *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + ((v5 ^ v4) & *(unsigned int *)(a1 + 12)) + 1056) + 32);
}
