__int64 __fastcall lsl::CRC32cSW::checksum(lsl::CRC32cSW *this, __int64 a2, int a3)
{
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = a3;
  return (*(__int64 (__fastcall **)(lsl::CRC32cSW *, __int64, int *, __int64))(*(_QWORD *)this + 32LL))(
           this,
           a2,
           &v4,
           4);
}
