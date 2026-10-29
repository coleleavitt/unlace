__int64 __fastcall ___ZN5dyld46Loader27applyInterposingToDyldCacheERNS_12RuntimeStateE_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x9
  __int64 v5; // x10
  __int64 v6; // x1
  _QWORD v7[8]; // [xsp+0h] [xbp-40h] BYREF

  if ( *(_DWORD *)(result + 56) == (_DWORD)a2 )
  {
    v4 = *(_QWORD *)(result + 40);
    v5 = **(_QWORD **)(result + 32);
    v6 = *(unsigned int *)(result + 60);
    v7[0] = _NSConcreteStackBlock;
    v7[1] = 0x40000000;
    v7[2] = ___ZN5dyld46Loader27applyInterposingToDyldCacheERNS_12RuntimeStateE_block_invoke_2;
    v7[3] = &__block_descriptor_tmp_127;
    v7[4] = v4;
    v7[5] = v5;
    v7[6] = *(_QWORD *)(result + 48);
    v7[7] = a3;
    return DyldSharedCache::forEachPatchableUseOfExport(v4, v6, a2, v7);
  }
  return result;
}
