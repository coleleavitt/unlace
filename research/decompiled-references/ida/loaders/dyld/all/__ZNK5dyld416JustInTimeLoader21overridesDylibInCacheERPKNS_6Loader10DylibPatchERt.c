__int64 __fastcall dyld4::JustInTimeLoader::overridesDylibInCache(__int64 a1, _QWORD *a2, _WORD *a3)
{
  unsigned __int64 v3; // x8

  v3 = *(_QWORD *)(a1 + 16);
  if ( (v3 & 0x400000) != 0 )
  {
    *a2 = *(_QWORD *)(a1 + 64);
    *a3 = *(_WORD *)(a1 + 19) & 0x7FFF;
  }
  return (v3 >> 22) & 1;
}
