/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000752A0
// Address: 0x00000001000752A0

//----- (00000001000752A0) ----------------------------------------------------
__int64 sub_1000752A0()
{
  __int64 result; // x0
  size_t v1; // [xsp+8h] [xbp-2B8h] BYREF
  _BYTE v2[32]; // [xsp+10h] [xbp-2B0h] BYREF
  int v3; // [xsp+30h] [xbp-290h]
  int v4[2]; // [xsp+298h] [xbp-28h] BYREF
  int v5; // [xsp+2A0h] [xbp-20h]
  pid_t v6; // [xsp+2A4h] [xbp-1Ch]

  v3 = 0;
  *(_QWORD *)v4 = 0xE00000001LL;
  v5 = 1;
  v6 = getpid();
  v1 = 648;
  result = sysctl(v4, 4u, v2, &v1, nullptr, 0);
  under_debugger = (v3 & 0x800) != 0;
  return result;
}
// 1000A590D: using guessed type char under_debugger;
