__int64 __fastcall ignition_write_BRA_blob(const char ***a1, __int64 a2, const char *a3, __int64 a4)
{
  __int64 result; // x0
  int *v8; // x0
  _OWORD v9[9]; // [xsp+10h] [xbp-C0h] BYREF
  __int128 v10; // [xsp+A0h] [xbp-30h]

  v10 = 0u;
  memset(v9, 0, sizeof(v9));
  HIBYTE(v10) = -86;
  strlcpy((char *)v9 + 2, **a1, 0x18u);
  strlcpy((char *)&v9[1] + 10, *a1[1], 0x18u);
  *(_QWORD *)((char *)&v9[3] + 2) = a4;
  strlcpy((char *)&v9[3] + 10, "AAAAAAAA-BBBB-CCCC-DDDD-EEEEEEEEEEEE", 0x25u);
  strlcpy((char *)&v9[5] + 15, a3, 0x40u);
  result = sysctlbyname("security.mac.img4.ignition_failure_blob", nullptr, nullptr, v9, 0xA0u);
  if ( (_DWORD)result )
  {
    v8 = __error();
    return _simple_dprintf(2, "failed to write BRA failure blob: %d\n", *v8);
  }
  return result;
}
