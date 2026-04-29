int **__fastcall DyldSharedCache::forEachPatchableGOTUseOfExport(int **result)
{
  int *v1; // x8
  __int64 v2; // x9
  int *v3; // x9
  int *v4[2]; // [xsp+0h] [xbp-10h] BYREF

  v1 = result[19];
  if ( v1 )
  {
    v2 = *((unsigned int *)result + 4);
    if ( (unsigned int)v2 >= 0x181 )
    {
      v3 = (int *)((char *)result + (_QWORD)v1 - *(char **)((char *)result + v2));
      if ( *v3 != 1 )
      {
        v4[0] = v3;
        v4[1] = v1;
        return PatchTable::forEachPatchableGOTUseOfExport(v4);
      }
    }
  }
  return result;
}
