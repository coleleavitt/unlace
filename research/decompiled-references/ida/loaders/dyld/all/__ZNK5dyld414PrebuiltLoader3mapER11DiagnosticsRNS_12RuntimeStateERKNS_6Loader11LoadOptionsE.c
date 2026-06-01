__int64 __fastcall dyld4::PrebuiltLoader::map(__int64 result, Diagnostics *a2, dyld4::RuntimeState *this)
{
  __int16 v3; // w8
  char *v4; // x9
  __int64 v5; // x23
  __int64 v6; // x24
  __int64 v9; // x20
  const char *v10; // x8
  unsigned int v11; // w8
  __int64 v12; // x2
  __int64 v13; // x3
  unsigned __int64 v14; // x10
  __int64 v15; // x7
  __int64 v16; // x8
  __int64 v17; // x22
  __int64 v18; // x8
  const char *v19; // x2
  __int64 v20; // x9
  _QWORD *v21; // x8
  __int64 v22; // x9
  _QWORD *v23; // x10
  int v24; // [xsp+0h] [xbp-60h]
  _QWORD v25[3]; // [xsp+18h] [xbp-48h] BYREF

  v3 = *(_WORD *)(result + 6);
  if ( v3 >= 0 )
    v4 = (char *)this + 664;
  else
    v4 = (char *)this + 688;
  v5 = *(_QWORD *)v4;
  v6 = v3 & 0x7FFF;
  if ( *(unsigned __int8 *)(*(_QWORD *)v4 + v6) > 2u )
    return result;
  v9 = result;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 187LL) )
  {
    if ( *(_WORD *)(result + 8) )
      v10 = (const char *)(result + *(unsigned __int16 *)(result + 8));
    else
      v10 = nullptr;
    result = dyld4::RuntimeState::log(this, "using PrebuiltLoader %p for %s\n", (const void *)result, v10);
  }
  v11 = *(unsigned __int16 *)(v9 + 4);
  if ( (v11 & 2) != 0 )
  {
    *(_BYTE *)(v5 + v6) = 3;
    v18 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v18 + 181) )
      goto LABEL_23;
    result = dyld4::Loader::logSegmentsFromSharedCache((dyld4::Loader *)v9, this);
LABEL_22:
    v18 = *((_QWORD *)this + 1);
LABEL_23:
    if ( *(_BYTE *)(v18 + 180) )
    {
      if ( *(_WORD *)(v9 + 8) )
        v19 = (const char *)(v9 + *(unsigned __int16 *)(v9 + 8));
      else
        v19 = nullptr;
      result = dyld4::Loader::logLoad((dyld4::Loader *)v9, this, v19);
    }
    goto LABEL_31;
  }
  if ( v9 != *((_QWORD *)this + 3) )
  {
    if ( *(_WORD *)(v9 + 8) )
      v12 = v9 + *(unsigned __int16 *)(v9 + 8);
    else
      v12 = 0;
    v13 = *(unsigned int *)(v9 + 52);
    v14 = (unsigned __int64)*(unsigned __int16 *)(v9 + 20) >> 4;
    v25[0] = v9 + *(unsigned __int16 *)(v9 + 22);
    v25[1] = v14;
    v25[2] = v14;
    v15 = (v11 >> 5) & 1;
    if ( *(_WORD *)(v9 + 18) )
      v16 = v9 + *(unsigned __int16 *)(v9 + 18);
    else
      v16 = 0;
    LOBYTE(v24) = 1;
    v17 = dyld4::Loader::mapSegments(a2, this, v12, v13, v9 + 56, 1, v25, v15, v24, v16);
    result = Diagnostics::hasError(a2);
    if ( (result & 1) != 0 )
      return result;
    result = dyld4::PrebuiltLoader::setLoadAddress(v9, this, v17);
    *(_BYTE *)(v5 + v6) = 3;
    goto LABEL_22;
  }
  if ( *(unsigned __int8 *)(v5 + v6) <= 2u )
    *(_BYTE *)(v5 + v6) = 3;
  result = dyld4::PrebuiltLoader::setLoadAddress(v9, this, *(_QWORD *)(*((_QWORD *)this + 1) + 8LL));
LABEL_31:
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 484LL) )
    return dyld4::RuntimeState::add(this, (const dyld4::Loader *)v9);
  v20 = *((_QWORD *)this + 6);
  if ( !v20 )
    return dyld4::RuntimeState::add(this, (const dyld4::Loader *)v9);
  v21 = *((_QWORD **)this + 5);
  v22 = 8 * v20;
  v23 = v21;
  while ( v9 != *v23 )
  {
    ++v23;
    ++v21;
    v22 -= 8;
    if ( !v22 )
      return dyld4::RuntimeState::add(this, (const dyld4::Loader *)v9);
  }
  return result;
}
