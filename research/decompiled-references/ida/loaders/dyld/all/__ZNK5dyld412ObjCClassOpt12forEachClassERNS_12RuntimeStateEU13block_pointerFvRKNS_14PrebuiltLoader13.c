unsigned __int64 __fastcall dyld4::ObjCClassOpt::forEachClass(unsigned int *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // x0
  unsigned __int64 v5; // x23
  unsigned __int64 v6; // x21
  unsigned __int64 v7; // x24
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x10
  __int64 v11; // x26
  __int64 v12; // x27
  __int64 v13; // x8
  char *v14; // x28
  char *v15; // x25
  char *v16; // x22
  int v17; // w8
  unsigned __int64 v18; // x0
  char *v19; // x20
  __int64 v20; // x25
  __int64 v21; // x27
  unsigned __int64 v22; // x26
  unsigned __int64 v23; // x0
  __int64 *v24; // x8
  int64x2_t v25; // [xsp+0h] [xbp-A0h]
  unsigned __int64 v26; // [xsp+18h] [xbp-88h]
  __int64 v28; // [xsp+28h] [xbp-78h] BYREF
  __int64 *v29; // [xsp+30h] [xbp-70h] BYREF
  int64x2_t v30; // [xsp+38h] [xbp-68h]
  __int64 v31; // [xsp+48h] [xbp-58h] BYREF

  result = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(nullptr, a2);
  v5 = *a1;
  if ( (_DWORD)v5 )
  {
    v6 = result;
    v7 = 0;
    v8 = a1[4];
    v9 = a1[5];
    v10 = (__int64)&a1[2 * (unsigned int)v5 + 2 * (unsigned int)v5] + v8 + v9;
    v26 = *(_QWORD *)(v10 + 1056);
    v11 = v10 + 1064;
    v12 = a3 + 16;
    v13 = v8 + v9;
    v14 = (char *)a1 + v13 + 1056;
    v15 = (char *)&a1[2 * v5 + 264] + v13;
    v25 = vdupq_n_s64(1u);
    v16 = v14;
    v17 = *a1;
    do
    {
      if ( v5 == v7 )
        dyld4::ObjCClassOpt::forEachClass();
      if ( *(_QWORD *)&v14[8 * v7] != v6 )
      {
        if ( v7 >= v5 )
          dyld4::ObjCClassOpt::forEachClass();
        v31 = *(_QWORD *)&v15[8 * v7];
        if ( v31 < 0 )
        {
          v18 = dyld4::PrebuiltLoader::BindTargetRef::absValue((dyld4::PrebuiltLoader::BindTargetRef *)&v31);
          if ( v26 <= v18 )
            dyld4::ObjCClassOpt::forEachClass();
          v28 = *(_QWORD *)(v11 + 8 * v18);
          if ( (v28 & 0x8000000000000000LL) == 0 )
            dyld4::ObjCClassOpt::forEachClass();
          v19 = v15;
          v20 = v12;
          v21 = v11;
          v22 = v18 + 1;
          v23 = dyld4::PrebuiltLoader::BindTargetRef::absValue((dyld4::PrebuiltLoader::BindTargetRef *)&v28);
          if ( v23 + v22 > v26 )
            dyld4::ObjCClassOpt::forEachClass();
          v24 = (__int64 *)(v21 + 8 * v22);
          v11 = v21;
          v29 = v24;
          v30.i64[0] = v23;
          v30.i64[1] = v23;
          v12 = v20;
          result = (*(__int64 (__fastcall **)(__int64, char *, __int64 **))(a3 + 16))(a3, v16, &v29);
          v15 = v19;
        }
        else
        {
          v29 = &v31;
          v30 = v25;
          result = (*(__int64 (__fastcall **)(__int64, char *, __int64 **))(a3 + 16))(a3, v16, &v29);
        }
        v17 = *a1;
      }
      ++v7;
      v16 += 8;
    }
    while ( (_DWORD)v7 != v17 );
  }
  return result;
}
