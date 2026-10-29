int **__fastcall PatchTable::forEachPatchableGOTUseOfExport(int **result)
{
  int v1; // w8

  v1 = **result;
  if ( v1 == 4 )
    return (int **)PatchTableV4::forEachPatchableGOTUseOfExport();
  if ( v1 == 3 )
    return (int **)PatchTableV3::forEachPatchableGOTUseOfExport();
  return result;
}
