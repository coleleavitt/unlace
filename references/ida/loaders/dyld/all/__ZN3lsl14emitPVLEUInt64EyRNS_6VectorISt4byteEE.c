unsigned __int64 __fastcall lsl::emitPVLEUInt64(unsigned __int64 result, __int64 a2)
{
  int v3; // w8
  unsigned int v4; // w8
  __int64 v5; // x20
  __int64 v6; // x8
  __int64 v7; // x9
  char v8; // w8
  __int64 v9; // x9
  __int64 v10; // x10
  unsigned __int64 v11; // x8
  unsigned int v12; // kr00_4
  unsigned int v13; // kr08_4
  __int64 v14; // x20
  unsigned __int64 *v15; // x21
  char v16; // t1
  __int64 v17; // x9
  __int64 v18; // x10
  unsigned __int64 v19; // [xsp+8h] [xbp-28h] BYREF

  v19 = result;
  v3 = __clz(result);
  if ( v3 == 64 )
    v4 = 1;
  else
    v4 = 64 - v3;
  if ( v4 < 0x39 )
  {
    v12 = v4 + 6;
    v13 = v4 + 6;
    v11 = (unsigned int)(((613566757 * (unsigned __int64)(v4 + 6)) >> 32)
                       + ((unsigned int)(v4 + 6 - ((613566757 * (unsigned __int64)(v4 + 6)) >> 32)) >> 1));
    v19 = (result << (v12 / 7)) | (unsigned int)(1 << (v12 / 7 - 1));
    if ( (unsigned __int8)(v13 / 7) )
    {
      v14 = (unsigned __int8)(v11 >> 2);
      v15 = &v19;
      do
      {
        result = lsl::Vector<std::byte>::reserve(a2, *(_QWORD *)(a2 + 16) + 1LL);
        v16 = *(_BYTE *)v15;
        v15 = (unsigned __int64 *)((char *)v15 + 1);
        v17 = *(_QWORD *)(a2 + 8);
        v18 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(a2 + 16) = v18 + 1;
        *(_BYTE *)(v17 + v18) = v16;
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    lsl::Vector<std::byte>::reserve(a2, *(_QWORD *)(a2 + 16) + 1LL);
    v5 = 0;
    v6 = *(_QWORD *)(a2 + 8);
    v7 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = v7 + 1;
    *(_BYTE *)(v6 + v7) = 0;
    do
    {
      result = lsl::Vector<std::byte>::reserve(a2, *(_QWORD *)(a2 + 16) + 1LL);
      v8 = *((_BYTE *)&v19 + v5);
      v9 = *(_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v10 + 1;
      *(_BYTE *)(v9 + v10) = v8;
      ++v5;
    }
    while ( v5 != 8 );
  }
  return result;
}
