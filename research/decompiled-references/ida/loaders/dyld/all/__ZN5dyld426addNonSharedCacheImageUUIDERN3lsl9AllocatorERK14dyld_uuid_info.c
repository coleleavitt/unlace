__n128 __fastcall dyld4::addNonSharedCacheImageUUID(dyld4 *this, lsl::Allocator *a2, const dyld_uuid_info *a3)
{
  _QWORD *v4; // x20
  __int64 v6; // x8
  __int64 v7; // x9
  __n128 *v8; // x8
  __n128 result; // q0
  _QWORD *v10; // x9
  __int64 v11; // x8

  *((_QWORD *)gProcessInfo + 12) = 0;
  v4 = (_QWORD *)dyld4::sImageUUIDs;
  if ( !dyld4::sImageUUIDs )
  {
    v4 = (_QWORD *)lsl::Allocator::malloc(this, 0x20u);
    *v4 = this;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    dyld4::sImageUUIDs = (__int64)v4;
  }
  lsl::Vector<dyld_uuid_info>::reserve(v4, v4[2] + 1LL, a3);
  v6 = v4[1];
  v7 = v4[2];
  v4[2] = v7 + 1;
  v8 = (__n128 *)(v6 + 24 * v7);
  result = *(__n128 *)a2;
  v8[1].n128_u64[0] = *((_QWORD *)a2 + 2);
  *v8 = result;
  v10 = gProcessInfo;
  v11 = *(_QWORD *)(dyld4::sImageUUIDs + 8);
  *((_QWORD *)gProcessInfo + 11) = *(_QWORD *)(dyld4::sImageUUIDs + 16);
  v10[12] = v11;
  return result;
}
