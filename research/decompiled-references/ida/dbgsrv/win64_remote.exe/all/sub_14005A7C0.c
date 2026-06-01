/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A7C0
// Address: 0x000000014005A7C0

//----- (000000014005A7C0) ----------------------------------------------------
unsigned __int64 sub_14005A7C0()
{
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  return ((unsigned __int64)(unsigned int)((*(unsigned __int64 *)&SystemTimeAsFileTime / 0xA - 11644473600000000LL)
                                         / 0xF4240) << 32)
       | ((*(unsigned __int64 *)&SystemTimeAsFileTime / 0xA - 11644473600000000LL) % 0xF4240);
}
