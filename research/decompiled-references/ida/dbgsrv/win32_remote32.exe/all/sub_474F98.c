/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474F98
// Address: 0x00474F98

//----- (00474F98) --------------------------------------------------------
int __cdecl sub_474F98(FILETIME *lpFileTime)
{
  struct _SYSTEMTIME SystemTime; // [esp+0h] [ebp-24h] BYREF
  struct _SYSTEMTIME LocalTime; // [esp+10h] [ebp-14h] BYREF

  if ( (lpFileTime->dwLowDateTime || lpFileTime->dwHighDateTime)
    && FileTimeToSystemTime(lpFileTime, &SystemTime)
    && SystemTimeToTzSpecificLocalTime(nullptr, &SystemTime, &LocalTime) )
  {
    return sub_47C23F(
             LocalTime.wYear,
             LocalTime.wMonth,
             LocalTime.wDay,
             LocalTime.wHour,
             LocalTime.wMinute,
             LocalTime.wSecond,
             -1);
  }
  else
  {
    return -1;
  }
}
