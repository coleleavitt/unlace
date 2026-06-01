__int64 __fastcall dyld4::PrebuiltObjC::generatePerImageFixups(
        dyld4::PrebuiltObjC *this,
        dyld4::RuntimeState *a2,
        unsigned int a3)
{
  __int64 v3; // x9
  unsigned __int16 v4; // w21
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x10
  int v8; // w11
  unsigned int v9; // w11
  __int64 *v10; // x20
  int v11; // w19
  __int64 result; // x0
  int v13; // w8
  __int64 v14; // x8
  __int64 v15; // x22
  __int64 v16; // x23
  dyld4::RuntimeState *v17; // x1
  unsigned int v18; // w2
  unsigned __int64 v19; // x25
  __int64 v20; // x26
  _OWORD *v21; // x8
  __int128 v22; // q0
  __int128 v23; // q1
  __int128 v24; // q2
  __int64 v25; // x1
  __int64 *v26; // x21
  __int64 v27; // x27
  char *v28; // x28
  _QWORD *v29; // x19
  char v30; // t1
  __int64 v31; // x8
  __int64 v32; // x9
  __int64 *v33; // x21
  __int64 v34; // x8
  __int64 *v35; // x27
  _QWORD *v36; // x25
  __int64 v37; // x19
  __int64 v38; // x8
  __int64 v39; // x9
  __int64 v40; // t1

  v3 = *((_QWORD *)a2 + 6);
  if ( v3 )
  {
    v4 = 0;
    v5 = *((_QWORD *)a2 + 5);
    v6 = 8 * v3;
    v7 = v5;
    do
    {
      if ( (*(_WORD *)(*(_QWORD *)v7 + 4LL) & 1) == 0 )
      {
        v8 = *(__int16 *)(*(_QWORD *)v7 + 6LL);
        if ( (v8 & 0x80000000) == 0 )
          dyld4::PrebuiltObjC::generatePerImageFixups(this, a2, a3);
        v9 = v8 & 0x7FFF;
        if ( v4 <= v9 )
          v4 = v9;
      }
      v7 += 8;
      v5 += 8;
      v6 -= 8;
    }
    while ( v6 );
  }
  else
  {
    v4 = 0;
  }
  v10 = (__int64 *)((char *)this + 632);
  if ( *((_QWORD *)this + 80) < (unsigned __int64)(unsigned __int16)(v4 + 1) )
    dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCImageFixups,4294967295ul>::growTo(
      (char *)this + 632,
      (unsigned __int16)(v4 + 1));
  v11 = 0;
  do
  {
    result = dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCImageFixups,4294967295ul>::default_constuct_back(v10);
    v13 = (unsigned __int16)v11++;
  }
  while ( v13 != v4 );
  v14 = *((_QWORD *)this + 2);
  if ( v14 )
  {
    v15 = *(_QWORD *)this;
    v16 = *(_QWORD *)this + 568 * v14;
    do
    {
      result = Diagnostics::hasError((Diagnostics *)(v15 + 32));
      if ( (result & 1) == 0 )
      {
        v19 = *(_WORD *)(*(_QWORD *)v15 + 6LL) & 0x7FFF;
        if ( *((_QWORD *)this + 81) <= v19 )
          dyld4::PrebuiltObjC::generatePerImageFixups((dyld4::PrebuiltObjC *)result, v17, v18);
        v20 = *v10;
        v21 = (_OWORD *)(*v10 + 160 * v19);
        *v21 = *(_OWORD *)(v15 + 488);
        v22 = *(_OWORD *)(v15 + 504);
        v23 = *(_OWORD *)(v15 + 520);
        v24 = *(_OWORD *)(v15 + 536);
        *(_OWORD *)((char *)v21 + 60) = *(_OWORD *)(v15 + 548);
        v21[2] = v23;
        v21[3] = v24;
        v21[1] = v22;
        v25 = *(_QWORD *)(v15 + 136);
        if ( v25 )
        {
          v26 = (__int64 *)(v20 + 160 * v19 + 80);
          result = dyld3::OverflowSafeArray<unsigned char,4294967295ul>::reserve(v26, v25);
          v27 = *(_QWORD *)(v15 + 136);
          if ( v27 )
          {
            v28 = *(char **)(v15 + 120);
            v29 = (_QWORD *)(v20 + 160 * v19 + 96);
            do
            {
              v30 = *v28++;
              result = dyld3::OverflowSafeArray<unsigned char,4294967295ul>::verifySpace(v26, 1);
              v31 = *v26;
              v32 = (*v29)++;
              *(_BYTE *)(v31 + v32) = v30;
              --v27;
            }
            while ( v27 );
          }
        }
        if ( *(_QWORD *)(v15 + 368) )
        {
          v33 = (__int64 *)(v20 + 160 * v19 + 120);
          result = dyld3::OverflowSafeArray<dyld4::PrebuiltLoader::BindTargetRef,4294967295ul>::reserve(v33);
          v34 = *(_QWORD *)(v15 + 368);
          if ( v34 )
          {
            v35 = *(__int64 **)(v15 + 352);
            v36 = (_QWORD *)(v20 + 160 * v19 + 136);
            v37 = 8 * v34;
            do
            {
              result = (__int64)dyld3::OverflowSafeArray<dyld4::PrebuiltLoader::BindTargetRef,4294967295ul>::verifySpace(
                                  v33,
                                  1);
              v38 = *v33;
              v39 = (*v36)++;
              v40 = *v35++;
              *(_QWORD *)(v38 + 8 * v39) = v40;
              v37 -= 8;
            }
            while ( v37 );
          }
        }
      }
      v15 += 568;
    }
    while ( v15 != v16 );
  }
  return result;
}
