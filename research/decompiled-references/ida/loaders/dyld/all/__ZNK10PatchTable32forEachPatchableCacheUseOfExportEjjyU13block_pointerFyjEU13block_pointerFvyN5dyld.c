int **__fastcall PatchTable::forEachPatchableCacheUseOfExport(int **result)
{
  int v1; // w8

  v1 = **result;
  if ( v1 == 4 )
    return (int **)PatchTableV4::forEachPatchableCacheUseOfExport();
  if ( v1 == 3 || v1 == 2 )
    return (int **)PatchTableV2::forEachPatchableCacheUseOfExport();
  return result;
}
