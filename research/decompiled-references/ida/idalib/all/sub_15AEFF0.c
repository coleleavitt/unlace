__int64 __fastcall sub_15AEFF0(unsigned int *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 result; // rax
  int v5; // r11d

  v3 = *a1;
  result = 0;
  v5 = *a1 & 0x7F000;
  if ( v5 != 282624 )
  {
    if ( v5 )
    {
      return ((__int64 (*)(void))((char *)dword_261C618 + dword_261C618[(v3 >> 12) & 0x7F]))();
    }
    else
    {
      *((_QWORD *)a1 + 1) = a3;
      a1[48] = a2;
      a1[52] = a2;
      *a1 = v3 & 0xFFB80FFF | 0x9000;
    }
  }
  return result;
}
