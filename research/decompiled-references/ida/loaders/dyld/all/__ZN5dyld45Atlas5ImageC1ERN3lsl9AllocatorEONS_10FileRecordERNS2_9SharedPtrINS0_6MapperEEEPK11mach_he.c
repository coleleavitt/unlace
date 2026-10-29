__int64 __fastcall dyld4::Atlas::Image::Image(__int64 a1, __int64 a2, dyld4::FileRecord *a3, __int64 a4, __int64 a5)
{
  *(_QWORD *)a1 = a2;
  dyld4::FileRecord::FileRecord(a1 + 8, a3);
  lsl::SharedPtr<dyld4::Atlas::Mapper>::SharedPtr(a1 + 88, a4);
  *(_BYTE *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 96) = 0u;
  *(_OWORD *)(a1 + 112) = 0u;
  *(_OWORD *)(a1 + 121) = 0u;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 160) = a5;
  *(_DWORD *)(a1 + 183) = 0;
  return a1;
}
