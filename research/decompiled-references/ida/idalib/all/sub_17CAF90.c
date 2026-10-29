__int64 __fastcall sub_17CAF90(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        double a4,
        __int64 a5,
        unsigned __int64 a6)
{
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
    return 1;
  else
    return sub_17CABB0(a1, a2, a3, a4, a5, a6);
}
