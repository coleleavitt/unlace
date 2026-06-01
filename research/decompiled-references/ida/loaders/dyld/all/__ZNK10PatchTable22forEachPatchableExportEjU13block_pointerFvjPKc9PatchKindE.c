_DWORD **__fastcall PatchTable::forEachPatchableExport(_DWORD **result)
{
  if ( (unsigned int)(**result - 2) <= 2 )
    return (_DWORD **)PatchTableV2::forEachPatchableExport();
  return result;
}
