__int64 __fastcall PatchTable::imageHasClient(PatchTable *this, unsigned int a2, unsigned int a3)
{
  if ( (unsigned int)(**(_DWORD **)this - 2) > 2 )
    return 0;
  else
    return PatchTableV2::imageHasClient(this, a2, a3);
}
