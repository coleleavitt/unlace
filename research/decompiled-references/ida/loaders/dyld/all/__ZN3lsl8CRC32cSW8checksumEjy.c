__int64 __fastcall lsl::CRC32cSW::checksum(lsl::CRC32cSW *this, __int64 a2, __int64 a3)
{
  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  v4 = a3;
  return (*(__int64 (__fastcall **)(lsl::CRC32cSW *, __int64, __int64 *, __int64))(*(_QWORD *)this + 32LL))(
           this,
           a2,
           &v4,
           8);
}
