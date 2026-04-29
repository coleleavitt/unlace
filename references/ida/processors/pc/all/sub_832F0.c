unsigned __int64 *__fastcall sub_832F0(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 *result; // rax
  int v3; // edx
  unsigned __int64 v4; // rdx

  result = *(unsigned __int64 **)(a1 + 8);
  v3 = *((_DWORD *)result + 2);
  if ( (v3 & 0x100) == 0 )
  {
    if ( (v3 & 1) != 0 || (~(_BYTE)v3 & 0x46) == 0 )
    {
      v4 = *result;
      *((_DWORD *)result + 2) = 1;
      *result = a2 | (unsigned __int64)((unsigned __int16)v4 & 0xFF00);
    }
    else
    {
      *((_DWORD *)result + 2) = 2130;
      *result = a2;
    }
  }
  return result;
}
