unsigned __int64 __fastcall dyld4::Atlas::Bitmap::emit(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 result; // x0
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x21
  char *v7; // x20
  char v8; // t1
  __int64 v9; // x9
  __int64 v10; // x10

  result = lsl::emitPVLEUInt64(*a1, a2);
  v5 = *a1 + 7;
  if ( v5 >= 8 )
  {
    v6 = v5 >> 3;
    v7 = (char *)a1[1];
    do
    {
      result = lsl::Vector<std::byte>::reserve(a2, *(_QWORD *)(a2 + 16) + 1LL);
      v8 = *v7++;
      v9 = *(_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v10 + 1;
      *(_BYTE *)(v9 + v10) = v8;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
