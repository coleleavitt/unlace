__int64 __fastcall sub_8886F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  return format_timestamp(a2, a3, (int)(100000 * (10 * a4 % 0xAuLL)) | ((10 * a4 / 0xAuLL) << 32), a5);
}

