__int64 __fastcall dyld4::PrebuiltLoader::overridesDylibInCache(__int64 a1, _QWORD *a2, _WORD *a3)
{
  unsigned int v3; // w8
  __int64 v4; // x9
  __int64 v5; // x9

  v3 = *(unsigned __int16 *)(a1 + 20);
  if ( (v3 & 8) != 0 )
  {
    v4 = *(unsigned int *)(a1 + 64);
    if ( (_DWORD)v4 )
      v5 = a1 + v4;
    else
      v5 = 0;
    *a2 = v5;
    *a3 = *(_WORD *)(a1 + 36);
  }
  return (v3 >> 3) & 1;
}
