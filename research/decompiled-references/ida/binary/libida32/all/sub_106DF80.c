__int64 __fastcall sub_106DF80(__int64 a1, _BYTE **a2, _DWORD *a3)
{
  __int64 result; // rax

  result = 0;
  if ( (unsigned __int8)(**a2 - 99) <= 0xFu && ((1LL << (**a2 - 99)) & 0xC22B) != 0 )
  {
    *a3 |= 2u;
    return 1;
  }
  return result;
}

