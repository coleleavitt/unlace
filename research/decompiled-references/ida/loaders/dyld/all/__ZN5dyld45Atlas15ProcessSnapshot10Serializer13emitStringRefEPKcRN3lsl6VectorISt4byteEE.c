unsigned __int64 __fastcall dyld4::Atlas::ProcessSnapshot::Serializer::emitStringRef(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // x0
  __int64 v6; // x1
  _DWORD *v7; // x1
  __int64 v9; // [xsp+8h] [xbp-38h] BYREF
  _BYTE v10[8]; // [xsp+10h] [xbp-30h] BYREF
  _BYTE v11[16]; // [xsp+18h] [xbp-28h] BYREF

  v9 = a2;
  v5 = *(_QWORD *)(a1 + 88);
  v6 = v5 + 8LL * *(_QWORD *)(a1 + 96);
  v10[0] = 0;
  v7 = (_DWORD *)std::__lower_bound_impl[abi:v15006]<std::_ClassicAlgPolicy,char const**,char const**,char const*,std::__identity,lsl::ConstCharStarCompare>(
                   v5,
                   v6,
                   &v9,
                   v11,
                   v10);
  if ( v7 == (_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(_QWORD *)(a1 + 96)) )
  {
    v11[8] = 0;
    v7 = (_DWORD *)std::__lower_bound_impl[abi:v15006]<std::_ClassicAlgPolicy,char const**,char const**,char [4],std::__identity,lsl::ConstCharStarCompare>();
  }
  return lsl::emitPVLEUInt64((unsigned int)(*v7 - *(_DWORD *)(a1 + 120)), a3);
}
