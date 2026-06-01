__int64 __fastcall dyld3::MachOLoaded::getLinkEditContent(__int64 a1, __int64 a2, int a3)
{
  return *(_QWORD *)a2 + *(_QWORD *)(a2 + 16) + (unsigned int)(a3 - *(_DWORD *)(a2 + 24));
}
