__int64 __fastcall DyldSharedCache::shouldPatchClientOfImage(DyldSharedCache *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  _DWORD *v5; // x9
  _QWORD v7[2]; // [xsp+0h] [xbp-10h] BYREF

  v3 = *((_QWORD *)this + 19);
  if ( !v3 )
    return 0;
  v4 = *((unsigned int *)this + 4);
  if ( (unsigned int)v4 < 0x181 )
    return 0;
  v5 = (_DWORD *)((char *)this + v3 - *(_QWORD *)((char *)this + v4));
  if ( *v5 == 1 )
    return 0;
  v7[0] = v5;
  v7[1] = v3;
  return PatchTable::imageHasClient((PatchTable *)v7, a2, a3);
}
