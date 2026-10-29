__int64 __fastcall sub_3B2700(__int64 a1, int a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)qword_2C819A8 + 56LL))(qword_2C819A8)
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)qword_2C819A8 + 72LL))(qword_2C819A8)
    && (*(_BYTE *)(a1 + 72) & 8) != 0
    && (*(_DWORD *)(a1 + 76) & 0x18) != 8 )
  {
    callui(1087, a2, (int)&callui, v2, v3, v4);
  }
  return 1;
}
