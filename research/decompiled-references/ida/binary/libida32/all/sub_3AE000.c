__int64 __fastcall sub_3AE000(__int64 a1, int a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)qword_2C57988 + 56LL))(qword_2C57988)
    && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)qword_2C57988 + 72LL))(qword_2C57988)
    && (*(_BYTE *)(a1 + 64) & 8) != 0
    && (*(_DWORD *)(a1 + 68) & 0x18) != 8 )
  {
    callui(1087, a2, (int)&callui, v2, v3, v4);
  }
  return 1;
}

