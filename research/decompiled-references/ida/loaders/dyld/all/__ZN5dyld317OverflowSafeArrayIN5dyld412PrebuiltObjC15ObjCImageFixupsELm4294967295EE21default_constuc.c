double __fastcall dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCImageFixups,4294967295ul>::default_constuct_back(
        __int64 *a1)
{
  __int64 v2; // x8
  __int64 v3; // x1
  __int64 v4; // x9
  _OWORD *v5; // x8

  v2 = a1[2];
  v3 = v2 + 1;
  if ( v2 + 1 > (unsigned __int64)a1[1] )
  {
    dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCImageFixups,4294967295ul>::growTo(a1, v3);
    v2 = a1[2];
    v3 = v2 + 1;
  }
  v4 = *a1;
  a1[2] = v3;
  v5 = (_OWORD *)(v4 + 160 * v2);
  v5[8] = 0u;
  v5[9] = 0u;
  v5[6] = 0u;
  v5[7] = 0u;
  v5[4] = 0u;
  v5[5] = 0u;
  v5[2] = 0u;
  v5[3] = 0u;
  *v5 = 0u;
  v5[1] = 0u;
  return 0.0;
}
