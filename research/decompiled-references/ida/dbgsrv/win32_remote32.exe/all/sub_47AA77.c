/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47AA77
// Address: 0x0047AA77

//----- (0047AA77) --------------------------------------------------------
bool __usercall sub_47AA77@<al>(int a1@<ebx>, int a2@<edi>, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // ebx
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v13; // esi
  int wDayOfWeek; // [esp+8h] [ebp-1Ch]
  int wDay; // [esp+Ch] [ebp-18h]
  int v16; // [esp+20h] [ebp-4h] BYREF

  v3 = 0;
  v16 = 0;
  if ( sub_47A9F3(a1, a2, &v16) )
  {
    sub_467F04(a1, a2);
    __debugbreak();
  }
  if ( !v16 )
    return 0;
  v4 = a3;
  v5 = a3[5];
  if ( v5 != dword_4B62C0 || v5 != dword_4B62CC )
  {
    if ( dword_4B7EC0 )
    {
      if ( TimeZoneInformation.DaylightDate.wYear )
      {
        v7 = 0;
        v6 = 0;
        wDayOfWeek = 0;
        wDay = TimeZoneInformation.DaylightDate.wDay;
      }
      else
      {
        v6 = TimeZoneInformation.DaylightDate.wDay;
        v7 = 1;
        wDayOfWeek = TimeZoneInformation.DaylightDate.wDayOfWeek;
        wDay = 0;
      }
      sub_47AC91(
        0,
        v7,
        v5,
        TimeZoneInformation.DaylightDate.wMonth,
        v6,
        wDayOfWeek,
        wDay,
        TimeZoneInformation.DaylightDate.wHour,
        TimeZoneInformation.DaylightDate.wMinute,
        TimeZoneInformation.DaylightDate.wSecond,
        TimeZoneInformation.DaylightDate.wMilliseconds);
      v4 = a3;
      if ( TimeZoneInformation.StandardDate.wYear )
      {
        v10 = 0;
        v8 = 0;
        v9 = 0;
        v3 = TimeZoneInformation.StandardDate.wDay;
      }
      else
      {
        v8 = TimeZoneInformation.StandardDate.wDay;
        v9 = TimeZoneInformation.StandardDate.wDayOfWeek;
        v10 = 1;
      }
      sub_47AC91(
        1,
        v10,
        a3[5],
        TimeZoneInformation.StandardDate.wMonth,
        v8,
        v9,
        v3,
        TimeZoneInformation.StandardDate.wHour,
        TimeZoneInformation.StandardDate.wMinute,
        TimeZoneInformation.StandardDate.wSecond,
        TimeZoneInformation.StandardDate.wMilliseconds);
    }
    else
    {
      sub_47AC91(0, 1, v5, (v5 < 107) + 3, (v5 >= 107) + 1, 0, 0, 2, 0, 0, 0);
      sub_47AC91(1, 1, a3[5], (v5 >= 107) + 10, 4 * (v5 < 107) + 1, 0, 0, 2, 0, 0, 0);
    }
  }
  v11 = v4[7];
  if ( dword_4B62C4 >= dword_4B62D0 )
  {
    if ( v11 < dword_4B62D0 || v11 > dword_4B62C4 )
      return 1;
    if ( v11 <= dword_4B62D0 || v11 >= dword_4B62C4 )
      goto LABEL_24;
    return 0;
  }
  if ( v11 < dword_4B62C4 || v11 > dword_4B62D0 )
    return 0;
  if ( v11 > dword_4B62C4 && v11 < dword_4B62D0 )
    return 1;
LABEL_24:
  v13 = 1000 * (*v4 + 60 * (v4[1] + 60 * v4[2]));
  if ( v11 == dword_4B62C4 )
    return v13 >= dword_4B62C8;
  else
    return v13 < dword_4B62D4;
}
// 4B62C0: using guessed type int dword_4B62C0;
// 4B62C4: using guessed type int dword_4B62C4;
// 4B62C8: using guessed type int dword_4B62C8;
// 4B62CC: using guessed type int dword_4B62CC;
// 4B62D0: using guessed type int dword_4B62D0;
// 4B62D4: using guessed type int dword_4B62D4;
// 4B7EC0: using guessed type int dword_4B7EC0;
