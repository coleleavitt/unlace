_QWORD *__fastcall lsl::Vector<dyld4::Atlas::Mapper::Mapping>::Vector(_QWORD *a1, __int64 a2, __int64 a3)
{
  void **v5; // x21
  __int64 v6; // x8

  *a1 = a3;
  a1[1] = 0;
  v5 = (void **)(a1 + 1);
  a1[2] = 0;
  a1[3] = 0;
  lsl::Vector<dyld4::Atlas::Mapper::Mapping>::reserve((__int64)a1, *(_QWORD *)(a2 + 16));
  a1[2] = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
    _platform_memmove(*v5, *(const void **)(a2 + 8), 32 * v6);
  return a1;
}
