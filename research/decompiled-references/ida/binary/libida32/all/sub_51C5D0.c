__int64 __fastcall sub_51C5D0(__int64 *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  result = *a1;
  if ( (*a1 & 0x1000) != 0 )
  {
    v2 = a1[3] & 0xFFFFFFFD;
    *((_DWORD *)a1 + 6) = v2;
    if ( v2 == 1 && !*((_DWORD *)a1 + 7) && *((_DWORD *)a1 + 8) == -1 )
    {
      BYTE1(result) &= ~0x10u;
      *a1 = result;
    }
    else
    {
      BYTE1(result) |= 0x10u;
      *a1 = result;
    }
  }
  return result;
}

