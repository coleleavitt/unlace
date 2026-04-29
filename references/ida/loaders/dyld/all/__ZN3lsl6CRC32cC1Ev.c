__int64 __fastcall lsl::CRC32c::CRC32c(__int64 this)
{
  *(_QWORD *)this = &lsl::sCRC32cSW;
  *(_DWORD *)(this + 8) = -1;
  return this;
}
