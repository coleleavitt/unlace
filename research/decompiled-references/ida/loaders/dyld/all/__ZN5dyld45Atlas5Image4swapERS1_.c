void __fastcall dyld4::Atlas::Image::swap(__int64 a1, __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  char v9; // w8
  char v10; // w8
  char v11; // w8

  if ( a1 != a2 )
  {
    v4 = *(_OWORD *)(a1 + 96);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a2 + 96) = v4;
    dyld4::Atlas::Mapper::Pointer<dyld3::MachOLoaded>::swap(a1 + 112, a2 + 112);
    std::optional<unsigned long long>::swap[abi:v15006](a1 + 144, a2 + 144);
    v5 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
    *(_QWORD *)(a2 + 160) = v5;
    v6 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
    *(_QWORD *)(a2 + 88) = v6;
    v7 = *(_QWORD *)(a1 + 168);
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
    *(_QWORD *)(a2 + 168) = v7;
    v8 = *(_QWORD *)(a1 + 176);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
    *(_QWORD *)(a2 + 176) = v8;
    dyld4::FileRecord::swap((dyld4::FileRecord *)(a1 + 8), (dyld4::FileRecord *)(a2 + 8));
    v9 = *(_BYTE *)(a1 + 184);
    *(_BYTE *)(a1 + 184) = *(_BYTE *)(a2 + 184);
    *(_BYTE *)(a2 + 184) = v9;
    v10 = *(_BYTE *)(a1 + 185);
    *(_BYTE *)(a1 + 185) = *(_BYTE *)(a2 + 185);
    *(_BYTE *)(a2 + 185) = v10;
    v11 = *(_BYTE *)(a1 + 186);
    *(_BYTE *)(a1 + 186) = *(_BYTE *)(a2 + 186);
    *(_BYTE *)(a2 + 186) = v11;
  }
}
