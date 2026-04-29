__int64 __fastcall dyld4::Reaper::garbageCollect(__int64 **this)
{
  __int64 *v2; // x9
  __int64 v3; // x10
  int v4; // w8
  __int64 v5; // x11
  __int64 v6; // x9
  unsigned __int8 *v7; // x10
  int v8; // t1
  int v9; // w20
  __int64 result; // x0
  __int64 *v11; // x10
  __int64 v12; // x9
  __int64 v13; // x11
  __int64 v14; // x10
  unsigned __int8 *v15; // x12
  __int64 v16; // x13
  int v17; // t1
  int v18; // w8
  unsigned __int8 *v19; // x11
  int v20; // t1

  dyld4::Reaper::markDirectlyDlopenedImagesAsUsed((dyld4::Reaper *)this);
  dyld4::Reaper::markDynamicNeverUnloadImagesAsUsed((dyld4::Reaper *)this);
  v2 = *(this + 1);
  v3 = v2[2];
  if ( v3 )
  {
    v4 = 0;
    v5 = *v2;
    v6 = 16 * v3;
    v7 = (unsigned __int8 *)(v5 + 8);
    do
    {
      v8 = *v7;
      v7 += 16;
      v4 += v8;
      v6 -= 16;
    }
    while ( v6 );
  }
  else
  {
    v4 = 0;
  }
  do
  {
    while ( 1 )
    {
      v9 = v4;
      result = dyld4::Reaper::markDependentOfInUseImages((dyld4::Reaper *)this);
      v11 = *(this + 1);
      v12 = v11[2];
      if ( v12 )
        break;
      v4 = 0;
      if ( !v9 )
        goto LABEL_15;
    }
    v4 = 0;
    v13 = *v11;
    v14 = 16 * v12;
    v15 = (unsigned __int8 *)(v13 + 8);
    v16 = 16 * v12;
    do
    {
      v17 = *v15;
      v15 += 16;
      v4 += v17;
      v16 -= 16;
    }
    while ( v16 );
  }
  while ( v4 != v9 );
  v18 = 0;
  v19 = (unsigned __int8 *)(v13 + 8);
  do
  {
    v20 = *v19;
    v19 += 16;
    v18 += v20;
    v14 -= 16;
  }
  while ( v14 );
  LODWORD(v12) = v12 - v18;
LABEL_15:
  *((_DWORD *)this + 4) = v12;
  return result;
}
