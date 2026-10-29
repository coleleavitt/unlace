__int64 __fastcall sub_1059F10(__int64 a1, _BYTE **a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 0;
  if ( (unsigned __int8)(**a2 - 97) <= 0x19u && ((1LL << (**a2 - 97)) & 0x3600887) != 0 )
  {
    *a3 |= 2u;
    return 1;
  }
  return result;
}

