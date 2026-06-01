bool __fastcall SwiftHashTable::equal<SwiftForeignTypeProtocolConformanceLookupKey,SwiftForeignTypeProtocolConformanceLocationKey>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  const std::string_view::value_type *v6; // x9
  __int64 v7; // x8
  std::string_view v9; // [xsp+0h] [xbp-10h] BYREF
  std::string_view v10; // 0:x1.16

  if ( a2[1] == *(_QWORD *)(a3 + 16)
    && (v10.__size = HIWORD(*a2),
        v6 = (const std::string_view::value_type *)(a4 + (*a2 & 0xFFFFFFFFFFFFLL)),
        v10.__data = *(const std::string_view::value_type **)a3,
        v7 = *(_QWORD *)(a3 + 8),
        v9.__data = v6,
        v9.__size = v10.__size,
        v10.__size == v7) )
  {
    return std::string_view::compare(&v9, v10) == 0;
  }
  else
  {
    return 0;
  }
}
