int **__fastcall PatchTable::forEachPatchableUseOfExportInImage(int **result, int a2, int a3, unsigned int a4)
{
  int v4; // w8

  v4 = **result;
  if ( v4 == 4 )
    return (int **)PatchTableV4::forEachPatchableUseOfExportInImage((int)result, a2, a3, a4);
  if ( v4 == 3 || v4 == 2 )
    return (int **)PatchTableV2::forEachPatchableUseOfExportInImage((int)result, a2, a3, a4);
  return result;
}
