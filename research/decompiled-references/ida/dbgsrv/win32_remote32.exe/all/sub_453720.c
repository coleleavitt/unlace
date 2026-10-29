/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453720
// Address: 0x00453720

//----- (00453720) --------------------------------------------------------
int sub_453720()
{
  unsigned __int64 v0; // kr08_8
  unsigned __int64 v1; // kr10_8
  unsigned int v2; // esi
  struct _FILETIME SystemTimeAsFileTime; // [esp+18h] [ebp-10h] BYREF

  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v0 = (unsigned int)(__CFADD__(
                        ((3435973837u * (unsigned __int64)SystemTimeAsFileTime.dwLowDateTime) >> 32)
                      - 858993459 * SystemTimeAsFileTime.dwHighDateTime,
                        -858993460 * SystemTimeAsFileTime.dwLowDateTime)
                    + ((3435973836u * (unsigned __int64)SystemTimeAsFileTime.dwLowDateTime) >> 32))
     + ((((3435973837u * (unsigned __int64)SystemTimeAsFileTime.dwLowDateTime) >> 32)
       + 3435973837LL * SystemTimeAsFileTime.dwHighDateTime) >> 32);
  v1 = ((v0 + 3435973836LL * SystemTimeAsFileTime.dwHighDateTime) >> 3) + 3078209536u;
  v2 = (3619042523u
      * (unsigned __int64)((unsigned int)((v0 + 3435973836LL * SystemTimeAsFileTime.dwHighDateTime) >> 3) - 1216757760)) >> 32;
  return v1
       - 1000000
       * ((((1125899906LL * (unsigned int)v1 + (unsigned __int64)(v2 - 675924773 * (HIDWORD(v1) - 2711191))) >> 32)
         + ((v2 + 3619042523u * (unsigned __int64)(unsigned int)(HIDWORD(v1) - 2711191)) >> 32)
         + 1125899906LL * (unsigned int)(HIDWORD(v1) - 2711191)) >> 18);
}
